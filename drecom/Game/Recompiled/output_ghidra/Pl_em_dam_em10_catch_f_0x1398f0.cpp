#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Pl_em_dam_em10_catch_f
// Address: 0x1398f0 - 0x139dec
void Pl_em_dam_em10_catch_f_0x1398f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_em_dam_em10_catch_f_0x1398f0");
#endif

    switch (ctx->pc) {
        case 0x1398f0u: goto label_1398f0;
        case 0x1398f4u: goto label_1398f4;
        case 0x1398f8u: goto label_1398f8;
        case 0x1398fcu: goto label_1398fc;
        case 0x139900u: goto label_139900;
        case 0x139904u: goto label_139904;
        case 0x139908u: goto label_139908;
        case 0x13990cu: goto label_13990c;
        case 0x139910u: goto label_139910;
        case 0x139914u: goto label_139914;
        case 0x139918u: goto label_139918;
        case 0x13991cu: goto label_13991c;
        case 0x139920u: goto label_139920;
        case 0x139924u: goto label_139924;
        case 0x139928u: goto label_139928;
        case 0x13992cu: goto label_13992c;
        case 0x139930u: goto label_139930;
        case 0x139934u: goto label_139934;
        case 0x139938u: goto label_139938;
        case 0x13993cu: goto label_13993c;
        case 0x139940u: goto label_139940;
        case 0x139944u: goto label_139944;
        case 0x139948u: goto label_139948;
        case 0x13994cu: goto label_13994c;
        case 0x139950u: goto label_139950;
        case 0x139954u: goto label_139954;
        case 0x139958u: goto label_139958;
        case 0x13995cu: goto label_13995c;
        case 0x139960u: goto label_139960;
        case 0x139964u: goto label_139964;
        case 0x139968u: goto label_139968;
        case 0x13996cu: goto label_13996c;
        case 0x139970u: goto label_139970;
        case 0x139974u: goto label_139974;
        case 0x139978u: goto label_139978;
        case 0x13997cu: goto label_13997c;
        case 0x139980u: goto label_139980;
        case 0x139984u: goto label_139984;
        case 0x139988u: goto label_139988;
        case 0x13998cu: goto label_13998c;
        case 0x139990u: goto label_139990;
        case 0x139994u: goto label_139994;
        case 0x139998u: goto label_139998;
        case 0x13999cu: goto label_13999c;
        case 0x1399a0u: goto label_1399a0;
        case 0x1399a4u: goto label_1399a4;
        case 0x1399a8u: goto label_1399a8;
        case 0x1399acu: goto label_1399ac;
        case 0x1399b0u: goto label_1399b0;
        case 0x1399b4u: goto label_1399b4;
        case 0x1399b8u: goto label_1399b8;
        case 0x1399bcu: goto label_1399bc;
        case 0x1399c0u: goto label_1399c0;
        case 0x1399c4u: goto label_1399c4;
        case 0x1399c8u: goto label_1399c8;
        case 0x1399ccu: goto label_1399cc;
        case 0x1399d0u: goto label_1399d0;
        case 0x1399d4u: goto label_1399d4;
        case 0x1399d8u: goto label_1399d8;
        case 0x1399dcu: goto label_1399dc;
        case 0x1399e0u: goto label_1399e0;
        case 0x1399e4u: goto label_1399e4;
        case 0x1399e8u: goto label_1399e8;
        case 0x1399ecu: goto label_1399ec;
        case 0x1399f0u: goto label_1399f0;
        case 0x1399f4u: goto label_1399f4;
        case 0x1399f8u: goto label_1399f8;
        case 0x1399fcu: goto label_1399fc;
        case 0x139a00u: goto label_139a00;
        case 0x139a04u: goto label_139a04;
        case 0x139a08u: goto label_139a08;
        case 0x139a0cu: goto label_139a0c;
        case 0x139a10u: goto label_139a10;
        case 0x139a14u: goto label_139a14;
        case 0x139a18u: goto label_139a18;
        case 0x139a1cu: goto label_139a1c;
        case 0x139a20u: goto label_139a20;
        case 0x139a24u: goto label_139a24;
        case 0x139a28u: goto label_139a28;
        case 0x139a2cu: goto label_139a2c;
        case 0x139a30u: goto label_139a30;
        case 0x139a34u: goto label_139a34;
        case 0x139a38u: goto label_139a38;
        case 0x139a3cu: goto label_139a3c;
        case 0x139a40u: goto label_139a40;
        case 0x139a44u: goto label_139a44;
        case 0x139a48u: goto label_139a48;
        case 0x139a4cu: goto label_139a4c;
        case 0x139a50u: goto label_139a50;
        case 0x139a54u: goto label_139a54;
        case 0x139a58u: goto label_139a58;
        case 0x139a5cu: goto label_139a5c;
        case 0x139a60u: goto label_139a60;
        case 0x139a64u: goto label_139a64;
        case 0x139a68u: goto label_139a68;
        case 0x139a6cu: goto label_139a6c;
        case 0x139a70u: goto label_139a70;
        case 0x139a74u: goto label_139a74;
        case 0x139a78u: goto label_139a78;
        case 0x139a7cu: goto label_139a7c;
        case 0x139a80u: goto label_139a80;
        case 0x139a84u: goto label_139a84;
        case 0x139a88u: goto label_139a88;
        case 0x139a8cu: goto label_139a8c;
        case 0x139a90u: goto label_139a90;
        case 0x139a94u: goto label_139a94;
        case 0x139a98u: goto label_139a98;
        case 0x139a9cu: goto label_139a9c;
        case 0x139aa0u: goto label_139aa0;
        case 0x139aa4u: goto label_139aa4;
        case 0x139aa8u: goto label_139aa8;
        case 0x139aacu: goto label_139aac;
        case 0x139ab0u: goto label_139ab0;
        case 0x139ab4u: goto label_139ab4;
        case 0x139ab8u: goto label_139ab8;
        case 0x139abcu: goto label_139abc;
        case 0x139ac0u: goto label_139ac0;
        case 0x139ac4u: goto label_139ac4;
        case 0x139ac8u: goto label_139ac8;
        case 0x139accu: goto label_139acc;
        case 0x139ad0u: goto label_139ad0;
        case 0x139ad4u: goto label_139ad4;
        case 0x139ad8u: goto label_139ad8;
        case 0x139adcu: goto label_139adc;
        case 0x139ae0u: goto label_139ae0;
        case 0x139ae4u: goto label_139ae4;
        case 0x139ae8u: goto label_139ae8;
        case 0x139aecu: goto label_139aec;
        case 0x139af0u: goto label_139af0;
        case 0x139af4u: goto label_139af4;
        case 0x139af8u: goto label_139af8;
        case 0x139afcu: goto label_139afc;
        case 0x139b00u: goto label_139b00;
        case 0x139b04u: goto label_139b04;
        case 0x139b08u: goto label_139b08;
        case 0x139b0cu: goto label_139b0c;
        case 0x139b10u: goto label_139b10;
        case 0x139b14u: goto label_139b14;
        case 0x139b18u: goto label_139b18;
        case 0x139b1cu: goto label_139b1c;
        case 0x139b20u: goto label_139b20;
        case 0x139b24u: goto label_139b24;
        case 0x139b28u: goto label_139b28;
        case 0x139b2cu: goto label_139b2c;
        case 0x139b30u: goto label_139b30;
        case 0x139b34u: goto label_139b34;
        case 0x139b38u: goto label_139b38;
        case 0x139b3cu: goto label_139b3c;
        case 0x139b40u: goto label_139b40;
        case 0x139b44u: goto label_139b44;
        case 0x139b48u: goto label_139b48;
        case 0x139b4cu: goto label_139b4c;
        case 0x139b50u: goto label_139b50;
        case 0x139b54u: goto label_139b54;
        case 0x139b58u: goto label_139b58;
        case 0x139b5cu: goto label_139b5c;
        case 0x139b60u: goto label_139b60;
        case 0x139b64u: goto label_139b64;
        case 0x139b68u: goto label_139b68;
        case 0x139b6cu: goto label_139b6c;
        case 0x139b70u: goto label_139b70;
        case 0x139b74u: goto label_139b74;
        case 0x139b78u: goto label_139b78;
        case 0x139b7cu: goto label_139b7c;
        case 0x139b80u: goto label_139b80;
        case 0x139b84u: goto label_139b84;
        case 0x139b88u: goto label_139b88;
        case 0x139b8cu: goto label_139b8c;
        case 0x139b90u: goto label_139b90;
        case 0x139b94u: goto label_139b94;
        case 0x139b98u: goto label_139b98;
        case 0x139b9cu: goto label_139b9c;
        case 0x139ba0u: goto label_139ba0;
        case 0x139ba4u: goto label_139ba4;
        case 0x139ba8u: goto label_139ba8;
        case 0x139bacu: goto label_139bac;
        case 0x139bb0u: goto label_139bb0;
        case 0x139bb4u: goto label_139bb4;
        case 0x139bb8u: goto label_139bb8;
        case 0x139bbcu: goto label_139bbc;
        case 0x139bc0u: goto label_139bc0;
        case 0x139bc4u: goto label_139bc4;
        case 0x139bc8u: goto label_139bc8;
        case 0x139bccu: goto label_139bcc;
        case 0x139bd0u: goto label_139bd0;
        case 0x139bd4u: goto label_139bd4;
        case 0x139bd8u: goto label_139bd8;
        case 0x139bdcu: goto label_139bdc;
        case 0x139be0u: goto label_139be0;
        case 0x139be4u: goto label_139be4;
        case 0x139be8u: goto label_139be8;
        case 0x139becu: goto label_139bec;
        case 0x139bf0u: goto label_139bf0;
        case 0x139bf4u: goto label_139bf4;
        case 0x139bf8u: goto label_139bf8;
        case 0x139bfcu: goto label_139bfc;
        case 0x139c00u: goto label_139c00;
        case 0x139c04u: goto label_139c04;
        case 0x139c08u: goto label_139c08;
        case 0x139c0cu: goto label_139c0c;
        case 0x139c10u: goto label_139c10;
        case 0x139c14u: goto label_139c14;
        case 0x139c18u: goto label_139c18;
        case 0x139c1cu: goto label_139c1c;
        case 0x139c20u: goto label_139c20;
        case 0x139c24u: goto label_139c24;
        case 0x139c28u: goto label_139c28;
        case 0x139c2cu: goto label_139c2c;
        case 0x139c30u: goto label_139c30;
        case 0x139c34u: goto label_139c34;
        case 0x139c38u: goto label_139c38;
        case 0x139c3cu: goto label_139c3c;
        case 0x139c40u: goto label_139c40;
        case 0x139c44u: goto label_139c44;
        case 0x139c48u: goto label_139c48;
        case 0x139c4cu: goto label_139c4c;
        case 0x139c50u: goto label_139c50;
        case 0x139c54u: goto label_139c54;
        case 0x139c58u: goto label_139c58;
        case 0x139c5cu: goto label_139c5c;
        case 0x139c60u: goto label_139c60;
        case 0x139c64u: goto label_139c64;
        case 0x139c68u: goto label_139c68;
        case 0x139c6cu: goto label_139c6c;
        case 0x139c70u: goto label_139c70;
        case 0x139c74u: goto label_139c74;
        case 0x139c78u: goto label_139c78;
        case 0x139c7cu: goto label_139c7c;
        case 0x139c80u: goto label_139c80;
        case 0x139c84u: goto label_139c84;
        case 0x139c88u: goto label_139c88;
        case 0x139c8cu: goto label_139c8c;
        case 0x139c90u: goto label_139c90;
        case 0x139c94u: goto label_139c94;
        case 0x139c98u: goto label_139c98;
        case 0x139c9cu: goto label_139c9c;
        case 0x139ca0u: goto label_139ca0;
        case 0x139ca4u: goto label_139ca4;
        case 0x139ca8u: goto label_139ca8;
        case 0x139cacu: goto label_139cac;
        case 0x139cb0u: goto label_139cb0;
        case 0x139cb4u: goto label_139cb4;
        case 0x139cb8u: goto label_139cb8;
        case 0x139cbcu: goto label_139cbc;
        case 0x139cc0u: goto label_139cc0;
        case 0x139cc4u: goto label_139cc4;
        case 0x139cc8u: goto label_139cc8;
        case 0x139cccu: goto label_139ccc;
        case 0x139cd0u: goto label_139cd0;
        case 0x139cd4u: goto label_139cd4;
        case 0x139cd8u: goto label_139cd8;
        case 0x139cdcu: goto label_139cdc;
        case 0x139ce0u: goto label_139ce0;
        case 0x139ce4u: goto label_139ce4;
        case 0x139ce8u: goto label_139ce8;
        case 0x139cecu: goto label_139cec;
        case 0x139cf0u: goto label_139cf0;
        case 0x139cf4u: goto label_139cf4;
        case 0x139cf8u: goto label_139cf8;
        case 0x139cfcu: goto label_139cfc;
        case 0x139d00u: goto label_139d00;
        case 0x139d04u: goto label_139d04;
        case 0x139d08u: goto label_139d08;
        case 0x139d0cu: goto label_139d0c;
        case 0x139d10u: goto label_139d10;
        case 0x139d14u: goto label_139d14;
        case 0x139d18u: goto label_139d18;
        case 0x139d1cu: goto label_139d1c;
        case 0x139d20u: goto label_139d20;
        case 0x139d24u: goto label_139d24;
        case 0x139d28u: goto label_139d28;
        case 0x139d2cu: goto label_139d2c;
        case 0x139d30u: goto label_139d30;
        case 0x139d34u: goto label_139d34;
        case 0x139d38u: goto label_139d38;
        case 0x139d3cu: goto label_139d3c;
        case 0x139d40u: goto label_139d40;
        case 0x139d44u: goto label_139d44;
        case 0x139d48u: goto label_139d48;
        case 0x139d4cu: goto label_139d4c;
        case 0x139d50u: goto label_139d50;
        case 0x139d54u: goto label_139d54;
        case 0x139d58u: goto label_139d58;
        case 0x139d5cu: goto label_139d5c;
        case 0x139d60u: goto label_139d60;
        case 0x139d64u: goto label_139d64;
        case 0x139d68u: goto label_139d68;
        case 0x139d6cu: goto label_139d6c;
        case 0x139d70u: goto label_139d70;
        case 0x139d74u: goto label_139d74;
        case 0x139d78u: goto label_139d78;
        case 0x139d7cu: goto label_139d7c;
        case 0x139d80u: goto label_139d80;
        case 0x139d84u: goto label_139d84;
        case 0x139d88u: goto label_139d88;
        case 0x139d8cu: goto label_139d8c;
        case 0x139d90u: goto label_139d90;
        case 0x139d94u: goto label_139d94;
        case 0x139d98u: goto label_139d98;
        case 0x139d9cu: goto label_139d9c;
        case 0x139da0u: goto label_139da0;
        case 0x139da4u: goto label_139da4;
        case 0x139da8u: goto label_139da8;
        case 0x139dacu: goto label_139dac;
        case 0x139db0u: goto label_139db0;
        case 0x139db4u: goto label_139db4;
        case 0x139db8u: goto label_139db8;
        case 0x139dbcu: goto label_139dbc;
        case 0x139dc0u: goto label_139dc0;
        case 0x139dc4u: goto label_139dc4;
        case 0x139dc8u: goto label_139dc8;
        case 0x139dccu: goto label_139dcc;
        case 0x139dd0u: goto label_139dd0;
        case 0x139dd4u: goto label_139dd4;
        case 0x139dd8u: goto label_139dd8;
        case 0x139ddcu: goto label_139ddc;
        case 0x139de0u: goto label_139de0;
        case 0x139de4u: goto label_139de4;
        case 0x139de8u: goto label_139de8;
        default: break;
    }

    ctx->pc = 0x1398f0u;

