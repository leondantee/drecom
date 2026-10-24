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

// Function: Pl_r1_d_sky_die
// Address: 0x26f2d0 - 0x26f838
void Pl_r1_d_sky_die_0x26f2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_d_sky_die_0x26f2d0");
#endif

    switch (ctx->pc) {
        case 0x26f2d0u: goto label_26f2d0;
        case 0x26f2d4u: goto label_26f2d4;
        case 0x26f2d8u: goto label_26f2d8;
        case 0x26f2dcu: goto label_26f2dc;
        case 0x26f2e0u: goto label_26f2e0;
        case 0x26f2e4u: goto label_26f2e4;
        case 0x26f2e8u: goto label_26f2e8;
        case 0x26f2ecu: goto label_26f2ec;
        case 0x26f2f0u: goto label_26f2f0;
        case 0x26f2f4u: goto label_26f2f4;
        case 0x26f2f8u: goto label_26f2f8;
        case 0x26f2fcu: goto label_26f2fc;
        case 0x26f300u: goto label_26f300;
        case 0x26f304u: goto label_26f304;
        case 0x26f308u: goto label_26f308;
        case 0x26f30cu: goto label_26f30c;
        case 0x26f310u: goto label_26f310;
        case 0x26f314u: goto label_26f314;
        case 0x26f318u: goto label_26f318;
        case 0x26f31cu: goto label_26f31c;
        case 0x26f320u: goto label_26f320;
        case 0x26f324u: goto label_26f324;
        case 0x26f328u: goto label_26f328;
        case 0x26f32cu: goto label_26f32c;
        case 0x26f330u: goto label_26f330;
        case 0x26f334u: goto label_26f334;
        case 0x26f338u: goto label_26f338;
        case 0x26f33cu: goto label_26f33c;
        case 0x26f340u: goto label_26f340;
        case 0x26f344u: goto label_26f344;
        case 0x26f348u: goto label_26f348;
        case 0x26f34cu: goto label_26f34c;
        case 0x26f350u: goto label_26f350;
        case 0x26f354u: goto label_26f354;
        case 0x26f358u: goto label_26f358;
        case 0x26f35cu: goto label_26f35c;
        case 0x26f360u: goto label_26f360;
        case 0x26f364u: goto label_26f364;
        case 0x26f368u: goto label_26f368;
        case 0x26f36cu: goto label_26f36c;
        case 0x26f370u: goto label_26f370;
        case 0x26f374u: goto label_26f374;
        case 0x26f378u: goto label_26f378;
        case 0x26f37cu: goto label_26f37c;
        case 0x26f380u: goto label_26f380;
        case 0x26f384u: goto label_26f384;
        case 0x26f388u: goto label_26f388;
        case 0x26f38cu: goto label_26f38c;
        case 0x26f390u: goto label_26f390;
        case 0x26f394u: goto label_26f394;
        case 0x26f398u: goto label_26f398;
        case 0x26f39cu: goto label_26f39c;
        case 0x26f3a0u: goto label_26f3a0;
        case 0x26f3a4u: goto label_26f3a4;
        case 0x26f3a8u: goto label_26f3a8;
        case 0x26f3acu: goto label_26f3ac;
        case 0x26f3b0u: goto label_26f3b0;
        case 0x26f3b4u: goto label_26f3b4;
        case 0x26f3b8u: goto label_26f3b8;
        case 0x26f3bcu: goto label_26f3bc;
        case 0x26f3c0u: goto label_26f3c0;
        case 0x26f3c4u: goto label_26f3c4;
        case 0x26f3c8u: goto label_26f3c8;
        case 0x26f3ccu: goto label_26f3cc;
        case 0x26f3d0u: goto label_26f3d0;
        case 0x26f3d4u: goto label_26f3d4;
        case 0x26f3d8u: goto label_26f3d8;
        case 0x26f3dcu: goto label_26f3dc;
        case 0x26f3e0u: goto label_26f3e0;
        case 0x26f3e4u: goto label_26f3e4;
        case 0x26f3e8u: goto label_26f3e8;
        case 0x26f3ecu: goto label_26f3ec;
        case 0x26f3f0u: goto label_26f3f0;
        case 0x26f3f4u: goto label_26f3f4;
        case 0x26f3f8u: goto label_26f3f8;
        case 0x26f3fcu: goto label_26f3fc;
        case 0x26f400u: goto label_26f400;
        case 0x26f404u: goto label_26f404;
        case 0x26f408u: goto label_26f408;
        case 0x26f40cu: goto label_26f40c;
        case 0x26f410u: goto label_26f410;
        case 0x26f414u: goto label_26f414;
        case 0x26f418u: goto label_26f418;
        case 0x26f41cu: goto label_26f41c;
        case 0x26f420u: goto label_26f420;
        case 0x26f424u: goto label_26f424;
        case 0x26f428u: goto label_26f428;
        case 0x26f42cu: goto label_26f42c;
        case 0x26f430u: goto label_26f430;
        case 0x26f434u: goto label_26f434;
        case 0x26f438u: goto label_26f438;
        case 0x26f43cu: goto label_26f43c;
        case 0x26f440u: goto label_26f440;
        case 0x26f444u: goto label_26f444;
        case 0x26f448u: goto label_26f448;
        case 0x26f44cu: goto label_26f44c;
        case 0x26f450u: goto label_26f450;
        case 0x26f454u: goto label_26f454;
        case 0x26f458u: goto label_26f458;
        case 0x26f45cu: goto label_26f45c;
        case 0x26f460u: goto label_26f460;
        case 0x26f464u: goto label_26f464;
        case 0x26f468u: goto label_26f468;
        case 0x26f46cu: goto label_26f46c;
        case 0x26f470u: goto label_26f470;
        case 0x26f474u: goto label_26f474;
        case 0x26f478u: goto label_26f478;
        case 0x26f47cu: goto label_26f47c;
        case 0x26f480u: goto label_26f480;
        case 0x26f484u: goto label_26f484;
        case 0x26f488u: goto label_26f488;
        case 0x26f48cu: goto label_26f48c;
        case 0x26f490u: goto label_26f490;
        case 0x26f494u: goto label_26f494;
        case 0x26f498u: goto label_26f498;
        case 0x26f49cu: goto label_26f49c;
        case 0x26f4a0u: goto label_26f4a0;
        case 0x26f4a4u: goto label_26f4a4;
        case 0x26f4a8u: goto label_26f4a8;
        case 0x26f4acu: goto label_26f4ac;
        case 0x26f4b0u: goto label_26f4b0;
        case 0x26f4b4u: goto label_26f4b4;
        case 0x26f4b8u: goto label_26f4b8;
        case 0x26f4bcu: goto label_26f4bc;
        case 0x26f4c0u: goto label_26f4c0;
        case 0x26f4c4u: goto label_26f4c4;
        case 0x26f4c8u: goto label_26f4c8;
        case 0x26f4ccu: goto label_26f4cc;
        case 0x26f4d0u: goto label_26f4d0;
        case 0x26f4d4u: goto label_26f4d4;
        case 0x26f4d8u: goto label_26f4d8;
        case 0x26f4dcu: goto label_26f4dc;
        case 0x26f4e0u: goto label_26f4e0;
        case 0x26f4e4u: goto label_26f4e4;
        case 0x26f4e8u: goto label_26f4e8;
        case 0x26f4ecu: goto label_26f4ec;
        case 0x26f4f0u: goto label_26f4f0;
        case 0x26f4f4u: goto label_26f4f4;
        case 0x26f4f8u: goto label_26f4f8;
        case 0x26f4fcu: goto label_26f4fc;
        case 0x26f500u: goto label_26f500;
        case 0x26f504u: goto label_26f504;
        case 0x26f508u: goto label_26f508;
        case 0x26f50cu: goto label_26f50c;
        case 0x26f510u: goto label_26f510;
        case 0x26f514u: goto label_26f514;
        case 0x26f518u: goto label_26f518;
        case 0x26f51cu: goto label_26f51c;
        case 0x26f520u: goto label_26f520;
        case 0x26f524u: goto label_26f524;
        case 0x26f528u: goto label_26f528;
        case 0x26f52cu: goto label_26f52c;
        case 0x26f530u: goto label_26f530;
        case 0x26f534u: goto label_26f534;
        case 0x26f538u: goto label_26f538;
        case 0x26f53cu: goto label_26f53c;
        case 0x26f540u: goto label_26f540;
        case 0x26f544u: goto label_26f544;
        case 0x26f548u: goto label_26f548;
        case 0x26f54cu: goto label_26f54c;
        case 0x26f550u: goto label_26f550;
        case 0x26f554u: goto label_26f554;
        case 0x26f558u: goto label_26f558;
        case 0x26f55cu: goto label_26f55c;
        case 0x26f560u: goto label_26f560;
        case 0x26f564u: goto label_26f564;
        case 0x26f568u: goto label_26f568;
        case 0x26f56cu: goto label_26f56c;
        case 0x26f570u: goto label_26f570;
        case 0x26f574u: goto label_26f574;
        case 0x26f578u: goto label_26f578;
        case 0x26f57cu: goto label_26f57c;
        case 0x26f580u: goto label_26f580;
        case 0x26f584u: goto label_26f584;
        case 0x26f588u: goto label_26f588;
        case 0x26f58cu: goto label_26f58c;
        case 0x26f590u: goto label_26f590;
        case 0x26f594u: goto label_26f594;
        case 0x26f598u: goto label_26f598;
        case 0x26f59cu: goto label_26f59c;
        case 0x26f5a0u: goto label_26f5a0;
        case 0x26f5a4u: goto label_26f5a4;
        case 0x26f5a8u: goto label_26f5a8;
        case 0x26f5acu: goto label_26f5ac;
        case 0x26f5b0u: goto label_26f5b0;
        case 0x26f5b4u: goto label_26f5b4;
        case 0x26f5b8u: goto label_26f5b8;
        case 0x26f5bcu: goto label_26f5bc;
        case 0x26f5c0u: goto label_26f5c0;
        case 0x26f5c4u: goto label_26f5c4;
        case 0x26f5c8u: goto label_26f5c8;
        case 0x26f5ccu: goto label_26f5cc;
        case 0x26f5d0u: goto label_26f5d0;
        case 0x26f5d4u: goto label_26f5d4;
        case 0x26f5d8u: goto label_26f5d8;
        case 0x26f5dcu: goto label_26f5dc;
        case 0x26f5e0u: goto label_26f5e0;
        case 0x26f5e4u: goto label_26f5e4;
        case 0x26f5e8u: goto label_26f5e8;
        case 0x26f5ecu: goto label_26f5ec;
        case 0x26f5f0u: goto label_26f5f0;
        case 0x26f5f4u: goto label_26f5f4;
        case 0x26f5f8u: goto label_26f5f8;
        case 0x26f5fcu: goto label_26f5fc;
        case 0x26f600u: goto label_26f600;
        case 0x26f604u: goto label_26f604;
        case 0x26f608u: goto label_26f608;
        case 0x26f60cu: goto label_26f60c;
        case 0x26f610u: goto label_26f610;
        case 0x26f614u: goto label_26f614;
        case 0x26f618u: goto label_26f618;
        case 0x26f61cu: goto label_26f61c;
        case 0x26f620u: goto label_26f620;
        case 0x26f624u: goto label_26f624;
        case 0x26f628u: goto label_26f628;
        case 0x26f62cu: goto label_26f62c;
        case 0x26f630u: goto label_26f630;
        case 0x26f634u: goto label_26f634;
        case 0x26f638u: goto label_26f638;
        case 0x26f63cu: goto label_26f63c;
        case 0x26f640u: goto label_26f640;
        case 0x26f644u: goto label_26f644;
        case 0x26f648u: goto label_26f648;
        case 0x26f64cu: goto label_26f64c;
        case 0x26f650u: goto label_26f650;
        case 0x26f654u: goto label_26f654;
        case 0x26f658u: goto label_26f658;
        case 0x26f65cu: goto label_26f65c;
        case 0x26f660u: goto label_26f660;
        case 0x26f664u: goto label_26f664;
        case 0x26f668u: goto label_26f668;
        case 0x26f66cu: goto label_26f66c;
        case 0x26f670u: goto label_26f670;
        case 0x26f674u: goto label_26f674;
        case 0x26f678u: goto label_26f678;
        case 0x26f67cu: goto label_26f67c;
        case 0x26f680u: goto label_26f680;
        case 0x26f684u: goto label_26f684;
        case 0x26f688u: goto label_26f688;
        case 0x26f68cu: goto label_26f68c;
        case 0x26f690u: goto label_26f690;
        case 0x26f694u: goto label_26f694;
        case 0x26f698u: goto label_26f698;
        case 0x26f69cu: goto label_26f69c;
        case 0x26f6a0u: goto label_26f6a0;
        case 0x26f6a4u: goto label_26f6a4;
        case 0x26f6a8u: goto label_26f6a8;
        case 0x26f6acu: goto label_26f6ac;
        case 0x26f6b0u: goto label_26f6b0;
        case 0x26f6b4u: goto label_26f6b4;
        case 0x26f6b8u: goto label_26f6b8;
        case 0x26f6bcu: goto label_26f6bc;
        case 0x26f6c0u: goto label_26f6c0;
        case 0x26f6c4u: goto label_26f6c4;
        case 0x26f6c8u: goto label_26f6c8;
        case 0x26f6ccu: goto label_26f6cc;
        case 0x26f6d0u: goto label_26f6d0;
        case 0x26f6d4u: goto label_26f6d4;
        case 0x26f6d8u: goto label_26f6d8;
        case 0x26f6dcu: goto label_26f6dc;
        case 0x26f6e0u: goto label_26f6e0;
        case 0x26f6e4u: goto label_26f6e4;
        case 0x26f6e8u: goto label_26f6e8;
        case 0x26f6ecu: goto label_26f6ec;
        case 0x26f6f0u: goto label_26f6f0;
        case 0x26f6f4u: goto label_26f6f4;
        case 0x26f6f8u: goto label_26f6f8;
        case 0x26f6fcu: goto label_26f6fc;
        case 0x26f700u: goto label_26f700;
        case 0x26f704u: goto label_26f704;
        case 0x26f708u: goto label_26f708;
        case 0x26f70cu: goto label_26f70c;
        case 0x26f710u: goto label_26f710;
        case 0x26f714u: goto label_26f714;
        case 0x26f718u: goto label_26f718;
        case 0x26f71cu: goto label_26f71c;
        case 0x26f720u: goto label_26f720;
        case 0x26f724u: goto label_26f724;
        case 0x26f728u: goto label_26f728;
        case 0x26f72cu: goto label_26f72c;
        case 0x26f730u: goto label_26f730;
        case 0x26f734u: goto label_26f734;
        case 0x26f738u: goto label_26f738;
        case 0x26f73cu: goto label_26f73c;
        case 0x26f740u: goto label_26f740;
        case 0x26f744u: goto label_26f744;
        case 0x26f748u: goto label_26f748;
        case 0x26f74cu: goto label_26f74c;
        case 0x26f750u: goto label_26f750;
        case 0x26f754u: goto label_26f754;
        case 0x26f758u: goto label_26f758;
        case 0x26f75cu: goto label_26f75c;
        case 0x26f760u: goto label_26f760;
        case 0x26f764u: goto label_26f764;
        case 0x26f768u: goto label_26f768;
        case 0x26f76cu: goto label_26f76c;
        case 0x26f770u: goto label_26f770;
        case 0x26f774u: goto label_26f774;
        case 0x26f778u: goto label_26f778;
        case 0x26f77cu: goto label_26f77c;
        case 0x26f780u: goto label_26f780;
        case 0x26f784u: goto label_26f784;
        case 0x26f788u: goto label_26f788;
        case 0x26f78cu: goto label_26f78c;
        case 0x26f790u: goto label_26f790;
        case 0x26f794u: goto label_26f794;
        case 0x26f798u: goto label_26f798;
        case 0x26f79cu: goto label_26f79c;
        case 0x26f7a0u: goto label_26f7a0;
        case 0x26f7a4u: goto label_26f7a4;
        case 0x26f7a8u: goto label_26f7a8;
        case 0x26f7acu: goto label_26f7ac;
        case 0x26f7b0u: goto label_26f7b0;
        case 0x26f7b4u: goto label_26f7b4;
        case 0x26f7b8u: goto label_26f7b8;
        case 0x26f7bcu: goto label_26f7bc;
        case 0x26f7c0u: goto label_26f7c0;
        case 0x26f7c4u: goto label_26f7c4;
        case 0x26f7c8u: goto label_26f7c8;
        case 0x26f7ccu: goto label_26f7cc;
        case 0x26f7d0u: goto label_26f7d0;
        case 0x26f7d4u: goto label_26f7d4;
        case 0x26f7d8u: goto label_26f7d8;
        case 0x26f7dcu: goto label_26f7dc;
        case 0x26f7e0u: goto label_26f7e0;
        case 0x26f7e4u: goto label_26f7e4;
        case 0x26f7e8u: goto label_26f7e8;
        case 0x26f7ecu: goto label_26f7ec;
        case 0x26f7f0u: goto label_26f7f0;
        case 0x26f7f4u: goto label_26f7f4;
        case 0x26f7f8u: goto label_26f7f8;
        case 0x26f7fcu: goto label_26f7fc;
        case 0x26f800u: goto label_26f800;
        case 0x26f804u: goto label_26f804;
        case 0x26f808u: goto label_26f808;
        case 0x26f80cu: goto label_26f80c;
        case 0x26f810u: goto label_26f810;
        case 0x26f814u: goto label_26f814;
        case 0x26f818u: goto label_26f818;
        case 0x26f81cu: goto label_26f81c;
        case 0x26f820u: goto label_26f820;
        case 0x26f824u: goto label_26f824;
        case 0x26f828u: goto label_26f828;
        case 0x26f82cu: goto label_26f82c;
        case 0x26f830u: goto label_26f830;
        case 0x26f834u: goto label_26f834;
        default: break;
    }

    ctx->pc = 0x26f2d0u;

