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

// Function: Sce_at_check
// Address: 0x19c600 - 0x19ca30
void Sce_at_check_0x19c600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_at_check_0x19c600");
#endif

    switch (ctx->pc) {
        case 0x19c600u: goto label_19c600;
        case 0x19c604u: goto label_19c604;
        case 0x19c608u: goto label_19c608;
        case 0x19c60cu: goto label_19c60c;
        case 0x19c610u: goto label_19c610;
        case 0x19c614u: goto label_19c614;
        case 0x19c618u: goto label_19c618;
        case 0x19c61cu: goto label_19c61c;
        case 0x19c620u: goto label_19c620;
        case 0x19c624u: goto label_19c624;
        case 0x19c628u: goto label_19c628;
        case 0x19c62cu: goto label_19c62c;
        case 0x19c630u: goto label_19c630;
        case 0x19c634u: goto label_19c634;
        case 0x19c638u: goto label_19c638;
        case 0x19c63cu: goto label_19c63c;
        case 0x19c640u: goto label_19c640;
        case 0x19c644u: goto label_19c644;
        case 0x19c648u: goto label_19c648;
        case 0x19c64cu: goto label_19c64c;
        case 0x19c650u: goto label_19c650;
        case 0x19c654u: goto label_19c654;
        case 0x19c658u: goto label_19c658;
        case 0x19c65cu: goto label_19c65c;
        case 0x19c660u: goto label_19c660;
        case 0x19c664u: goto label_19c664;
        case 0x19c668u: goto label_19c668;
        case 0x19c66cu: goto label_19c66c;
        case 0x19c670u: goto label_19c670;
        case 0x19c674u: goto label_19c674;
        case 0x19c678u: goto label_19c678;
        case 0x19c67cu: goto label_19c67c;
        case 0x19c680u: goto label_19c680;
        case 0x19c684u: goto label_19c684;
        case 0x19c688u: goto label_19c688;
        case 0x19c68cu: goto label_19c68c;
        case 0x19c690u: goto label_19c690;
        case 0x19c694u: goto label_19c694;
        case 0x19c698u: goto label_19c698;
        case 0x19c69cu: goto label_19c69c;
        case 0x19c6a0u: goto label_19c6a0;
        case 0x19c6a4u: goto label_19c6a4;
        case 0x19c6a8u: goto label_19c6a8;
        case 0x19c6acu: goto label_19c6ac;
        case 0x19c6b0u: goto label_19c6b0;
        case 0x19c6b4u: goto label_19c6b4;
        case 0x19c6b8u: goto label_19c6b8;
        case 0x19c6bcu: goto label_19c6bc;
        case 0x19c6c0u: goto label_19c6c0;
        case 0x19c6c4u: goto label_19c6c4;
        case 0x19c6c8u: goto label_19c6c8;
        case 0x19c6ccu: goto label_19c6cc;
        case 0x19c6d0u: goto label_19c6d0;
        case 0x19c6d4u: goto label_19c6d4;
        case 0x19c6d8u: goto label_19c6d8;
        case 0x19c6dcu: goto label_19c6dc;
        case 0x19c6e0u: goto label_19c6e0;
        case 0x19c6e4u: goto label_19c6e4;
        case 0x19c6e8u: goto label_19c6e8;
        case 0x19c6ecu: goto label_19c6ec;
        case 0x19c6f0u: goto label_19c6f0;
        case 0x19c6f4u: goto label_19c6f4;
        case 0x19c6f8u: goto label_19c6f8;
        case 0x19c6fcu: goto label_19c6fc;
        case 0x19c700u: goto label_19c700;
        case 0x19c704u: goto label_19c704;
        case 0x19c708u: goto label_19c708;
        case 0x19c70cu: goto label_19c70c;
        case 0x19c710u: goto label_19c710;
        case 0x19c714u: goto label_19c714;
        case 0x19c718u: goto label_19c718;
        case 0x19c71cu: goto label_19c71c;
        case 0x19c720u: goto label_19c720;
        case 0x19c724u: goto label_19c724;
        case 0x19c728u: goto label_19c728;
        case 0x19c72cu: goto label_19c72c;
        case 0x19c730u: goto label_19c730;
        case 0x19c734u: goto label_19c734;
        case 0x19c738u: goto label_19c738;
        case 0x19c73cu: goto label_19c73c;
        case 0x19c740u: goto label_19c740;
        case 0x19c744u: goto label_19c744;
        case 0x19c748u: goto label_19c748;
        case 0x19c74cu: goto label_19c74c;
        case 0x19c750u: goto label_19c750;
        case 0x19c754u: goto label_19c754;
        case 0x19c758u: goto label_19c758;
        case 0x19c75cu: goto label_19c75c;
        case 0x19c760u: goto label_19c760;
        case 0x19c764u: goto label_19c764;
        case 0x19c768u: goto label_19c768;
        case 0x19c76cu: goto label_19c76c;
        case 0x19c770u: goto label_19c770;
        case 0x19c774u: goto label_19c774;
        case 0x19c778u: goto label_19c778;
        case 0x19c77cu: goto label_19c77c;
        case 0x19c780u: goto label_19c780;
        case 0x19c784u: goto label_19c784;
        case 0x19c788u: goto label_19c788;
        case 0x19c78cu: goto label_19c78c;
        case 0x19c790u: goto label_19c790;
        case 0x19c794u: goto label_19c794;
        case 0x19c798u: goto label_19c798;
        case 0x19c79cu: goto label_19c79c;
        case 0x19c7a0u: goto label_19c7a0;
        case 0x19c7a4u: goto label_19c7a4;
        case 0x19c7a8u: goto label_19c7a8;
        case 0x19c7acu: goto label_19c7ac;
        case 0x19c7b0u: goto label_19c7b0;
        case 0x19c7b4u: goto label_19c7b4;
        case 0x19c7b8u: goto label_19c7b8;
        case 0x19c7bcu: goto label_19c7bc;
        case 0x19c7c0u: goto label_19c7c0;
        case 0x19c7c4u: goto label_19c7c4;
        case 0x19c7c8u: goto label_19c7c8;
        case 0x19c7ccu: goto label_19c7cc;
        case 0x19c7d0u: goto label_19c7d0;
        case 0x19c7d4u: goto label_19c7d4;
        case 0x19c7d8u: goto label_19c7d8;
        case 0x19c7dcu: goto label_19c7dc;
        case 0x19c7e0u: goto label_19c7e0;
        case 0x19c7e4u: goto label_19c7e4;
        case 0x19c7e8u: goto label_19c7e8;
        case 0x19c7ecu: goto label_19c7ec;
        case 0x19c7f0u: goto label_19c7f0;
        case 0x19c7f4u: goto label_19c7f4;
        case 0x19c7f8u: goto label_19c7f8;
        case 0x19c7fcu: goto label_19c7fc;
        case 0x19c800u: goto label_19c800;
        case 0x19c804u: goto label_19c804;
        case 0x19c808u: goto label_19c808;
        case 0x19c80cu: goto label_19c80c;
        case 0x19c810u: goto label_19c810;
        case 0x19c814u: goto label_19c814;
        case 0x19c818u: goto label_19c818;
        case 0x19c81cu: goto label_19c81c;
        case 0x19c820u: goto label_19c820;
        case 0x19c824u: goto label_19c824;
        case 0x19c828u: goto label_19c828;
        case 0x19c82cu: goto label_19c82c;
        case 0x19c830u: goto label_19c830;
        case 0x19c834u: goto label_19c834;
        case 0x19c838u: goto label_19c838;
        case 0x19c83cu: goto label_19c83c;
        case 0x19c840u: goto label_19c840;
        case 0x19c844u: goto label_19c844;
        case 0x19c848u: goto label_19c848;
        case 0x19c84cu: goto label_19c84c;
        case 0x19c850u: goto label_19c850;
        case 0x19c854u: goto label_19c854;
        case 0x19c858u: goto label_19c858;
        case 0x19c85cu: goto label_19c85c;
        case 0x19c860u: goto label_19c860;
        case 0x19c864u: goto label_19c864;
        case 0x19c868u: goto label_19c868;
        case 0x19c86cu: goto label_19c86c;
        case 0x19c870u: goto label_19c870;
        case 0x19c874u: goto label_19c874;
        case 0x19c878u: goto label_19c878;
        case 0x19c87cu: goto label_19c87c;
        case 0x19c880u: goto label_19c880;
        case 0x19c884u: goto label_19c884;
        case 0x19c888u: goto label_19c888;
        case 0x19c88cu: goto label_19c88c;
        case 0x19c890u: goto label_19c890;
        case 0x19c894u: goto label_19c894;
        case 0x19c898u: goto label_19c898;
        case 0x19c89cu: goto label_19c89c;
        case 0x19c8a0u: goto label_19c8a0;
        case 0x19c8a4u: goto label_19c8a4;
        case 0x19c8a8u: goto label_19c8a8;
        case 0x19c8acu: goto label_19c8ac;
        case 0x19c8b0u: goto label_19c8b0;
        case 0x19c8b4u: goto label_19c8b4;
        case 0x19c8b8u: goto label_19c8b8;
        case 0x19c8bcu: goto label_19c8bc;
        case 0x19c8c0u: goto label_19c8c0;
        case 0x19c8c4u: goto label_19c8c4;
        case 0x19c8c8u: goto label_19c8c8;
        case 0x19c8ccu: goto label_19c8cc;
        case 0x19c8d0u: goto label_19c8d0;
        case 0x19c8d4u: goto label_19c8d4;
        case 0x19c8d8u: goto label_19c8d8;
        case 0x19c8dcu: goto label_19c8dc;
        case 0x19c8e0u: goto label_19c8e0;
        case 0x19c8e4u: goto label_19c8e4;
        case 0x19c8e8u: goto label_19c8e8;
        case 0x19c8ecu: goto label_19c8ec;
        case 0x19c8f0u: goto label_19c8f0;
        case 0x19c8f4u: goto label_19c8f4;
        case 0x19c8f8u: goto label_19c8f8;
        case 0x19c8fcu: goto label_19c8fc;
        case 0x19c900u: goto label_19c900;
        case 0x19c904u: goto label_19c904;
        case 0x19c908u: goto label_19c908;
        case 0x19c90cu: goto label_19c90c;
        case 0x19c910u: goto label_19c910;
        case 0x19c914u: goto label_19c914;
        case 0x19c918u: goto label_19c918;
        case 0x19c91cu: goto label_19c91c;
        case 0x19c920u: goto label_19c920;
        case 0x19c924u: goto label_19c924;
        case 0x19c928u: goto label_19c928;
        case 0x19c92cu: goto label_19c92c;
        case 0x19c930u: goto label_19c930;
        case 0x19c934u: goto label_19c934;
        case 0x19c938u: goto label_19c938;
        case 0x19c93cu: goto label_19c93c;
        case 0x19c940u: goto label_19c940;
        case 0x19c944u: goto label_19c944;
        case 0x19c948u: goto label_19c948;
        case 0x19c94cu: goto label_19c94c;
        case 0x19c950u: goto label_19c950;
        case 0x19c954u: goto label_19c954;
        case 0x19c958u: goto label_19c958;
        case 0x19c95cu: goto label_19c95c;
        case 0x19c960u: goto label_19c960;
        case 0x19c964u: goto label_19c964;
        case 0x19c968u: goto label_19c968;
        case 0x19c96cu: goto label_19c96c;
        case 0x19c970u: goto label_19c970;
        case 0x19c974u: goto label_19c974;
        case 0x19c978u: goto label_19c978;
        case 0x19c97cu: goto label_19c97c;
        case 0x19c980u: goto label_19c980;
        case 0x19c984u: goto label_19c984;
        case 0x19c988u: goto label_19c988;
        case 0x19c98cu: goto label_19c98c;
        case 0x19c990u: goto label_19c990;
        case 0x19c994u: goto label_19c994;
        case 0x19c998u: goto label_19c998;
        case 0x19c99cu: goto label_19c99c;
        case 0x19c9a0u: goto label_19c9a0;
        case 0x19c9a4u: goto label_19c9a4;
        case 0x19c9a8u: goto label_19c9a8;
        case 0x19c9acu: goto label_19c9ac;
        case 0x19c9b0u: goto label_19c9b0;
        case 0x19c9b4u: goto label_19c9b4;
        case 0x19c9b8u: goto label_19c9b8;
        case 0x19c9bcu: goto label_19c9bc;
        case 0x19c9c0u: goto label_19c9c0;
        case 0x19c9c4u: goto label_19c9c4;
        case 0x19c9c8u: goto label_19c9c8;
        case 0x19c9ccu: goto label_19c9cc;
        case 0x19c9d0u: goto label_19c9d0;
        case 0x19c9d4u: goto label_19c9d4;
        case 0x19c9d8u: goto label_19c9d8;
        case 0x19c9dcu: goto label_19c9dc;
        case 0x19c9e0u: goto label_19c9e0;
        case 0x19c9e4u: goto label_19c9e4;
        case 0x19c9e8u: goto label_19c9e8;
        case 0x19c9ecu: goto label_19c9ec;
        case 0x19c9f0u: goto label_19c9f0;
        case 0x19c9f4u: goto label_19c9f4;
        case 0x19c9f8u: goto label_19c9f8;
        case 0x19c9fcu: goto label_19c9fc;
        case 0x19ca00u: goto label_19ca00;
        case 0x19ca04u: goto label_19ca04;
        case 0x19ca08u: goto label_19ca08;
        case 0x19ca0cu: goto label_19ca0c;
        case 0x19ca10u: goto label_19ca10;
        case 0x19ca14u: goto label_19ca14;
        case 0x19ca18u: goto label_19ca18;
        case 0x19ca1cu: goto label_19ca1c;
        case 0x19ca20u: goto label_19ca20;
        case 0x19ca24u: goto label_19ca24;
        case 0x19ca28u: goto label_19ca28;
        case 0x19ca2cu: goto label_19ca2c;
        default: break;
    }

    ctx->pc = 0x19c600u;

