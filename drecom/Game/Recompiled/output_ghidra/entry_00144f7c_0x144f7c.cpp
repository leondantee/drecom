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

// Function: entry_00144f7c
// Address: 0x144f7c - 0x145198
void entry_00144f7c_0x144f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144f7c_0x144f7c");
#endif

    switch (ctx->pc) {
        case 0x1450bcu: goto label_1450bc;
        case 0x1450dcu: goto label_1450dc;
        case 0x1450fcu: goto label_1450fc;
        case 0x145110u: goto label_145110;
        case 0x145124u: goto label_145124;
        case 0x145134u: goto label_145134;
        case 0x145144u: goto label_145144;
        case 0x145154u: goto label_145154;
        case 0x145160u: goto label_145160;
        case 0x14516cu: goto label_14516c;
        case 0x145190u: goto label_145190;
        default: break;
    }

    ctx->pc = 0x144f7cu;

    // 0x144f7c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x144f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x144f80: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x144f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x144f84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x144f84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x144f88: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x144f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x144f8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x144f8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x144f90: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x144f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x144f94: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x144f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x144f98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x144f98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x144f9c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x144f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x144fa0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x144fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x144fa4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x144fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x144fa8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x144fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x144fac: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x144facu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x144fb0: 0xae021374  sw          $v0, 0x1374($s0)
    ctx->pc = 0x144fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4980), GPR_U32(ctx, 2));
    // 0x144fb4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x144fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x144fb8: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x144fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x144fbc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x144fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x144fc0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x144fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x144fc4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x144fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x144fc8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x144fc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x144fcc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x144fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x144fd0: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x144fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x144fd4: 0xae021378  sw          $v0, 0x1378($s0)
    ctx->pc = 0x144fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4984), GPR_U32(ctx, 2));
    // 0x144fd8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x144fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x144fdc: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x144fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x144fe0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x144fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x144fe4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x144fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x144fe8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x144fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x144fec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x144fecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x144ff0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x144ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x144ff4: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x144ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x144ff8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x144ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x144ffc: 0xac22b6e8  sw          $v0, -0x4918($at)
    ctx->pc = 0x144ffcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EB6E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EB6E8u, _value); } while (0);
    // 0x145000: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x145000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x145004: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x145004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x145008: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x145008u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x14500c: 0x24423000  addiu       $v0, $v0, 0x3000
    ctx->pc = 0x14500cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12288));
    // 0x145010: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x145010u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x145014: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x145014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x145018: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x145018u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x14501c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x14501cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x145020: 0xac22c948  sw          $v0, -0x36B8($at)
    ctx->pc = 0x145020u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EC948u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EC948u, _value); } while (0);
    // 0x145024: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x145024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x145028: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x145028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x14502c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14502cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x145030: 0x24423000  addiu       $v0, $v0, 0x3000
    ctx->pc = 0x145030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12288));
    // 0x145034: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x145034u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x145038: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x145038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14503c: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x14503cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x145040: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x145040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x145044: 0xac22a488  sw          $v0, -0x5B78($at)
    ctx->pc = 0x145044u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EA488u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EA488u, _value); } while (0);
    // 0x145048: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x145048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x14504c: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x14504cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x145050: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x145050u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x145054: 0x24423000  addiu       $v0, $v0, 0x3000
    ctx->pc = 0x145054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12288));
    // 0x145058: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x145058u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x14505c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14505cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x145060: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x145060u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x145064: 0xae221324  sw          $v0, 0x1324($s1)
    ctx->pc = 0x145064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4900), GPR_U32(ctx, 2));
    // 0x145068: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x145068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x14506c: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x14506cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x145070: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x145070u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x145074: 0x24423000  addiu       $v0, $v0, 0x3000
    ctx->pc = 0x145074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12288));
    // 0x145078: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x145078u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x14507c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14507cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x145080: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x145080u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x145084: 0xae421248  sw          $v0, 0x1248($s2)
    ctx->pc = 0x145084u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4680), GPR_U32(ctx, 2));
    // 0x145088: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x145088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x14508c: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x14508cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x145090: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x145090u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x145094: 0x24423000  addiu       $v0, $v0, 0x3000
    ctx->pc = 0x145094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12288));
    // 0x145098: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x145098u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x14509c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14509cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1450a0: 0x2444a4f0  addiu       $a0, $v0, -0x5B10
    ctx->pc = 0x1450a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943984));
    // 0x1450a4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1450a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1450a8: 0x8c25a4fc  lw          $a1, -0x5B04($at)
    ctx->pc = 0x1450a8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EA4FCu));
    // 0x1450ac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1450acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1450b0: 0x8c26b6e8  lw          $a2, -0x4918($at)
    ctx->pc = 0x1450b0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EB6E8u));
    // 0x1450b4: 0xc09566c  jal         func_2559B0
    ctx->pc = 0x1450B4u;
    SET_GPR_U32(ctx, 31, 0x1450BCu);
    ctx->pc = 0x2559B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2559B0u, 0x1450B4u, 0x1450BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1450BCu;
