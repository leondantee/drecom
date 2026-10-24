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

// Function: Em10_R1_run_away
// Address: 0x12b290 - 0x12b780
void Em10_R1_run_away_0x12b290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_run_away_0x12b290");
#endif

    switch (ctx->pc) {
        case 0x12b290u: goto label_12b290;
        case 0x12b294u: goto label_12b294;
        case 0x12b298u: goto label_12b298;
        case 0x12b29cu: goto label_12b29c;
        case 0x12b2a0u: goto label_12b2a0;
        case 0x12b2a4u: goto label_12b2a4;
        case 0x12b2a8u: goto label_12b2a8;
        case 0x12b2acu: goto label_12b2ac;
        case 0x12b2b0u: goto label_12b2b0;
        case 0x12b2b4u: goto label_12b2b4;
        case 0x12b2b8u: goto label_12b2b8;
        case 0x12b2bcu: goto label_12b2bc;
        case 0x12b2c0u: goto label_12b2c0;
        case 0x12b2c4u: goto label_12b2c4;
        case 0x12b2c8u: goto label_12b2c8;
        case 0x12b2ccu: goto label_12b2cc;
        case 0x12b2d0u: goto label_12b2d0;
        case 0x12b2d4u: goto label_12b2d4;
        case 0x12b2d8u: goto label_12b2d8;
        case 0x12b2dcu: goto label_12b2dc;
        case 0x12b2e0u: goto label_12b2e0;
        case 0x12b2e4u: goto label_12b2e4;
        case 0x12b2e8u: goto label_12b2e8;
        case 0x12b2ecu: goto label_12b2ec;
        case 0x12b2f0u: goto label_12b2f0;
        case 0x12b2f4u: goto label_12b2f4;
        case 0x12b2f8u: goto label_12b2f8;
        case 0x12b2fcu: goto label_12b2fc;
        case 0x12b300u: goto label_12b300;
        case 0x12b304u: goto label_12b304;
        case 0x12b308u: goto label_12b308;
        case 0x12b30cu: goto label_12b30c;
        case 0x12b310u: goto label_12b310;
        case 0x12b314u: goto label_12b314;
        case 0x12b318u: goto label_12b318;
        case 0x12b31cu: goto label_12b31c;
        case 0x12b320u: goto label_12b320;
        case 0x12b324u: goto label_12b324;
        case 0x12b328u: goto label_12b328;
        case 0x12b32cu: goto label_12b32c;
        case 0x12b330u: goto label_12b330;
        case 0x12b334u: goto label_12b334;
        case 0x12b338u: goto label_12b338;
        case 0x12b33cu: goto label_12b33c;
        case 0x12b340u: goto label_12b340;
        case 0x12b344u: goto label_12b344;
        case 0x12b348u: goto label_12b348;
        case 0x12b34cu: goto label_12b34c;
        case 0x12b350u: goto label_12b350;
        case 0x12b354u: goto label_12b354;
        case 0x12b358u: goto label_12b358;
        case 0x12b35cu: goto label_12b35c;
        case 0x12b360u: goto label_12b360;
        case 0x12b364u: goto label_12b364;
        case 0x12b368u: goto label_12b368;
        case 0x12b36cu: goto label_12b36c;
        case 0x12b370u: goto label_12b370;
        case 0x12b374u: goto label_12b374;
        case 0x12b378u: goto label_12b378;
        case 0x12b37cu: goto label_12b37c;
        case 0x12b380u: goto label_12b380;
        case 0x12b384u: goto label_12b384;
        case 0x12b388u: goto label_12b388;
        case 0x12b38cu: goto label_12b38c;
        case 0x12b390u: goto label_12b390;
        case 0x12b394u: goto label_12b394;
        case 0x12b398u: goto label_12b398;
        case 0x12b39cu: goto label_12b39c;
        case 0x12b3a0u: goto label_12b3a0;
        case 0x12b3a4u: goto label_12b3a4;
        case 0x12b3a8u: goto label_12b3a8;
        case 0x12b3acu: goto label_12b3ac;
        case 0x12b3b0u: goto label_12b3b0;
        case 0x12b3b4u: goto label_12b3b4;
        case 0x12b3b8u: goto label_12b3b8;
        case 0x12b3bcu: goto label_12b3bc;
        case 0x12b3c0u: goto label_12b3c0;
        case 0x12b3c4u: goto label_12b3c4;
        case 0x12b3c8u: goto label_12b3c8;
        case 0x12b3ccu: goto label_12b3cc;
        case 0x12b3d0u: goto label_12b3d0;
        case 0x12b3d4u: goto label_12b3d4;
        case 0x12b3d8u: goto label_12b3d8;
        case 0x12b3dcu: goto label_12b3dc;
        case 0x12b3e0u: goto label_12b3e0;
        case 0x12b3e4u: goto label_12b3e4;
        case 0x12b3e8u: goto label_12b3e8;
        case 0x12b3ecu: goto label_12b3ec;
        case 0x12b3f0u: goto label_12b3f0;
        case 0x12b3f4u: goto label_12b3f4;
        case 0x12b3f8u: goto label_12b3f8;
        case 0x12b3fcu: goto label_12b3fc;
        case 0x12b400u: goto label_12b400;
        case 0x12b404u: goto label_12b404;
        case 0x12b408u: goto label_12b408;
        case 0x12b40cu: goto label_12b40c;
        case 0x12b410u: goto label_12b410;
        case 0x12b414u: goto label_12b414;
        case 0x12b418u: goto label_12b418;
        case 0x12b41cu: goto label_12b41c;
        case 0x12b420u: goto label_12b420;
        case 0x12b424u: goto label_12b424;
        case 0x12b428u: goto label_12b428;
        case 0x12b42cu: goto label_12b42c;
        case 0x12b430u: goto label_12b430;
        case 0x12b434u: goto label_12b434;
        case 0x12b438u: goto label_12b438;
        case 0x12b43cu: goto label_12b43c;
        case 0x12b440u: goto label_12b440;
        case 0x12b444u: goto label_12b444;
        case 0x12b448u: goto label_12b448;
        case 0x12b44cu: goto label_12b44c;
        case 0x12b450u: goto label_12b450;
        case 0x12b454u: goto label_12b454;
        case 0x12b458u: goto label_12b458;
        case 0x12b45cu: goto label_12b45c;
        case 0x12b460u: goto label_12b460;
        case 0x12b464u: goto label_12b464;
        case 0x12b468u: goto label_12b468;
        case 0x12b46cu: goto label_12b46c;
        case 0x12b470u: goto label_12b470;
        case 0x12b474u: goto label_12b474;
        case 0x12b478u: goto label_12b478;
        case 0x12b47cu: goto label_12b47c;
        case 0x12b480u: goto label_12b480;
        case 0x12b484u: goto label_12b484;
        case 0x12b488u: goto label_12b488;
        case 0x12b48cu: goto label_12b48c;
        case 0x12b490u: goto label_12b490;
        case 0x12b494u: goto label_12b494;
        case 0x12b498u: goto label_12b498;
        case 0x12b49cu: goto label_12b49c;
        case 0x12b4a0u: goto label_12b4a0;
        case 0x12b4a4u: goto label_12b4a4;
        case 0x12b4a8u: goto label_12b4a8;
        case 0x12b4acu: goto label_12b4ac;
        case 0x12b4b0u: goto label_12b4b0;
        case 0x12b4b4u: goto label_12b4b4;
        case 0x12b4b8u: goto label_12b4b8;
        case 0x12b4bcu: goto label_12b4bc;
        case 0x12b4c0u: goto label_12b4c0;
        case 0x12b4c4u: goto label_12b4c4;
        case 0x12b4c8u: goto label_12b4c8;
        case 0x12b4ccu: goto label_12b4cc;
        case 0x12b4d0u: goto label_12b4d0;
        case 0x12b4d4u: goto label_12b4d4;
        case 0x12b4d8u: goto label_12b4d8;
        case 0x12b4dcu: goto label_12b4dc;
        case 0x12b4e0u: goto label_12b4e0;
        case 0x12b4e4u: goto label_12b4e4;
        case 0x12b4e8u: goto label_12b4e8;
        case 0x12b4ecu: goto label_12b4ec;
        case 0x12b4f0u: goto label_12b4f0;
        case 0x12b4f4u: goto label_12b4f4;
        case 0x12b4f8u: goto label_12b4f8;
        case 0x12b4fcu: goto label_12b4fc;
        case 0x12b500u: goto label_12b500;
        case 0x12b504u: goto label_12b504;
        case 0x12b508u: goto label_12b508;
        case 0x12b50cu: goto label_12b50c;
        case 0x12b510u: goto label_12b510;
        case 0x12b514u: goto label_12b514;
        case 0x12b518u: goto label_12b518;
        case 0x12b51cu: goto label_12b51c;
        case 0x12b520u: goto label_12b520;
        case 0x12b524u: goto label_12b524;
        case 0x12b528u: goto label_12b528;
        case 0x12b52cu: goto label_12b52c;
        case 0x12b530u: goto label_12b530;
        case 0x12b534u: goto label_12b534;
        case 0x12b538u: goto label_12b538;
        case 0x12b53cu: goto label_12b53c;
        case 0x12b540u: goto label_12b540;
        case 0x12b544u: goto label_12b544;
        case 0x12b548u: goto label_12b548;
        case 0x12b54cu: goto label_12b54c;
        case 0x12b550u: goto label_12b550;
        case 0x12b554u: goto label_12b554;
        case 0x12b558u: goto label_12b558;
        case 0x12b55cu: goto label_12b55c;
        case 0x12b560u: goto label_12b560;
        case 0x12b564u: goto label_12b564;
        case 0x12b568u: goto label_12b568;
        case 0x12b56cu: goto label_12b56c;
        case 0x12b570u: goto label_12b570;
        case 0x12b574u: goto label_12b574;
        case 0x12b578u: goto label_12b578;
        case 0x12b57cu: goto label_12b57c;
        case 0x12b580u: goto label_12b580;
        case 0x12b584u: goto label_12b584;
        case 0x12b588u: goto label_12b588;
        case 0x12b58cu: goto label_12b58c;
        case 0x12b590u: goto label_12b590;
        case 0x12b594u: goto label_12b594;
        case 0x12b598u: goto label_12b598;
        case 0x12b59cu: goto label_12b59c;
        case 0x12b5a0u: goto label_12b5a0;
        case 0x12b5a4u: goto label_12b5a4;
        case 0x12b5a8u: goto label_12b5a8;
        case 0x12b5acu: goto label_12b5ac;
        case 0x12b5b0u: goto label_12b5b0;
        case 0x12b5b4u: goto label_12b5b4;
        case 0x12b5b8u: goto label_12b5b8;
        case 0x12b5bcu: goto label_12b5bc;
        case 0x12b5c0u: goto label_12b5c0;
        case 0x12b5c4u: goto label_12b5c4;
        case 0x12b5c8u: goto label_12b5c8;
        case 0x12b5ccu: goto label_12b5cc;
        case 0x12b5d0u: goto label_12b5d0;
        case 0x12b5d4u: goto label_12b5d4;
        case 0x12b5d8u: goto label_12b5d8;
        case 0x12b5dcu: goto label_12b5dc;
        case 0x12b5e0u: goto label_12b5e0;
        case 0x12b5e4u: goto label_12b5e4;
        case 0x12b5e8u: goto label_12b5e8;
        case 0x12b5ecu: goto label_12b5ec;
        case 0x12b5f0u: goto label_12b5f0;
        case 0x12b5f4u: goto label_12b5f4;
        case 0x12b5f8u: goto label_12b5f8;
        case 0x12b5fcu: goto label_12b5fc;
        case 0x12b600u: goto label_12b600;
        case 0x12b604u: goto label_12b604;
        case 0x12b608u: goto label_12b608;
        case 0x12b60cu: goto label_12b60c;
        case 0x12b610u: goto label_12b610;
        case 0x12b614u: goto label_12b614;
        case 0x12b618u: goto label_12b618;
        case 0x12b61cu: goto label_12b61c;
        case 0x12b620u: goto label_12b620;
        case 0x12b624u: goto label_12b624;
        case 0x12b628u: goto label_12b628;
        case 0x12b62cu: goto label_12b62c;
        case 0x12b630u: goto label_12b630;
        case 0x12b634u: goto label_12b634;
        case 0x12b638u: goto label_12b638;
        case 0x12b63cu: goto label_12b63c;
        case 0x12b640u: goto label_12b640;
        case 0x12b644u: goto label_12b644;
        case 0x12b648u: goto label_12b648;
        case 0x12b64cu: goto label_12b64c;
        case 0x12b650u: goto label_12b650;
        case 0x12b654u: goto label_12b654;
        case 0x12b658u: goto label_12b658;
        case 0x12b65cu: goto label_12b65c;
        case 0x12b660u: goto label_12b660;
        case 0x12b664u: goto label_12b664;
        case 0x12b668u: goto label_12b668;
        case 0x12b66cu: goto label_12b66c;
        case 0x12b670u: goto label_12b670;
        case 0x12b674u: goto label_12b674;
        case 0x12b678u: goto label_12b678;
        case 0x12b67cu: goto label_12b67c;
        case 0x12b680u: goto label_12b680;
        case 0x12b684u: goto label_12b684;
        case 0x12b688u: goto label_12b688;
        case 0x12b68cu: goto label_12b68c;
        case 0x12b690u: goto label_12b690;
        case 0x12b694u: goto label_12b694;
        case 0x12b698u: goto label_12b698;
        case 0x12b69cu: goto label_12b69c;
        case 0x12b6a0u: goto label_12b6a0;
        case 0x12b6a4u: goto label_12b6a4;
        case 0x12b6a8u: goto label_12b6a8;
        case 0x12b6acu: goto label_12b6ac;
        case 0x12b6b0u: goto label_12b6b0;
        case 0x12b6b4u: goto label_12b6b4;
        case 0x12b6b8u: goto label_12b6b8;
        case 0x12b6bcu: goto label_12b6bc;
        case 0x12b6c0u: goto label_12b6c0;
        case 0x12b6c4u: goto label_12b6c4;
        case 0x12b6c8u: goto label_12b6c8;
        case 0x12b6ccu: goto label_12b6cc;
        case 0x12b6d0u: goto label_12b6d0;
        case 0x12b6d4u: goto label_12b6d4;
        case 0x12b6d8u: goto label_12b6d8;
        case 0x12b6dcu: goto label_12b6dc;
        case 0x12b6e0u: goto label_12b6e0;
        case 0x12b6e4u: goto label_12b6e4;
        case 0x12b6e8u: goto label_12b6e8;
        case 0x12b6ecu: goto label_12b6ec;
        case 0x12b6f0u: goto label_12b6f0;
        case 0x12b6f4u: goto label_12b6f4;
        case 0x12b6f8u: goto label_12b6f8;
        case 0x12b6fcu: goto label_12b6fc;
        case 0x12b700u: goto label_12b700;
        case 0x12b704u: goto label_12b704;
        case 0x12b708u: goto label_12b708;
        case 0x12b70cu: goto label_12b70c;
        case 0x12b710u: goto label_12b710;
        case 0x12b714u: goto label_12b714;
        case 0x12b718u: goto label_12b718;
        case 0x12b71cu: goto label_12b71c;
        case 0x12b720u: goto label_12b720;
        case 0x12b724u: goto label_12b724;
        case 0x12b728u: goto label_12b728;
        case 0x12b72cu: goto label_12b72c;
        case 0x12b730u: goto label_12b730;
        case 0x12b734u: goto label_12b734;
        case 0x12b738u: goto label_12b738;
        case 0x12b73cu: goto label_12b73c;
        case 0x12b740u: goto label_12b740;
        case 0x12b744u: goto label_12b744;
        case 0x12b748u: goto label_12b748;
        case 0x12b74cu: goto label_12b74c;
        case 0x12b750u: goto label_12b750;
        case 0x12b754u: goto label_12b754;
        case 0x12b758u: goto label_12b758;
        case 0x12b75cu: goto label_12b75c;
        case 0x12b760u: goto label_12b760;
        case 0x12b764u: goto label_12b764;
        case 0x12b768u: goto label_12b768;
        case 0x12b76cu: goto label_12b76c;
        case 0x12b770u: goto label_12b770;
        case 0x12b774u: goto label_12b774;
        case 0x12b778u: goto label_12b778;
        case 0x12b77cu: goto label_12b77c;
        default: break;
    }

    ctx->pc = 0x12b290u;

