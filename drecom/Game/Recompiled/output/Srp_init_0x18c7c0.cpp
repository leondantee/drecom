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

// Function: Srp_init
// Address: 0x18c7c0 - 0x18ccac
void Srp_init_0x18c7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Srp_init_0x18c7c0");
#endif

    switch (ctx->pc) {
        case 0x18c7c0u: goto label_18c7c0;
        case 0x18c7c4u: goto label_18c7c4;
        case 0x18c7c8u: goto label_18c7c8;
        case 0x18c7ccu: goto label_18c7cc;
        case 0x18c7d0u: goto label_18c7d0;
        case 0x18c7d4u: goto label_18c7d4;
        case 0x18c7d8u: goto label_18c7d8;
        case 0x18c7dcu: goto label_18c7dc;
        case 0x18c7e0u: goto label_18c7e0;
        case 0x18c7e4u: goto label_18c7e4;
        case 0x18c7e8u: goto label_18c7e8;
        case 0x18c7ecu: goto label_18c7ec;
        case 0x18c7f0u: goto label_18c7f0;
        case 0x18c7f4u: goto label_18c7f4;
        case 0x18c7f8u: goto label_18c7f8;
        case 0x18c7fcu: goto label_18c7fc;
        case 0x18c800u: goto label_18c800;
        case 0x18c804u: goto label_18c804;
        case 0x18c808u: goto label_18c808;
        case 0x18c80cu: goto label_18c80c;
        case 0x18c810u: goto label_18c810;
        case 0x18c814u: goto label_18c814;
        case 0x18c818u: goto label_18c818;
        case 0x18c81cu: goto label_18c81c;
        case 0x18c820u: goto label_18c820;
        case 0x18c824u: goto label_18c824;
        case 0x18c828u: goto label_18c828;
        case 0x18c82cu: goto label_18c82c;
        case 0x18c830u: goto label_18c830;
        case 0x18c834u: goto label_18c834;
        case 0x18c838u: goto label_18c838;
        case 0x18c83cu: goto label_18c83c;
        case 0x18c840u: goto label_18c840;
        case 0x18c844u: goto label_18c844;
        case 0x18c848u: goto label_18c848;
        case 0x18c84cu: goto label_18c84c;
        case 0x18c850u: goto label_18c850;
        case 0x18c854u: goto label_18c854;
        case 0x18c858u: goto label_18c858;
        case 0x18c85cu: goto label_18c85c;
        case 0x18c860u: goto label_18c860;
        case 0x18c864u: goto label_18c864;
        case 0x18c868u: goto label_18c868;
        case 0x18c86cu: goto label_18c86c;
        case 0x18c870u: goto label_18c870;
        case 0x18c874u: goto label_18c874;
        case 0x18c878u: goto label_18c878;
        case 0x18c87cu: goto label_18c87c;
        case 0x18c880u: goto label_18c880;
        case 0x18c884u: goto label_18c884;
        case 0x18c888u: goto label_18c888;
        case 0x18c88cu: goto label_18c88c;
        case 0x18c890u: goto label_18c890;
        case 0x18c894u: goto label_18c894;
        case 0x18c898u: goto label_18c898;
        case 0x18c89cu: goto label_18c89c;
        case 0x18c8a0u: goto label_18c8a0;
        case 0x18c8a4u: goto label_18c8a4;
        case 0x18c8a8u: goto label_18c8a8;
        case 0x18c8acu: goto label_18c8ac;
        case 0x18c8b0u: goto label_18c8b0;
        case 0x18c8b4u: goto label_18c8b4;
        case 0x18c8b8u: goto label_18c8b8;
        case 0x18c8bcu: goto label_18c8bc;
        case 0x18c8c0u: goto label_18c8c0;
        case 0x18c8c4u: goto label_18c8c4;
        case 0x18c8c8u: goto label_18c8c8;
        case 0x18c8ccu: goto label_18c8cc;
        case 0x18c8d0u: goto label_18c8d0;
        case 0x18c8d4u: goto label_18c8d4;
        case 0x18c8d8u: goto label_18c8d8;
        case 0x18c8dcu: goto label_18c8dc;
        case 0x18c8e0u: goto label_18c8e0;
        case 0x18c8e4u: goto label_18c8e4;
        case 0x18c8e8u: goto label_18c8e8;
        case 0x18c8ecu: goto label_18c8ec;
        case 0x18c8f0u: goto label_18c8f0;
        case 0x18c8f4u: goto label_18c8f4;
        case 0x18c8f8u: goto label_18c8f8;
        case 0x18c8fcu: goto label_18c8fc;
        case 0x18c900u: goto label_18c900;
        case 0x18c904u: goto label_18c904;
        case 0x18c908u: goto label_18c908;
        case 0x18c90cu: goto label_18c90c;
        case 0x18c910u: goto label_18c910;
        case 0x18c914u: goto label_18c914;
        case 0x18c918u: goto label_18c918;
        case 0x18c91cu: goto label_18c91c;
        case 0x18c920u: goto label_18c920;
        case 0x18c924u: goto label_18c924;
        case 0x18c928u: goto label_18c928;
        case 0x18c92cu: goto label_18c92c;
        case 0x18c930u: goto label_18c930;
        case 0x18c934u: goto label_18c934;
        case 0x18c938u: goto label_18c938;
        case 0x18c93cu: goto label_18c93c;
        case 0x18c940u: goto label_18c940;
        case 0x18c944u: goto label_18c944;
        case 0x18c948u: goto label_18c948;
        case 0x18c94cu: goto label_18c94c;
        case 0x18c950u: goto label_18c950;
        case 0x18c954u: goto label_18c954;
        case 0x18c958u: goto label_18c958;
        case 0x18c95cu: goto label_18c95c;
        case 0x18c960u: goto label_18c960;
        case 0x18c964u: goto label_18c964;
        case 0x18c968u: goto label_18c968;
        case 0x18c96cu: goto label_18c96c;
        case 0x18c970u: goto label_18c970;
        case 0x18c974u: goto label_18c974;
        case 0x18c978u: goto label_18c978;
        case 0x18c97cu: goto label_18c97c;
        case 0x18c980u: goto label_18c980;
        case 0x18c984u: goto label_18c984;
        case 0x18c988u: goto label_18c988;
        case 0x18c98cu: goto label_18c98c;
        case 0x18c990u: goto label_18c990;
        case 0x18c994u: goto label_18c994;
        case 0x18c998u: goto label_18c998;
        case 0x18c99cu: goto label_18c99c;
        case 0x18c9a0u: goto label_18c9a0;
        case 0x18c9a4u: goto label_18c9a4;
        case 0x18c9a8u: goto label_18c9a8;
        case 0x18c9acu: goto label_18c9ac;
        case 0x18c9b0u: goto label_18c9b0;
        case 0x18c9b4u: goto label_18c9b4;
        case 0x18c9b8u: goto label_18c9b8;
        case 0x18c9bcu: goto label_18c9bc;
        case 0x18c9c0u: goto label_18c9c0;
        case 0x18c9c4u: goto label_18c9c4;
        case 0x18c9c8u: goto label_18c9c8;
        case 0x18c9ccu: goto label_18c9cc;
        case 0x18c9d0u: goto label_18c9d0;
        case 0x18c9d4u: goto label_18c9d4;
        case 0x18c9d8u: goto label_18c9d8;
        case 0x18c9dcu: goto label_18c9dc;
        case 0x18c9e0u: goto label_18c9e0;
        case 0x18c9e4u: goto label_18c9e4;
        case 0x18c9e8u: goto label_18c9e8;
        case 0x18c9ecu: goto label_18c9ec;
        case 0x18c9f0u: goto label_18c9f0;
        case 0x18c9f4u: goto label_18c9f4;
        case 0x18c9f8u: goto label_18c9f8;
        case 0x18c9fcu: goto label_18c9fc;
        case 0x18ca00u: goto label_18ca00;
        case 0x18ca04u: goto label_18ca04;
        case 0x18ca08u: goto label_18ca08;
        case 0x18ca0cu: goto label_18ca0c;
        case 0x18ca10u: goto label_18ca10;
        case 0x18ca14u: goto label_18ca14;
        case 0x18ca18u: goto label_18ca18;
        case 0x18ca1cu: goto label_18ca1c;
        case 0x18ca20u: goto label_18ca20;
        case 0x18ca24u: goto label_18ca24;
        case 0x18ca28u: goto label_18ca28;
        case 0x18ca2cu: goto label_18ca2c;
        case 0x18ca30u: goto label_18ca30;
        case 0x18ca34u: goto label_18ca34;
        case 0x18ca38u: goto label_18ca38;
        case 0x18ca3cu: goto label_18ca3c;
        case 0x18ca40u: goto label_18ca40;
        case 0x18ca44u: goto label_18ca44;
        case 0x18ca48u: goto label_18ca48;
        case 0x18ca4cu: goto label_18ca4c;
        case 0x18ca50u: goto label_18ca50;
        case 0x18ca54u: goto label_18ca54;
        case 0x18ca58u: goto label_18ca58;
        case 0x18ca5cu: goto label_18ca5c;
        case 0x18ca60u: goto label_18ca60;
        case 0x18ca64u: goto label_18ca64;
        case 0x18ca68u: goto label_18ca68;
        case 0x18ca6cu: goto label_18ca6c;
        case 0x18ca70u: goto label_18ca70;
        case 0x18ca74u: goto label_18ca74;
        case 0x18ca78u: goto label_18ca78;
        case 0x18ca7cu: goto label_18ca7c;
        case 0x18ca80u: goto label_18ca80;
        case 0x18ca84u: goto label_18ca84;
        case 0x18ca88u: goto label_18ca88;
        case 0x18ca8cu: goto label_18ca8c;
        case 0x18ca90u: goto label_18ca90;
        case 0x18ca94u: goto label_18ca94;
        case 0x18ca98u: goto label_18ca98;
        case 0x18ca9cu: goto label_18ca9c;
        case 0x18caa0u: goto label_18caa0;
        case 0x18caa4u: goto label_18caa4;
        case 0x18caa8u: goto label_18caa8;
        case 0x18caacu: goto label_18caac;
        case 0x18cab0u: goto label_18cab0;
        case 0x18cab4u: goto label_18cab4;
        case 0x18cab8u: goto label_18cab8;
        case 0x18cabcu: goto label_18cabc;
        case 0x18cac0u: goto label_18cac0;
        case 0x18cac4u: goto label_18cac4;
        case 0x18cac8u: goto label_18cac8;
        case 0x18caccu: goto label_18cacc;
        case 0x18cad0u: goto label_18cad0;
        case 0x18cad4u: goto label_18cad4;
        case 0x18cad8u: goto label_18cad8;
        case 0x18cadcu: goto label_18cadc;
        case 0x18cae0u: goto label_18cae0;
        case 0x18cae4u: goto label_18cae4;
        case 0x18cae8u: goto label_18cae8;
        case 0x18caecu: goto label_18caec;
        case 0x18caf0u: goto label_18caf0;
        case 0x18caf4u: goto label_18caf4;
        case 0x18caf8u: goto label_18caf8;
        case 0x18cafcu: goto label_18cafc;
        case 0x18cb00u: goto label_18cb00;
        case 0x18cb04u: goto label_18cb04;
        case 0x18cb08u: goto label_18cb08;
        case 0x18cb0cu: goto label_18cb0c;
        case 0x18cb10u: goto label_18cb10;
        case 0x18cb14u: goto label_18cb14;
        case 0x18cb18u: goto label_18cb18;
        case 0x18cb1cu: goto label_18cb1c;
        case 0x18cb20u: goto label_18cb20;
        case 0x18cb24u: goto label_18cb24;
        case 0x18cb28u: goto label_18cb28;
        case 0x18cb2cu: goto label_18cb2c;
        case 0x18cb30u: goto label_18cb30;
        case 0x18cb34u: goto label_18cb34;
        case 0x18cb38u: goto label_18cb38;
        case 0x18cb3cu: goto label_18cb3c;
        case 0x18cb40u: goto label_18cb40;
        case 0x18cb44u: goto label_18cb44;
        case 0x18cb48u: goto label_18cb48;
        case 0x18cb4cu: goto label_18cb4c;
        case 0x18cb50u: goto label_18cb50;
        case 0x18cb54u: goto label_18cb54;
        case 0x18cb58u: goto label_18cb58;
        case 0x18cb5cu: goto label_18cb5c;
        case 0x18cb60u: goto label_18cb60;
        case 0x18cb64u: goto label_18cb64;
        case 0x18cb68u: goto label_18cb68;
        case 0x18cb6cu: goto label_18cb6c;
        case 0x18cb70u: goto label_18cb70;
        case 0x18cb74u: goto label_18cb74;
        case 0x18cb78u: goto label_18cb78;
        case 0x18cb7cu: goto label_18cb7c;
        case 0x18cb80u: goto label_18cb80;
        case 0x18cb84u: goto label_18cb84;
        case 0x18cb88u: goto label_18cb88;
        case 0x18cb8cu: goto label_18cb8c;
        case 0x18cb90u: goto label_18cb90;
        case 0x18cb94u: goto label_18cb94;
        case 0x18cb98u: goto label_18cb98;
        case 0x18cb9cu: goto label_18cb9c;
        case 0x18cba0u: goto label_18cba0;
        case 0x18cba4u: goto label_18cba4;
        case 0x18cba8u: goto label_18cba8;
        case 0x18cbacu: goto label_18cbac;
        case 0x18cbb0u: goto label_18cbb0;
        case 0x18cbb4u: goto label_18cbb4;
        case 0x18cbb8u: goto label_18cbb8;
        case 0x18cbbcu: goto label_18cbbc;
        case 0x18cbc0u: goto label_18cbc0;
        case 0x18cbc4u: goto label_18cbc4;
        case 0x18cbc8u: goto label_18cbc8;
        case 0x18cbccu: goto label_18cbcc;
        case 0x18cbd0u: goto label_18cbd0;
        case 0x18cbd4u: goto label_18cbd4;
        case 0x18cbd8u: goto label_18cbd8;
        case 0x18cbdcu: goto label_18cbdc;
        case 0x18cbe0u: goto label_18cbe0;
        case 0x18cbe4u: goto label_18cbe4;
        case 0x18cbe8u: goto label_18cbe8;
        case 0x18cbecu: goto label_18cbec;
        case 0x18cbf0u: goto label_18cbf0;
        case 0x18cbf4u: goto label_18cbf4;
        case 0x18cbf8u: goto label_18cbf8;
        case 0x18cbfcu: goto label_18cbfc;
        case 0x18cc00u: goto label_18cc00;
        case 0x18cc04u: goto label_18cc04;
        case 0x18cc08u: goto label_18cc08;
        case 0x18cc0cu: goto label_18cc0c;
        case 0x18cc10u: goto label_18cc10;
        case 0x18cc14u: goto label_18cc14;
        case 0x18cc18u: goto label_18cc18;
        case 0x18cc1cu: goto label_18cc1c;
        case 0x18cc20u: goto label_18cc20;
        case 0x18cc24u: goto label_18cc24;
        case 0x18cc28u: goto label_18cc28;
        case 0x18cc2cu: goto label_18cc2c;
        case 0x18cc30u: goto label_18cc30;
        case 0x18cc34u: goto label_18cc34;
        case 0x18cc38u: goto label_18cc38;
        case 0x18cc3cu: goto label_18cc3c;
        case 0x18cc40u: goto label_18cc40;
        case 0x18cc44u: goto label_18cc44;
        case 0x18cc48u: goto label_18cc48;
        case 0x18cc4cu: goto label_18cc4c;
        case 0x18cc50u: goto label_18cc50;
        case 0x18cc54u: goto label_18cc54;
        case 0x18cc58u: goto label_18cc58;
        case 0x18cc5cu: goto label_18cc5c;
        case 0x18cc60u: goto label_18cc60;
        case 0x18cc64u: goto label_18cc64;
        case 0x18cc68u: goto label_18cc68;
        case 0x18cc6cu: goto label_18cc6c;
        case 0x18cc70u: goto label_18cc70;
        case 0x18cc74u: goto label_18cc74;
        case 0x18cc78u: goto label_18cc78;
        case 0x18cc7cu: goto label_18cc7c;
        case 0x18cc80u: goto label_18cc80;
        case 0x18cc84u: goto label_18cc84;
        case 0x18cc88u: goto label_18cc88;
        case 0x18cc8cu: goto label_18cc8c;
        case 0x18cc90u: goto label_18cc90;
        case 0x18cc94u: goto label_18cc94;
        case 0x18cc98u: goto label_18cc98;
        case 0x18cc9cu: goto label_18cc9c;
        case 0x18cca0u: goto label_18cca0;
        case 0x18cca4u: goto label_18cca4;
        case 0x18cca8u: goto label_18cca8;
        default: break;
    }

    ctx->pc = 0x18c7c0u;

