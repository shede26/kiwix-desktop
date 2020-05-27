
#include "static_content.h"
#include "kiwixapp.h"


std::vector<QLocale::Language> S_LANGUAGES;
std::vector<std::pair<QString, QString>> S_CATEGORIES;

void initStaticContent() {
#define PUSH(key) S_CATEGORIES.push_back(std::make_pair(QString::fromStdString(key), gt(key)))
  PUSH("all");
  PUSH("other");
//  PUSH("gutenberg"); // Gutenberg book has wrong tag
//  PUSH("phet"); // Phet books have no tags
  PUSH("psiram");
  PUSH("stack_exchange");
//  PUSH("ted");  // Ted books have wrong tags
  PUSH("vikidia");
//  PUSH("wikibooks"); // wikibooks have no tags
  PUSH("wikinews");
  PUSH("wikipedia");
  PUSH("wikiquote");
  PUSH("wikisource");
//  PUSH("wikispecies"); // Wikispecies books have wrong tags
  PUSH("wikiversity");
  PUSH("wikivoyage");
  PUSH("wiktionary");
#undef PUSH

#define PUSH(value) S_LANGUAGES.push_back(value)
  PUSH(QLocale::Afar);
  PUSH(QLocale::Afrikaans);
  PUSH(QLocale::Akan);
  PUSH(QLocale::Amharic);
  PUSH(QLocale::Arabic);
  PUSH(QLocale::Assamese);
  PUSH(QLocale::Azerbaijani);
  PUSH(QLocale::Bashkir);
  PUSH(QLocale::Belarusian);
  PUSH(QLocale::Bulgarian);
  PUSH(QLocale::Bambara);
  PUSH(QLocale::Bengali);
  PUSH(QLocale::Tibetan);
  PUSH(QLocale::Breton);
  PUSH(QLocale::Bosnian);
  PUSH(QLocale::Catalan);
  PUSH(QLocale::Chechen);
  PUSH(QLocale::Corsican);
  PUSH(QLocale::Czech);
  PUSH(QLocale::Church);
  PUSH(QLocale::Chuvash);
  PUSH(QLocale::Welsh);
  PUSH(QLocale::Danish);
  PUSH(QLocale::German);
  PUSH(QLocale::Divehi);
  PUSH(QLocale::Dzongkha);
  PUSH(QLocale::Ewe);
  PUSH(QLocale::Greek);
  PUSH(QLocale::English);
  PUSH(QLocale::Spanish);
  PUSH(QLocale::Estonian);
  PUSH(QLocale::Basque);
  PUSH(QLocale::Persian);
  PUSH(QLocale::Fulah);
  PUSH(QLocale::Finnish);
  PUSH(QLocale::Faroese);
  PUSH(QLocale::French);
  PUSH(QLocale::WesternFrisian);
  PUSH(QLocale::Irish);
  PUSH(QLocale::Gaelic);
  PUSH(QLocale::Galician);
  PUSH(QLocale::Guarani);
  PUSH(QLocale::Gujarati);
  PUSH(QLocale::Manx);
  PUSH(QLocale::Hausa);
  PUSH(QLocale::Hebrew);
  PUSH(QLocale::Hindi);
  PUSH(QLocale::Croatian);
  PUSH(QLocale::Hungarian);
  PUSH(QLocale::Armenian);
  PUSH(QLocale::Interlingua);
  PUSH(QLocale::Indonesian);
  PUSH(QLocale::Igbo);
  PUSH(QLocale::Icelandic);
  PUSH(QLocale::Italian);
  PUSH(QLocale::Inuktitut);
  PUSH(QLocale::Japanese);
  PUSH(QLocale::Javanese);
  PUSH(QLocale::Georgian);
  PUSH(QLocale::Kikuyu);
  PUSH(QLocale::Kazakh);
  PUSH(QLocale::Greenlandic);
  PUSH(QLocale::Khmer);
  PUSH(QLocale::Kannada);
  PUSH(QLocale::Korean);
  PUSH(QLocale::Kashmiri);
  PUSH(QLocale::Kurdish);
  PUSH(QLocale::Cornish);
  PUSH(QLocale::Kirghiz);
  PUSH(QLocale::Luxembourgish);
  PUSH(QLocale::Ganda);
  PUSH(QLocale::Lingala);
  PUSH(QLocale::Lao);
  PUSH(QLocale::Lithuanian);
  PUSH(QLocale::Latvian);
  PUSH(QLocale::Malagasy);
  PUSH(QLocale::Maori);
  PUSH(QLocale::Maori);
  PUSH(QLocale::Macedonian);
  PUSH(QLocale::Malayalam);
  PUSH(QLocale::Mongolian);
  PUSH(QLocale::Marathi);
  PUSH(QLocale::Malay);
  PUSH(QLocale::Maltese);
  PUSH(QLocale::Burmese);
  PUSH(QLocale::Nepali);
  PUSH(QLocale::Dutch);
  PUSH(QLocale::NorwegianNynorsk);
  PUSH(QLocale::NorwegianBokmal);
  PUSH(QLocale::Nyanja);
  PUSH(QLocale::Occitan);
  PUSH(QLocale::Oromo);
  PUSH(QLocale::Oriya);
  PUSH(QLocale::Ossetic);
  PUSH(QLocale::Punjabi);
  PUSH(QLocale::Polish);
  PUSH(QLocale::Pashto);
  PUSH(QLocale::Portuguese);
  PUSH(QLocale::Quechua);
  PUSH(QLocale::Romansh);
  PUSH(QLocale::Rundi);
  PUSH(QLocale::Romanian);
  PUSH(QLocale::Russian);
  PUSH(QLocale::Kinyarwanda);
  PUSH(QLocale::Sanskrit);
  PUSH(QLocale::Sindhi);
  PUSH(QLocale::NorthernSami);
  PUSH(QLocale::Sango);
  PUSH(QLocale::Sinhala);
  PUSH(QLocale::Slovak);
  PUSH(QLocale::Slovenian);
  PUSH(QLocale::Shona);
  PUSH(QLocale::Somali);
  PUSH(QLocale::Albanian);
  PUSH(QLocale::Serbian);
  PUSH(QLocale::Swati);
  PUSH(QLocale::SouthernSotho);
  PUSH(QLocale::Swedish);
  PUSH(QLocale::Swahili);
  PUSH(QLocale::Tamil);
  PUSH(QLocale::Telugu);
  PUSH(QLocale::Tajik);
  PUSH(QLocale::Thai);
  PUSH(QLocale::Tigrinya);
  PUSH(QLocale::Turkmen);
  PUSH(QLocale::Filipino);
  PUSH(QLocale::Tswana);
  PUSH(QLocale::Tongan);
  PUSH(QLocale::Turkish);
  PUSH(QLocale::Tsonga);
  PUSH(QLocale::Tatar);
  PUSH(QLocale::Uighur);
  PUSH(QLocale::Ukrainian);
  PUSH(QLocale::Urdu);
  PUSH(QLocale::Uzbek);
  PUSH(QLocale::Venda);
  PUSH(QLocale::Vietnamese);
  PUSH(QLocale::Walloon);
  PUSH(QLocale::Wolof);
  PUSH(QLocale::Xhosa);
  PUSH(QLocale::Yoruba);
  PUSH(QLocale::Chinese);
  PUSH(QLocale::Zulu);
#undef PUSH
}