label_12b290:
    // 0x12b290: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x12b290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_12b294:
    // 0x12b294: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x12b294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_12b298:
    // 0x12b298: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12b298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12b29c:
    // 0x12b29c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12b29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_12b2a0:
    // 0x12b2a0: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x12b2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
label_12b2a4:
    // 0x12b2a4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b2a8:
    // 0x12b2a8: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x12b2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_12b2ac:
    // 0x12b2ac: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b2b0:
    // 0x12b2b0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x12b2b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_12b2b4:
    // 0x12b2b4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x12b2b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_12b2b8:
    // 0x12b2b8: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x12b2b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_12b2bc:
    // 0x12b2bc: 0x1020012a  beqz        $at, . + 4 + (0x12A << 2)
label_12b2c0:
    if (ctx->pc == 0x12B2C0u) {
        ctx->pc = 0x12B2C4u;
        goto label_12b2c4;
    }
    ctx->pc = 0x12B2BCu;
    {
        const bool branch_taken_0x12b2bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b2bc) {
            ctx->pc = 0x12B768u;
            goto label_12b768;
        }
    }
    ctx->pc = 0x12B2C4u;
label_12b2c4:
    // 0x12b2c4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x12b2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_12b2c8:
    // 0x12b2c8: 0x2464e480  addiu       $a0, $v1, -0x1B80
    ctx->pc = 0x12b2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960256));