label_26f2d0:
    // 0x26f2d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26f2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_26f2d4:
    // 0x26f2d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x26f2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_26f2d8:
    // 0x26f2d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26f2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_26f2dc:
    // 0x26f2dc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x26f2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_26f2e0:
    // 0x26f2e0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x26f2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_26f2e4:
    // 0x26f2e4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x26f2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_26f2e8:
    // 0x26f2e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f2ec:
    // 0x26f2ec: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x26f2ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_26f2f0:
    // 0x26f2f0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x26f2f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_26f2f4:
    // 0x26f2f4: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x26f2f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_26f2f8:
    // 0x26f2f8: 0x1020014a  beqz        $at, . + 4 + (0x14A << 2)
label_26f2fc:
    if (ctx->pc == 0x26F2FCu) {
        ctx->pc = 0x26F300u;
        goto label_26f300;
    }
    ctx->pc = 0x26F2F8u;
    {
        const bool branch_taken_0x26f2f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f2f8) {
            ctx->pc = 0x26F824u;
            goto label_26f824;
        }
    }
    ctx->pc = 0x26F300u;
label_26f300:
    // 0x26f300: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x26f300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_26f304:
    // 0x26f304: 0x24641520  addiu       $a0, $v1, 0x1520
    ctx->pc = 0x26f304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5408));