label_1450bc:
    // 0x1450bc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1450bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1450c0: 0x2444b750  addiu       $a0, $v0, -0x48B0
    ctx->pc = 0x1450c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948688));
    // 0x1450c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1450c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1450c8: 0x8c25b75c  lw          $a1, -0x48A4($at)
    ctx->pc = 0x1450c8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EB75Cu));
    // 0x1450cc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1450ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1450d0: 0x8c26c948  lw          $a2, -0x36B8($at)
    ctx->pc = 0x1450d0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EC948u));
    // 0x1450d4: 0xc09566c  jal         func_2559B0
    ctx->pc = 0x1450D4u;
    SET_GPR_U32(ctx, 31, 0x1450DCu);
    ctx->pc = 0x2559B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2559B0u, 0x1450D4u, 0x1450DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1450DCu;
label_1450dc:
    // 0x1450dc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1450dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1450e0: 0x24449290  addiu       $a0, $v0, -0x6D70
    ctx->pc = 0x1450e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939280));
    // 0x1450e4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1450e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1450e8: 0x8c25929c  lw          $a1, -0x6D64($at)
    ctx->pc = 0x1450e8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3E929Cu));
    // 0x1450ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1450ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1450f0: 0x8c26a488  lw          $a2, -0x5B78($at)
    ctx->pc = 0x1450f0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EA488u));
    // 0x1450f4: 0xc09566c  jal         func_2559B0
    ctx->pc = 0x1450F4u;
    SET_GPR_U32(ctx, 31, 0x1450FCu);
    ctx->pc = 0x2559B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2559B0u, 0x1450F4u, 0x1450FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1450FCu;
label_1450fc:
    // 0x1450fc: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x1450fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x145100: 0x8e25005c  lw          $a1, 0x5C($s1)
    ctx->pc = 0x145100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x145104: 0x8e261324  lw          $a2, 0x1324($s1)
    ctx->pc = 0x145104u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4900)));
    // 0x145108: 0xc09566c  jal         func_2559B0
    ctx->pc = 0x145108u;
    SET_GPR_U32(ctx, 31, 0x145110u);
    ctx->pc = 0x2559B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2559B0u, 0x145108u, 0x145110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145110u;
label_145110:
    // 0x145110: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x145110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x145114: 0x8e45005c  lw          $a1, 0x5C($s2)
    ctx->pc = 0x145114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x145118: 0x8e461248  lw          $a2, 0x1248($s2)
    ctx->pc = 0x145118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4680)));
    // 0x14511c: 0xc09566c  jal         func_2559B0
    ctx->pc = 0x14511Cu;
    SET_GPR_U32(ctx, 31, 0x145124u);
    ctx->pc = 0x2559B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2559B0u, 0x14511Cu, 0x145124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145124u;
label_145124:
    // 0x145124: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x145124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x145128: 0x2444a4f0  addiu       $a0, $v0, -0x5B10
    ctx->pc = 0x145128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943984));
    // 0x14512c: 0xc095c7c  jal         func_2571F0
    ctx->pc = 0x14512Cu;
    SET_GPR_U32(ctx, 31, 0x145134u);
    ctx->pc = 0x2571F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571F0u, 0x14512Cu, 0x145134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145134u;
label_145134:
    // 0x145134: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x145134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x145138: 0x2444b750  addiu       $a0, $v0, -0x48B0
    ctx->pc = 0x145138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948688));
    // 0x14513c: 0xc095c7c  jal         func_2571F0
    ctx->pc = 0x14513Cu;
    SET_GPR_U32(ctx, 31, 0x145144u);
    ctx->pc = 0x2571F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571F0u, 0x14513Cu, 0x145144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145144u;
label_145144:
    // 0x145144: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x145144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x145148: 0x24449290  addiu       $a0, $v0, -0x6D70
    ctx->pc = 0x145148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939280));
    // 0x14514c: 0xc095c7c  jal         func_2571F0
    ctx->pc = 0x14514Cu;
    SET_GPR_U32(ctx, 31, 0x145154u);
    ctx->pc = 0x2571F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571F0u, 0x14514Cu, 0x145154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145154u;
label_145154:
    // 0x145154: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x145154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x145158: 0xc095c7c  jal         func_2571F0
    ctx->pc = 0x145158u;
    SET_GPR_U32(ctx, 31, 0x145160u);
    ctx->pc = 0x2571F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571F0u, 0x145158u, 0x145160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145160u;
label_145160:
    // 0x145160: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x145160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x145164: 0xc095c7c  jal         func_2571F0
    ctx->pc = 0x145164u;
    SET_GPR_U32(ctx, 31, 0x14516Cu);
    ctx->pc = 0x2571F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571F0u, 0x145164u, 0x14516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14516Cu;
label_14516c:
    // 0x14516c: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x14516cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x145170: 0x8e021330  lw          $v0, 0x1330($s0)
    ctx->pc = 0x145170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4912)));
    // 0x145174: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x145174u;
    {
        const bool branch_taken_0x145174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x145174) {
            ctx->pc = 0x145198u;
            return;
        }
    }
    ctx->pc = 0x14517Cu;
    // 0x14517c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x14517cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x145180: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x145180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x145184: 0x8e061374  lw          $a2, 0x1374($s0)
    ctx->pc = 0x145184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4980)));
    // 0x145188: 0xc09566c  jal         func_2559B0
    ctx->pc = 0x145188u;
    SET_GPR_U32(ctx, 31, 0x145190u);
    ctx->pc = 0x2559B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2559B0u, 0x145188u, 0x145190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145190u;
label_145190:
    // 0x145190: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x145190u;
    {
        const bool branch_taken_0x145190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145190) {
            ctx->pc = 0x1451ACu;
            return;
        }
    }
    ctx->pc = 0x145198u;
}