label_1398f0:
    // 0x1398f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1398f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1398f4:
    // 0x1398f4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1398f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_1398f8:
    // 0x1398f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1398f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1398fc:
    // 0x1398fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1398fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_139900:
    // 0x139900: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x139900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_139904:
    // 0x139904: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x139904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_139908:
    // 0x139908: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x139908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_13990c:
    // 0x13990c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13990cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139910:
    // 0x139910: 0x8c701210  lw          $s0, 0x1210($v1)
    ctx->pc = 0x139910u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
label_139914:
    // 0x139914: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x139914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_139918:
    // 0x139918: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x139918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_13991c:
    // 0x13991c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x13991cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_139920:
    // 0x139920: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x139920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_139924:
    // 0x139924: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x139924u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 3));
label_139928:
    // 0x139928: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13992c:
    // 0x13992c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x13992cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_139930:
    // 0x139930: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x139930u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_139934:
    // 0x139934: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x139934u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_139938:
    // 0x139938: 0x10200126  beqz        $at, . + 4 + (0x126 << 2)
label_13993c:
    if (ctx->pc == 0x13993Cu) {
        ctx->pc = 0x139940u;
        goto label_139940;
    }
    ctx->pc = 0x139938u;
    {
        const bool branch_taken_0x139938 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x139938) {
            ctx->pc = 0x139DD4u;
            goto label_139dd4;
        }
    }
    ctx->pc = 0x139940u;