label_18c7c0:
    // 0x18c7c0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x18c7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_18c7c4:
    // 0x18c7c4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x18c7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
label_18c7c8:
    // 0x18c7c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18c7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_18c7cc:
    // 0x18c7cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18c7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_18c7d0:
    // 0x18c7d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18c7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_18c7d4:
    // 0x18c7d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18c7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_18c7d8:
    // 0x18c7d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18c7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_18c7dc:
    // 0x18c7dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18c7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_18c7e0:
    // 0x18c7e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18c7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18c7e4:
    // 0x18c7e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18c7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18c7e8:
    // 0x18c7e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18c7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18c7ec:
    // 0x18c7ec: 0xffa400d0  sd          $a0, 0xD0($sp)
    ctx->pc = 0x18c7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 4));
label_18c7f0:
    // 0x18c7f0: 0xffa500d8  sd          $a1, 0xD8($sp)
    ctx->pc = 0x18c7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 5));
label_18c7f4:
    // 0x18c7f4: 0xffa600e0  sd          $a2, 0xE0($sp)
    ctx->pc = 0x18c7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 6));
label_18c7f8:
    // 0x18c7f8: 0xffa700e8  sd          $a3, 0xE8($sp)
    ctx->pc = 0x18c7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 7));
label_18c7fc:
    // 0x18c7fc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_18c800:
    // 0x18c800: 0x2450eb80  addiu       $s0, $v0, -0x1480
    ctx->pc = 0x18c800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962048));