label_19c600:
    // 0x19c600: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x19c600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_19c604:
    // 0x19c604: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x19c604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
label_19c608:
    // 0x19c608: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x19c608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_19c60c:
    // 0x19c60c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19c60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_19c610:
    // 0x19c610: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19c610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_19c614:
    // 0x19c614: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19c614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_19c618:
    // 0x19c618: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19c618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_19c61c:
    // 0x19c61c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19c61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_19c620:
    // 0x19c620: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19c620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_19c624:
    // 0x19c624: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19c628:
    // 0x19c628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19c62c:
    // 0x19c62c: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x19c62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
label_19c630:
    // 0x19c630: 0xafa500d8  sw          $a1, 0xD8($sp)
    ctx->pc = 0x19c630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 5));
label_19c634:
    // 0x19c634: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19c634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_19c638:
    // 0x19c638: 0x2457fb90  addiu       $s7, $v0, -0x470
    ctx->pc = 0x19c638u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966160));
label_19c63c:
    // 0x19c63c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x19c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_19c640:
    // 0x19c640: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x19c640u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_19c644:
    // 0x19c644: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x19c644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_19c648:
    // 0x19c648: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x19c648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_19c64c:
    // 0x19c64c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19c64cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c650:
    // 0x19c650: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x19c650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_19c654:
    // 0x19c654: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x19c654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_19c658:
    // 0x19c658: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19c658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_19c65c:
    // 0x19c65c: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x19c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966496)));