label_139940:
    // 0x139940: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x139940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_139944:
    // 0x139944: 0x2464e5e0  addiu       $a0, $v1, -0x1A20
    ctx->pc = 0x139944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960608));
label_139948:
    // 0x139948: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x139948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_13994c:
    // 0x13994c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13994cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_139950:
    // 0x139950: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x139950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_139954:
    // 0x139954: 0x600008  jr          $v1
label_139958:
    if (ctx->pc == 0x139958u) {
        ctx->pc = 0x13995Cu;
        goto label_13995c;
    }
    ctx->pc = 0x139954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139954u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13995Cu;
label_13995c:
    // 0x13995c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13995cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_139960:
    // 0x139960: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139964:
    // 0x139964: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x139964u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_139968:
    // 0x139968: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x139968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_13996c:
    // 0x13996c: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x13996cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_139970:
    // 0x139970: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x139970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_139974:
    // 0x139974: 0x8c25df28  lw          $a1, -0x20D8($at)
    ctx->pc = 0x139974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958888)));
label_139978:
    // 0x139978: 0x240605ac  addiu       $a2, $zero, 0x5AC
    ctx->pc = 0x139978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1452));
label_13997c:
    // 0x13997c: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x13997cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_139980:
    // 0x139980: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x139980u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_139984:
    // 0x139984: 0xc0965d0  jal         func_259740