label_26f308:
    // 0x26f308: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x26f308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_26f30c:
    // 0x26f30c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26f30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_26f310:
    // 0x26f310: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x26f310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26f314:
    // 0x26f314: 0x600008  jr          $v1
label_26f318:
    if (ctx->pc == 0x26F318u) {
        ctx->pc = 0x26F31Cu;
        goto label_26f31c;
    }
    ctx->pc = 0x26F314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F314u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26F31Cu;
label_26f31c:
    // 0x26f31c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x26f31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_26f320:
    // 0x26f320: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f324:
    // 0x26f324: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x26f324u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_26f328:
    // 0x26f328: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f32c:
    // 0x26f32c: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x26f32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26f330:
    // 0x26f330: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f334:
    // 0x26f334: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x26f334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_26f338:
    // 0x26f338: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f33c:
    // 0x26f33c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f340:
    // 0x26f340: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26f340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_26f344:
    // 0x26f344: 0x24061e6c  addiu       $a2, $zero, 0x1E6C
    ctx->pc = 0x26f344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7788));
label_26f348:
    // 0x26f348: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26f348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f34c:
    // 0x26f34c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26f34cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26f350:
    // 0x26f350: 0xc0965d0  jal         func_259740
label_26f354:
    if (ctx->pc == 0x26F354u) {
        ctx->pc = 0x26F358u;
        goto label_26f358;
    }
    ctx->pc = 0x26F350u;
    SET_GPR_U32(ctx, 31, 0x26F358u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26F350u, 0x26F358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F358u;
label_26f358:
    // 0x26f358: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26f358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_26f35c:
    // 0x26f35c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26f35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26f360:
    // 0x26f360: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f364:
    // 0x26f364: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x26f364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
label_26f368:
    // 0x26f368: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x26f368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_26f36c:
    // 0x26f36c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26f36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26f370:
    // 0x26f370: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f374:
    // 0x26f374: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x26f374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
label_26f378:
    // 0x26f378: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f37c:
    // 0x26f37c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_26f380:
    // 0x26f380: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x26f380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_26f384:
    // 0x26f384: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26f384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_26f388:
    // 0x26f388: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x26f388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_26f38c:
    // 0x26f38c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f390:
    // 0x26f390: 0xa44013c0  sh          $zero, 0x13C0($v0)
    ctx->pc = 0x26f390u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5056), (uint16_t)GPR_U32(ctx, 0));