label_12b2cc:
    // 0x12b2cc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x12b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_12b2d0:
    // 0x12b2d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12b2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_12b2d4:
    // 0x12b2d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x12b2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12b2d8:
    // 0x12b2d8: 0x600008  jr          $v1
label_12b2dc:
    if (ctx->pc == 0x12B2DCu) {
        ctx->pc = 0x12B2E0u;
        goto label_12b2e0;
    }
    ctx->pc = 0x12B2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B2D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12B2E0u;
label_12b2e0:
    // 0x12b2e0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b2e4:
    // 0x12b2e4: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12b2e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_12b2e8:
    // 0x12b2e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12b2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_12b2ec:
    // 0x12b2ec: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x12b2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_12b2f0:
    // 0x12b2f0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12b2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_12b2f4:
    // 0x12b2f4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_12b2f8:
    if (ctx->pc == 0x12B2F8u) {
        ctx->pc = 0x12B2FCu;
        goto label_12b2fc;
    }
    ctx->pc = 0x12B2F4u;
    {
        const bool branch_taken_0x12b2f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12b2f4) {
            ctx->pc = 0x12B324u;
            goto label_12b324;
        }
    }
    ctx->pc = 0x12B2FCu;
label_12b2fc:
    // 0x12b2fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b300:
    // 0x12b300: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b304:
    // 0x12b304: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12b304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_12b308:
    // 0x12b308: 0x24063c05  addiu       $a2, $zero, 0x3C05
    ctx->pc = 0x12b308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15365));