label_139988:
    if (ctx->pc == 0x139988u) {
        ctx->pc = 0x13998Cu;
        goto label_13998c;
    }
    ctx->pc = 0x139984u;
    SET_GPR_U32(ctx, 31, 0x13998Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x139984u, 0x13998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13998Cu;
label_13998c:
    // 0x13998c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13998cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139990:
    // 0x139990: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x139990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_139994:
    // 0x139994: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x139994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_139998:
    // 0x139998: 0xc05ccfc  jal         func_1733F0
label_13999c:
    if (ctx->pc == 0x13999Cu) {
        ctx->pc = 0x1399A0u;
        goto label_1399a0;
    }
    ctx->pc = 0x139998u;
    SET_GPR_U32(ctx, 31, 0x1399A0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x139998u, 0x1399A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1399A0u;
label_1399a0:
    // 0x1399a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1399a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1399a4:
    // 0x1399a4: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1399a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_1399a8:
    // 0x1399a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1399a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1399ac:
    // 0x1399ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1399acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1399b0:
    // 0x1399b0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1399b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_1399b4:
    // 0x1399b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1399b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1399b8:
    // 0x1399b8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1399b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1399bc:
    // 0x1399bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1399bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1399c0:
    // 0x1399c0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1399c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1399c4:
    // 0x1399c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1399c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1399c8:
    // 0x1399c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1399c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1399cc:
    // 0x1399cc: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1399ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_1399d0:
    // 0x1399d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1399d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1399d4:
    // 0x1399d4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1399d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1399d8:
    // 0x1399d8: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1399d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1399dc:
    // 0x1399dc: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1399dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1399e0:
    // 0x1399e0: 0xc058f50  jal         func_163D40
label_1399e4:
    if (ctx->pc == 0x1399E4u) {
        ctx->pc = 0x1399E8u;
        goto label_1399e8;
    }
    ctx->pc = 0x1399E0u;
    SET_GPR_U32(ctx, 31, 0x1399E8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1399E0u, 0x1399E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1399E8u;
label_1399e8:
    // 0x1399e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1399e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1399ec:
    // 0x1399ec: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1399ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1399f0:
    // 0x1399f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1399f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1399f4:
    // 0x1399f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1399f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1399f8:
    // 0x1399f8: 0xc096b40  jal         func_25AD00
label_1399fc:
    if (ctx->pc == 0x1399FCu) {
        ctx->pc = 0x139A00u;
        goto label_139a00;
    }
    ctx->pc = 0x1399F8u;
    SET_GPR_U32(ctx, 31, 0x139A00u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1399F8u, 0x139A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A00u;
label_139a00:
    // 0x139a00: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139a04:
    // 0x139a04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139a08:
    // 0x139a08: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x139a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_139a0c:
    // 0x139a0c: 0xc05cd58  jal         func_173560
label_139a10:
    if (ctx->pc == 0x139A10u) {
        ctx->pc = 0x139A14u;
        goto label_139a14;
    }
    ctx->pc = 0x139A0Cu;
    SET_GPR_U32(ctx, 31, 0x139A14u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x139A0Cu, 0x139A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A14u;
label_139a14:
    // 0x139a14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139a18:
    // 0x139a18: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x139a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_139a1c:
    // 0x139a1c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x139a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_139a20:
    // 0x139a20: 0xc040c9e  jal         func_103278
label_139a24:
    if (ctx->pc == 0x139A24u) {
        ctx->pc = 0x139A28u;
        goto label_139a28;
    }
    ctx->pc = 0x139A20u;
    SET_GPR_U32(ctx, 31, 0x139A28u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x139A28u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x139A28u) { return; }
    ctx->pc = 0x139A28u;
label_139a28:
    // 0x139a28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x139a28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_139a2c:
    // 0x139a2c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139a30:
    // 0x139a30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_139a34:
    // 0x139a34: 0xc0573d8  jal         func_15CF60
label_139a38:
    if (ctx->pc == 0x139A38u) {
        ctx->pc = 0x139A3Cu;
        goto label_139a3c;
    }
    ctx->pc = 0x139A34u;
    SET_GPR_U32(ctx, 31, 0x139A3Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x139A34u, 0x139A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A3Cu;
label_139a3c:
    // 0x139a3c: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x139a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139a40:
    // 0x139a40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139a44:
    // 0x139a44: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x139a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_139a48:
    // 0x139a48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139a4c:
    // 0x139a4c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x139a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_139a50:
    // 0x139a50: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x139a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_139a54:
    // 0x139a54: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x139a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_139a58:
    // 0x139a58: 0xc0675b0  jal         func_19D6C0
label_139a5c:
    if (ctx->pc == 0x139A5Cu) {
        ctx->pc = 0x139A60u;
        goto label_139a60;
    }
    ctx->pc = 0x139A58u;
    SET_GPR_U32(ctx, 31, 0x139A60u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x139A58u, 0x139A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A60u;
label_139a60:
    // 0x139a60: 0xc60112a0  lwc1        $f1, 0x12A0($s0)
    ctx->pc = 0x139a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_139a64:
    // 0x139a64: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x139a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139a68:
    // 0x139a68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x139a68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_139a6c:
    // 0x139a6c: 0xe60012a0  swc1        $f0, 0x12A0($s0)
    ctx->pc = 0x139a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4768), bits); }
label_139a70:
    // 0x139a70: 0xc60112a8  lwc1        $f1, 0x12A8($s0)
    ctx->pc = 0x139a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_139a74:
    // 0x139a74: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x139a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139a78:
    // 0x139a78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x139a78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_139a7c:
    // 0x139a7c: 0xe60012a8  swc1        $f0, 0x12A8($s0)
    ctx->pc = 0x139a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4776), bits); }
label_139a80:
    // 0x139a80: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x139a80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_139a84:
    // 0x139a84: 0xc097530  jal         func_25D4C0
label_139a88:
    if (ctx->pc == 0x139A88u) {
        ctx->pc = 0x139A8Cu;
        goto label_139a8c;
    }
    ctx->pc = 0x139A84u;
    SET_GPR_U32(ctx, 31, 0x139A8Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x139A84u, 0x139A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A8Cu;
label_139a8c:
    // 0x139a8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139a90:
    // 0x139a90: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x139a90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_139a94:
    // 0x139a94: 0x106000cf  beqz        $v1, . + 4 + (0xCF << 2)
label_139a98:
    if (ctx->pc == 0x139A98u) {
        ctx->pc = 0x139A9Cu;
        goto label_139a9c;
    }
    ctx->pc = 0x139A94u;
    {
        const bool branch_taken_0x139a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139a94) {
            ctx->pc = 0x139DD4u;
            goto label_139dd4;
        }
    }
    ctx->pc = 0x139A9Cu;
label_139a9c:
    // 0x139a9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139aa0:
    // 0x139aa0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x139aa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_139aa4:
    // 0x139aa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x139aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_139aa8:
    // 0x139aa8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x139aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_139aac:
    // 0x139aac: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_139ab0:
    if (ctx->pc == 0x139AB0u) {
        ctx->pc = 0x139AB4u;
        goto label_139ab4;
    }
    ctx->pc = 0x139AACu;
    {
        const bool branch_taken_0x139aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139aac) {
            ctx->pc = 0x139DD4u;
            goto label_139dd4;
        }
    }
    ctx->pc = 0x139AB4u;