label_26f394:
    // 0x26f394: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x26f394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_26f398:
    // 0x26f398: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f39c:
    // 0x26f39c: 0xa44313c2  sh          $v1, 0x13C2($v0)
    ctx->pc = 0x26f39cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5058), (uint16_t)GPR_U32(ctx, 3));
label_26f3a0:
    // 0x26f3a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f3a4:
    // 0x26f3a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x26f3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_26f3a8:
    // 0x26f3a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x26f3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_26f3ac:
    // 0x26f3ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x26f3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_26f3b0:
    // 0x26f3b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x26f3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_26f3b4:
    // 0x26f3b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26f3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_26f3b8:
    // 0x26f3b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26f3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_26f3bc:
    // 0x26f3bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26f3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_26f3c0:
    // 0x26f3c0: 0x34440112  ori         $a0, $v0, 0x112
    ctx->pc = 0x26f3c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)274);
label_26f3c4:
    // 0x26f3c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f3c8:
    // 0x26f3c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f3c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26f3cc:
    // 0x26f3cc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x26f3ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26f3d0:
    // 0x26f3d0: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x26f3d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_26f3d4:
    // 0x26f3d4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x26f3d4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26f3d8:
    // 0x26f3d8: 0xc06371c  jal         func_18DC70
label_26f3dc:
    if (ctx->pc == 0x26F3DCu) {
        ctx->pc = 0x26F3E0u;
        goto label_26f3e0;
    }
    ctx->pc = 0x26F3D8u;
    SET_GPR_U32(ctx, 31, 0x26F3E0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x26F3D8u, 0x26F3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F3E0u;
label_26f3e0:
    // 0x26f3e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f3e4:
    // 0x26f3e4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26f3e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_26f3e8:
    // 0x26f3e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26f3ec:
    // 0x26f3ec: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x26f3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_26f3f0:
    // 0x26f3f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f3f4:
    // 0x26f3f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f3f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26f3f8:
    // 0x26f3f8: 0xc096b40  jal         func_25AD00
label_26f3fc:
    if (ctx->pc == 0x26F3FCu) {
        ctx->pc = 0x26F400u;
        goto label_26f400;
    }
    ctx->pc = 0x26F3F8u;
    SET_GPR_U32(ctx, 31, 0x26F400u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26F3F8u, 0x26F400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F400u;
label_26f400:
    // 0x26f400: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f404:
    // 0x26f404: 0xc05cd10  jal         func_173440
label_26f408:
    if (ctx->pc == 0x26F408u) {
        ctx->pc = 0x26F40Cu;
        goto label_26f40c;
    }
    ctx->pc = 0x26F404u;
    SET_GPR_U32(ctx, 31, 0x26F40Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x26F404u, 0x26F40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F40Cu;
label_26f40c:
    // 0x26f40c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26f40cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26f410:
    // 0x26f410: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f414:
    // 0x26f414: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f414u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26f418:
    // 0x26f418: 0xc0574f4  jal         func_15D3D0
label_26f41c:
    if (ctx->pc == 0x26F41Cu) {
        ctx->pc = 0x26F420u;
        goto label_26f420;
    }
    ctx->pc = 0x26F418u;
    SET_GPR_U32(ctx, 31, 0x26F420u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26F418u, 0x26F420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F420u;
label_26f420:
    // 0x26f420: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26f420u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26f424:
    // 0x26f424: 0xc097530  jal         func_25D4C0
label_26f428:
    if (ctx->pc == 0x26F428u) {
        ctx->pc = 0x26F42Cu;
        goto label_26f42c;
    }
    ctx->pc = 0x26F424u;
    SET_GPR_U32(ctx, 31, 0x26F42Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26F424u, 0x26F42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F42Cu;
label_26f42c:
    // 0x26f42c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f430:
    // 0x26f430: 0xc4611b58  lwc1        $f1, 0x1B58($v1)
    ctx->pc = 0x26f430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26f434:
    // 0x26f434: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26f438:
    // 0x26f438: 0x0  nop
    ctx->pc = 0x26f438u;
    // NOP
label_26f43c:
    // 0x26f43c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26f43cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26f440:
    // 0x26f440: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26f440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f444:
    // 0x26f444: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_26f448:
    if (ctx->pc == 0x26F448u) {
        ctx->pc = 0x26F44Cu;
        goto label_26f44c;
    }
    ctx->pc = 0x26F444u;
    {
        const bool branch_taken_0x26f444 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f444) {
            ctx->pc = 0x26F450u;
            goto label_26f450;
        }
    }
    ctx->pc = 0x26F44Cu;
label_26f44c:
    // 0x26f44c: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x26f44cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26f450:
    // 0x26f450: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f454:
    // 0x26f454: 0xc4811b54  lwc1        $f1, 0x1B54($a0)
    ctx->pc = 0x26f454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26f458:
    // 0x26f458: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x26f458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_26f45c:
    // 0x26f45c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26f45cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26f460:
    // 0x26f460: 0x0  nop
    ctx->pc = 0x26f460u;
    // NOP
label_26f464:
    // 0x26f464: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26f464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26f468:
    // 0x26f468: 0xe4801b54  swc1        $f0, 0x1B54($a0)
    ctx->pc = 0x26f468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6996), bits); }
label_26f46c:
    // 0x26f46c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f470:
    // 0x26f470: 0xc4811b58  lwc1        $f1, 0x1B58($a0)
    ctx->pc = 0x26f470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26f474:
    // 0x26f474: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x26f474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
label_26f478:
    // 0x26f478: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26f478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26f47c:
    // 0x26f47c: 0x0  nop
    ctx->pc = 0x26f47cu;
    // NOP
label_26f480:
    // 0x26f480: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26f480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26f484:
    // 0x26f484: 0xe4801b58  swc1        $f0, 0x1B58($a0)
    ctx->pc = 0x26f484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7000), bits); }