label_19c660:
    // 0x19c660: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19c660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_19c664:
    // 0x19c664: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19c664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_19c668:
    // 0x19c668: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_19c66c:
    if (ctx->pc == 0x19C66Cu) {
        ctx->pc = 0x19C670u;
        goto label_19c670;
    }
    ctx->pc = 0x19C668u;
    {
        const bool branch_taken_0x19c668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c668) {
            ctx->pc = 0x19C6B0u;
            goto label_19c6b0;
        }
    }
    ctx->pc = 0x19C670u;
label_19c670:
    // 0x19c670: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x19c670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_19c674:
    // 0x19c674: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x19c674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c678:
    // 0x19c678: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19c678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_19c67c:
    // 0x19c67c: 0xc420fce8  lwc1        $f0, -0x318($at)
    ctx->pc = 0x19c67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19c680:
    // 0x19c680: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19c680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19c684:
    // 0x19c684: 0x0  nop
    ctx->pc = 0x19c684u;
    // NOP
label_19c688:
    // 0x19c688: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_19c68c:
    if (ctx->pc == 0x19C68Cu) {
        ctx->pc = 0x19C690u;
        goto label_19c690;
    }
    ctx->pc = 0x19C688u;
    {
        const bool branch_taken_0x19c688 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19c688) {
            ctx->pc = 0x19C6B0u;
            goto label_19c6b0;
        }
    }
    ctx->pc = 0x19C690u;