label_139ab4:
    // 0x139ab4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x139ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_139ab8:
    // 0x139ab8: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x139ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_139abc:
    // 0x139abc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x139abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_139ac0:
    // 0x139ac0: 0x8c25df28  lw          $a1, -0x20D8($at)
    ctx->pc = 0x139ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958888)));
label_139ac4:
    // 0x139ac4: 0x240600ad  addiu       $a2, $zero, 0xAD
    ctx->pc = 0x139ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
label_139ac8:
    // 0x139ac8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x139ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_139acc:
    // 0x139acc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x139accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_139ad0:
    // 0x139ad0: 0xc0965d0  jal         func_259740
label_139ad4:
    if (ctx->pc == 0x139AD4u) {
        ctx->pc = 0x139AD8u;
        goto label_139ad8;
    }
    ctx->pc = 0x139AD0u;
    SET_GPR_U32(ctx, 31, 0x139AD8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x139AD0u, 0x139AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139AD8u;
label_139ad8:
    // 0x139ad8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139adc:
    // 0x139adc: 0xc4401290  lwc1        $f0, 0x1290($v0)
    ctx->pc = 0x139adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139ae0:
    // 0x139ae0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139ae4:
    // 0x139ae4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x139ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_139ae8:
    // 0x139ae8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139aec:
    // 0x139aec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x139aecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_139af0:
    // 0x139af0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x139af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_139af4:
    // 0x139af4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x139af4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_139af8:
    // 0x139af8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139afc:
    // 0x139afc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x139afcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_139b00:
    // 0x139b00: 0xc096b40  jal         func_25AD00
label_139b04:
    if (ctx->pc == 0x139B04u) {
        ctx->pc = 0x139B08u;
        goto label_139b08;
    }
    ctx->pc = 0x139B00u;
    SET_GPR_U32(ctx, 31, 0x139B08u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x139B00u, 0x139B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B08u;
label_139b08:
    // 0x139b08: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139b0c:
    // 0x139b0c: 0xc05cd10  jal         func_173440
label_139b10:
    if (ctx->pc == 0x139B10u) {
        ctx->pc = 0x139B14u;
        goto label_139b14;
    }
    ctx->pc = 0x139B0Cu;
    SET_GPR_U32(ctx, 31, 0x139B14u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x139B0Cu, 0x139B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B14u;
label_139b14:
    // 0x139b14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x139b14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_139b18:
    // 0x139b18: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139b1c:
    // 0x139b1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_139b20:
    // 0x139b20: 0xc0573d8  jal         func_15CF60
label_139b24:
    if (ctx->pc == 0x139B24u) {
        ctx->pc = 0x139B28u;
        goto label_139b28;
    }
    ctx->pc = 0x139B20u;
    SET_GPR_U32(ctx, 31, 0x139B28u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x139B20u, 0x139B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B28u;
label_139b28:
    // 0x139b28: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x139b28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_139b2c:
    // 0x139b2c: 0xc097530  jal         func_25D4C0
label_139b30:
    if (ctx->pc == 0x139B30u) {
        ctx->pc = 0x139B34u;
        goto label_139b34;
    }
    ctx->pc = 0x139B2Cu;
    SET_GPR_U32(ctx, 31, 0x139B34u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x139B2Cu, 0x139B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B34u;
label_139b34:
    // 0x139b34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139b38:
    // 0x139b38: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x139b38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_139b3c:
    // 0x139b3c: 0x106000a5  beqz        $v1, . + 4 + (0xA5 << 2)
label_139b40:
    if (ctx->pc == 0x139B40u) {
        ctx->pc = 0x139B44u;
        goto label_139b44;
    }
    ctx->pc = 0x139B3Cu;
    {
        const bool branch_taken_0x139b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139b3c) {
            ctx->pc = 0x139DD4u;
            goto label_139dd4;
        }
    }
    ctx->pc = 0x139B44u;
label_139b44:
    // 0x139b44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139b48:
    // 0x139b48: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x139b48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_139b4c:
    // 0x139b4c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x139b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_139b50:
    // 0x139b50: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x139b50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_139b54:
    // 0x139b54: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
label_139b58:
    if (ctx->pc == 0x139B58u) {
        ctx->pc = 0x139B5Cu;
        goto label_139b5c;
    }
    ctx->pc = 0x139B54u;
    {
        const bool branch_taken_0x139b54 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x139b54) {
            ctx->pc = 0x139B90u;
            goto label_139b90;
        }
    }
    ctx->pc = 0x139B5Cu;
label_139b5c:
    // 0x139b5c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x139b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_139b60:
    // 0x139b60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139b64:
    // 0x139b64: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x139b64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_139b68:
    // 0x139b68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139b6c:
    // 0x139b6c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x139b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_139b70:
    // 0x139b70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139b74:
    // 0x139b74: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x139b74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_139b78:
    // 0x139b78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139b7c:
    // 0x139b7c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x139b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_139b80:
    // 0x139b80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139b84:
    // 0x139b84: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x139b84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_139b88:
    // 0x139b88: 0x10000092  b           . + 4 + (0x92 << 2)
label_139b8c:
    if (ctx->pc == 0x139B8Cu) {
        ctx->pc = 0x139B90u;
        goto label_139b90;
    }
    ctx->pc = 0x139B88u;
    {
        const bool branch_taken_0x139b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139b88) {
            ctx->pc = 0x139DD4u;
            goto label_139dd4;
        }
    }
    ctx->pc = 0x139B90u;
label_139b90:
    // 0x139b90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139b94:
    // 0x139b94: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x139b94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_139b98:
    // 0x139b98: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_139b9c:
    if (ctx->pc == 0x139B9Cu) {
        ctx->pc = 0x139BA0u;
        goto label_139ba0;
    }
    ctx->pc = 0x139B98u;
    {
        const bool branch_taken_0x139b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139b98) {
            ctx->pc = 0x139BB4u;
            goto label_139bb4;
        }
    }
    ctx->pc = 0x139BA0u;
label_139ba0:
    // 0x139ba0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x139ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_139ba4:
    // 0x139ba4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139ba8:
    // 0x139ba8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x139ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_139bac:
    // 0x139bac: 0x10000004  b           . + 4 + (0x4 << 2)
label_139bb0:
    if (ctx->pc == 0x139BB0u) {
        ctx->pc = 0x139BB4u;
        goto label_139bb4;
    }
    ctx->pc = 0x139BACu;
    {
        const bool branch_taken_0x139bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139bac) {
            ctx->pc = 0x139BC0u;
            goto label_139bc0;
        }
    }
    ctx->pc = 0x139BB4u;