label_18c804:
    // 0x18c804: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18c804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_18c808:
    // 0x18c808: 0x2442a630  addiu       $v0, $v0, -0x59D0
    ctx->pc = 0x18c808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
label_18c80c:
    // 0x18c80c: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x18c80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_18c810:
    // 0x18c810: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x18c810u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_18c814:
    // 0x18c814: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x18c814u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_18c818:
    // 0x18c818: 0xdfa200d0  ld          $v0, 0xD0($sp)
    ctx->pc = 0x18c818u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_18c81c:
    // 0x18c81c: 0x2123a  dsrl        $v0, $v0, 8
    ctx->pc = 0x18c81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 8);
label_18c820:
    // 0x18c820: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18c824:
    // 0x18c824: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x18c824u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
label_18c828:
    // 0x18c828: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x18c828u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_18c82c:
    // 0x18c82c: 0xdfa200d0  ld          $v0, 0xD0($sp)
    ctx->pc = 0x18c82cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_18c830:
    // 0x18c830: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18c834:
    // 0x18c834: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x18c834u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
label_18c838:
    // 0x18c838: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x18c838u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
label_18c83c:
    // 0x18c83c: 0xdfa200d0  ld          $v0, 0xD0($sp)
    ctx->pc = 0x18c83cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_18c840:
    // 0x18c840: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x18c840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
