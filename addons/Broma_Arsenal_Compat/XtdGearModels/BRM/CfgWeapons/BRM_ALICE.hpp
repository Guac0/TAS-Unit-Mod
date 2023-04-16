class BRM_ALICE
{
    options[] = { "camo", "camo2"}; // Always computed, do not edit
    label = "BRM_ALICE";
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "AR", "MG", "RFL", "SL" }; //BRM_MODELS\Vests\Data\IBA_ALICEG_co.paa
    }; 
    class camo2
    {
        label = "camo2";
        alwaysSelectable = 0;
        values[] = { "BRM_MODELS\Vests\Data\ALICE_Gear_co.paa" }; // Always computed, do not edit
    };
};