label_139bb4:
    // 0x139bb4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x139bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_139bb8:
    // 0x139bb8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139bbc:
    // 0x139bbc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x139bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_139bc0:
    // 0x139bc0: 0x10000084  b           . + 4 + (0x84 << 2)
label_139bc4:
    if (ctx->pc == 0x139BC4u) {
        ctx->pc = 0x139BC8u;
        goto label_139bc8;
    }
    ctx->pc = 0x139BC0u;
    {
        const bool branch_taken_0x139bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139bc0) {
            ctx->pc = 0x139DD4u;
            goto label_139dd4;
        }
    }
    ctx->pc = 0x139BC8u;
label_139bc8:
    // 0x139bc8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x139bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_139bcc:
    // 0x139bcc: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x139bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_139bd0:
    // 0x139bd0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x139bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_139bd4:
    // 0x139bd4: 0x8c25df28  lw          $a1, -0x20D8($at)
    ctx->pc = 0x139bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958888)));
label_139bd8:
    // 0x139bd8: 0x240600ae  addiu       $a2, $zero, 0xAE
    ctx->pc = 0x139bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
label_139bdc:
    // 0x139bdc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x139bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_139be0:
    // 0x139be0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x139be0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_139be4:
    // 0x139be4: 0xc0965d0  jal         func_259740