label_18c844:
    // 0x18c844: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18c844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_18c848:
    // 0x18c848: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18c848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_18c84c:
    // 0x18c84c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_18c850:
    // 0x18c850: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18c850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18c854:
    // 0x18c854: 0x2a83c  dsll32      $s5, $v0, 0
    ctx->pc = 0x18c854u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
label_18c858:
    // 0x18c858: 0x15a83f  dsra32      $s5, $s5, 0
    ctx->pc = 0x18c858u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 0));
label_18c85c:
    // 0x18c85c: 0xdfa200d8  ld          $v0, 0xD8($sp)
    ctx->pc = 0x18c85cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_18c860:
    // 0x18c860: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x18c860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
label_18c864:
    // 0x18c864: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18c864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_18c868:
    // 0x18c868: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18c868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_18c86c:
    // 0x18c86c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_18c870:
    // 0x18c870: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18c870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18c874:
    // 0x18c874: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_18c878:
    // 0x18c878: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18c878u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_18c87c:
    // 0x18c87c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_18c880:
    if (ctx->pc == 0x18C880u) {
        ctx->pc = 0x18C884u;
        goto label_18c884;
    }
    ctx->pc = 0x18C87Cu;
    {
        const bool branch_taken_0x18c87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c87c) {
            ctx->pc = 0x18C898u;
            goto label_18c898;
        }
    }
    ctx->pc = 0x18C884u;
label_18c884:
    // 0x18c884: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x18c884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_18c888:
    // 0x18c888: 0xc0675a4  jal         func_19D690
label_18c88c:
    if (ctx->pc == 0x18C88Cu) {
        ctx->pc = 0x18C890u;
        goto label_18c890;
    }
    ctx->pc = 0x18C888u;
    SET_GPR_U32(ctx, 31, 0x18C890u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18C888u, 0x18C890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C890u;
label_18c890:
    // 0x18c890: 0x10000010  b           . + 4 + (0x10 << 2)
label_18c894:
    if (ctx->pc == 0x18C894u) {
        ctx->pc = 0x18C898u;
        goto label_18c898;
    }
    ctx->pc = 0x18C890u;
    {
        const bool branch_taken_0x18c890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c890) {
            ctx->pc = 0x18C8D4u;
            goto label_18c8d4;
        }
    }
    ctx->pc = 0x18C898u;
label_18c898:
    // 0x18c898: 0xdfa200d8  ld          $v0, 0xD8($sp)
    ctx->pc = 0x18c898u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_18c89c:
    // 0x18c89c: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x18c89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
label_18c8a0:
    // 0x18c8a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18c8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_18c8a4:
    // 0x18c8a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18c8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_18c8a8:
    // 0x18c8a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_18c8ac:
    // 0x18c8ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18c8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18c8b0:
    // 0x18c8b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_18c8b4:
    // 0x18c8b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18c8b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_18c8b8:
    // 0x18c8b8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18c8b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18c8bc:
    // 0x18c8bc: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x18c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_18c8c0:
    // 0x18c8c0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18c8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_18c8c4:
    // 0x18c8c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18c8c8:
    // 0x18c8c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c8cc:
    // 0x18c8cc: 0x0  nop
    ctx->pc = 0x18c8ccu;
    // NOP
label_18c8d0:
    // 0x18c8d0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x18c8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_18c8d4:
    // 0x18c8d4: 0xdfa300d8  ld          $v1, 0xD8($sp)
    ctx->pc = 0x18c8d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_18c8d8:
    // 0x18c8d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18c8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_18c8dc:
    // 0x18c8dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18c8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_18c8e0:
    // 0x18c8e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_18c8e4:
    // 0x18c8e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18c8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18c8e8:
    // 0x18c8e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_18c8ec:
    // 0x18c8ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18c8ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_18c8f0:
    // 0x18c8f0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_18c8f4:
    if (ctx->pc == 0x18C8F4u) {
        ctx->pc = 0x18C8F8u;
        goto label_18c8f8;
    }
    ctx->pc = 0x18C8F0u;
    {
        const bool branch_taken_0x18c8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c8f0) {
            ctx->pc = 0x18C90Cu;
            goto label_18c90c;
        }
    }
    ctx->pc = 0x18C8F8u;
label_18c8f8:
    // 0x18c8f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x18c8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_18c8fc:
    // 0x18c8fc: 0xc0675a4  jal         func_19D690
label_18c900:
    if (ctx->pc == 0x18C900u) {
        ctx->pc = 0x18C904u;
        goto label_18c904;
    }
    ctx->pc = 0x18C8FCu;
    SET_GPR_U32(ctx, 31, 0x18C904u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18C8FCu, 0x18C904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C904u;
label_18c904:
    // 0x18c904: 0x1000000f  b           . + 4 + (0xF << 2)
label_18c908:
    if (ctx->pc == 0x18C908u) {
        ctx->pc = 0x18C90Cu;
        goto label_18c90c;
    }
    ctx->pc = 0x18C904u;
    {
        const bool branch_taken_0x18c904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c904) {
            ctx->pc = 0x18C944u;
            goto label_18c944;
        }
    }
    ctx->pc = 0x18C90Cu;
label_18c90c:
    // 0x18c90c: 0xdfa300d8  ld          $v1, 0xD8($sp)
    ctx->pc = 0x18c90cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_18c910:
    // 0x18c910: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18c910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_18c914:
    // 0x18c914: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18c914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_18c918:
    // 0x18c918: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_18c91c:
    // 0x18c91c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18c91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18c920:
    // 0x18c920: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_18c924:
    // 0x18c924: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18c924u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_18c928:
    // 0x18c928: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18c928u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18c92c:
    // 0x18c92c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x18c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_18c930:
    // 0x18c930: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18c930u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_18c934:
    // 0x18c934: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18c934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18c938:
    // 0x18c938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c93c:
    // 0x18c93c: 0x0  nop
    ctx->pc = 0x18c93cu;
    // NOP