label_19c690:
    // 0x19c690: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x19c690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_19c694:
    // 0x19c694: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x19c694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_19c698:
    // 0x19c698: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x19c698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_19c69c:
    // 0x19c69c: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x19c69cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
label_19c6a0:
    // 0x19c6a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19c6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_19c6a4:
    // 0x19c6a4: 0xc420fce8  lwc1        $f0, -0x318($at)
    ctx->pc = 0x19c6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19c6a8:
    // 0x19c6a8: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x19c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_19c6ac:
    // 0x19c6ac: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x19c6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_19c6b0:
    // 0x19c6b0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x19c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_19c6b4:
    // 0x19c6b4: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x19c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_19c6b8:
    // 0x19c6b8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19c6b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_19c6bc:
    // 0x19c6bc: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x19c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_19c6c0:
    // 0x19c6c0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x19c6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_19c6c4:
    // 0x19c6c4: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x19c6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c6c8:
    // 0x19c6c8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x19c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_19c6cc:
    // 0x19c6cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c6ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c6d0:
    // 0x19c6d0: 0x0  nop
    ctx->pc = 0x19c6d0u;
    // NOP
label_19c6d4:
    // 0x19c6d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19c6d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19c6d8:
    // 0x19c6d8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x19c6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_19c6dc:
    // 0x19c6dc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x19c6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_19c6e0:
    // 0x19c6e0: 0xc0675a4  jal         func_19D690
label_19c6e4:
    if (ctx->pc == 0x19C6E4u) {
        ctx->pc = 0x19C6E8u;
        goto label_19c6e8;
    }
    ctx->pc = 0x19C6E0u;
    SET_GPR_U32(ctx, 31, 0x19C6E8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x19C6E0u, 0x19C6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C6E8u;
label_19c6e8:
    // 0x19c6e8: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x19c6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c6ec:
    // 0x19c6ec: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x19c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_19c6f0:
    // 0x19c6f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c6f4:
    // 0x19c6f4: 0x0  nop
    ctx->pc = 0x19c6f4u;
    // NOP
label_19c6f8:
    // 0x19c6f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19c6f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19c6fc:
    // 0x19c6fc: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x19c6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_19c700:
    // 0x19c700: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x19c700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_19c704:
    // 0x19c704: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x19c704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_19c708:
    // 0x19c708: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x19c708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_19c70c:
    // 0x19c70c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x19c70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_19c710:
    // 0x19c710: 0xc040bf4  jal         func_102FD0
label_19c714:
    if (ctx->pc == 0x19C714u) {
        ctx->pc = 0x19C718u;
        goto label_19c718;
    }
    ctx->pc = 0x19C710u;
    SET_GPR_U32(ctx, 31, 0x19C718u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x19C718u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19C718u) { return; }
    ctx->pc = 0x19C718u;
label_19c718:
    // 0x19c718: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x19c718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c71c:
    // 0x19c71c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x19c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_19c720:
    // 0x19c720: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19c720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c724:
    // 0x19c724: 0x0  nop
    ctx->pc = 0x19c724u;
    // NOP
label_19c728:
    // 0x19c728: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19c728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19c72c:
    // 0x19c72c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x19c72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_19c730:
    // 0x19c730: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19c730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_19c734:
    // 0x19c734: 0x8c3e011c  lw          $fp, 0x11C($at)
    ctx->pc = 0x19c734u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 284)));
label_19c738:
    // 0x19c738: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19c738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_19c73c:
    // 0x19c73c: 0x8c230110  lw          $v1, 0x110($at)
    ctx->pc = 0x19c73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 272)));
label_19c740:
    // 0x19c740: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x19c740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_19c744:
    // 0x19c744: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x19c744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_19c748:
    // 0x19c748: 0x2470d390  addiu       $s0, $v1, -0x2C70
    ctx->pc = 0x19c748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955920));
label_19c74c:
    // 0x19c74c: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x19c74cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19c750:
    // 0x19c750: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x19c750u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19c754:
    // 0x19c754: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_19c758:
    if (ctx->pc == 0x19C758u) {
        ctx->pc = 0x19C75Cu;
        goto label_19c75c;
    }
    ctx->pc = 0x19C754u;
    {
        const bool branch_taken_0x19c754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c754) {
            ctx->pc = 0x19C9F0u;
            goto label_19c9f0;
        }
    }
    ctx->pc = 0x19C75Cu;
label_19c75c:
    // 0x19c75c: 0x92030080  lbu         $v1, 0x80($s0)
    ctx->pc = 0x19c75cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
label_19c760:
    // 0x19c760: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19c760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_19c764:
    // 0x19c764: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19c764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_19c768:
    // 0x19c768: 0x1060009f  beqz        $v1, . + 4 + (0x9F << 2)
label_19c76c:
    if (ctx->pc == 0x19C76Cu) {
        ctx->pc = 0x19C770u;
        goto label_19c770;
    }
    ctx->pc = 0x19C768u;
    {
        const bool branch_taken_0x19c768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c768) {
            ctx->pc = 0x19C9E8u;
            goto label_19c9e8;
        }
    }
    ctx->pc = 0x19C770u;
label_19c770:
    // 0x19c770: 0x92030083  lbu         $v1, 0x83($s0)
    ctx->pc = 0x19c770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
label_19c774:
    // 0x19c774: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x19c774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_19c778:
    // 0x19c778: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x19c778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_19c77c:
    // 0x19c77c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19c77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_19c780:
    // 0x19c780: 0x10600099  beqz        $v1, . + 4 + (0x99 << 2)