label_139be8:
    if (ctx->pc == 0x139BE8u) {
        ctx->pc = 0x139BECu;
        goto label_139bec;
    }
    ctx->pc = 0x139BE4u;
    SET_GPR_U32(ctx, 31, 0x139BECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x139BE4u, 0x139BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139BECu;
label_139bec:
    // 0x139bec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139bf0:
    // 0x139bf0: 0xc4401290  lwc1        $f0, 0x1290($v0)
    ctx->pc = 0x139bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139bf4:
    // 0x139bf4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139bf8:
    // 0x139bf8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x139bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_139bfc:
    // 0x139bfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139c00:
    // 0x139c00: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x139c00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_139c04:
    // 0x139c04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x139c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_139c08:
    // 0x139c08: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x139c08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_139c0c:
    // 0x139c0c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139c10:
    // 0x139c10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x139c10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_139c14:
    // 0x139c14: 0xc096b40  jal         func_25AD00
label_139c18:
    if (ctx->pc == 0x139C18u) {
        ctx->pc = 0x139C1Cu;
        goto label_139c1c;
    }
    ctx->pc = 0x139C14u;
    SET_GPR_U32(ctx, 31, 0x139C1Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x139C14u, 0x139C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C1Cu;
label_139c1c:
    // 0x139c1c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139c20:
    // 0x139c20: 0xc05cd10  jal         func_173440
label_139c24:
    if (ctx->pc == 0x139C24u) {
        ctx->pc = 0x139C28u;
        goto label_139c28;
    }
    ctx->pc = 0x139C20u;
    SET_GPR_U32(ctx, 31, 0x139C28u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x139C20u, 0x139C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C28u;
label_139c28:
    // 0x139c28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x139c28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_139c2c:
    // 0x139c2c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139c30:
    // 0x139c30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_139c34:
    // 0x139c34: 0xc0573d8  jal         func_15CF60
label_139c38:
    if (ctx->pc == 0x139C38u) {
        ctx->pc = 0x139C3Cu;
        goto label_139c3c;
    }
    ctx->pc = 0x139C34u;
    SET_GPR_U32(ctx, 31, 0x139C3Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x139C34u, 0x139C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C3Cu;
label_139c3c:
    // 0x139c3c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x139c3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_139c40:
    // 0x139c40: 0xc097530  jal         func_25D4C0
label_139c44:
    if (ctx->pc == 0x139C44u) {
        ctx->pc = 0x139C48u;
        goto label_139c48;
    }
    ctx->pc = 0x139C40u;
    SET_GPR_U32(ctx, 31, 0x139C48u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x139C40u, 0x139C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C48u;
label_139c48:
    // 0x139c48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139c4c:
    // 0x139c4c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x139c4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_139c50:
    // 0x139c50: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
label_139c54:
    if (ctx->pc == 0x139C54u) {
        ctx->pc = 0x139C58u;
        goto label_139c58;
    }
    ctx->pc = 0x139C50u;
    {
        const bool branch_taken_0x139c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139c50) {
            ctx->pc = 0x139DD4u;
            goto label_139dd4;
        }
    }
    ctx->pc = 0x139C58u;
label_139c58:
    // 0x139c58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139c5c:
    // 0x139c5c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x139c5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_139c60:
    // 0x139c60: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x139c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_139c64:
    // 0x139c64: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x139c64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_139c68:
    // 0x139c68: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
label_139c6c:
    if (ctx->pc == 0x139C6Cu) {
        ctx->pc = 0x139C70u;
        goto label_139c70;
    }
    ctx->pc = 0x139C68u;
    {
        const bool branch_taken_0x139c68 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x139c68) {
            ctx->pc = 0x139CA4u;
            goto label_139ca4;
        }
    }
    ctx->pc = 0x139C70u;
label_139c70:
    // 0x139c70: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x139c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_139c74:
    // 0x139c74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139c78:
    // 0x139c78: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x139c78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_139c7c:
    // 0x139c7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139c80:
    // 0x139c80: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x139c80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_139c84:
    // 0x139c84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139c88:
    // 0x139c88: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x139c88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_139c8c:
    // 0x139c8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139c90:
    // 0x139c90: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x139c90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_139c94:
    // 0x139c94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139c98:
    // 0x139c98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x139c98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_139c9c:
    // 0x139c9c: 0x1000004d  b           . + 4 + (0x4D << 2)
label_139ca0:
    if (ctx->pc == 0x139CA0u) {
        ctx->pc = 0x139CA4u;
        goto label_139ca4;
    }
    ctx->pc = 0x139C9Cu;
    {
        const bool branch_taken_0x139c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139c9c) {
            ctx->pc = 0x139DD4u;
            goto label_139dd4;
        }
    }
    ctx->pc = 0x139CA4u;
label_139ca4:
    // 0x139ca4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139ca8:
    // 0x139ca8: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x139ca8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_139cac:
    // 0x139cac: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_139cb0:
    if (ctx->pc == 0x139CB0u) {
        ctx->pc = 0x139CB4u;
        goto label_139cb4;
    }
    ctx->pc = 0x139CACu;
    {
        const bool branch_taken_0x139cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139cac) {
            ctx->pc = 0x139CC8u;
            goto label_139cc8;
        }
    }
    ctx->pc = 0x139CB4u;
label_139cb4:
    // 0x139cb4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x139cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_139cb8:
    // 0x139cb8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139cbc:
    // 0x139cbc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x139cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_139cc0:
    // 0x139cc0: 0x10000004  b           . + 4 + (0x4 << 2)
label_139cc4:
    if (ctx->pc == 0x139CC4u) {
        ctx->pc = 0x139CC8u;
        goto label_139cc8;
    }
    ctx->pc = 0x139CC0u;
    {
        const bool branch_taken_0x139cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139cc0) {
            ctx->pc = 0x139CD4u;
            goto label_139cd4;
        }
    }
    ctx->pc = 0x139CC8u;
label_139cc8:
    // 0x139cc8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x139cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_139ccc:
    // 0x139ccc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139cd0:
    // 0x139cd0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x139cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_139cd4:
    // 0x139cd4: 0x1000003f  b           . + 4 + (0x3F << 2)
label_139cd8:
    if (ctx->pc == 0x139CD8u) {
        ctx->pc = 0x139CDCu;
        goto label_139cdc;
    }
    ctx->pc = 0x139CD4u;
    {
        const bool branch_taken_0x139cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139cd4) {
            ctx->pc = 0x139DD4u;
            goto label_139dd4;
        }
    }
    ctx->pc = 0x139CDCu;
label_139cdc:
    // 0x139cdc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x139cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_139ce0:
    // 0x139ce0: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x139ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_139ce4:
    // 0x139ce4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x139ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_139ce8:
    // 0x139ce8: 0x8c25df28  lw          $a1, -0x20D8($at)
    ctx->pc = 0x139ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958888)));
