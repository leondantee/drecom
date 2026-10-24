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

// Function: Pl_mirror_set
// Address: 0x144ef0 - 0x1451d8
void Pl_mirror_set_0x144ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_mirror_set_0x144ef0");
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
        case 0x1451acu: goto label_1451ac;
        default: break;
    }

    ctx->pc = 0x144ef0u;

    // 0x144ef0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x144ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x144ef4: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x144ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x144ef8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x144ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x144efc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x144efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x144f00: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x144f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x144f04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x144f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x144f08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x144f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x144f0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144f10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144f14: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x144f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x144f18: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x144f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x144f1c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x144f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x144f20: 0x2471a530  addiu       $s1, $v1, -0x5AD0
    ctx->pc = 0x144f20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944048));
    // 0x144f24: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x144f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x144f28: 0x2473ec70  addiu       $s3, $v1, -0x1390
    ctx->pc = 0x144f28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
    // 0x144f2c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x144f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x144f30: 0x2472c960  addiu       $s2, $v1, -0x36A0
    ctx->pc = 0x144f30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953312));
    // 0x144f34: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x144f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x144f38: 0x2474a4a0  addiu       $s4, $v1, -0x5B60
    ctx->pc = 0x144f38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
    // 0x144f3c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x144f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x144f40: 0x2475b700  addiu       $s5, $v1, -0x4900
    ctx->pc = 0x144f40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948608));
    // 0x144f44: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x144f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x144f48: 0x24769240  addiu       $s6, $v1, -0x6DC0
    ctx->pc = 0x144f48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939200));
    // 0x144f4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x144f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x144f50: 0x8c24fce0  lw          $a0, -0x320($at)
    ctx->pc = 0x144f50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x144f54: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x144f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x144f58: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x144f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x144f5c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x144F5Cu;
    {
        const bool branch_taken_0x144f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x144f5c) {
            ctx->pc = 0x144F7Cu;
            goto label_144f7c;
        }
    }
    ctx->pc = 0x144F64u;
    // 0x144f64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x144f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x144f68: 0x8c24fce0  lw          $a0, -0x320($at)
    ctx->pc = 0x144f68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x144f6c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x144f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x144f70: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x144f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x144f74: 0x1060008d  beqz        $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x144F74u;
    {
        const bool branch_taken_0x144f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x144f74) {
            ctx->pc = 0x1451ACu;
            goto label_1451ac;
        }
    }
    ctx->pc = 0x144F7Cu;
label_144f7c:
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
            goto label_145198;
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
            goto label_1451ac;
        }
    }
    ctx->pc = 0x145198u;
label_145198:
    // 0x145198: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x145198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x14519c: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x14519cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1451a0: 0x8e061378  lw          $a2, 0x1378($s0)
    ctx->pc = 0x1451a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4984)));
    // 0x1451a4: 0xc09566c  jal         func_2559B0
    ctx->pc = 0x1451A4u;
    SET_GPR_U32(ctx, 31, 0x1451ACu);
    ctx->pc = 0x2559B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2559B0u, 0x1451A4u, 0x1451ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1451ACu;
label_1451ac:
    // 0x1451ac: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x1451acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1451b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1451b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1451b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1451b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1451b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1451b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1451bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1451bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1451c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1451c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1451c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1451c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1451c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1451c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1451cc: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1451ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1451d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1451D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1451D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1451D8u;
}