label_18c940:
    // 0x18c940: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x18c940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_18c944:
    // 0x18c944: 0xdfa200e0  ld          $v0, 0xE0($sp)
    ctx->pc = 0x18c944u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_18c948:
    // 0x18c948: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x18c948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
label_18c94c:
    // 0x18c94c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18c94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_18c950:
    // 0x18c950: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18c950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_18c954:
    // 0x18c954: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_18c958:
    // 0x18c958: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18c958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18c95c:
    // 0x18c95c: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x18c95cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
label_18c960:
    // 0x18c960: 0x1ef03f  dsra32      $fp, $fp, 0
    ctx->pc = 0x18c960u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 0));
label_18c964:
    // 0x18c964: 0xdfa300e0  ld          $v1, 0xE0($sp)
    ctx->pc = 0x18c964u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_18c968:
    // 0x18c968: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18c968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_18c96c:
    // 0x18c96c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18c96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_18c970:
    // 0x18c970: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_18c974:
    // 0x18c974: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18c974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18c978:
    // 0x18c978: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_18c97c:
    // 0x18c97c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18c97cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_18c980:
    // 0x18c980: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x18c980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_18c984:
    // 0x18c984: 0xdfa200e8  ld          $v0, 0xE8($sp)
    ctx->pc = 0x18c984u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 232)));
label_18c988:
    // 0x18c988: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x18c988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
label_18c98c:
    // 0x18c98c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18c98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_18c990:
    // 0x18c990: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18c990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_18c994:
    // 0x18c994: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_18c998:
    // 0x18c998: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18c998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18c99c:
    // 0x18c99c: 0x2983c  dsll32      $s3, $v0, 0
    ctx->pc = 0x18c99cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
label_18c9a0:
    // 0x18c9a0: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x18c9a0u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
label_18c9a4:
    // 0x18c9a4: 0xdfa300e8  ld          $v1, 0xE8($sp)
    ctx->pc = 0x18c9a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 232)));
label_18c9a8:
    // 0x18c9a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18c9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_18c9ac:
    // 0x18c9ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18c9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_18c9b0:
    // 0x18c9b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_18c9b4:
    // 0x18c9b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18c9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18c9b8:
    // 0x18c9b8: 0x2a03c  dsll32      $s4, $v0, 0
    ctx->pc = 0x18c9b8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 0));
label_18c9bc:
    // 0x18c9bc: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x18c9bcu;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
label_18c9c0:
    // 0x18c9c0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18c9c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18c9c4:
    // 0x18c9c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x18c9c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_18c9c8:
    // 0x18c9c8: 0x24060380  addiu       $a2, $zero, 0x380
    ctx->pc = 0x18c9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
label_18c9cc:
    // 0x18c9cc: 0xc046314  jal         func_118C50
label_18c9d0:
    if (ctx->pc == 0x18C9D0u) {
        ctx->pc = 0x18C9D4u;
        goto label_18c9d4;
    }
    ctx->pc = 0x18C9CCu;
    SET_GPR_U32(ctx, 31, 0x18C9D4u);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x18C9D4u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18C9D4u) { return; }
    ctx->pc = 0x18C9D4u;
label_18c9d4:
    // 0x18c9d4: 0xae110350  sw          $s1, 0x350($s0)
    ctx->pc = 0x18c9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 17));
label_18c9d8:
    // 0x18c9d8: 0xae120354  sw          $s2, 0x354($s0)
    ctx->pc = 0x18c9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 18));
label_18c9dc:
    // 0x18c9dc: 0xae150330  sw          $s5, 0x330($s0)
    ctx->pc = 0x18c9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 21));
label_18c9e0:
    // 0x18c9e0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x18c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_18c9e4:
    // 0x18c9e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c9e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c9e8:
    // 0x18c9e8: 0x0  nop
    ctx->pc = 0x18c9e8u;
    // NOP
label_18c9ec:
    // 0x18c9ec: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x18c9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
label_18c9f0:
    // 0x18c9f0: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x18c9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
label_18c9f4:
    // 0x18c9f4: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x18c9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
label_18c9f8:
    // 0x18c9f8: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x18c9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
label_18c9fc:
    // 0x18c9fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18ca00:
    // 0x18ca00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ca04:
    // 0x18ca04: 0x0  nop
    ctx->pc = 0x18ca04u;
    // NOP
label_18ca08:
    // 0x18ca08: 0xe60002ec  swc1        $f0, 0x2EC($s0)
    ctx->pc = 0x18ca08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 748), bits); }
label_18ca0c:
    // 0x18ca0c: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x18ca0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
label_18ca10:
    // 0x18ca10: 0xe60002e4  swc1        $f0, 0x2E4($s0)
    ctx->pc = 0x18ca10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
label_18ca14:
    // 0x18ca14: 0xe60002e0  swc1        $f0, 0x2E0($s0)
    ctx->pc = 0x18ca14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 736), bits); }
label_18ca18:
    // 0x18ca18: 0x260402f0  addiu       $a0, $s0, 0x2F0
    ctx->pc = 0x18ca18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
label_18ca1c:
    // 0x18ca1c: 0xc0675a4  jal         func_19D690
label_18ca20:
    if (ctx->pc == 0x18CA20u) {
        ctx->pc = 0x18CA24u;
        goto label_18ca24;
    }
    ctx->pc = 0x18CA1Cu;
    SET_GPR_U32(ctx, 31, 0x18CA24u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18CA1Cu, 0x18CA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA24u;
label_18ca24:
    // 0x18ca24: 0x26040300  addiu       $a0, $s0, 0x300
    ctx->pc = 0x18ca24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_18ca28:
    // 0x18ca28: 0xc0675a4  jal         func_19D690
label_18ca2c:
    if (ctx->pc == 0x18CA2Cu) {
        ctx->pc = 0x18CA30u;
        goto label_18ca30;
    }
    ctx->pc = 0x18CA28u;
    SET_GPR_U32(ctx, 31, 0x18CA30u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18CA28u, 0x18CA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA30u;
label_18ca30:
    // 0x18ca30: 0x26040310  addiu       $a0, $s0, 0x310
    ctx->pc = 0x18ca30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
label_18ca34:
    // 0x18ca34: 0xc0675a4  jal         func_19D690
label_18ca38:
    if (ctx->pc == 0x18CA38u) {
        ctx->pc = 0x18CA3Cu;
        goto label_18ca3c;
    }
    ctx->pc = 0x18CA34u;
    SET_GPR_U32(ctx, 31, 0x18CA3Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18CA34u, 0x18CA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA3Cu;
label_18ca3c:
    // 0x18ca3c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x18ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_18ca40:
    // 0x18ca40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ca44:
    // 0x18ca44: 0x0  nop
    ctx->pc = 0x18ca44u;
    // NOP
label_18ca48:
    // 0x18ca48: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x18ca48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
label_18ca4c:
    // 0x18ca4c: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x18ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
label_18ca50:
    // 0x18ca50: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x18ca50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_18ca54:
    // 0x18ca54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ca58:
    // 0x18ca58: 0x0  nop
    ctx->pc = 0x18ca58u;
    // NOP
label_18ca5c:
    // 0x18ca5c: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x18ca5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
label_18ca60:
    // 0x18ca60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18ca64:
    // 0x18ca64: 0xa2020344  sb          $v0, 0x344($s0)
    ctx->pc = 0x18ca64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 836), (uint8_t)GPR_U32(ctx, 2));
label_18ca68:
    // 0x18ca68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18ca6c:
    // 0x18ca6c: 0xa2020347  sb          $v0, 0x347($s0)
    ctx->pc = 0x18ca6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 839), (uint8_t)GPR_U32(ctx, 2));