label_26f488:
    // 0x26f488: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f48c:
    // 0x26f48c: 0xc4611b58  lwc1        $f1, 0x1B58($v1)
    ctx->pc = 0x26f48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26f490:
    // 0x26f490: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x26f490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_26f494:
    // 0x26f494: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26f494u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26f498:
    // 0x26f498: 0x0  nop
    ctx->pc = 0x26f498u;
    // NOP
label_26f49c:
    // 0x26f49c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26f49cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26f4a0:
    // 0x26f4a0: 0x0  nop
    ctx->pc = 0x26f4a0u;
    // NOP
label_26f4a4:
    // 0x26f4a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_26f4a8:
    if (ctx->pc == 0x26F4A8u) {
        ctx->pc = 0x26F4ACu;
        goto label_26f4ac;
    }
    ctx->pc = 0x26F4A4u;
    {
        const bool branch_taken_0x26f4a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f4a4) {
            ctx->pc = 0x26F4BCu;
            goto label_26f4bc;
        }
    }
    ctx->pc = 0x26F4ACu;
label_26f4ac:
    // 0x26f4ac: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x26f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_26f4b0:
    // 0x26f4b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26f4b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26f4b4:
    // 0x26f4b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f4b8:
    // 0x26f4b8: 0xe4601b58  swc1        $f0, 0x1B58($v1)
    ctx->pc = 0x26f4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7000), bits); }
label_26f4bc:
    // 0x26f4bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f4c0:
    // 0x26f4c0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26f4c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_26f4c4:
    // 0x26f4c4: 0x106000d7  beqz        $v1, . + 4 + (0xD7 << 2)
label_26f4c8:
    if (ctx->pc == 0x26F4C8u) {
        ctx->pc = 0x26F4CCu;
        goto label_26f4cc;
    }
    ctx->pc = 0x26F4C4u;
    {
        const bool branch_taken_0x26f4c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f4c4) {
            ctx->pc = 0x26F824u;
            goto label_26f824;
        }
    }
    ctx->pc = 0x26F4CCu;
label_26f4cc:
    // 0x26f4cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f4d0:
    // 0x26f4d0: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x26f4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
label_26f4d4:
    // 0x26f4d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26f4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_26f4d8:
    // 0x26f4d8: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x26f4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_26f4dc:
    // 0x26f4dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_26f4e0:
    // 0x26f4e0: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x26f4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_26f4e4:
    // 0x26f4e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26f4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_26f4e8:
    // 0x26f4e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26f4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_26f4ec:
    // 0x26f4ec: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x26f4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_26f4f0:
    // 0x26f4f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f4f4:
    // 0x26f4f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f4f8:
    // 0x26f4f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f4fc:
    // 0x26f4fc: 0x8c841340  lw          $a0, 0x1340($a0)
    ctx->pc = 0x26f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4928)));
label_26f500:
    // 0x26f500: 0x8c651330  lw          $a1, 0x1330($v1)
    ctx->pc = 0x26f500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
label_26f504:
    // 0x26f504: 0x8c461338  lw          $a2, 0x1338($v0)
    ctx->pc = 0x26f504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
label_26f508:
    // 0x26f508: 0xc050f5c  jal         func_143D70
label_26f50c:
    if (ctx->pc == 0x26F50Cu) {
        ctx->pc = 0x26F510u;
        goto label_26f510;
    }
    ctx->pc = 0x26F508u;
    SET_GPR_U32(ctx, 31, 0x26F510u);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x26F508u, 0x26F510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F510u;
label_26f510:
    // 0x26f510: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f514:
    // 0x26f514: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x26f514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_26f518:
    // 0x26f518: 0xa0600090  sb          $zero, 0x90($v1)
    ctx->pc = 0x26f518u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 144), (uint8_t)GPR_U32(ctx, 0));
label_26f51c:
    // 0x26f51c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f520:
    // 0x26f520: 0xac6013e8  sw          $zero, 0x13E8($v1)
    ctx->pc = 0x26f520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5096), GPR_U32(ctx, 0));
label_26f524:
    // 0x26f524: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f528:
    // 0x26f528: 0xac6013ec  sw          $zero, 0x13EC($v1)
    ctx->pc = 0x26f528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5100), GPR_U32(ctx, 0));
label_26f52c:
    // 0x26f52c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x26f52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f530:
    // 0x26f530: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x26f530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_26f534:
    // 0x26f534: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x26f534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