label_19c784:
    if (ctx->pc == 0x19C784u) {
        ctx->pc = 0x19C788u;
        goto label_19c788;
    }
    ctx->pc = 0x19C780u;
    {
        const bool branch_taken_0x19c780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c780) {
            ctx->pc = 0x19C9E8u;
            goto label_19c9e8;
        }
    }
    ctx->pc = 0x19C788u;
label_19c788:
    // 0x19c788: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19c788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_19c78c:
    // 0x19c78c: 0xac30d388  sw          $s0, -0x2C78($at)
    ctx->pc = 0x19c78cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955912), GPR_U32(ctx, 16));
label_19c790:
    // 0x19c790: 0x92030081  lbu         $v1, 0x81($s0)
    ctx->pc = 0x19c790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 129)));
label_19c794:
    // 0x19c794: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x19c794u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_19c798:
    // 0x19c798: 0x92030083  lbu         $v1, 0x83($s0)
    ctx->pc = 0x19c798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
label_19c79c:
    // 0x19c79c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19c79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_19c7a0:
    // 0x19c7a0: 0x30630050  andi        $v1, $v1, 0x50
    ctx->pc = 0x19c7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)80);
label_19c7a4:
    // 0x19c7a4: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_19c7a8:
    if (ctx->pc == 0x19C7A8u) {
        ctx->pc = 0x19C7ACu;
        goto label_19c7ac;
    }
    ctx->pc = 0x19C7A4u;
    {
        const bool branch_taken_0x19c7a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c7a4) {
            ctx->pc = 0x19C818u;
            goto label_19c818;
        }
    }
    ctx->pc = 0x19C7ACu;
label_19c7ac:
    // 0x19c7ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19c7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_19c7b0:
    // 0x19c7b0: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x19c7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6716)));
label_19c7b4:
    // 0x19c7b4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x19c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_19c7b8:
    // 0x19c7b8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19c7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_19c7bc:
    // 0x19c7bc: 0x1460008a  bnez        $v1, . + 4 + (0x8A << 2)
label_19c7c0:
    if (ctx->pc == 0x19C7C0u) {
        ctx->pc = 0x19C7C4u;
        goto label_19c7c4;
    }
    ctx->pc = 0x19C7BCu;
    {
        const bool branch_taken_0x19c7bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c7bc) {
            ctx->pc = 0x19C9E8u;
            goto label_19c9e8;
        }
    }
    ctx->pc = 0x19C7C4u;
label_19c7c4:
    // 0x19c7c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19c7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_19c7c8:
    // 0x19c7c8: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x19c7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6716)));
label_19c7cc:
    // 0x19c7cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19c7d0:
    // 0x19c7d0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19c7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_19c7d4:
    // 0x19c7d4: 0x14600084  bnez        $v1, . + 4 + (0x84 << 2)
label_19c7d8:
    if (ctx->pc == 0x19C7D8u) {
        ctx->pc = 0x19C7DCu;
        goto label_19c7dc;
    }
    ctx->pc = 0x19C7D4u;
    {
        const bool branch_taken_0x19c7d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c7d4) {
            ctx->pc = 0x19C9E8u;
            goto label_19c9e8;
        }
    }
    ctx->pc = 0x19C7DCu;
label_19c7dc:
    // 0x19c7dc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x19c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_19c7e0:
    // 0x19c7e0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x19c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_19c7e4:
    // 0x19c7e4: 0x244274d0  addiu       $v0, $v0, 0x74D0
    ctx->pc = 0x19c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29904));
label_19c7e8:
    // 0x19c7e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19c7ec:
    // 0x19c7ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19c7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19c7f0:
    // 0x19c7f0: 0xc055574  jal         func_1555D0
label_19c7f4:
    if (ctx->pc == 0x19C7F4u) {
        ctx->pc = 0x19C7F8u;
        goto label_19c7f8;
    }
    ctx->pc = 0x19C7F0u;
    SET_GPR_U32(ctx, 31, 0x19C7F8u);
    ctx->pc = 0x1555D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1555D0u, 0x19C7F0u, 0x19C7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C7F8u;
label_19c7f8:
    // 0x19c7f8: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_19c7fc:
    if (ctx->pc == 0x19C7FCu) {
        ctx->pc = 0x19C800u;
        goto label_19c800;
    }
    ctx->pc = 0x19C7F8u;
    {
        const bool branch_taken_0x19c7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c7f8) {
            ctx->pc = 0x19C9E8u;
            goto label_19c9e8;
        }
    }
    ctx->pc = 0x19C800u;
label_19c800:
    // 0x19c800: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19c800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_19c804:
    // 0x19c804: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x19c804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
label_19c808:
    // 0x19c808: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x19c808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_19c80c:
    // 0x19c80c: 0x14600076  bnez        $v1, . + 4 + (0x76 << 2)
label_19c810:
    if (ctx->pc == 0x19C810u) {
        ctx->pc = 0x19C814u;
        goto label_19c814;
    }
    ctx->pc = 0x19C80Cu;
    {
        const bool branch_taken_0x19c80c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c80c) {
            ctx->pc = 0x19C9E8u;
            goto label_19c9e8;
        }
    }
    ctx->pc = 0x19C814u;
label_19c814:
    // 0x19c814: 0x0  nop
    ctx->pc = 0x19c814u;
    // NOP
label_19c818:
    // 0x19c818: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x19c818u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19c81c:
    // 0x19c81c: 0x16c00025  bnez        $s6, . + 4 + (0x25 << 2)