label_18ca70:
    // 0x18ca70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18ca74:
    // 0x18ca74: 0xa2020348  sb          $v0, 0x348($s0)
    ctx->pc = 0x18ca74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 840), (uint8_t)GPR_U32(ctx, 2));
label_18ca78:
    // 0x18ca78: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18ca7c:
    // 0x18ca7c: 0xa202034b  sb          $v0, 0x34B($s0)
    ctx->pc = 0x18ca7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 843), (uint8_t)GPR_U32(ctx, 2));
label_18ca80:
    // 0x18ca80: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x18ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_18ca84:
    // 0x18ca84: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18ca84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18ca88:
    // 0x18ca88: 0x260202b0  addiu       $v0, $s0, 0x2B0
    ctx->pc = 0x18ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
label_18ca8c:
    // 0x18ca8c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18ca8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_18ca90:
    // 0x18ca90: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x18ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_18ca94:
    // 0x18ca94: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18ca94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18ca98:
    // 0x18ca98: 0x260202c0  addiu       $v0, $s0, 0x2C0
    ctx->pc = 0x18ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_18ca9c:
    // 0x18ca9c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18ca9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_18caa0:
    // 0x18caa0: 0xae1e0328  sw          $fp, 0x328($s0)
    ctx->pc = 0x18caa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 30));
label_18caa4:
    // 0x18caa4: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x18caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_18caa8:
    // 0x18caa8: 0xae02032c  sw          $v0, 0x32C($s0)
    ctx->pc = 0x18caa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
label_18caac:
    // 0x18caac: 0xae130320  sw          $s3, 0x320($s0)
    ctx->pc = 0x18caacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 19));
label_18cab0:
    // 0x18cab0: 0xae140324  sw          $s4, 0x324($s0)
    ctx->pc = 0x18cab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 804), GPR_U32(ctx, 20));
label_18cab4:
    // 0x18cab4: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_18cab8:
    if (ctx->pc == 0x18CAB8u) {
        ctx->pc = 0x18CABCu;
        goto label_18cabc;
    }
    ctx->pc = 0x18CAB4u;
    {
        const bool branch_taken_0x18cab4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cab4) {
            ctx->pc = 0x18CACCu;
            goto label_18cacc;
        }
    }
    ctx->pc = 0x18CABCu;
label_18cabc:
    // 0x18cabc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x18cabcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18cac0:
    // 0x18cac0: 0x92020343  lbu         $v0, 0x343($s0)
    ctx->pc = 0x18cac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 835)));
label_18cac4:
    // 0x18cac4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x18cac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_18cac8:
    // 0x18cac8: 0xa2020343  sb          $v0, 0x343($s0)
    ctx->pc = 0x18cac8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 835), (uint8_t)GPR_U32(ctx, 2));
label_18cacc:
    // 0x18cacc: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_18cad0:
    if (ctx->pc == 0x18CAD0u) {
        ctx->pc = 0x18CAD4u;
        goto label_18cad4;
    }
    ctx->pc = 0x18CACCu;
    {
        const bool branch_taken_0x18cacc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cacc) {
            ctx->pc = 0x18CAE4u;
            goto label_18cae4;
        }
    }
    ctx->pc = 0x18CAD4u;
label_18cad4:
    // 0x18cad4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x18cad4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18cad8:
    // 0x18cad8: 0x92020343  lbu         $v0, 0x343($s0)
    ctx->pc = 0x18cad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 835)));
label_18cadc:
    // 0x18cadc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x18cadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_18cae0:
    // 0x18cae0: 0xa2020343  sb          $v0, 0x343($s0)
    ctx->pc = 0x18cae0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 835), (uint8_t)GPR_U32(ctx, 2));
label_18cae4:
    // 0x18cae4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x18cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_18cae8:
    // 0x18cae8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x18cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_18caec:
    // 0x18caec: 0x24427f10  addiu       $v0, $v0, 0x7F10
    ctx->pc = 0x18caecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32528));
label_18caf0:
    // 0x18caf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18caf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18caf4:
    // 0x18caf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18caf8:
    // 0x18caf8: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_18cafc:
    if (ctx->pc == 0x18CAFCu) {
        ctx->pc = 0x18CB00u;
        goto label_18cb00;
    }
    ctx->pc = 0x18CAF8u;
    {
        const bool branch_taken_0x18caf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18caf8) {
            ctx->pc = 0x18CC6Cu;
            goto label_18cc6c;
        }
    }
    ctx->pc = 0x18CB00u;
label_18cb00:
    // 0x18cb00: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x18cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_18cb04:
    // 0x18cb04: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x18cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_18cb08:
    // 0x18cb08: 0x24427f10  addiu       $v0, $v0, 0x7F10
    ctx->pc = 0x18cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32528));
label_18cb0c:
    // 0x18cb0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18cb10:
    // 0x18cb10: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x18cb10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_18cb14:
    // 0x18cb14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18cb18:
    // 0x18cb18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18cb1c:
    // 0x18cb1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18cb20:
    // 0x18cb20: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_18cb24:
    if (ctx->pc == 0x18CB24u) {
        ctx->pc = 0x18CB28u;
        goto label_18cb28;
    }
    ctx->pc = 0x18CB20u;
    {
        const bool branch_taken_0x18cb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cb20) {
            ctx->pc = 0x18CC6Cu;
            goto label_18cc6c;
        }
    }
    ctx->pc = 0x18CB28u;