label_12b30c:
    // 0x12b30c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12b30cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b310:
    // 0x12b310: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12b310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12b314:
    // 0x12b314: 0xc0965d0  jal         func_259740
label_12b318:
    if (ctx->pc == 0x12B318u) {
        ctx->pc = 0x12B31Cu;
        goto label_12b31c;
    }
    ctx->pc = 0x12B314u;
    SET_GPR_U32(ctx, 31, 0x12B31Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12B314u, 0x12B31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B31Cu;
label_12b31c:
    // 0x12b31c: 0x10000009  b           . + 4 + (0x9 << 2)
label_12b320:
    if (ctx->pc == 0x12B320u) {
        ctx->pc = 0x12B324u;
        goto label_12b324;
    }
    ctx->pc = 0x12B31Cu;
    {
        const bool branch_taken_0x12b31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b31c) {
            ctx->pc = 0x12B344u;
            goto label_12b344;
        }
    }
    ctx->pc = 0x12B324u;
label_12b324:
    // 0x12b324: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b328:
    // 0x12b328: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b32c:
    // 0x12b32c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12b32cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_12b330:
    // 0x12b330: 0x24063c04  addiu       $a2, $zero, 0x3C04
    ctx->pc = 0x12b330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15364));
label_12b334:
    // 0x12b334: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12b334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b338:
    // 0x12b338: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12b338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12b33c:
    // 0x12b33c: 0xc0965d0  jal         func_259740