label_26f538:
    // 0x26f538: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26f538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_26f53c:
    // 0x26f53c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26f53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_26f540:
    // 0x26f540: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x26f540u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_26f544:
    // 0x26f544: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f548:
    // 0x26f548: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x26f548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_26f54c:
    // 0x26f54c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_26f550:
    // 0x26f550: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x26f550u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_26f554:
    // 0x26f554: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_26f558:
    if (ctx->pc == 0x26F558u) {
        ctx->pc = 0x26F55Cu;
        goto label_26f55c;
    }
    ctx->pc = 0x26F554u;
    {
        const bool branch_taken_0x26f554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f554) {
            ctx->pc = 0x26F824u;
            goto label_26f824;
        }
    }
    ctx->pc = 0x26F55Cu;
label_26f55c:
    // 0x26f55c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f560:
    // 0x26f560: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f564:
    // 0x26f564: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26f564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_26f568:
    // 0x26f568: 0x2406051b  addiu       $a2, $zero, 0x51B
    ctx->pc = 0x26f568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1307));
label_26f56c:
    // 0x26f56c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26f56cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f570:
    // 0x26f570: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26f570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26f574:
    // 0x26f574: 0xc0965d0  jal         func_259740
label_26f578:
    if (ctx->pc == 0x26F578u) {
        ctx->pc = 0x26F57Cu;
        goto label_26f57c;
    }
    ctx->pc = 0x26F574u;
    SET_GPR_U32(ctx, 31, 0x26F57Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26F574u, 0x26F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F57Cu;
label_26f57c:
    // 0x26f57c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f580:
    // 0x26f580: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26f580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_26f584:
    // 0x26f584: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x26f584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_26f588:
    // 0x26f588: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26f588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_26f58c:
    // 0x26f58c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_26f590:
    if (ctx->pc == 0x26F590u) {
        ctx->pc = 0x26F594u;
        goto label_26f594;
    }
    ctx->pc = 0x26F58Cu;
    {
        const bool branch_taken_0x26f58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f58c) {
            ctx->pc = 0x26F5A0u;
            goto label_26f5a0;
        }
    }
    ctx->pc = 0x26F594u;
label_26f594:
    // 0x26f594: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26f598:
    // 0x26f598: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f59c:
    // 0x26f59c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x26f59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_26f5a0:
    // 0x26f5a0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x26f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_26f5a4:
    // 0x26f5a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26f5a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26f5a8:
    // 0x26f5a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f5ac:
    // 0x26f5ac: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x26f5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_26f5b0:
    // 0x26f5b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f5b4:
    // 0x26f5b4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26f5b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_26f5b8:
    // 0x26f5b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26f5bc:
    // 0x26f5bc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x26f5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_26f5c0:
    // 0x26f5c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f5c4:
    // 0x26f5c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f5c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26f5c8:
    // 0x26f5c8: 0xc096b40  jal         func_25AD00
label_26f5cc:
    if (ctx->pc == 0x26F5CCu) {
        ctx->pc = 0x26F5D0u;
        goto label_26f5d0;
    }
    ctx->pc = 0x26F5C8u;
    SET_GPR_U32(ctx, 31, 0x26F5D0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26F5C8u, 0x26F5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5D0u;
label_26f5d0:
    // 0x26f5d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f5d4:
    // 0x26f5d4: 0xc05cd10  jal         func_173440
label_26f5d8:
    if (ctx->pc == 0x26F5D8u) {
        ctx->pc = 0x26F5DCu;
        goto label_26f5dc;
    }
    ctx->pc = 0x26F5D4u;
    SET_GPR_U32(ctx, 31, 0x26F5DCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x26F5D4u, 0x26F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5DCu;
label_26f5dc:
    // 0x26f5dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26f5dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26f5e0:
    // 0x26f5e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f5e4:
    // 0x26f5e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f5e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26f5e8:
    // 0x26f5e8: 0xc057480  jal         func_15D200
label_26f5ec:
    if (ctx->pc == 0x26F5ECu) {
        ctx->pc = 0x26F5F0u;
        goto label_26f5f0;
    }
    ctx->pc = 0x26F5E8u;
    SET_GPR_U32(ctx, 31, 0x26F5F0u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x26F5E8u, 0x26F5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5F0u;
label_26f5f0:
    // 0x26f5f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f5f4:
    // 0x26f5f4: 0xc05cf54  jal         func_173D50
label_26f5f8:
    if (ctx->pc == 0x26F5F8u) {
        ctx->pc = 0x26F5FCu;
        goto label_26f5fc;
    }
    ctx->pc = 0x26F5F4u;
    SET_GPR_U32(ctx, 31, 0x26F5FCu);
    ctx->pc = 0x173D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D50u, 0x26F5F4u, 0x26F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5FCu;
label_26f5fc:
    // 0x26f5fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_26f600:
    if (ctx->pc == 0x26F600u) {
        ctx->pc = 0x26F604u;
        goto label_26f604;
    }
    ctx->pc = 0x26F5FCu;
    {
        const bool branch_taken_0x26f5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f5fc) {
            ctx->pc = 0x26F614u;
            goto label_26f614;
        }
    }
    ctx->pc = 0x26F604u;
label_26f604:
    // 0x26f604: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f608:
    // 0x26f608: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26f608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_26f60c:
    // 0x26f60c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26f610:
    // 0x26f610: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x26f610u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_26f614:
    // 0x26f614: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26f614u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26f618:
    // 0x26f618: 0xc097530  jal         func_25D4C0
label_26f61c:
    if (ctx->pc == 0x26F61Cu) {
        ctx->pc = 0x26F620u;
        goto label_26f620;
    }
    ctx->pc = 0x26F618u;
    SET_GPR_U32(ctx, 31, 0x26F620u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26F618u, 0x26F620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F620u;
label_26f620:
    // 0x26f620: 0x10000080  b           . + 4 + (0x80 << 2)
label_26f624:
    if (ctx->pc == 0x26F624u) {
        ctx->pc = 0x26F628u;
        goto label_26f628;
    }
    ctx->pc = 0x26F620u;
    {
        const bool branch_taken_0x26f620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f620) {
            ctx->pc = 0x26F824u;
            goto label_26f824;
        }
    }
    ctx->pc = 0x26F628u;
label_26f628:
    // 0x26f628: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f62c:
    // 0x26f62c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f630:
    // 0x26f630: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26f630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_26f634:
    // 0x26f634: 0x2406005f  addiu       $a2, $zero, 0x5F
    ctx->pc = 0x26f634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_26f638:
    // 0x26f638: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26f638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f63c:
    // 0x26f63c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26f63cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26f640:
    // 0x26f640: 0xc0965d0  jal         func_259740
label_26f644:
    if (ctx->pc == 0x26F644u) {
        ctx->pc = 0x26F648u;
        goto label_26f648;
    }
    ctx->pc = 0x26F640u;
    SET_GPR_U32(ctx, 31, 0x26F648u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26F640u, 0x26F648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F648u;
label_26f648:
    // 0x26f648: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26f648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f64c:
    // 0x26f64c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f650:
    // 0x26f650: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x26f650u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_26f654:
    // 0x26f654: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f658:
    // 0x26f658: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x26f658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26f65c:
    // 0x26f65c: 0x3c02c332  lui         $v0, 0xC332
    ctx->pc = 0x26f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49970 << 16));
label_26f660:
    // 0x26f660: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x26f660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_26f664:
    // 0x26f664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26f664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26f668:
    // 0x26f668: 0x0  nop
    ctx->pc = 0x26f668u;
    // NOP
label_26f66c:
    // 0x26f66c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26f66cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26f670:
    // 0x26f670: 0x0  nop
    ctx->pc = 0x26f670u;
    // NOP
label_26f674:
    // 0x26f674: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_26f678:
    if (ctx->pc == 0x26F678u) {
        ctx->pc = 0x26F67Cu;
        goto label_26f67c;
    }
    ctx->pc = 0x26F674u;
    {
        const bool branch_taken_0x26f674 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f674) {
            ctx->pc = 0x26F6A8u;
            goto label_26f6a8;
        }
    }
    ctx->pc = 0x26F67Cu;