label_18cb28:
    // 0x18cb28: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18cb28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18cb2c:
    // 0x18cb2c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x18cb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_18cb30:
    // 0x18cb30: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x18cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_18cb34:
    // 0x18cb34: 0x24427f10  addiu       $v0, $v0, 0x7F10
    ctx->pc = 0x18cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32528));
label_18cb38:
    // 0x18cb38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18cb3c:
    // 0x18cb3c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x18cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_18cb40:
    // 0x18cb40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18cb44:
    // 0x18cb44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18cb48:
    // 0x18cb48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18cb4c:
    // 0x18cb4c: 0x40f809  jalr        $v0
label_18cb50:
    if (ctx->pc == 0x18CB50u) {
        ctx->pc = 0x18CB54u;
        goto label_18cb54;
    }
    ctx->pc = 0x18CB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18CB54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CB4Cu, 0x18CB54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18CB54u;
label_18cb54:
    // 0x18cb54: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_18cb58:
    if (ctx->pc == 0x18CB58u) {
        ctx->pc = 0x18CB5Cu;
        goto label_18cb5c;
    }
    ctx->pc = 0x18CB54u;
    {
        const bool branch_taken_0x18cb54 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cb54) {
            ctx->pc = 0x18CB68u;
            goto label_18cb68;
        }
    }
    ctx->pc = 0x18CB5Cu;
label_18cb5c:
    // 0x18cb5c: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18cb5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
label_18cb60:
    // 0x18cb60: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x18cb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_18cb64:
    // 0x18cb64: 0xa6020340  sh          $v0, 0x340($s0)
    ctx->pc = 0x18cb64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 832), (uint16_t)GPR_U32(ctx, 2));
label_18cb68:
    // 0x18cb68: 0x9202036b  lbu         $v0, 0x36B($s0)
    ctx->pc = 0x18cb68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 875)));
label_18cb6c:
    // 0x18cb6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18cb70:
    // 0x18cb70: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_18cb74:
    if (ctx->pc == 0x18CB74u) {
        ctx->pc = 0x18CB78u;
        goto label_18cb78;
    }
    ctx->pc = 0x18CB70u;
    {
        const bool branch_taken_0x18cb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cb70) {
            ctx->pc = 0x18CBA0u;
            goto label_18cba0;
        }
    }
    ctx->pc = 0x18CB78u;
label_18cb78:
    // 0x18cb78: 0x16c00006  bnez        $s6, . + 4 + (0x6 << 2)
label_18cb7c:
    if (ctx->pc == 0x18CB7Cu) {
        ctx->pc = 0x18CB80u;
        goto label_18cb80;
    }
    ctx->pc = 0x18CB78u;
    {
        const bool branch_taken_0x18cb78 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cb78) {
            ctx->pc = 0x18CB94u;
            goto label_18cb94;
        }
    }
    ctx->pc = 0x18CB80u;
label_18cb80:
    // 0x18cb80: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_18cb84:
    // 0x18cb84: 0xae020350  sw          $v0, 0x350($s0)
    ctx->pc = 0x18cb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 2));
label_18cb88:
    // 0x18cb88: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18cb88u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18cb8c:
    // 0x18cb8c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_18cb90:
    if (ctx->pc == 0x18CB90u) {
        ctx->pc = 0x18CB94u;
        goto label_18cb94;
    }
    ctx->pc = 0x18CB8Cu;
    {
        const bool branch_taken_0x18cb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cb8c) {
            ctx->pc = 0x18CC78u;
            goto label_18cc78;
        }
    }
    ctx->pc = 0x18CB94u;
label_18cb94:
    // 0x18cb94: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18cb94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
label_18cb98:
    // 0x18cb98: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x18cb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_18cb9c:
    // 0x18cb9c: 0xa6020340  sh          $v0, 0x340($s0)
    ctx->pc = 0x18cb9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 832), (uint16_t)GPR_U32(ctx, 2));
label_18cba0:
    // 0x18cba0: 0x9202036c  lbu         $v0, 0x36C($s0)
    ctx->pc = 0x18cba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 876)));
label_18cba4:
    // 0x18cba4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18cba8:
    // 0x18cba8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_18cbac:
    if (ctx->pc == 0x18CBACu) {
        ctx->pc = 0x18CBB0u;
        goto label_18cbb0;
    }
    ctx->pc = 0x18CBA8u;
    {
        const bool branch_taken_0x18cba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cba8) {
            ctx->pc = 0x18CBD8u;
            goto label_18cbd8;
        }
    }
    ctx->pc = 0x18CBB0u;
label_18cbb0:
    // 0x18cbb0: 0x16e00006  bnez        $s7, . + 4 + (0x6 << 2)
label_18cbb4:
    if (ctx->pc == 0x18CBB4u) {
        ctx->pc = 0x18CBB8u;
        goto label_18cbb8;
    }
    ctx->pc = 0x18CBB0u;
    {
        const bool branch_taken_0x18cbb0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cbb0) {
            ctx->pc = 0x18CBCCu;
            goto label_18cbcc;
        }
    }
    ctx->pc = 0x18CBB8u;
label_18cbb8:
    // 0x18cbb8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_18cbbc:
    // 0x18cbbc: 0xae020350  sw          $v0, 0x350($s0)
    ctx->pc = 0x18cbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 2));
label_18cbc0:
    // 0x18cbc0: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18cbc0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18cbc4:
    // 0x18cbc4: 0x1000002c  b           . + 4 + (0x2C << 2)
label_18cbc8:
    if (ctx->pc == 0x18CBC8u) {
        ctx->pc = 0x18CBCCu;
        goto label_18cbcc;
    }
    ctx->pc = 0x18CBC4u;
    {
        const bool branch_taken_0x18cbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cbc4) {
            ctx->pc = 0x18CC78u;
            goto label_18cc78;
        }
    }
    ctx->pc = 0x18CBCCu;
label_18cbcc:
    // 0x18cbcc: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18cbccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
label_18cbd0:
    // 0x18cbd0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x18cbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_18cbd4:
    // 0x18cbd4: 0xa6020340  sh          $v0, 0x340($s0)
    ctx->pc = 0x18cbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 832), (uint16_t)GPR_U32(ctx, 2));
label_18cbd8:
    // 0x18cbd8: 0x9202036d  lbu         $v0, 0x36D($s0)
    ctx->pc = 0x18cbd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 877)));