label_139cec:
    // 0x139cec: 0x240600a8  addiu       $a2, $zero, 0xA8
    ctx->pc = 0x139cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_139cf0:
    // 0x139cf0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x139cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_139cf4:
    // 0x139cf4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x139cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_139cf8:
    // 0x139cf8: 0xc0965d0  jal         func_259740
label_139cfc:
    if (ctx->pc == 0x139CFCu) {
        ctx->pc = 0x139D00u;
        goto label_139d00;
    }
    ctx->pc = 0x139CF8u;
    SET_GPR_U32(ctx, 31, 0x139D00u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x139CF8u, 0x139D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139D00u;
label_139d00:
    // 0x139d00: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139d04:
    // 0x139d04: 0xc4401290  lwc1        $f0, 0x1290($v0)
    ctx->pc = 0x139d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139d08:
    // 0x139d08: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139d0c:
    // 0x139d0c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x139d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_139d10:
    // 0x139d10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139d14:
    // 0x139d14: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x139d14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_139d18:
    // 0x139d18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x139d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_139d1c:
    // 0x139d1c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x139d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_139d20:
    // 0x139d20: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139d24:
    // 0x139d24: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x139d24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_139d28:
    // 0x139d28: 0xc096b40  jal         func_25AD00
label_139d2c:
    if (ctx->pc == 0x139D2Cu) {
        ctx->pc = 0x139D30u;
        goto label_139d30;
    }
    ctx->pc = 0x139D28u;
    SET_GPR_U32(ctx, 31, 0x139D30u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x139D28u, 0x139D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139D30u;
label_139d30:
    // 0x139d30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139d34:
    // 0x139d34: 0xc05cd10  jal         func_173440
label_139d38:
    if (ctx->pc == 0x139D38u) {
        ctx->pc = 0x139D3Cu;
        goto label_139d3c;
    }
    ctx->pc = 0x139D34u;
    SET_GPR_U32(ctx, 31, 0x139D3Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x139D34u, 0x139D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139D3Cu;
label_139d3c:
    // 0x139d3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x139d3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_139d40:
    // 0x139d40: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139d44:
    // 0x139d44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_139d48:
    // 0x139d48: 0xc0573d8  jal         func_15CF60
label_139d4c:
    if (ctx->pc == 0x139D4Cu) {
        ctx->pc = 0x139D50u;
        goto label_139d50;
    }
    ctx->pc = 0x139D48u;
    SET_GPR_U32(ctx, 31, 0x139D50u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x139D48u, 0x139D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139D50u;
label_139d50:
    // 0x139d50: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x139d50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_139d54:
    // 0x139d54: 0xc097530  jal         func_25D4C0
label_139d58:
    if (ctx->pc == 0x139D58u) {
        ctx->pc = 0x139D5Cu;
        goto label_139d5c;
    }
    ctx->pc = 0x139D54u;
    SET_GPR_U32(ctx, 31, 0x139D5Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x139D54u, 0x139D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139D5Cu;
label_139d5c:
    // 0x139d5c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139d60:
    // 0x139d60: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x139d60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_139d64:
    // 0x139d64: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_139d68:
    if (ctx->pc == 0x139D68u) {
        ctx->pc = 0x139D6Cu;
        goto label_139d6c;
    }
    ctx->pc = 0x139D64u;
    {
        const bool branch_taken_0x139d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139d64) {
            ctx->pc = 0x139DD4u;
            goto label_139dd4;
        }
    }
    ctx->pc = 0x139D6Cu;
label_139d6c:
    // 0x139d6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x139d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_139d70:
    // 0x139d70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139d74:
    // 0x139d74: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x139d74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_139d78:
    // 0x139d78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139d7c:
    // 0x139d7c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x139d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_139d80:
    // 0x139d80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139d84:
    // 0x139d84: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x139d84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_139d88:
    // 0x139d88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139d8c:
    // 0x139d8c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x139d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_139d90:
    // 0x139d90: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x139d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_139d94:
    // 0x139d94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139d98:
    // 0x139d98: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x139d98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_139d9c:
    // 0x139d9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139da0:
    // 0x139da0: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x139da0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_139da4:
    // 0x139da4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x139da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139da8:
    // 0x139da8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x139da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_139dac:
    // 0x139dac: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x139dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_139db0:
    // 0x139db0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x139db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_139db4:
    // 0x139db4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x139db4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_139db8:
    // 0x139db8: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x139db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
label_139dbc:
    // 0x139dbc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x139dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_139dc0:
    // 0x139dc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x139dc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_139dc4:
    // 0x139dc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_139dc8:
    // 0x139dc8: 0xe4601b34  swc1        $f0, 0x1B34($v1)
    ctx->pc = 0x139dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6964), bits); }
label_139dcc:
    // 0x139dcc: 0x10000001  b           . + 4 + (0x1 << 2)
label_139dd0:
    if (ctx->pc == 0x139DD0u) {
        ctx->pc = 0x139DD4u;
        goto label_139dd4;
    }
    ctx->pc = 0x139DCCu;
    {
        const bool branch_taken_0x139dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139dcc) {
            ctx->pc = 0x139DD4u;
            goto label_139dd4;
        }
    }
    ctx->pc = 0x139DD4u;
label_139dd4:
    // 0x139dd4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x139dd4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_139dd8:
    // 0x139dd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x139dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_139ddc:
    // 0x139ddc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_139de0:
    // 0x139de0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x139de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_139de4:
    // 0x139de4: 0x3e00008  jr          $ra
label_139de8:
    if (ctx->pc == 0x139DE8u) {
        ctx->pc = 0x139DECu;
        goto label_fallthrough_0x139de4;
    }
    ctx->pc = 0x139DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x139de4:
    ctx->pc = 0x139DECu;
}