label_19c820:
    if (ctx->pc == 0x19C820u) {
        ctx->pc = 0x19C824u;
        goto label_19c824;
    }
    ctx->pc = 0x19C81Cu;
    {
        const bool branch_taken_0x19c81c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c81c) {
            ctx->pc = 0x19C8B4u;
            goto label_19c8b4;
        }
    }
    ctx->pc = 0x19C824u;
label_19c824:
    // 0x19c824: 0x92030083  lbu         $v1, 0x83($s0)
    ctx->pc = 0x19c824u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
label_19c828:
    // 0x19c828: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19c828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_19c82c:
    // 0x19c82c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x19c82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_19c830:
    // 0x19c830: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_19c834:
    if (ctx->pc == 0x19C834u) {
        ctx->pc = 0x19C838u;
        goto label_19c838;
    }
    ctx->pc = 0x19C830u;
    {
        const bool branch_taken_0x19c830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c830) {
            ctx->pc = 0x19C8A8u;
            goto label_19c8a8;
        }
    }
    ctx->pc = 0x19C838u;
label_19c838:
    // 0x19c838: 0x92030083  lbu         $v1, 0x83($s0)
    ctx->pc = 0x19c838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
label_19c83c:
    // 0x19c83c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19c83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_19c840:
    // 0x19c840: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x19c840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_19c844:
    // 0x19c844: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_19c848:
    if (ctx->pc == 0x19C848u) {
        ctx->pc = 0x19C84Cu;
        goto label_19c84c;
    }
    ctx->pc = 0x19C844u;
    {
        const bool branch_taken_0x19c844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c844) {
            ctx->pc = 0x19C870u;
            goto label_19c870;
        }
    }
    ctx->pc = 0x19C84Cu;
label_19c84c:
    // 0x19c84c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x19c84cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_19c850:
    // 0x19c850: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x19c850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_19c854:
    // 0x19c854: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x19c854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
label_19c858:
    // 0x19c858: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19c858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19c85c:
    // 0x19c85c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19c85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19c860:
    // 0x19c860: 0x3c31824  and         $v1, $fp, $v1
    ctx->pc = 0x19c860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & GPR_U64(ctx, 3));
label_19c864:
    // 0x19c864: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_19c868:
    if (ctx->pc == 0x19C868u) {
        ctx->pc = 0x19C86Cu;
        goto label_19c86c;
    }
    ctx->pc = 0x19C864u;
    {
        const bool branch_taken_0x19c864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c864) {
            ctx->pc = 0x19C8A8u;
            goto label_19c8a8;
        }
    }
    ctx->pc = 0x19C86Cu;
label_19c86c:
    // 0x19c86c: 0x0  nop
    ctx->pc = 0x19c86cu;
    // NOP
label_19c870:
    // 0x19c870: 0x92030083  lbu         $v1, 0x83($s0)
    ctx->pc = 0x19c870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
label_19c874:
    // 0x19c874: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19c874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_19c878:
    // 0x19c878: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x19c878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_19c87c:
    // 0x19c87c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_19c880:
    if (ctx->pc == 0x19C880u) {
        ctx->pc = 0x19C884u;
        goto label_19c884;
    }
    ctx->pc = 0x19C87Cu;
    {
        const bool branch_taken_0x19c87c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c87c) {
            ctx->pc = 0x19C8D0u;
            goto label_19c8d0;
        }
    }
    ctx->pc = 0x19C884u;
label_19c884:
    // 0x19c884: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x19c884u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_19c888:
    // 0x19c888: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x19c888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_19c88c:
    // 0x19c88c: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x19c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
label_19c890:
    // 0x19c890: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19c890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19c894:
    // 0x19c894: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x19c894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_19c898:
    // 0x19c898: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19c898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19c89c:
    // 0x19c89c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19c89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_19c8a0:
    // 0x19c8a0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_19c8a4:
    if (ctx->pc == 0x19C8A4u) {
        ctx->pc = 0x19C8A8u;
        goto label_19c8a8;
    }
    ctx->pc = 0x19C8A0u;
    {
        const bool branch_taken_0x19c8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c8a0) {
            ctx->pc = 0x19C8D0u;
            goto label_19c8d0;
        }
    }
    ctx->pc = 0x19C8A8u;
label_19c8a8:
    // 0x19c8a8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x19c8a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c8ac:
    // 0x19c8ac: 0x10000008  b           . + 4 + (0x8 << 2)
label_19c8b0:
    if (ctx->pc == 0x19C8B0u) {
        ctx->pc = 0x19C8B4u;
        goto label_19c8b4;
    }
    ctx->pc = 0x19C8ACu;
    {
        const bool branch_taken_0x19c8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c8ac) {
            ctx->pc = 0x19C8D0u;
            goto label_19c8d0;
        }
    }
    ctx->pc = 0x19C8B4u;
label_19c8b4:
    // 0x19c8b4: 0x92030083  lbu         $v1, 0x83($s0)
    ctx->pc = 0x19c8b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
label_19c8b8:
    // 0x19c8b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19c8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_19c8bc:
    // 0x19c8bc: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x19c8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_19c8c0:
    // 0x19c8c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_19c8c4:
    if (ctx->pc == 0x19C8C4u) {
        ctx->pc = 0x19C8C8u;
        goto label_19c8c8;
    }
    ctx->pc = 0x19C8C0u;
    {
        const bool branch_taken_0x19c8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c8c0) {
            ctx->pc = 0x19C8D0u;
            goto label_19c8d0;
        }
    }
    ctx->pc = 0x19C8C8u;
label_19c8c8:
    // 0x19c8c8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x19c8c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c8cc:
    // 0x19c8cc: 0x0  nop
    ctx->pc = 0x19c8ccu;
    // NOP