label_12b340:
    if (ctx->pc == 0x12B340u) {
        ctx->pc = 0x12B344u;
        goto label_12b344;
    }
    ctx->pc = 0x12B33Cu;
    SET_GPR_U32(ctx, 31, 0x12B344u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12B33Cu, 0x12B344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B344u;
label_12b344:
    // 0x12b344: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b348:
    // 0x12b348: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12b348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_12b34c:
    // 0x12b34c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_12b350:
    // 0x12b350: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12b350u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_12b354:
    // 0x12b354: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b358:
    // 0x12b358: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12b358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_12b35c:
    // 0x12b35c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x12b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_12b360:
    // 0x12b360: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x12b360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_12b364:
    // 0x12b364: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x12b364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_12b368:
    // 0x12b368: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b36c:
    // 0x12b36c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12b36cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12b370:
    // 0x12b370: 0xc096b40  jal         func_25AD00
label_12b374:
    if (ctx->pc == 0x12B374u) {
        ctx->pc = 0x12B378u;
        goto label_12b378;
    }
    ctx->pc = 0x12B370u;
    SET_GPR_U32(ctx, 31, 0x12B378u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12B370u, 0x12B378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B378u;
label_12b378:
    // 0x12b378: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b37c:
    // 0x12b37c: 0xc05cd10  jal         func_173440
label_12b380:
    if (ctx->pc == 0x12B380u) {
        ctx->pc = 0x12B384u;
        goto label_12b384;
    }
    ctx->pc = 0x12B37Cu;
    SET_GPR_U32(ctx, 31, 0x12B384u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12B37Cu, 0x12B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B384u;
label_12b384:
    // 0x12b384: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b388:
    // 0x12b388: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12b388u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12b38c:
    // 0x12b38c: 0xc05cec4  jal         func_173B10
label_12b390:
    if (ctx->pc == 0x12B390u) {
        ctx->pc = 0x12B394u;
        goto label_12b394;
    }
    ctx->pc = 0x12B38Cu;
    SET_GPR_U32(ctx, 31, 0x12B394u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12B38Cu, 0x12B394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B394u;
label_12b394:
    // 0x12b394: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b398:
    // 0x12b398: 0xc0974dc  jal         func_25D370
label_12b39c:
    if (ctx->pc == 0x12B39Cu) {
        ctx->pc = 0x12B3A0u;
        goto label_12b3a0;
    }
    ctx->pc = 0x12B398u;
    SET_GPR_U32(ctx, 31, 0x12B3A0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12B398u, 0x12B3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3A0u;
label_12b3a0:
    // 0x12b3a0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b3a4:
    // 0x12b3a4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12b3a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_12b3a8:
    // 0x12b3a8: 0x106000ef  beqz        $v1, . + 4 + (0xEF << 2)
label_12b3ac:
    if (ctx->pc == 0x12B3ACu) {
        ctx->pc = 0x12B3B0u;
        goto label_12b3b0;
    }
    ctx->pc = 0x12B3A8u;
    {
        const bool branch_taken_0x12b3a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b3a8) {
            ctx->pc = 0x12B768u;
            goto label_12b768;
        }
    }
    ctx->pc = 0x12B3B0u;
label_12b3b0:
    // 0x12b3b0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b3b4:
    // 0x12b3b4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x12b3b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_12b3b8:
    // 0x12b3b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12b3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_12b3bc:
    // 0x12b3bc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12b3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_12b3c0:
    // 0x12b3c0: 0x100000e9  b           . + 4 + (0xE9 << 2)
label_12b3c4:
    if (ctx->pc == 0x12B3C4u) {
        ctx->pc = 0x12B3C8u;
        goto label_12b3c8;
    }
    ctx->pc = 0x12B3C0u;
    {
        const bool branch_taken_0x12b3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b3c0) {
            ctx->pc = 0x12B768u;
            goto label_12b768;
        }
    }
    ctx->pc = 0x12B3C8u;
label_12b3c8:
    // 0x12b3c8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b3cc:
    // 0x12b3cc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x12b3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b3d0:
    // 0x12b3d0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x12b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_12b3d4:
    // 0x12b3d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12b3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_12b3d8:
    // 0x12b3d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12b3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12b3dc:
    // 0x12b3dc: 0x0  nop
    ctx->pc = 0x12b3dcu;
    // NOP
label_12b3e0:
    // 0x12b3e0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x12b3e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_12b3e4:
    // 0x12b3e4: 0xc058fec  jal         func_163FB0
label_12b3e8:
    if (ctx->pc == 0x12B3E8u) {
        ctx->pc = 0x12B3ECu;
        goto label_12b3ec;
    }
    ctx->pc = 0x12B3E4u;
    SET_GPR_U32(ctx, 31, 0x12B3ECu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x12B3E4u, 0x12B3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3ECu;
label_12b3ec:
    // 0x12b3ec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b3f0:
    // 0x12b3f0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12b3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_12b3f4:
    // 0x12b3f4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b3f8:
    // 0x12b3f8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b3fc:
    // 0x12b3fc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12b3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_12b400:
    // 0x12b400: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x12b400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
label_12b404:
    // 0x12b404: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12b404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b408:
    // 0x12b408: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12b408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12b40c:
    // 0x12b40c: 0xc0965d0  jal         func_259740
label_12b410:
    if (ctx->pc == 0x12B410u) {
        ctx->pc = 0x12B414u;
        goto label_12b414;
    }
    ctx->pc = 0x12B40Cu;
    SET_GPR_U32(ctx, 31, 0x12B414u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12B40Cu, 0x12B414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B414u;
label_12b414:
    // 0x12b414: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x12b414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_12b418:
    // 0x12b418: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12b418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_12b41c:
    // 0x12b41c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12b41cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12b420:
    // 0x12b420: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12b420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12b424:
    // 0x12b424: 0xc067844  jal         func_19E110
label_12b428:
    if (ctx->pc == 0x12B428u) {
        ctx->pc = 0x12B42Cu;
        goto label_12b42c;
    }
    ctx->pc = 0x12B424u;
    SET_GPR_U32(ctx, 31, 0x12B42Cu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x12B424u, 0x12B42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B42Cu;
label_12b42c:
    // 0x12b42c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b430:
    // 0x12b430: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x12b430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_12b434:
    // 0x12b434: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x12b434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_12b438:
    // 0x12b438: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x12b438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_12b43c:
    // 0x12b43c: 0xc040c9e  jal         func_103278
label_12b440:
    if (ctx->pc == 0x12B440u) {
        ctx->pc = 0x12B444u;
        goto label_12b444;
    }
    ctx->pc = 0x12B43Cu;
    SET_GPR_U32(ctx, 31, 0x12B444u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12B444u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12B444u) { return; }
    ctx->pc = 0x12B444u;
label_12b444:
    // 0x12b444: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b448:
    // 0x12b448: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x12b448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_12b44c:
    // 0x12b44c: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x12b44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_12b450:
    // 0x12b450: 0xc0675a4  jal         func_19D690
label_12b454:
    if (ctx->pc == 0x12B454u) {
        ctx->pc = 0x12B458u;
        goto label_12b458;
    }
    ctx->pc = 0x12B450u;
    SET_GPR_U32(ctx, 31, 0x12B458u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12B450u, 0x12B458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B458u;
label_12b458:
    // 0x12b458: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b45c:
    // 0x12b45c: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x12b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_12b460:
    // 0x12b460: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b464:
    // 0x12b464: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x12b464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_12b468:
    // 0x12b468: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x12b468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_12b46c:
    // 0x12b46c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x12b46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12b470:
    // 0x12b470: 0x24460080  addiu       $a2, $v0, 0x80
    ctx->pc = 0x12b470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_12b474:
    // 0x12b474: 0xc040c00  jal         func_103000
label_12b478:
    if (ctx->pc == 0x12B478u) {
        ctx->pc = 0x12B47Cu;
        goto label_12b47c;
    }
    ctx->pc = 0x12B474u;
    SET_GPR_U32(ctx, 31, 0x12B47Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x12B47Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12B47Cu) { return; }
    ctx->pc = 0x12B47Cu;
label_12b47c:
    // 0x12b47c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b480:
    // 0x12b480: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12b480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_12b484:
    // 0x12b484: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_12b488:
    // 0x12b488: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12b488u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_12b48c:
    // 0x12b48c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b490:
    // 0x12b490: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12b490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_12b494:
    // 0x12b494: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x12b494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_12b498:
    // 0x12b498: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x12b498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_12b49c:
    // 0x12b49c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x12b49cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_12b4a0:
    // 0x12b4a0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b4a4:
    // 0x12b4a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12b4a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12b4a8:
    // 0x12b4a8: 0xc096b40  jal         func_25AD00
label_12b4ac:
    if (ctx->pc == 0x12B4ACu) {
        ctx->pc = 0x12B4B0u;
        goto label_12b4b0;
    }
    ctx->pc = 0x12B4A8u;
    SET_GPR_U32(ctx, 31, 0x12B4B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12B4A8u, 0x12B4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B4B0u;
label_12b4b0:
    // 0x12b4b0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b4b4:
    // 0x12b4b4: 0xc05cd10  jal         func_173440
label_12b4b8:
    if (ctx->pc == 0x12B4B8u) {
        ctx->pc = 0x12B4BCu;
        goto label_12b4bc;
    }
    ctx->pc = 0x12B4B4u;
    SET_GPR_U32(ctx, 31, 0x12B4BCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12B4B4u, 0x12B4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B4BCu;
label_12b4bc:
    // 0x12b4bc: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b4c0:
    // 0x12b4c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12b4c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12b4c4:
    // 0x12b4c4: 0xc05cec4  jal         func_173B10
label_12b4c8:
    if (ctx->pc == 0x12B4C8u) {
        ctx->pc = 0x12B4CCu;
        goto label_12b4cc;
    }
    ctx->pc = 0x12B4C4u;
    SET_GPR_U32(ctx, 31, 0x12B4CCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12B4C4u, 0x12B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B4CCu;
label_12b4cc:
    // 0x12b4cc: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b4d0:
    // 0x12b4d0: 0xc0974dc  jal         func_25D370
label_12b4d4:
    if (ctx->pc == 0x12B4D4u) {
        ctx->pc = 0x12B4D8u;
        goto label_12b4d8;
    }
    ctx->pc = 0x12B4D0u;
    SET_GPR_U32(ctx, 31, 0x12B4D8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12B4D0u, 0x12B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B4D8u;
label_12b4d8:
    // 0x12b4d8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b4dc:
    // 0x12b4dc: 0x906309e6  lbu         $v1, 0x9E6($v1)
    ctx->pc = 0x12b4dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2534)));
label_12b4e0:
    // 0x12b4e0: 0x146000a1  bnez        $v1, . + 4 + (0xA1 << 2)
label_12b4e4:
    if (ctx->pc == 0x12B4E4u) {
        ctx->pc = 0x12B4E8u;
        goto label_12b4e8;
    }
    ctx->pc = 0x12B4E0u;
    {
        const bool branch_taken_0x12b4e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b4e0) {
            ctx->pc = 0x12B768u;
            goto label_12b768;
        }
    }
    ctx->pc = 0x12B4E8u;
label_12b4e8:
    // 0x12b4e8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b4ec:
    // 0x12b4ec: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x12b4ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_12b4f0:
    // 0x12b4f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12b4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_12b4f4:
    // 0x12b4f4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12b4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_12b4f8:
    // 0x12b4f8: 0x1000009b  b           . + 4 + (0x9B << 2)
label_12b4fc:
    if (ctx->pc == 0x12B4FCu) {
        ctx->pc = 0x12B500u;
        goto label_12b500;
    }
    ctx->pc = 0x12B4F8u;
    {
        const bool branch_taken_0x12b4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b4f8) {
            ctx->pc = 0x12B768u;
            goto label_12b768;
        }
    }
    ctx->pc = 0x12B500u;
label_12b500:
    // 0x12b500: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b504:
    // 0x12b504: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12b504u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_12b508:
    // 0x12b508: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12b508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_12b50c:
    // 0x12b50c: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x12b50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_12b510:
    // 0x12b510: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12b510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_12b514:
    // 0x12b514: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_12b518:
    if (ctx->pc == 0x12B518u) {
        ctx->pc = 0x12B51Cu;
        goto label_12b51c;
    }
    ctx->pc = 0x12B514u;
    {
        const bool branch_taken_0x12b514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12b514) {
            ctx->pc = 0x12B528u;
            goto label_12b528;
        }
    }
    ctx->pc = 0x12B51Cu;
label_12b51c:
    // 0x12b51c: 0x2411003d  addiu       $s1, $zero, 0x3D
    ctx->pc = 0x12b51cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_12b520:
    // 0x12b520: 0x10000002  b           . + 4 + (0x2 << 2)
label_12b524:
    if (ctx->pc == 0x12B524u) {
        ctx->pc = 0x12B528u;
        goto label_12b528;
    }
    ctx->pc = 0x12B520u;
    {
        const bool branch_taken_0x12b520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b520) {
            ctx->pc = 0x12B52Cu;
            goto label_12b52c;
        }
    }
    ctx->pc = 0x12B528u;
label_12b528:
    // 0x12b528: 0x2411003c  addiu       $s1, $zero, 0x3C
    ctx->pc = 0x12b528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_12b52c:
    // 0x12b52c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b530:
    // 0x12b530: 0x36263c00  ori         $a2, $s1, 0x3C00
    ctx->pc = 0x12b530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)15360);
label_12b534:
    // 0x12b534: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b538:
    // 0x12b538: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12b538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_12b53c:
    // 0x12b53c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12b53cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b540:
    // 0x12b540: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12b540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12b544:
    // 0x12b544: 0xc0965d0  jal         func_259740
label_12b548:
    if (ctx->pc == 0x12B548u) {
        ctx->pc = 0x12B54Cu;
        goto label_12b54c;
    }
    ctx->pc = 0x12B544u;
    SET_GPR_U32(ctx, 31, 0x12B54Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12B544u, 0x12B54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B54Cu;
label_12b54c:
    // 0x12b54c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b550:
    // 0x12b550: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x12b550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12b554:
    // 0x12b554: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12b554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_12b558:
    // 0x12b558: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12b558u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_12b55c:
    // 0x12b55c: 0xa602008c  sh          $v0, 0x8C($s0)
    ctx->pc = 0x12b55cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 140), (uint16_t)GPR_U32(ctx, 2));
label_12b560:
    // 0x12b560: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b564:
    // 0x12b564: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12b564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_12b568:
    // 0x12b568: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_12b56c:
    // 0x12b56c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12b56cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_12b570:
    // 0x12b570: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b574:
    // 0x12b574: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x12b574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_12b578:
    // 0x12b578: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12b578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_12b57c:
    // 0x12b57c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_12b580:
    // 0x12b580: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x12b580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_12b584:
    // 0x12b584: 0xc0675b0  jal         func_19D6C0
label_12b588:
    if (ctx->pc == 0x12B588u) {
        ctx->pc = 0x12B58Cu;
        goto label_12b58c;
    }
    ctx->pc = 0x12B584u;
    SET_GPR_U32(ctx, 31, 0x12B58Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12B584u, 0x12B58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B58Cu;
label_12b58c:
    // 0x12b58c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b590:
    // 0x12b590: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x12b590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_12b594:
    // 0x12b594: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12b594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_12b598:
    // 0x12b598: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x12b598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_12b59c:
    // 0x12b59c: 0xc0675a8  jal         func_19D6A0
label_12b5a0:
    if (ctx->pc == 0x12B5A0u) {
        ctx->pc = 0x12B5A4u;
        goto label_12b5a4;
    }
    ctx->pc = 0x12B59Cu;
    SET_GPR_U32(ctx, 31, 0x12B5A4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x12B59Cu, 0x12B5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B5A4u;
label_12b5a4:
    // 0x12b5a4: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x12b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
label_12b5a8:
    // 0x12b5a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12b5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_12b5ac:
    // 0x12b5ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x12b5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_12b5b0:
    // 0x12b5b0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b5b4:
    // 0x12b5b4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b5b8:
    // 0x12b5b8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b5bc:
    // 0x12b5bc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x12b5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_12b5c0:
    // 0x12b5c0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x12b5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12b5c4:
    // 0x12b5c4: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x12b5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
label_12b5c8:
    // 0x12b5c8: 0xc05c848  jal         func_172120
label_12b5cc:
    if (ctx->pc == 0x12B5CCu) {
        ctx->pc = 0x12B5D0u;
        goto label_12b5d0;
    }
    ctx->pc = 0x12B5C8u;
    SET_GPR_U32(ctx, 31, 0x12B5D0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x12B5C8u, 0x12B5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B5D0u;
label_12b5d0:
    // 0x12b5d0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x12b5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_12b5d4:
    // 0x12b5d4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b5d8:
    // 0x12b5d8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x12b5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b5dc:
    // 0x12b5dc: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x12b5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b5e0:
    // 0x12b5e0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x12b5e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12b5e4:
    // 0x12b5e4: 0xc058fec  jal         func_163FB0
label_12b5e8:
    if (ctx->pc == 0x12B5E8u) {
        ctx->pc = 0x12B5ECu;
        goto label_12b5ec;
    }
    ctx->pc = 0x12B5E4u;
    SET_GPR_U32(ctx, 31, 0x12B5ECu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x12B5E4u, 0x12B5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B5ECu;
label_12b5ec:
    // 0x12b5ec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b5f0:
    // 0x12b5f0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12b5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_12b5f4:
    // 0x12b5f4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b5f8:
    // 0x12b5f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12b5f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12b5fc:
    // 0x12b5fc: 0xc096b40  jal         func_25AD00
label_12b600:
    if (ctx->pc == 0x12B600u) {
        ctx->pc = 0x12B604u;
        goto label_12b604;
    }
    ctx->pc = 0x12B5FCu;
    SET_GPR_U32(ctx, 31, 0x12B604u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12B5FCu, 0x12B604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B604u;
label_12b604:
    // 0x12b604: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b608:
    // 0x12b608: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b60c:
    // 0x12b60c: 0xc4610180  lwc1        $f1, 0x180($v1)
    ctx->pc = 0x12b60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b610:
    // 0x12b610: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x12b610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b614:
    // 0x12b614: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x12b614u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_12b618:
    // 0x12b618: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b61c:
    // 0x12b61c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b620:
    // 0x12b620: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x12b620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b624:
    // 0x12b624: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x12b624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b628:
    // 0x12b628: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x12b628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_12b62c:
    // 0x12b62c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x12b62cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_12b630:
    // 0x12b630: 0xc06757c  jal         func_19D5F0
label_12b634:
    if (ctx->pc == 0x12B634u) {
        ctx->pc = 0x12B638u;
        goto label_12b638;
    }
    ctx->pc = 0x12B630u;
    SET_GPR_U32(ctx, 31, 0x12B638u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x12B630u, 0x12B638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B638u;
label_12b638:
    // 0x12b638: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x12b638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_12b63c:
    // 0x12b63c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b640:
    // 0x12b640: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x12b640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_12b644:
    // 0x12b644: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12b644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_12b648:
    // 0x12b648: 0xc040c9e  jal         func_103278
label_12b64c:
    if (ctx->pc == 0x12B64Cu) {
        ctx->pc = 0x12B650u;
        goto label_12b650;
    }
    ctx->pc = 0x12B648u;
    SET_GPR_U32(ctx, 31, 0x12B650u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12B650u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12B650u) { return; }
    ctx->pc = 0x12B650u;
label_12b650:
    // 0x12b650: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b654:
    // 0x12b654: 0xc05cd10  jal         func_173440
label_12b658:
    if (ctx->pc == 0x12B658u) {
        ctx->pc = 0x12B65Cu;
        goto label_12b65c;
    }
    ctx->pc = 0x12B654u;
    SET_GPR_U32(ctx, 31, 0x12B65Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12B654u, 0x12B65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B65Cu;
label_12b65c:
    // 0x12b65c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b660:
    // 0x12b660: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x12b660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_12b664:
    // 0x12b664: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12b664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_12b668:
    // 0x12b668: 0xc040c9e  jal         func_103278
label_12b66c:
    if (ctx->pc == 0x12B66Cu) {
        ctx->pc = 0x12B670u;
        goto label_12b670;
    }
    ctx->pc = 0x12B668u;
    SET_GPR_U32(ctx, 31, 0x12B670u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12B670u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12B670u) { return; }
    ctx->pc = 0x12B670u;
label_12b670:
    // 0x12b670: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b674:
    // 0x12b674: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12b674u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12b678:
    // 0x12b678: 0xc05cec4  jal         func_173B10
label_12b67c:
    if (ctx->pc == 0x12B67Cu) {
        ctx->pc = 0x12B680u;
        goto label_12b680;
    }
    ctx->pc = 0x12B678u;
    SET_GPR_U32(ctx, 31, 0x12B680u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12B678u, 0x12B680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B680u;
label_12b680:
    // 0x12b680: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b684:
    // 0x12b684: 0xc0974dc  jal         func_25D370
label_12b688:
    if (ctx->pc == 0x12B688u) {
        ctx->pc = 0x12B68Cu;
        goto label_12b68c;
    }
    ctx->pc = 0x12B684u;
    SET_GPR_U32(ctx, 31, 0x12B68Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12B684u, 0x12B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B68Cu;
label_12b68c:
    // 0x12b68c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b690:
    // 0x12b690: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x12b690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_12b694:
    // 0x12b694: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12b694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_12b698:
    // 0x12b698: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x12b698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_12b69c:
    // 0x12b69c: 0xc0675b0  jal         func_19D6C0
label_12b6a0:
    if (ctx->pc == 0x12B6A0u) {
        ctx->pc = 0x12B6A4u;
        goto label_12b6a4;
    }
    ctx->pc = 0x12B69Cu;
    SET_GPR_U32(ctx, 31, 0x12B6A4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12B69Cu, 0x12B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B6A4u;
label_12b6a4:
    // 0x12b6a4: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x12b6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b6a8:
    // 0x12b6a8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x12b6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b6ac:
    // 0x12b6ac: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x12b6acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_12b6b0:
    // 0x12b6b0: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x12b6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b6b4:
    // 0x12b6b4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x12b6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b6b8:
    // 0x12b6b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x12b6b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_12b6bc:
    // 0x12b6bc: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x12b6bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_12b6c0:
    // 0x12b6c0: 0xc06757c  jal         func_19D5F0
label_12b6c4:
    if (ctx->pc == 0x12B6C4u) {
        ctx->pc = 0x12B6C8u;
        goto label_12b6c8;
    }
    ctx->pc = 0x12B6C0u;
    SET_GPR_U32(ctx, 31, 0x12B6C8u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x12B6C0u, 0x12B6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B6C8u;
label_12b6c8:
    // 0x12b6c8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x12b6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_12b6cc:
    // 0x12b6cc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b6d0:
    // 0x12b6d0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12b6d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_12b6d4:
    // 0x12b6d4: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_12b6d8:
    if (ctx->pc == 0x12B6D8u) {
        ctx->pc = 0x12B6DCu;
        goto label_12b6dc;
    }
    ctx->pc = 0x12B6D4u;
    {
        const bool branch_taken_0x12b6d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b6d4) {
            ctx->pc = 0x12B768u;
            goto label_12b768;
        }
    }
    ctx->pc = 0x12B6DCu;
label_12b6dc:
    // 0x12b6dc: 0x8603008c  lh          $v1, 0x8C($s0)
    ctx->pc = 0x12b6dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 140)));
label_12b6e0:
    // 0x12b6e0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_12b6e4:
    if (ctx->pc == 0x12B6E4u) {
        ctx->pc = 0x12B6E8u;
        goto label_12b6e8;
    }
    ctx->pc = 0x12B6E0u;
    {
        const bool branch_taken_0x12b6e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b6e0) {
            ctx->pc = 0x12B6F4u;
            goto label_12b6f4;
        }
    }
    ctx->pc = 0x12B6E8u;
label_12b6e8:
    // 0x12b6e8: 0x8603008c  lh          $v1, 0x8C($s0)
    ctx->pc = 0x12b6e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 140)));
label_12b6ec:
    // 0x12b6ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12b6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_12b6f0:
    // 0x12b6f0: 0xa603008c  sh          $v1, 0x8C($s0)
    ctx->pc = 0x12b6f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 140), (uint16_t)GPR_U32(ctx, 3));
label_12b6f4:
    // 0x12b6f4: 0x8603008c  lh          $v1, 0x8C($s0)
    ctx->pc = 0x12b6f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 140)));