label_18cbdc:
    // 0x18cbdc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18cbe0:
    // 0x18cbe0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18cbe4:
    if (ctx->pc == 0x18CBE4u) {
        ctx->pc = 0x18CBE8u;
        goto label_18cbe8;
    }
    ctx->pc = 0x18CBE0u;
    {
        const bool branch_taken_0x18cbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cbe0) {
            ctx->pc = 0x18CBF4u;
            goto label_18cbf4;
        }
    }
    ctx->pc = 0x18CBE8u;
label_18cbe8:
    // 0x18cbe8: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18cbe8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
label_18cbec:
    // 0x18cbec: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x18cbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_18cbf0:
    // 0x18cbf0: 0xa6020340  sh          $v0, 0x340($s0)
    ctx->pc = 0x18cbf0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 832), (uint16_t)GPR_U32(ctx, 2));
label_18cbf4:
    // 0x18cbf4: 0x9202036e  lbu         $v0, 0x36E($s0)
    ctx->pc = 0x18cbf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 878)));
label_18cbf8:
    // 0x18cbf8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18cbfc:
    // 0x18cbfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18cc00:
    if (ctx->pc == 0x18CC00u) {
        ctx->pc = 0x18CC04u;
        goto label_18cc04;
    }
    ctx->pc = 0x18CBFCu;
    {
        const bool branch_taken_0x18cbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cbfc) {
            ctx->pc = 0x18CC10u;
            goto label_18cc10;
        }
    }
    ctx->pc = 0x18CC04u;
label_18cc04:
    // 0x18cc04: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18cc04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
label_18cc08:
    // 0x18cc08: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18cc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_18cc0c:
    // 0x18cc0c: 0xa6020340  sh          $v0, 0x340($s0)
    ctx->pc = 0x18cc0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 832), (uint16_t)GPR_U32(ctx, 2));
label_18cc10:
    // 0x18cc10: 0x9202036f  lbu         $v0, 0x36F($s0)
    ctx->pc = 0x18cc10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 879)));
label_18cc14:
    // 0x18cc14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18cc18:
    // 0x18cc18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18cc1c:
    if (ctx->pc == 0x18CC1Cu) {
        ctx->pc = 0x18CC20u;
        goto label_18cc20;
    }
    ctx->pc = 0x18CC18u;
    {
        const bool branch_taken_0x18cc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cc18) {
            ctx->pc = 0x18CC2Cu;
            goto label_18cc2c;
        }
    }
    ctx->pc = 0x18CC20u;
label_18cc20:
    // 0x18cc20: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18cc20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
label_18cc24:
    // 0x18cc24: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x18cc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_18cc28:
    // 0x18cc28: 0xa6020340  sh          $v0, 0x340($s0)
    ctx->pc = 0x18cc28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 832), (uint16_t)GPR_U32(ctx, 2));
label_18cc2c:
    // 0x18cc2c: 0x92020370  lbu         $v0, 0x370($s0)
    ctx->pc = 0x18cc2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 880)));
label_18cc30:
    // 0x18cc30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18cc34:
    // 0x18cc34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18cc38:
    if (ctx->pc == 0x18CC38u) {
        ctx->pc = 0x18CC3Cu;
        goto label_18cc3c;
    }
    ctx->pc = 0x18CC34u;
    {
        const bool branch_taken_0x18cc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cc34) {
            ctx->pc = 0x18CC48u;
            goto label_18cc48;
        }
    }
    ctx->pc = 0x18CC3Cu;
label_18cc3c:
    // 0x18cc3c: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18cc3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
label_18cc40:
    // 0x18cc40: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x18cc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_18cc44:
    // 0x18cc44: 0xa6020340  sh          $v0, 0x340($s0)
    ctx->pc = 0x18cc44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 832), (uint16_t)GPR_U32(ctx, 2));
label_18cc48:
    // 0x18cc48: 0x92020371  lbu         $v0, 0x371($s0)
    ctx->pc = 0x18cc48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 881)));
label_18cc4c:
    // 0x18cc4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18cc50:
    // 0x18cc50: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_18cc54:
    if (ctx->pc == 0x18CC54u) {
        ctx->pc = 0x18CC58u;
        goto label_18cc58;
    }
    ctx->pc = 0x18CC50u;
    {
        const bool branch_taken_0x18cc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cc50) {
            ctx->pc = 0x18CC74u;
            goto label_18cc74;
        }
    }
    ctx->pc = 0x18CC58u;
label_18cc58:
    // 0x18cc58: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18cc58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
label_18cc5c:
    // 0x18cc5c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x18cc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_18cc60:
    // 0x18cc60: 0xa6020340  sh          $v0, 0x340($s0)
    ctx->pc = 0x18cc60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 832), (uint16_t)GPR_U32(ctx, 2));
label_18cc64:
    // 0x18cc64: 0x10000003  b           . + 4 + (0x3 << 2)
label_18cc68:
    if (ctx->pc == 0x18CC68u) {
        ctx->pc = 0x18CC6Cu;
        goto label_18cc6c;
    }
    ctx->pc = 0x18CC64u;
    {
        const bool branch_taken_0x18cc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cc64) {
            ctx->pc = 0x18CC74u;
            goto label_18cc74;
        }
    }
    ctx->pc = 0x18CC6Cu;
label_18cc6c:
    // 0x18cc6c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_18cc70:
    // 0x18cc70: 0xae020350  sw          $v0, 0x350($s0)
    ctx->pc = 0x18cc70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 2));
label_18cc74:
    // 0x18cc74: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18cc74u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18cc78:
    // 0x18cc78: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x18cc78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_18cc7c:
    // 0x18cc7c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x18cc7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_18cc80:
    // 0x18cc80: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18cc80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_18cc84:
    // 0x18cc84: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18cc84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18cc88:
    // 0x18cc88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18cc88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18cc8c:
    // 0x18cc8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18cc8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18cc90:
    // 0x18cc90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18cc90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18cc94:
    // 0x18cc94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18cc94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18cc98:
    // 0x18cc98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18cc98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18cc9c:
    // 0x18cc9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18cc9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18cca0:
    // 0x18cca0: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x18cca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_18cca4:
    // 0x18cca4: 0x3e00008  jr          $ra
label_18cca8:
    if (ctx->pc == 0x18CCA8u) {
        ctx->pc = 0x18CCACu;
        goto label_fallthrough_0x18cca4;
    }
    ctx->pc = 0x18CCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CCA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18cca4:
    ctx->pc = 0x18CCACu;
}