label_19c8d0:
    // 0x19c8d0: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x19c8d0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19c8d4:
    // 0x19c8d4: 0x92030083  lbu         $v1, 0x83($s0)
    ctx->pc = 0x19c8d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
label_19c8d8:
    // 0x19c8d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19c8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_19c8dc:
    // 0x19c8dc: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x19c8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_19c8e0:
    // 0x19c8e0: 0x3a9c2  srl         $s5, $v1, 7
    ctx->pc = 0x19c8e0u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
label_19c8e4:
    // 0x19c8e4: 0x92030082  lbu         $v1, 0x82($s0)
    ctx->pc = 0x19c8e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 130)));
label_19c8e8:
    // 0x19c8e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19c8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_19c8ec:
    // 0x19c8ec: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_19c8f0:
    if (ctx->pc == 0x19C8F0u) {
        ctx->pc = 0x19C8F4u;
        goto label_19c8f4;
    }
    ctx->pc = 0x19C8ECu;
    {
        const bool branch_taken_0x19c8ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c8ec) {
            ctx->pc = 0x19C928u;
            goto label_19c928;
        }
    }
    ctx->pc = 0x19C8F4u;
label_19c8f4:
    // 0x19c8f4: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
label_19c8f8:
    if (ctx->pc == 0x19C8F8u) {
        ctx->pc = 0x19C8FCu;
        goto label_19c8fc;
    }
    ctx->pc = 0x19C8F4u;
    {
        const bool branch_taken_0x19c8f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c8f4) {
            ctx->pc = 0x19C960u;
            goto label_19c960;
        }
    }
    ctx->pc = 0x19C8FCu;
label_19c8fc:
    // 0x19c8fc: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x19c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_19c900:
    // 0x19c900: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x19c900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_19c904:
    // 0x19c904: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x19c904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_19c908:
    // 0x19c908: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x19c908u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_19c90c:
    // 0x19c90c: 0xc0568c4  jal         func_15A310
label_19c910:
    if (ctx->pc == 0x19C910u) {
        ctx->pc = 0x19C914u;
        goto label_19c914;
    }
    ctx->pc = 0x19C90Cu;
    SET_GPR_U32(ctx, 31, 0x19C914u);
    ctx->pc = 0x15A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A310u, 0x19C90Cu, 0x19C914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C914u;
label_19c914:
    // 0x19c914: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_19c918:
    if (ctx->pc == 0x19C918u) {
        ctx->pc = 0x19C91Cu;
        goto label_19c91c;
    }
    ctx->pc = 0x19C914u;
    {
        const bool branch_taken_0x19c914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c914) {
            ctx->pc = 0x19C960u;
            goto label_19c960;
        }
    }
    ctx->pc = 0x19C91Cu;
label_19c91c:
    // 0x19c91c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x19c91cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c920:
    // 0x19c920: 0x1000000f  b           . + 4 + (0xF << 2)
label_19c924:
    if (ctx->pc == 0x19C924u) {
        ctx->pc = 0x19C928u;
        goto label_19c928;
    }
    ctx->pc = 0x19C920u;
    {
        const bool branch_taken_0x19c920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c920) {
            ctx->pc = 0x19C960u;
            goto label_19c960;
        }
    }
    ctx->pc = 0x19C928u;
label_19c928:
    // 0x19c928: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_19c92c:
    if (ctx->pc == 0x19C92Cu) {
        ctx->pc = 0x19C930u;
        goto label_19c930;
    }
    ctx->pc = 0x19C928u;
    {
        const bool branch_taken_0x19c928 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c928) {
            ctx->pc = 0x19C960u;
            goto label_19c960;
        }
    }
    ctx->pc = 0x19C930u;
label_19c930:
    // 0x19c930: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x19c930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_19c934:
    // 0x19c934: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x19c934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_19c938:
    // 0x19c938: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x19c938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_19c93c:
    // 0x19c93c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x19c93cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_19c940:
    // 0x19c940: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x19c940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19c944:
    // 0x19c944: 0xc60d0014  lwc1        $f13, 0x14($s0)
    ctx->pc = 0x19c944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_19c948:
    // 0x19c948: 0xc05692c  jal         func_15A4B0
label_19c94c:
    if (ctx->pc == 0x19C94Cu) {
        ctx->pc = 0x19C950u;
        goto label_19c950;
    }
    ctx->pc = 0x19C948u;
    SET_GPR_U32(ctx, 31, 0x19C950u);
    ctx->pc = 0x15A4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A4B0u, 0x19C948u, 0x19C950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C950u;
label_19c950:
    // 0x19c950: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19c954:
    if (ctx->pc == 0x19C954u) {
        ctx->pc = 0x19C958u;
        goto label_19c958;
    }
    ctx->pc = 0x19C950u;
    {
        const bool branch_taken_0x19c950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c950) {
            ctx->pc = 0x19C960u;
            goto label_19c960;
        }
    }
    ctx->pc = 0x19C958u;
label_19c958:
    // 0x19c958: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x19c958u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c95c:
    // 0x19c95c: 0x0  nop
    ctx->pc = 0x19c95cu;
    // NOP
label_19c960:
    // 0x19c960: 0x12800021  beqz        $s4, . + 4 + (0x21 << 2)
label_19c964:
    if (ctx->pc == 0x19C964u) {
        ctx->pc = 0x19C968u;
        goto label_19c968;
    }
    ctx->pc = 0x19C960u;
    {
        const bool branch_taken_0x19c960 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c960) {
            ctx->pc = 0x19C9E8u;
            goto label_19c9e8;
        }
    }
    ctx->pc = 0x19C968u;
label_19c968:
    // 0x19c968: 0x26040088  addiu       $a0, $s0, 0x88
    ctx->pc = 0x19c968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