label_12b6f8:
    // 0x12b6f8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_12b6fc:
    if (ctx->pc == 0x12B6FCu) {
        ctx->pc = 0x12B700u;
        goto label_12b700;
    }
    ctx->pc = 0x12B6F8u;
    {
        const bool branch_taken_0x12b6f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b6f8) {
            ctx->pc = 0x12B728u;
            goto label_12b728;
        }
    }
    ctx->pc = 0x12B700u;
label_12b700:
    // 0x12b700: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b704:
    // 0x12b704: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12b704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b708:
    // 0x12b708: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x12b708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
label_12b70c:
    // 0x12b70c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x12b70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_12b710:
    // 0x12b710: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12b710u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12b714:
    // 0x12b714: 0x0  nop
    ctx->pc = 0x12b714u;
    // NOP
label_12b718:
    // 0x12b718: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12b718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12b71c:
    // 0x12b71c: 0x0  nop
    ctx->pc = 0x12b71cu;
    // NOP
label_12b720:
    // 0x12b720: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_12b724:
    if (ctx->pc == 0x12B724u) {
        ctx->pc = 0x12B728u;
        goto label_12b728;
    }
    ctx->pc = 0x12B720u;
    {
        const bool branch_taken_0x12b720 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12b720) {
            ctx->pc = 0x12B768u;
            goto label_12b768;
        }
    }
    ctx->pc = 0x12B728u;