label_26f67c:
    // 0x26f67c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f680:
    // 0x26f680: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f680u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26f684:
    // 0x26f684: 0xc0bc448  jal         func_2F1120
label_26f688:
    if (ctx->pc == 0x26F688u) {
        ctx->pc = 0x26F68Cu;
        goto label_26f68c;
    }
    ctx->pc = 0x26F684u;
    SET_GPR_U32(ctx, 31, 0x26F68Cu);
    ctx->pc = 0x2F1120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1120u, 0x26F684u, 0x26F68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F68Cu;
label_26f68c:
    // 0x26f68c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x26f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_26f690:
    // 0x26f690: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26f690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26f694:
    // 0x26f694: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26f694u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26f698:
    // 0x26f698: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f698u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26f69c:
    // 0x26f69c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x26f69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_26f6a0:
    // 0x26f6a0: 0xc0561d4  jal         func_158750
label_26f6a4:
    if (ctx->pc == 0x26F6A4u) {
        ctx->pc = 0x26F6A8u;
        goto label_26f6a8;
    }
    ctx->pc = 0x26F6A0u;
    SET_GPR_U32(ctx, 31, 0x26F6A8u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x26F6A0u, 0x26F6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F6A8u;
label_26f6a8:
    // 0x26f6a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f6ac:
    // 0x26f6ac: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26f6acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_26f6b0:
    // 0x26f6b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26f6b4:
    // 0x26f6b4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x26f6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_26f6b8:
    // 0x26f6b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f6bc:
    // 0x26f6bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f6bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26f6c0:
    // 0x26f6c0: 0xc096b40  jal         func_25AD00
label_26f6c4:
    if (ctx->pc == 0x26F6C4u) {
        ctx->pc = 0x26F6C8u;
        goto label_26f6c8;
    }
    ctx->pc = 0x26F6C0u;
    SET_GPR_U32(ctx, 31, 0x26F6C8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26F6C0u, 0x26F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F6C8u;
label_26f6c8:
    // 0x26f6c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f6cc:
    // 0x26f6cc: 0xc05cd10  jal         func_173440
label_26f6d0:
    if (ctx->pc == 0x26F6D0u) {
        ctx->pc = 0x26F6D4u;
        goto label_26f6d4;
    }
    ctx->pc = 0x26F6CCu;
    SET_GPR_U32(ctx, 31, 0x26F6D4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x26F6CCu, 0x26F6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F6D4u;
label_26f6d4:
    // 0x26f6d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26f6d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26f6d8:
    // 0x26f6d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f6dc:
    // 0x26f6dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f6dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26f6e0:
    // 0x26f6e0: 0xc0573d8  jal         func_15CF60
label_26f6e4:
    if (ctx->pc == 0x26F6E4u) {
        ctx->pc = 0x26F6E8u;
        goto label_26f6e8;
    }
    ctx->pc = 0x26F6E0u;
    SET_GPR_U32(ctx, 31, 0x26F6E8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x26F6E0u, 0x26F6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F6E8u;
label_26f6e8:
    // 0x26f6e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26f6e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26f6ec:
    // 0x26f6ec: 0xc097530  jal         func_25D4C0
label_26f6f0:
    if (ctx->pc == 0x26F6F0u) {
        ctx->pc = 0x26F6F4u;
        goto label_26f6f4;
    }
    ctx->pc = 0x26F6ECu;
    SET_GPR_U32(ctx, 31, 0x26F6F4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26F6ECu, 0x26F6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F6F4u;
label_26f6f4:
    // 0x26f6f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f6f8:
    // 0x26f6f8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26f6f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_26f6fc:
    // 0x26f6fc: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
label_26f700:
    if (ctx->pc == 0x26F700u) {
        ctx->pc = 0x26F704u;
        goto label_26f704;
    }
    ctx->pc = 0x26F6FCu;
    {
        const bool branch_taken_0x26f6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f6fc) {
            ctx->pc = 0x26F824u;
            goto label_26f824;
        }
    }
    ctx->pc = 0x26F704u;
label_26f704:
    // 0x26f704: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f708:
    // 0x26f708: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x26f708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_26f70c:
    // 0x26f70c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_26f710:
    // 0x26f710: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x26f710u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_26f714:
    // 0x26f714: 0x10000043  b           . + 4 + (0x43 << 2)
label_26f718:
    if (ctx->pc == 0x26F718u) {
        ctx->pc = 0x26F71Cu;
        goto label_26f71c;
    }
    ctx->pc = 0x26F714u;
    {
        const bool branch_taken_0x26f714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f714) {
            ctx->pc = 0x26F824u;
            goto label_26f824;
        }
    }
    ctx->pc = 0x26F71Cu;
label_26f71c:
    // 0x26f71c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f720:
    // 0x26f720: 0xac401390  sw          $zero, 0x1390($v0)
    ctx->pc = 0x26f720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5008), GPR_U32(ctx, 0));
label_26f724:
    // 0x26f724: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f728:
    // 0x26f728: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f72c:
    // 0x26f72c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26f72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_26f730:
    // 0x26f730: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x26f730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_26f734:
    // 0x26f734: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26f734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f738:
    // 0x26f738: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26f738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26f73c:
    // 0x26f73c: 0xc0965d0  jal         func_259740
label_26f740:
    if (ctx->pc == 0x26F740u) {
        ctx->pc = 0x26F744u;
        goto label_26f744;
    }
    ctx->pc = 0x26F73Cu;
    SET_GPR_U32(ctx, 31, 0x26F744u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26F73Cu, 0x26F744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F744u;
label_26f744:
    // 0x26f744: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x26f744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_26f748:
    // 0x26f748: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f74c:
    // 0x26f74c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x26f74cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_26f750:
    // 0x26f750: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x26f750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_26f754:
    // 0x26f754: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f758:
    // 0x26f758: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x26f758u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_26f75c:
    // 0x26f75c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f760:
    // 0x26f760: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26f760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_26f764:
    // 0x26f764: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26f768:
    // 0x26f768: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x26f768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_26f76c:
    // 0x26f76c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f770:
    // 0x26f770: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f770u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26f774:
    // 0x26f774: 0xc096b40  jal         func_25AD00
label_26f778:
    if (ctx->pc == 0x26F778u) {
        ctx->pc = 0x26F77Cu;
        goto label_26f77c;
    }
    ctx->pc = 0x26F774u;
    SET_GPR_U32(ctx, 31, 0x26F77Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26F774u, 0x26F77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F77Cu;
label_26f77c:
    // 0x26f77c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26f77cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26f780:
    // 0x26f780: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f784:
    // 0x26f784: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f784u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26f788:
    // 0x26f788: 0xc0573d8  jal         func_15CF60
label_26f78c:
    if (ctx->pc == 0x26F78Cu) {
        ctx->pc = 0x26F790u;
        goto label_26f790;
    }
    ctx->pc = 0x26F788u;
    SET_GPR_U32(ctx, 31, 0x26F790u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x26F788u, 0x26F790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F790u;
label_26f790:
    // 0x26f790: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26f790u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26f794:
    // 0x26f794: 0xc097530  jal         func_25D4C0
label_26f798:
    if (ctx->pc == 0x26F798u) {
        ctx->pc = 0x26F79Cu;
        goto label_26f79c;
    }
    ctx->pc = 0x26F794u;
    SET_GPR_U32(ctx, 31, 0x26F79Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26F794u, 0x26F79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F79Cu;
label_26f79c:
    // 0x26f79c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f7a0:
    // 0x26f7a0: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x26f7a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
label_26f7a4:
    // 0x26f7a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26f7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_26f7a8:
    // 0x26f7a8: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x26f7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
label_26f7ac:
    // 0x26f7ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f7b0:
    // 0x26f7b0: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x26f7b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
label_26f7b4:
    // 0x26f7b4: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_26f7b8:
    if (ctx->pc == 0x26F7B8u) {
        ctx->pc = 0x26F7BCu;
        goto label_26f7bc;
    }
    ctx->pc = 0x26F7B4u;
    {
        const bool branch_taken_0x26f7b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f7b4) {
            ctx->pc = 0x26F7E4u;
            goto label_26f7e4;
        }
    }
    ctx->pc = 0x26F7BCu;
label_26f7bc:
    // 0x26f7bc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26f7bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26f7c0:
    // 0x26f7c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f7c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26f7c4:
    // 0x26f7c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x26f7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26f7c8:
    // 0x26f7c8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x26f7c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26f7cc:
    // 0x26f7cc: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x26f7ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_26f7d0:
    // 0x26f7d0: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x26f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
label_26f7d4:
    // 0x26f7d4: 0x3449ffff  ori         $t1, $v0, 0xFFFF
    ctx->pc = 0x26f7d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_26f7d8:
    // 0x26f7d8: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x26f7d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_26f7dc:
    // 0x26f7dc: 0xc059190  jal         func_164640
label_26f7e0:
    if (ctx->pc == 0x26F7E0u) {
        ctx->pc = 0x26F7E4u;
        goto label_26f7e4;
    }
    ctx->pc = 0x26F7DCu;
    SET_GPR_U32(ctx, 31, 0x26F7E4u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x26F7DCu, 0x26F7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F7E4u;
label_26f7e4:
    // 0x26f7e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f7e8:
    // 0x26f7e8: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x26f7e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_26f7ec:
    // 0x26f7ec: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_26f7f0:
    if (ctx->pc == 0x26F7F0u) {
        ctx->pc = 0x26F7F4u;
        goto label_26f7f4;
    }
    ctx->pc = 0x26F7ECu;
    {
        const bool branch_taken_0x26f7ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f7ec) {
            ctx->pc = 0x26F80Cu;
            goto label_26f80c;
        }
    }
    ctx->pc = 0x26F7F4u;
label_26f7f4:
    // 0x26f7f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_26f7f8:
    // 0x26f7f8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x26f7f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_26f7fc:
    // 0x26f7fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26f7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_26f800:
    // 0x26f800: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x26f800u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_26f804:
    // 0x26f804: 0x10000007  b           . + 4 + (0x7 << 2)
label_26f808:
    if (ctx->pc == 0x26F808u) {
        ctx->pc = 0x26F80Cu;
        goto label_26f80c;
    }
    ctx->pc = 0x26F804u;
    {
        const bool branch_taken_0x26f804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f804) {
            ctx->pc = 0x26F824u;
            goto label_26f824;
        }
    }
    ctx->pc = 0x26F80Cu;
label_26f80c:
    // 0x26f80c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26f80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_26f810:
    // 0x26f810: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x26f810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6716)));
label_26f814:
    // 0x26f814: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x26f814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_26f818:
    // 0x26f818: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x26f818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_26f81c:
    // 0x26f81c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26f81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_26f820:
    // 0x26f820: 0xac231a3c  sw          $v1, 0x1A3C($at)
    ctx->pc = 0x26f820u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6716), GPR_U32(ctx, 3));
label_26f824:
    // 0x26f824: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x26f824u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26f828:
    // 0x26f828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26f828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26f82c:
    // 0x26f82c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26f82cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26f830:
    // 0x26f830: 0x3e00008  jr          $ra
label_26f834:
    if (ctx->pc == 0x26F834u) {
        ctx->pc = 0x26F838u;
        goto label_fallthrough_0x26f830;
    }
    ctx->pc = 0x26F830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26f830:
    ctx->pc = 0x26F838u;
}