label_19c96c:
    // 0x19c96c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x19c96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_19c970:
    // 0x19c970: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x19c970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_19c974:
    // 0x19c974: 0x24427470  addiu       $v0, $v0, 0x7470
    ctx->pc = 0x19c974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
label_19c978:
    // 0x19c978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19c97c:
    // 0x19c97c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19c980:
    // 0x19c980: 0x40f809  jalr        $v0
label_19c984:
    if (ctx->pc == 0x19C984u) {
        ctx->pc = 0x19C988u;
        goto label_19c988;
    }
    ctx->pc = 0x19C980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C988u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C980u, 0x19C988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C988u;
label_19c988:
    // 0x19c988: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_19c98c:
    if (ctx->pc == 0x19C98Cu) {
        ctx->pc = 0x19C990u;
        goto label_19c990;
    }
    ctx->pc = 0x19C988u;
    {
        const bool branch_taken_0x19c988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c988) {
            ctx->pc = 0x19C9E8u;
            goto label_19c9e8;
        }
    }
    ctx->pc = 0x19C990u;
label_19c990:
    // 0x19c990: 0x3264001f  andi        $a0, $s3, 0x1F
    ctx->pc = 0x19c990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)31);
label_19c994:
    // 0x19c994: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x19c994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_19c998:
    // 0x19c998: 0x832806  srlv        $a1, $v1, $a0
    ctx->pc = 0x19c998u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_19c99c:
    // 0x19c99c: 0x131942  srl         $v1, $s3, 5
    ctx->pc = 0x19c99cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 5));
label_19c9a0:
    // 0x19c9a0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x19c9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19c9a4:
    // 0x19c9a4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x19c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_19c9a8:
    // 0x19c9a8: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x19c9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_19c9ac:
    // 0x19c9ac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19c9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19c9b0:
    // 0x19c9b0: 0x8c8319dc  lw          $v1, 0x19DC($a0)
    ctx->pc = 0x19c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6620)));
label_19c9b4:
    // 0x19c9b4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x19c9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_19c9b8:
    // 0x19c9b8: 0xac8319dc  sw          $v1, 0x19DC($a0)
    ctx->pc = 0x19c9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6620), GPR_U32(ctx, 3));
label_19c9bc:
    // 0x19c9bc: 0x92030083  lbu         $v1, 0x83($s0)
    ctx->pc = 0x19c9bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
label_19c9c0:
    // 0x19c9c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19c9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_19c9c4:
    // 0x19c9c4: 0x30630050  andi        $v1, $v1, 0x50
    ctx->pc = 0x19c9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)80);
label_19c9c8:
    // 0x19c9c8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_19c9cc:
    if (ctx->pc == 0x19C9CCu) {
        ctx->pc = 0x19C9D0u;
        goto label_19c9d0;
    }
    ctx->pc = 0x19C9C8u;
    {
        const bool branch_taken_0x19c9c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c9c8) {
            ctx->pc = 0x19C9E8u;
            goto label_19c9e8;
        }
    }
    ctx->pc = 0x19C9D0u;
label_19c9d0:
    // 0x19c9d0: 0x92030081  lbu         $v1, 0x81($s0)
    ctx->pc = 0x19c9d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 129)));
label_19c9d4:
    // 0x19c9d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x19c9d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_19c9d8:
    // 0x19c9d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19c9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19c9dc:
    // 0x19c9dc: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
label_19c9e0:
    if (ctx->pc == 0x19C9E0u) {
        ctx->pc = 0x19C9E4u;
        goto label_19c9e4;
    }
    ctx->pc = 0x19C9DCu;
    {
        const bool branch_taken_0x19c9dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19c9dc) {
            ctx->pc = 0x19C9E8u;
            goto label_19c9e8;
        }
    }
    ctx->pc = 0x19C9E4u;
label_19c9e4:
    // 0x19c9e4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x19c9e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c9e8:
    // 0x19c9e8: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x19c9e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_19c9ec:
    // 0x19c9ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19c9ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_19c9f0:
    // 0x19c9f0: 0x2e630040  sltiu       $v1, $s3, 0x40
    ctx->pc = 0x19c9f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_19c9f4:
    // 0x19c9f4: 0x1460ff59  bnez        $v1, . + 4 + (-0xA7 << 2)
label_19c9f8:
    if (ctx->pc == 0x19C9F8u) {
        ctx->pc = 0x19C9FCu;
        goto label_19c9fc;
    }
    ctx->pc = 0x19C9F4u;
    {
        const bool branch_taken_0x19c9f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c9f4) {
            ctx->pc = 0x19C75Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c75c;
        }
    }
    ctx->pc = 0x19C9FCu;
label_19c9fc:
    // 0x19c9fc: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x19c9fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_19ca00:
    // 0x19ca00: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x19ca00u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19ca04:
    // 0x19ca04: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19ca04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19ca08:
    // 0x19ca08: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19ca08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19ca0c:
    // 0x19ca0c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19ca0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19ca10:
    // 0x19ca10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19ca10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19ca14:
    // 0x19ca14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19ca14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19ca18:
    // 0x19ca18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19ca18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19ca1c:
    // 0x19ca1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19ca1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19ca20:
    // 0x19ca20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ca20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19ca24:
    // 0x19ca24: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x19ca24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_19ca28:
    // 0x19ca28: 0x3e00008  jr          $ra
label_19ca2c:
    if (ctx->pc == 0x19CA2Cu) {
        ctx->pc = 0x19CA30u;
        goto label_fallthrough_0x19ca28;
    }
    ctx->pc = 0x19CA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19ca28:
    ctx->pc = 0x19CA30u;
}