label_12b728:
    // 0x12b728: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12b728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b72c:
    // 0x12b72c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b730:
    // 0x12b730: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12b730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12b734:
    // 0x12b734: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12b734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_12b738:
    // 0x12b738: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b73c:
    // 0x12b73c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12b73cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12b740:
    // 0x12b740: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b744:
    // 0x12b744: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12b744u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12b748:
    // 0x12b748: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b74c:
    // 0x12b74c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12b74cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12b750:
    // 0x12b750: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12b754:
    // 0x12b754: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12b754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12b758:
    // 0x12b758: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x12b758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_12b75c:
    // 0x12b75c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x12b75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_12b760:
    // 0x12b760: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x12b760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_12b764:
    // 0x12b764: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12b764u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
label_12b768:
    // 0x12b768: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x12b768u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12b76c:
    // 0x12b76c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12b76cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12b770:
    // 0x12b770: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12b770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12b774:
    // 0x12b774: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x12b774u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_12b778:
    // 0x12b778: 0x3e00008  jr          $ra
label_12b77c:
    if (ctx->pc == 0x12B77Cu) {
        ctx->pc = 0x12B780u;
        goto label_fallthrough_0x12b778;
    }
    ctx->pc = 0x12B778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12b778:
    ctx->pc = 0x12B780u;
}
