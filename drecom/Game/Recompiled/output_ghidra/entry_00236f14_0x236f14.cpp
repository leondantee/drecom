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

// Function: entry_00236f14
// Address: 0x236f14 - 0x23800c
void entry_00236f14_0x236f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00236f14_0x236f14");
#endif

    switch (ctx->pc) {
        case 0x236f6cu: goto label_236f6c;
        case 0x236fa8u: goto label_236fa8;
        case 0x237064u: goto label_237064;
        case 0x2370d4u: goto label_2370d4;
        case 0x237144u: goto label_237144;
        case 0x2371b4u: goto label_2371b4;
        case 0x237228u: goto label_237228;
        case 0x237298u: goto label_237298;
        case 0x237340u: goto label_237340;
        case 0x23738cu: goto label_23738c;
        case 0x2373e4u: goto label_2373e4;
        case 0x237404u: goto label_237404;
        case 0x237428u: goto label_237428;
        case 0x237454u: goto label_237454;
        case 0x237478u: goto label_237478;
        case 0x237490u: goto label_237490;
        case 0x2374acu: goto label_2374ac;
        case 0x2374d4u: goto label_2374d4;
        case 0x2374fcu: goto label_2374fc;
        case 0x23751cu: goto label_23751c;
        case 0x237544u: goto label_237544;
        case 0x23756cu: goto label_23756c;
        case 0x237590u: goto label_237590;
        case 0x2375acu: goto label_2375ac;
        case 0x2375d4u: goto label_2375d4;
        case 0x2375f0u: goto label_2375f0;
        case 0x237710u: goto label_237710;
        case 0x237724u: goto label_237724;
        case 0x2377d0u: goto label_2377d0;
        case 0x2377e8u: goto label_2377e8;
        case 0x237884u: goto label_237884;
        case 0x23789cu: goto label_23789c;
        case 0x237948u: goto label_237948;
        case 0x237958u: goto label_237958;
        case 0x237a00u: goto label_237a00;
        case 0x237a14u: goto label_237a14;
        case 0x237ab0u: goto label_237ab0;
        case 0x237ac0u: goto label_237ac0;
        case 0x237b64u: goto label_237b64;
        case 0x237b7cu: goto label_237b7c;
        case 0x237c24u: goto label_237c24;
        case 0x237c38u: goto label_237c38;
        case 0x237c84u: goto label_237c84;
        case 0x237cbcu: goto label_237cbc;
        case 0x237cf0u: goto label_237cf0;
        case 0x237d20u: goto label_237d20;
        case 0x237d4cu: goto label_237d4c;
        case 0x237d74u: goto label_237d74;
        case 0x237da0u: goto label_237da0;
        case 0x237dd4u: goto label_237dd4;
        case 0x237e08u: goto label_237e08;
        case 0x237e34u: goto label_237e34;
        case 0x237e5cu: goto label_237e5c;
        case 0x237e84u: goto label_237e84;
        case 0x237eb4u: goto label_237eb4;
        case 0x237ee0u: goto label_237ee0;
        case 0x237f14u: goto label_237f14;
        case 0x237f44u: goto label_237f44;
        case 0x237f70u: goto label_237f70;
        case 0x237fa0u: goto label_237fa0;
        case 0x237fb4u: goto label_237fb4;
        default: break;
    }

    ctx->pc = 0x236f14u;

label_236f14:
    // 0x236f14: 0x78b70000  lq          $s7, 0x0($a1)
    ctx->pc = 0x236f14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x236f18: 0x78a80010  lq          $t0, 0x10($a1)
    ctx->pc = 0x236f18u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x236f1c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x236f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x236f20: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x236f20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x236f24: 0x7e570000  sq          $s7, 0x0($s2)
    ctx->pc = 0x236f24u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 23));
    // 0x236f28: 0x7e480010  sq          $t0, 0x10($s2)
    ctx->pc = 0x236f28u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 8));
    // 0x236f2c: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x236f2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x236f30: 0x1d20fff8  bgtz        $t1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x236F30u;
    {
        const bool branch_taken_0x236f30 = (GPR_S32(ctx, 9) > 0);
        if (branch_taken_0x236f30) {
            ctx->pc = 0x236F14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236f14;
        }
    }
    ctx->pc = 0x236F38u;
    // 0x236f38: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x236f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x236f3c: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x236f3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x236f40: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x236f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x236f44: 0x8fa302e8  lw          $v1, 0x2E8($sp)
    ctx->pc = 0x236f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x236f48: 0x906a1308  lbu         $t2, 0x1308($v1)
    ctx->pc = 0x236f48u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x236f4c: 0x314300ff  andi        $v1, $t2, 0xFF
    ctx->pc = 0x236f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x236f50: 0x30660080  andi        $a2, $v1, 0x80
    ctx->pc = 0x236f50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x236f54: 0x2454029c  addiu       $s4, $v0, 0x29C
    ctx->pc = 0x236f54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 668));
    // 0x236f58: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x236f58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x236f5c: 0x24150a40  addiu       $s5, $zero, 0xA40
    ctx->pc = 0x236f5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2624));
    // 0x236f60: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x236f60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x236f64: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x236F64u;
    SET_GPR_U32(ctx, 31, 0x236F6Cu);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x236F64u, 0x236F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F6Cu;
label_236f6c:
    // 0x236f6c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x236f6cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x236f70: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x236f70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x236f74: 0x26060a40  addiu       $a2, $s0, 0xA40
    ctx->pc = 0x236f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2624));
    // 0x236f78: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x236f78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x236f7c: 0x3c074080  lui         $a3, 0x4080
    ctx->pc = 0x236f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16512 << 16));
    // 0x236f80: 0x34e20002  ori         $v0, $a3, 0x2
    ctx->pc = 0x236f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
    // 0x236f84: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x236f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x236f88: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x236f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x236f8c: 0x34461400  ori         $a2, $v0, 0x1400
    ctx->pc = 0x236f8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x236f90: 0xc38825  or          $s1, $a2, $v1
    ctx->pc = 0x236f90u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x236f94: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x236f94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x236f98: 0x27a70260  addiu       $a3, $sp, 0x260
    ctx->pc = 0x236f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x236f9c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x236f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236fa0: 0xc0754a4  jal         func_1D5290
    ctx->pc = 0x236FA0u;
    SET_GPR_U32(ctx, 31, 0x236FA8u);
    ctx->pc = 0x1D5290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5290u, 0x236FA0u, 0x236FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236FA8u;
label_236fa8:
    // 0x236fa8: 0x8fa402e8  lw          $a0, 0x2E8($sp)
    ctx->pc = 0x236fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x236fac: 0x8c90029c  lw          $s0, 0x29C($a0)
    ctx->pc = 0x236facu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 668)));
    // 0x236fb0: 0x3c043126  lui         $a0, 0x3126
    ctx->pc = 0x236fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12582 << 16));
    // 0x236fb4: 0x34864000  ori         $a2, $a0, 0x4000
    ctx->pc = 0x236fb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x236fb8: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x236fb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x236fbc: 0x34028028  ori         $v0, $zero, 0x8028
    ctx->pc = 0x236fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x236fc0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x236fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x236fc4: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x236fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x236fc8: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x236fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x236fcc: 0x34a33000  ori         $v1, $a1, 0x3000
    ctx->pc = 0x236fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12288);
    // 0x236fd0: 0xfe030030  sd          $v1, 0x30($s0)
    ctx->pc = 0x236fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 3));
    // 0x236fd4: 0x8fa602e8  lw          $a2, 0x2E8($sp)
    ctx->pc = 0x236fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x236fd8: 0x8cc202a0  lw          $v0, 0x2A0($a2)
    ctx->pc = 0x236fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 672)));
    // 0x236fdc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x236fdcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x236fe0: 0x3c023126  lui         $v0, 0x3126
    ctx->pc = 0x236fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12582 << 16));
    // 0x236fe4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x236fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x236fe8: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x236fe8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x236fec: 0x34028028  ori         $v0, $zero, 0x8028
    ctx->pc = 0x236fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x236ff0: 0x462025  or          $a0, $v0, $a2
    ctx->pc = 0x236ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x236ff4: 0xfe040070  sd          $a0, 0x70($s0)
    ctx->pc = 0x236ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 4));
    // 0x236ff8: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x236ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x236ffc: 0x34c53000  ori         $a1, $a2, 0x3000
    ctx->pc = 0x236ffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)12288);
    // 0x237000: 0xfe050030  sd          $a1, 0x30($s0)
    ctx->pc = 0x237000u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 5));
    // 0x237004: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x237004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x237008: 0x24460ae8  addiu       $a2, $v0, 0xAE8
    ctx->pc = 0x237008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x23700c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x23700cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x237010: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x237010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x237014: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x237014u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x237018: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x237018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x23701c: 0x24830ae8  addiu       $v1, $a0, 0xAE8
    ctx->pc = 0x23701cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2792));
    // 0x237020: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x237020u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x237024: 0x2406fff0  addiu       $a2, $zero, -0x10
    ctx->pc = 0x237024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x237028: 0x462824  and         $a1, $v0, $a2
    ctx->pc = 0x237028u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x23702c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x23702cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x237030: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x237030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x237034: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x237034u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x237038: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x237038u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23703c: 0x8fa402e8  lw          $a0, 0x2E8($sp)
    ctx->pc = 0x23703cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237040: 0x8c970058  lw          $s7, 0x58($a0)
    ctx->pc = 0x237040u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x237044: 0x26e30120  addiu       $v1, $s7, 0x120
    ctx->pc = 0x237044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 288));
    // 0x237048: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x237048u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x23704c: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x23704cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x237050: 0xafa602d8  sw          $a2, 0x2D8($sp)
    ctx->pc = 0x237050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 6));
    // 0x237054: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x237054u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x237058: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x237058u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x23705c: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x23705Cu;
    SET_GPR_U32(ctx, 31, 0x237064u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x23705Cu, 0x237064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237064u;
label_237064:
    // 0x237064: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x237064u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237068: 0x70e09628  paddub      $s2, $a3, $zero
    ctx->pc = 0x237068u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x23706c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x23706cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x237070: 0x24620ae8  addiu       $v0, $v1, 0xAE8
    ctx->pc = 0x237070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x237074: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x237074u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x237078: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x237078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x23707c: 0x24490ae8  addiu       $t1, $v0, 0xAE8
    ctx->pc = 0x23707cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x237080: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x237080u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x237084: 0x244a000f  addiu       $t2, $v0, 0xF
    ctx->pc = 0x237084u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x237088: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x237088u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x23708c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x23708cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x237090: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x237090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x237094: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x237094u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x237098: 0x2415fff0  addiu       $s5, $zero, -0x10
    ctx->pc = 0x237098u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x23709c: 0x2951824  and         $v1, $s4, $s5
    ctx->pc = 0x23709cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & GPR_U64(ctx, 21));
    // 0x2370a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2370a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2370a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2370a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2370a8: 0x8c320ae8  lw          $s2, 0xAE8($at)
    ctx->pc = 0x2370a8u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2370ac: 0x8fa902e8  lw          $t1, 0x2E8($sp)
    ctx->pc = 0x2370acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x2370b0: 0x8d220058  lw          $v0, 0x58($t1)
    ctx->pc = 0x2370b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x2370b4: 0x244501b0  addiu       $a1, $v0, 0x1B0
    ctx->pc = 0x2370b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x2370b8: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x2370b8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2370bc: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x2370bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2370c0: 0xafa302d8  sw          $v1, 0x2D8($sp)
    ctx->pc = 0x2370c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 3));
    // 0x2370c4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2370c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2370c8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x2370c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2370cc: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x2370CCu;
    SET_GPR_U32(ctx, 31, 0x2370D4u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x2370CCu, 0x2370D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2370D4u;
label_2370d4:
    // 0x2370d4: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x2370d4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2370d8: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x2370d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x2370dc: 0x24a20ae8  addiu       $v0, $a1, 0xAE8
    ctx->pc = 0x2370dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2792));
    // 0x2370e0: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x2370e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x2370e4: 0x3c06005d  lui         $a2, 0x5D
    ctx->pc = 0x2370e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)93 << 16));
    // 0x2370e8: 0x24c20ae8  addiu       $v0, $a2, 0xAE8
    ctx->pc = 0x2370e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2792));
    // 0x2370ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2370ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2370f0: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x2370f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2370f4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2370f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x2370f8: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x2370f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x2370fc: 0x24a60ae8  addiu       $a2, $a1, 0xAE8
    ctx->pc = 0x2370fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2792));
    // 0x237100: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x237100u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x237104: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x237104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x237108: 0x62b024  and         $s6, $v1, $v0
    ctx->pc = 0x237108u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23710c: 0xacd60000  sw          $s6, 0x0($a2)
    ctx->pc = 0x23710cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 22));
    // 0x237110: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x237110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x237114: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x237114u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x237118: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x237118u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23711c: 0x8fa602e8  lw          $a2, 0x2E8($sp)
    ctx->pc = 0x23711cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237120: 0x8cc30058  lw          $v1, 0x58($a2)
    ctx->pc = 0x237120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x237124: 0x246205a0  addiu       $v0, $v1, 0x5A0
    ctx->pc = 0x237124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1440));
    // 0x237128: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x237128u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23712c: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x23712cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x237130: 0xafa202d8  sw          $v0, 0x2D8($sp)
    ctx->pc = 0x237130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 2));
    // 0x237134: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x237134u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x237138: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x237138u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x23713c: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x23713Cu;
    SET_GPR_U32(ctx, 31, 0x237144u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x23713Cu, 0x237144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237144u;
label_237144:
    // 0x237144: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x237144u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237148: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x237148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x23714c: 0x24480ae8  addiu       $t0, $v0, 0xAE8
    ctx->pc = 0x23714cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x237150: 0xad120000  sw          $s2, 0x0($t0)
    ctx->pc = 0x237150u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x237154: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x237154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x237158: 0x24460ae8  addiu       $a2, $v0, 0xAE8
    ctx->pc = 0x237158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x23715c: 0x8cd70000  lw          $s7, 0x0($a2)
    ctx->pc = 0x23715cu;
    SET_GPR_S32(ctx, 23, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x237160: 0x26e2000f  addiu       $v0, $s7, 0xF
    ctx->pc = 0x237160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 15));
    // 0x237164: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x237164u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x237168: 0x3c1e005d  lui         $fp, 0x5D
    ctx->pc = 0x237168u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)93 << 16));
    // 0x23716c: 0x27c70ae8  addiu       $a3, $fp, 0xAE8
    ctx->pc = 0x23716cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 2792));
    // 0x237170: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x237170u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x237174: 0x2408fff0  addiu       $t0, $zero, -0x10
    ctx->pc = 0x237174u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x237178: 0x681024  and         $v0, $v1, $t0
    ctx->pc = 0x237178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x23717c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x23717cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x237180: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x237180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x237184: 0x8c290ae8  lw          $t1, 0xAE8($at)
    ctx->pc = 0x237184u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x237188: 0x71209628  paddub      $s2, $t1, $zero
    ctx->pc = 0x237188u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x23718c: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x23718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237190: 0x8c4a0058  lw          $t2, 0x58($v0)
    ctx->pc = 0x237190u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x237194: 0x25420630  addiu       $v0, $t2, 0x630
    ctx->pc = 0x237194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1584));
    // 0x237198: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x237198u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23719c: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x23719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2371a0: 0xafa202d8  sw          $v0, 0x2D8($sp)
    ctx->pc = 0x2371a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 2));
    // 0x2371a4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2371a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2371a8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x2371a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2371ac: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x2371ACu;
    SET_GPR_U32(ctx, 31, 0x2371B4u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x2371ACu, 0x2371B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2371B4u;
label_2371b4:
    // 0x2371b4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x2371b4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2371b8: 0x72809628  paddub      $s2, $s4, $zero
    ctx->pc = 0x2371b8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2371bc: 0x3c11005d  lui         $s1, 0x5D
    ctx->pc = 0x2371bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
    // 0x2371c0: 0x26240ae8  addiu       $a0, $s1, 0xAE8
    ctx->pc = 0x2371c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2792));
    // 0x2371c4: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x2371c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x2371c8: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x2371c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x2371cc: 0x24a60ae8  addiu       $a2, $a1, 0xAE8
    ctx->pc = 0x2371ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2792));
    // 0x2371d0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2371d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2371d4: 0x2447000f  addiu       $a3, $v0, 0xF
    ctx->pc = 0x2371d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2371d8: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x2371d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x2371dc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2371dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2371e0: 0x24480ae8  addiu       $t0, $v0, 0xAE8
    ctx->pc = 0x2371e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x2371e4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2371e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2371e8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2371e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2371ec: 0x433024  and         $a2, $v0, $v1
    ctx->pc = 0x2371ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2371f0: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x2371f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x2371f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2371f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2371f8: 0x8c250ae8  lw          $a1, 0xAE8($at)
    ctx->pc = 0x2371f8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2371fc: 0x70a09628  paddub      $s2, $a1, $zero
    ctx->pc = 0x2371fcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x237200: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x237200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237204: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x237204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x237208: 0x244403f0  addiu       $a0, $v0, 0x3F0
    ctx->pc = 0x237208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x23720c: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x23720cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x237210: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x237210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x237214: 0xafa502d8  sw          $a1, 0x2D8($sp)
    ctx->pc = 0x237214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 5));
    // 0x237218: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x237218u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x23721c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x23721cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x237220: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x237220u;
    SET_GPR_U32(ctx, 31, 0x237228u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x237220u, 0x237228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237228u;
label_237228:
    // 0x237228: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x237228u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23722c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x23722cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x237230: 0x24770ae8  addiu       $s7, $v1, 0xAE8
    ctx->pc = 0x237230u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x237234: 0xaef20000  sw          $s2, 0x0($s7)
    ctx->pc = 0x237234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x237238: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x237238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x23723c: 0x24850ae8  addiu       $a1, $a0, 0xAE8
    ctx->pc = 0x23723cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2792));
    // 0x237240: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x237240u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x237244: 0x24e8000f  addiu       $t0, $a3, 0xF
    ctx->pc = 0x237244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x237248: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x237248u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x23724c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x23724cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x237250: 0x24480ae8  addiu       $t0, $v0, 0xAE8
    ctx->pc = 0x237250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x237254: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x237254u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x237258: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x237258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x23725c: 0x1235024  and         $t2, $t1, $v1
    ctx->pc = 0x23725cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x237260: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x237260u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x237264: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x237264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x237268: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x237268u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x23726c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x23726cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237270: 0x8fa802e8  lw          $t0, 0x2E8($sp)
    ctx->pc = 0x237270u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237274: 0x8d140058  lw          $s4, 0x58($t0)
    ctx->pc = 0x237274u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x237278: 0x26950510  addiu       $s5, $s4, 0x510
    ctx->pc = 0x237278u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1296));
    // 0x23727c: 0x72a08e28  paddub      $s1, $s5, $zero
    ctx->pc = 0x23727cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x237280: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x237280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x237284: 0xafa202d8  sw          $v0, 0x2D8($sp)
    ctx->pc = 0x237284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 2));
    // 0x237288: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x237288u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x23728c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x23728cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x237290: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x237290u;
    SET_GPR_U32(ctx, 31, 0x237298u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x237290u, 0x237298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237298u;
label_237298:
    // 0x237298: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x237298u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23729c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x23729cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x2372a0: 0x24830ae8  addiu       $v1, $a0, 0xAE8
    ctx->pc = 0x2372a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2792));
    // 0x2372a4: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x2372a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x2372a8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x2372a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x2372ac: 0x24660ae8  addiu       $a2, $v1, 0xAE8
    ctx->pc = 0x2372acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x2372b0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2372b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2372b4: 0x2485000f  addiu       $a1, $a0, 0xF
    ctx->pc = 0x2372b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2372b8: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x2372b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x2372bc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2372bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2372c0: 0x24450ae8  addiu       $a1, $v0, 0xAE8
    ctx->pc = 0x2372c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x2372c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2372c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2372c8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2372c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2372cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2372ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2372d0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2372d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2372d4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2372d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2372d8: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x2372d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x2372dc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2372dcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2372e0: 0x24c7000f  addiu       $a3, $a2, 0xF
    ctx->pc = 0x2372e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x2372e4: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2372e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x2372e8: 0x3c08005d  lui         $t0, 0x5D
    ctx->pc = 0x2372e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)93 << 16));
    // 0x2372ec: 0x25020ae8  addiu       $v0, $t0, 0xAE8
    ctx->pc = 0x2372ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 2792));
    // 0x2372f0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2372f0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2372f4: 0x2410fff0  addiu       $s0, $zero, -0x10
    ctx->pc = 0x2372f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2372f8: 0xf04024  and         $t0, $a3, $s0
    ctx->pc = 0x2372f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & GPR_U64(ctx, 16));
    // 0x2372fc: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x2372fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x237300: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x237300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x237304: 0x8c320ae8  lw          $s2, 0xAE8($at)
    ctx->pc = 0x237304u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x237308: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x237308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x23730c: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x23730cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x237310: 0x24710750  addiu       $s1, $v1, 0x750
    ctx->pc = 0x237310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1872));
    // 0x237314: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x237314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x237318: 0xafa202d8  sw          $v0, 0x2D8($sp)
    ctx->pc = 0x237318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 2));
    // 0x23731c: 0x8fa302d8  lw          $v1, 0x2D8($sp)
    ctx->pc = 0x23731cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x237320: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x237320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x237324: 0x3c103000  lui         $s0, 0x3000
    ctx->pc = 0x237324u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)12288 << 16));
    // 0x237328: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x237328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x23732c: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x23732cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x237330: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x237330u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x237334: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x237334u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x237338: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x237338u;
    SET_GPR_U32(ctx, 31, 0x237340u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x237338u, 0x237340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237340u;
label_237340:
    // 0x237340: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x237340u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237344: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x237344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x237348: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x237348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x23734c: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x23734cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x237350: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x237350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x237354: 0x24460ae8  addiu       $a2, $v0, 0xAE8
    ctx->pc = 0x237354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x237358: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x237358u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x23735c: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x23735cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x237360: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x237360u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x237364: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x237364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x237368: 0x24690ae8  addiu       $t1, $v1, 0xAE8
    ctx->pc = 0x237368u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x23736c: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x23736cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x237370: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x237370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x237374: 0xc23824  and         $a3, $a2, $v0
    ctx->pc = 0x237374u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x237378: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x237378u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x23737c: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x23737cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x237380: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x237380u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x237384: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x237384u;
    SET_GPR_U32(ctx, 31, 0x23738Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x23738Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23738Cu) { return; }
    ctx->pc = 0x23738Cu;
label_23738c:
    // 0x23738c: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x23738cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237390: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x237390u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237394: 0x0  nop
    ctx->pc = 0x237394u;
    // NOP
    // 0x237398: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x237398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x23739c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23739cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2373a0: 0x0  nop
    ctx->pc = 0x2373a0u;
    // NOP
    // 0x2373a4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2373a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2373a8: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x2373a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x2373ac: 0x34494000  ori         $t1, $v0, 0x4000
    ctx->pc = 0x2373acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2373b0: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2373b0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2373b4: 0x0  nop
    ctx->pc = 0x2373b4u;
    // NOP
    // 0x2373b8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2373b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2373bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2373bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2373c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2373c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2373c4: 0x0  nop
    ctx->pc = 0x2373c4u;
    // NOP
    // 0x2373c8: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2373c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2373cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2373ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2373d0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2373d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2373d4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2373d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2373d8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2373d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2373dc: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x2373DCu;
    SET_GPR_U32(ctx, 31, 0x2373E4u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x2373E4u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2373E4u) { return; }
    ctx->pc = 0x2373E4u;
label_2373e4:
    // 0x2373e4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2373e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2373e8: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x2373e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2373ec: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2373ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2373f0: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2373f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2373f4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2373f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2373f8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2373f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2373fc: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x2373FCu;
    SET_GPR_U32(ctx, 31, 0x237404u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x2373FCu, 0x237404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237404u;
label_237404:
    // 0x237404: 0x8fa602e8  lw          $a2, 0x2E8($sp)
    ctx->pc = 0x237404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237408: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x237408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x23740c: 0x2462d940  addiu       $v0, $v1, -0x26C0
    ctx->pc = 0x23740cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957376));
    // 0x237410: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x237410u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237414: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x237414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x237418: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x237418u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23741c: 0x24c60120  addiu       $a2, $a2, 0x120
    ctx->pc = 0x23741cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x237420: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x237420u;
    SET_GPR_U32(ctx, 31, 0x237428u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x237420u, 0x237428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237428u;
label_237428:
    // 0x237428: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x237428u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23742c: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x23742cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237430: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x237430u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x237434: 0x24e8d980  addiu       $t0, $a3, -0x2680
    ctx->pc = 0x237434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957440));
    // 0x237438: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x237438u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x23743c: 0x24500120  addiu       $s0, $v0, 0x120
    ctx->pc = 0x23743cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x237440: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x237440u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x237444: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x237444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x237448: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x237448u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x23744c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x23744Cu;
    SET_GPR_U32(ctx, 31, 0x237454u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x23744Cu, 0x237454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237454u;
label_237454:
    // 0x237454: 0x3c093f49  lui         $t1, 0x3F49
    ctx->pc = 0x237454u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16201 << 16));
    // 0x237458: 0x35280fdb  ori         $t0, $t1, 0xFDB
    ctx->pc = 0x237458u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4059);
    // 0x23745c: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x23745cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x237460: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x237460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x237464: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x237464u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x237468: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x237468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x23746c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x23746cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237470: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x237470u;
    SET_GPR_U32(ctx, 31, 0x237478u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x237478u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x237478u) { return; }
    ctx->pc = 0x237478u;
label_237478:
    // 0x237478: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x237478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x23747c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x23747cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x237480: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x237480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x237484: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x237484u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237488: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x237488u;
    SET_GPR_U32(ctx, 31, 0x237490u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x237488u, 0x237490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237490u;
label_237490:
    // 0x237490: 0x8fa302e8  lw          $v1, 0x2E8($sp)
    ctx->pc = 0x237490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237494: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x237494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x237498: 0x2444d950  addiu       $a0, $v0, -0x26B0
    ctx->pc = 0x237498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957392));
    // 0x23749c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x23749cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2374a0: 0x24660120  addiu       $a2, $v1, 0x120
    ctx->pc = 0x2374a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2374a4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2374A4u;
    SET_GPR_U32(ctx, 31, 0x2374ACu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2374A4u, 0x2374ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2374ACu;
label_2374ac:
    // 0x2374ac: 0x8fa302e8  lw          $v1, 0x2E8($sp)
    ctx->pc = 0x2374acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x2374b0: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x2374b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x2374b4: 0x24b2d990  addiu       $s2, $a1, -0x2670
    ctx->pc = 0x2374b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957456));
    // 0x2374b8: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x2374b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2374bc: 0x24690120  addiu       $t1, $v1, 0x120
    ctx->pc = 0x2374bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2374c0: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x2374c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2374c4: 0x27b700f0  addiu       $s7, $sp, 0xF0
    ctx->pc = 0x2374c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2374c8: 0x72e03628  paddub      $a2, $s7, $zero
    ctx->pc = 0x2374c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x2374cc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2374CCu;
    SET_GPR_U32(ctx, 31, 0x2374D4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2374CCu, 0x2374D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2374D4u;
label_2374d4:
    // 0x2374d4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2374d4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2374d8: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x2374d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x2374dc: 0x347e0fdb  ori         $fp, $v1, 0xFDB
    ctx->pc = 0x2374dcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2374e0: 0x449e6000  mtc1        $fp, $f12
    ctx->pc = 0x2374e0u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2374e4: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2374e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2374e8: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2374e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2374ec: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x2374ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2374f0: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x2374f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2374f4: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x2374F4u;
    SET_GPR_U32(ctx, 31, 0x2374FCu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x2374FCu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2374FCu) { return; }
    ctx->pc = 0x2374FCu;
label_2374fc:
    // 0x2374fc: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x2374fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x237500: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x237500u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237504: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x237504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x237508: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x237508u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x23750c: 0x27aa00a0  addiu       $t2, $sp, 0xA0
    ctx->pc = 0x23750cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x237510: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x237510u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x237514: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x237514u;
    SET_GPR_U32(ctx, 31, 0x23751Cu);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x237514u, 0x23751Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23751Cu;
label_23751c:
    // 0x23751c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x23751cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237520: 0x8fa602e8  lw          $a2, 0x2E8($sp)
    ctx->pc = 0x237520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237524: 0x3c140062  lui         $s4, 0x62
    ctx->pc = 0x237524u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)98 << 16));
    // 0x237528: 0x2695d960  addiu       $s5, $s4, -0x26A0
    ctx->pc = 0x237528u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957408));
    // 0x23752c: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x23752cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x237530: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x237530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x237534: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x237534u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237538: 0x24c60120  addiu       $a2, $a2, 0x120
    ctx->pc = 0x237538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x23753c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x23753Cu;
    SET_GPR_U32(ctx, 31, 0x237544u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x23753Cu, 0x237544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237544u;
label_237544:
    // 0x237544: 0x8fa702e8  lw          $a3, 0x2E8($sp)
    ctx->pc = 0x237544u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237548: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x237548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x23754c: 0x2466d9a0  addiu       $a2, $v1, -0x2660
    ctx->pc = 0x23754cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957472));
    // 0x237550: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x237550u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x237554: 0x24e20120  addiu       $v0, $a3, 0x120
    ctx->pc = 0x237554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x237558: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x237558u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23755c: 0x27b100f0  addiu       $s1, $sp, 0xF0
    ctx->pc = 0x23755cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x237560: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x237560u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x237564: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x237564u;
    SET_GPR_U32(ctx, 31, 0x23756Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x237564u, 0x23756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23756Cu;
label_23756c:
    // 0x23756c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x23756cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237570: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x237570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x237574: 0x34480fdb  ori         $t0, $v0, 0xFDB
    ctx->pc = 0x237574u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x237578: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x237578u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23757c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x23757cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x237580: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x237580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x237584: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x237584u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x237588: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x237588u;
    SET_GPR_U32(ctx, 31, 0x237590u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x237590u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x237590u) { return; }
    ctx->pc = 0x237590u;
label_237590:
    // 0x237590: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x237590u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237594: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x237594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x237598: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x237598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x23759c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x23759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2375a0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2375a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2375a4: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x2375A4u;
    SET_GPR_U32(ctx, 31, 0x2375ACu);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x2375A4u, 0x2375ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2375ACu;
label_2375ac:
    // 0x2375ac: 0x8fa302e8  lw          $v1, 0x2E8($sp)
    ctx->pc = 0x2375acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x2375b0: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x2375b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x2375b4: 0x24a6d970  addiu       $a2, $a1, -0x2690
    ctx->pc = 0x2375b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957424));
    // 0x2375b8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2375b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2375bc: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x2375bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2375c0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2375c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2375c4: 0x24620120  addiu       $v0, $v1, 0x120
    ctx->pc = 0x2375c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2375c8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2375c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2375cc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2375CCu;
    SET_GPR_U32(ctx, 31, 0x2375D4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2375CCu, 0x2375D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2375D4u;
label_2375d4:
    // 0x2375d4: 0x8fa602e8  lw          $a2, 0x2E8($sp)
    ctx->pc = 0x2375d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x2375d8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2375d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2375dc: 0x2444d9b0  addiu       $a0, $v0, -0x2650
    ctx->pc = 0x2375dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957488));
    // 0x2375e0: 0x24c50120  addiu       $a1, $a2, 0x120
    ctx->pc = 0x2375e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x2375e4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2375e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2375e8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2375E8u;
    SET_GPR_U32(ctx, 31, 0x2375F0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2375E8u, 0x2375F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2375F0u;
label_2375f0:
    // 0x2375f0: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2375f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2375f4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2375f4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2375f8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2375f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2375fc: 0xe420d94c  swc1        $f0, -0x26B4($at)
    ctx->pc = 0x2375fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61D94Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D94Cu, _value); } while (0); }
    // 0x237600: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x237600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x237604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237608: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x237608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x23760c: 0xe420d95c  swc1        $f0, -0x26A4($at)
    ctx->pc = 0x23760cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61D95Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D95Cu, _value); } while (0); }
    // 0x237610: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x237610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x237614: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x237614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237618: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x237618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x23761c: 0xe420d96c  swc1        $f0, -0x2694($at)
    ctx->pc = 0x23761cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61D96Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D96Cu, _value); } while (0); }
    // 0x237620: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x237620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x237624: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x237624u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237628: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x237628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x23762c: 0xe420d97c  swc1        $f0, -0x2684($at)
    ctx->pc = 0x23762cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61D97Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D97Cu, _value); } while (0); }
    // 0x237630: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x237630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x237634: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x237634u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237638: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x237638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x23763c: 0xe420d98c  swc1        $f0, -0x2674($at)
    ctx->pc = 0x23763cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61D98Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D98Cu, _value); } while (0); }
    // 0x237640: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x237640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x237644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237648: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x237648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x23764c: 0xe420d99c  swc1        $f0, -0x2664($at)
    ctx->pc = 0x23764cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61D99Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D99Cu, _value); } while (0); }
    // 0x237650: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x237650u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x237654: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x237654u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237658: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x237658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x23765c: 0xe420d9ac  swc1        $f0, -0x2654($at)
    ctx->pc = 0x23765cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61D9ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D9ACu, _value); } while (0); }
    // 0x237660: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x237660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x237664: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x237664u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237668: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x237668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x23766c: 0xe420d9bc  swc1        $f0, -0x2644($at)
    ctx->pc = 0x23766cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61D9BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D9BCu, _value); } while (0); }
    // 0x237670: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x237670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x237674: 0x2444d940  addiu       $a0, $v0, -0x26C0
    ctx->pc = 0x237674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957376));
    // 0x237678: 0x78970000  lq          $s7, 0x0($a0)
    ctx->pc = 0x237678u;
    SET_GPR_VEC(ctx, 23, FAST_READ128(0x61D940u));
    // 0x23767c: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x23767cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x237680: 0x7c770000  sq          $s7, 0x0($v1)
    ctx->pc = 0x237680u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 23));
    // 0x237684: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x237684u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x237688: 0x24c7d950  addiu       $a3, $a2, -0x26B0
    ctx->pc = 0x237688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957392));
    // 0x23768c: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x23768cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x61D950u));
    // 0x237690: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x237690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x237694: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x237694u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x237698: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x237698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23769c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x23769cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x2376a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2376a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2376a4: 0x0  nop
    ctx->pc = 0x2376a4u;
    // NOP
    // 0x2376a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2376a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2376ac: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2376acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2376b0: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x2376b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2376b4: 0x3c0944fa  lui         $t1, 0x44FA
    ctx->pc = 0x2376b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17658 << 16));
    // 0x2376b8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2376b8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2376bc: 0x0  nop
    ctx->pc = 0x2376bcu;
    // NOP
    // 0x2376c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2376c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2376c4: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2376c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2376c8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2376c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2376cc: 0x244ad9c0  addiu       $t2, $v0, -0x2640
    ctx->pc = 0x2376ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957504));
    // 0x2376d0: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2376d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2376d4: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x2376d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2376d8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2376d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2376dc: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x2376dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2376e0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2376e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2376e4: 0x3c140062  lui         $s4, 0x62
    ctx->pc = 0x2376e4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)98 << 16));
    // 0x2376e8: 0x2695d940  addiu       $s5, $s4, -0x26C0
    ctx->pc = 0x2376e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957376));
    // 0x2376ec: 0x72a03e28  paddub      $a3, $s5, $zero
    ctx->pc = 0x2376ecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x2376f0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2376f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2376f4: 0x2472d950  addiu       $s2, $v1, -0x26B0
    ctx->pc = 0x2376f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957392));
    // 0x2376f8: 0x72404628  paddub      $t0, $s2, $zero
    ctx->pc = 0x2376f8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2376fc: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x2376fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x237700: 0x70005628  paddub      $t2, $zero, $zero
    ctx->pc = 0x237700u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237704: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x237704u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237708: 0xc05acdc  jal         func_16B370
    ctx->pc = 0x237708u;
    SET_GPR_U32(ctx, 31, 0x237710u);
    ctx->pc = 0x16B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B370u, 0x237708u, 0x237710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237710u;
label_237710:
    // 0x237710: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x237710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x237714: 0x2462d9c0  addiu       $v0, $v1, -0x2640
    ctx->pc = 0x237714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957504));
    // 0x237718: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x237718u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23771c: 0xc05ae10  jal         func_16B840
    ctx->pc = 0x23771Cu;
    SET_GPR_U32(ctx, 31, 0x237724u);
    ctx->pc = 0x16B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B840u, 0x23771Cu, 0x237724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237724u;
label_237724:
    // 0x237724: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x237724u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237728: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x237728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x23772c: 0xa420d9d4  sh          $zero, -0x262C($at)
    ctx->pc = 0x23772cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61D9D4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x61D9D4u, _value); } while (0);
    // 0x237730: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x237730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x237734: 0x2446d950  addiu       $a2, $v0, -0x26B0
    ctx->pc = 0x237734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957392));
    // 0x237738: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x237738u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x61D950u));
    // 0x23773c: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x23773cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x237740: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x237740u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x237744: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x237744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x237748: 0x2485d960  addiu       $a1, $a0, -0x26A0
    ctx->pc = 0x237748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957408));
    // 0x23774c: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x23774cu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x61D960u));
    // 0x237750: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x237750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x237754: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x237754u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x237758: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x237758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23775c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x23775cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x237760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237764: 0x0  nop
    ctx->pc = 0x237764u;
    // NOP
    // 0x237768: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x237768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23776c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x23776cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x237770: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x237770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237774: 0x3c1644fa  lui         $s6, 0x44FA
    ctx->pc = 0x237774u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)17658 << 16));
    // 0x237778: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x237778u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23777c: 0x0  nop
    ctx->pc = 0x23777cu;
    // NOP
    // 0x237780: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x237780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x237784: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x237784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x237788: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x237788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x23778c: 0x2446da10  addiu       $a2, $v0, -0x25F0
    ctx->pc = 0x23778cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957584));
    // 0x237790: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x237790u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x237794: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x237794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x237798: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x237798u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x23779c: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x23779cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2377a0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2377a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2377a4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2377a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2377a8: 0x2442d950  addiu       $v0, $v0, -0x26B0
    ctx->pc = 0x2377a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957392));
    // 0x2377ac: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2377acu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2377b0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2377b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2377b4: 0x2448d960  addiu       $t0, $v0, -0x26A0
    ctx->pc = 0x2377b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957408));
    // 0x2377b8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2377b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2377bc: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2377bcu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2377c0: 0x70005628  paddub      $t2, $zero, $zero
    ctx->pc = 0x2377c0u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2377c4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2377c4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2377c8: 0xc05acdc  jal         func_16B370
    ctx->pc = 0x2377C8u;
    SET_GPR_U32(ctx, 31, 0x2377D0u);
    ctx->pc = 0x16B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B370u, 0x2377C8u, 0x2377D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377D0u;
label_2377d0:
    // 0x2377d0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2377d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2377d4: 0x3c170062  lui         $s7, 0x62
    ctx->pc = 0x2377d4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)98 << 16));
    // 0x2377d8: 0x26e2da10  addiu       $v0, $s7, -0x25F0
    ctx->pc = 0x2377d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294957584));
    // 0x2377dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2377dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2377e0: 0xc05ae10  jal         func_16B840
    ctx->pc = 0x2377E0u;
    SET_GPR_U32(ctx, 31, 0x2377E8u);
    ctx->pc = 0x16B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B840u, 0x2377E0u, 0x2377E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377E8u;
label_2377e8:
    // 0x2377e8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x2377e8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2377ec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2377ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2377f0: 0xa420da24  sh          $zero, -0x25DC($at)
    ctx->pc = 0x2377f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61DA24u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x61DA24u, _value); } while (0);
    // 0x2377f4: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x2377f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x2377f8: 0x24e3d960  addiu       $v1, $a3, -0x26A0
    ctx->pc = 0x2377f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957408));
    // 0x2377fc: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x2377fcu;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x61D960u));
    // 0x237800: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x237800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x237804: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x237804u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x237808: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x237808u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x23780c: 0x2522d970  addiu       $v0, $t1, -0x2690
    ctx->pc = 0x23780cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957424));
    // 0x237810: 0x784a0000  lq          $t2, 0x0($v0)
    ctx->pc = 0x237810u;
    SET_GPR_VEC(ctx, 10, FAST_READ128(0x61D970u));
    // 0x237814: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x237814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x237818: 0x7c4a0000  sq          $t2, 0x0($v0)
    ctx->pc = 0x237818u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 10));
    // 0x23781c: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x23781cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237820: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x237820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x237824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237828: 0x0  nop
    ctx->pc = 0x237828u;
    // NOP
    // 0x23782c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23782cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x237830: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x237830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x237834: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x237834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237838: 0x3c1444fa  lui         $s4, 0x44FA
    ctx->pc = 0x237838u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)17658 << 16));
    // 0x23783c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x23783cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237840: 0x0  nop
    ctx->pc = 0x237840u;
    // NOP
    // 0x237844: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x237844u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x237848: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x237848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x23784c: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x23784cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
    // 0x237850: 0x2624da60  addiu       $a0, $s1, -0x25A0
    ctx->pc = 0x237850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957664));
    // 0x237854: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x237854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x237858: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x237858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x23785c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x23785cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x237860: 0x2447d960  addiu       $a3, $v0, -0x26A0
    ctx->pc = 0x237860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957408));
    // 0x237864: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x237864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x237868: 0x2448d970  addiu       $t0, $v0, -0x2690
    ctx->pc = 0x237868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957424));
    // 0x23786c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x23786cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x237870: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x237870u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237874: 0x70005628  paddub      $t2, $zero, $zero
    ctx->pc = 0x237874u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237878: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x237878u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23787c: 0xc05acdc  jal         func_16B370
    ctx->pc = 0x23787Cu;
    SET_GPR_U32(ctx, 31, 0x237884u);
    ctx->pc = 0x16B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B370u, 0x23787Cu, 0x237884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237884u;
label_237884:
    // 0x237884: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x237884u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237888: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x237888u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x23788c: 0x24c5da60  addiu       $a1, $a2, -0x25A0
    ctx->pc = 0x23788cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957664));
    // 0x237890: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x237890u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x237894: 0xc05ae10  jal         func_16B840
    ctx->pc = 0x237894u;
    SET_GPR_U32(ctx, 31, 0x23789Cu);
    ctx->pc = 0x16B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B840u, 0x237894u, 0x23789Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23789Cu;
label_23789c:
    // 0x23789c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x23789cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2378a0: 0xa420da74  sh          $zero, -0x258C($at)
    ctx->pc = 0x2378a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61DA74u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x61DA74u, _value); } while (0);
    // 0x2378a4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2378a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2378a8: 0x2444d970  addiu       $a0, $v0, -0x2690
    ctx->pc = 0x2378a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957424));
    // 0x2378ac: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x2378acu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x61D970u));
    // 0x2378b0: 0x27b200f0  addiu       $s2, $sp, 0xF0
    ctx->pc = 0x2378b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2378b4: 0x7e450000  sq          $a1, 0x0($s2)
    ctx->pc = 0x2378b4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 5));
    // 0x2378b8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2378b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2378bc: 0x2477d980  addiu       $s7, $v1, -0x2680
    ctx->pc = 0x2378bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957440));
    // 0x2378c0: 0x7ae40000  lq          $a0, 0x0($s7)
    ctx->pc = 0x2378c0u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x61D980u));
    // 0x2378c4: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2378c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2378c8: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2378c8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2378cc: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x2378ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2378d0: 0x3c0744fa  lui         $a3, 0x44FA
    ctx->pc = 0x2378d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17658 << 16));
    // 0x2378d4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2378d4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2378d8: 0x0  nop
    ctx->pc = 0x2378d8u;
    // NOP
    // 0x2378dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2378dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2378e0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2378e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2378e4: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x2378e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2378e8: 0x3c0844fa  lui         $t0, 0x44FA
    ctx->pc = 0x2378e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17658 << 16));
    // 0x2378ec: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2378ecu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2378f0: 0x0  nop
    ctx->pc = 0x2378f0u;
    // NOP
    // 0x2378f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2378f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2378f8: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2378f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2378fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2378fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x237900: 0x2448dab0  addiu       $t0, $v0, -0x2550
    ctx->pc = 0x237900u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957744));
    // 0x237904: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x237904u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x237908: 0x27a900f0  addiu       $t1, $sp, 0xF0
    ctx->pc = 0x237908u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x23790c: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x23790cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x237910: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x237910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x237914: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x237914u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x237918: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x237918u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
    // 0x23791c: 0x2542d970  addiu       $v0, $t2, -0x2690
    ctx->pc = 0x23791cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294957424));
    // 0x237920: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x237920u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237924: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x237924u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x237928: 0x2514d980  addiu       $s4, $t0, -0x2680
    ctx->pc = 0x237928u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957440));
    // 0x23792c: 0x72804628  paddub      $t0, $s4, $zero
    ctx->pc = 0x23792cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x237930: 0x24150010  addiu       $s5, $zero, 0x10
    ctx->pc = 0x237930u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x237934: 0x72a04e28  paddub      $t1, $s5, $zero
    ctx->pc = 0x237934u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x237938: 0x70005628  paddub      $t2, $zero, $zero
    ctx->pc = 0x237938u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23793c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x23793cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237940: 0xc05acdc  jal         func_16B370
    ctx->pc = 0x237940u;
    SET_GPR_U32(ctx, 31, 0x237948u);
    ctx->pc = 0x16B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B370u, 0x237940u, 0x237948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237948u;
label_237948:
    // 0x237948: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x237948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x23794c: 0x2444dab0  addiu       $a0, $v0, -0x2550
    ctx->pc = 0x23794cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957744));
    // 0x237950: 0xc05ae10  jal         func_16B840
    ctx->pc = 0x237950u;
    SET_GPR_U32(ctx, 31, 0x237958u);
    ctx->pc = 0x16B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B840u, 0x237950u, 0x237958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237958u;
label_237958:
    // 0x237958: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x237958u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23795c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x23795cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x237960: 0xa420dac4  sh          $zero, -0x253C($at)
    ctx->pc = 0x237960u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61DAC4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x61DAC4u, _value); } while (0);
    // 0x237964: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x237964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x237968: 0x2466d980  addiu       $a2, $v1, -0x2680
    ctx->pc = 0x237968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957440));
    // 0x23796c: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x23796cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x61D980u));
    // 0x237970: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x237970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x237974: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x237974u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x237978: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x237978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x23797c: 0x2445d990  addiu       $a1, $v0, -0x2670
    ctx->pc = 0x23797cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957456));
    // 0x237980: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x237980u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x61D990u));
    // 0x237984: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x237984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x237988: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x237988u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x23798c: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x23798cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237990: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x237990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x237994: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x237994u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237998: 0x0  nop
    ctx->pc = 0x237998u;
    // NOP
    // 0x23799c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23799cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2379a0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2379a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2379a4: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x2379a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2379a8: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x2379a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x2379ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2379acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2379b0: 0x0  nop
    ctx->pc = 0x2379b0u;
    // NOP
    // 0x2379b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2379b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2379b8: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2379b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2379bc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2379bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2379c0: 0x2446db00  addiu       $a2, $v0, -0x2500
    ctx->pc = 0x2379c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957824));
    // 0x2379c4: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2379c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2379c8: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2379c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2379cc: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2379ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2379d0: 0x27a80100  addiu       $t0, $sp, 0x100
    ctx->pc = 0x2379d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2379d4: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2379d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2379d8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2379d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2379dc: 0x2447d980  addiu       $a3, $v0, -0x2680
    ctx->pc = 0x2379dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957440));
    // 0x2379e0: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x2379e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x2379e4: 0x2608d990  addiu       $t0, $s0, -0x2670
    ctx->pc = 0x2379e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957456));
    // 0x2379e8: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x2379e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2379ec: 0x72404e28  paddub      $t1, $s2, $zero
    ctx->pc = 0x2379ecu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2379f0: 0x70005628  paddub      $t2, $zero, $zero
    ctx->pc = 0x2379f0u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2379f4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2379f4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2379f8: 0xc05acdc  jal         func_16B370
    ctx->pc = 0x2379F8u;
    SET_GPR_U32(ctx, 31, 0x237A00u);
    ctx->pc = 0x16B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B370u, 0x2379F8u, 0x237A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A00u;
label_237a00:
    // 0x237a00: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x237a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x237a04: 0x2471db00  addiu       $s1, $v1, -0x2500
    ctx->pc = 0x237a04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957824));
    // 0x237a08: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x237a08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x237a0c: 0xc05ae10  jal         func_16B840
    ctx->pc = 0x237A0Cu;
    SET_GPR_U32(ctx, 31, 0x237A14u);
    ctx->pc = 0x16B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B840u, 0x237A0Cu, 0x237A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A14u;
label_237a14:
    // 0x237a14: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x237a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x237a18: 0xa420db14  sh          $zero, -0x24EC($at)
    ctx->pc = 0x237a18u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61DB14u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x61DB14u, _value); } while (0);
    // 0x237a1c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x237a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x237a20: 0x2462d990  addiu       $v0, $v1, -0x2670
    ctx->pc = 0x237a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957456));
    // 0x237a24: 0x78500000  lq          $s0, 0x0($v0)
    ctx->pc = 0x237a24u;
    SET_GPR_VEC(ctx, 16, FAST_READ128(0x61D990u));
    // 0x237a28: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x237a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x237a2c: 0x7c500000  sq          $s0, 0x0($v0)
    ctx->pc = 0x237a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 16));
    // 0x237a30: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x237a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x237a34: 0x2442d9a0  addiu       $v0, $v0, -0x2660
    ctx->pc = 0x237a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957472));
    // 0x237a38: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x237a38u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x61D9A0u));
    // 0x237a3c: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x237a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x237a40: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x237a40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x237a44: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x237a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237a48: 0x3c0644fa  lui         $a2, 0x44FA
    ctx->pc = 0x237a48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17658 << 16));
    // 0x237a4c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x237a4cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237a50: 0x0  nop
    ctx->pc = 0x237a50u;
    // NOP
    // 0x237a54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x237a54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x237a58: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x237a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x237a5c: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x237a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237a60: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x237a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x237a64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237a68: 0x0  nop
    ctx->pc = 0x237a68u;
    // NOP
    // 0x237a6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x237a6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x237a70: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x237a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x237a74: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x237a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x237a78: 0x2483db50  addiu       $v1, $a0, -0x24B0
    ctx->pc = 0x237a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957904));
    // 0x237a7c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x237a7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x237a80: 0x27a900f0  addiu       $t1, $sp, 0xF0
    ctx->pc = 0x237a80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x237a84: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x237a84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x237a88: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x237a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x237a8c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x237a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x237a90: 0x2447d990  addiu       $a3, $v0, -0x2670
    ctx->pc = 0x237a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957456));
    // 0x237a94: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x237a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x237a98: 0x2468d9a0  addiu       $t0, $v1, -0x2660
    ctx->pc = 0x237a98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957472));
    // 0x237a9c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x237a9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x237aa0: 0x70005628  paddub      $t2, $zero, $zero
    ctx->pc = 0x237aa0u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237aa4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x237aa4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237aa8: 0xc05acdc  jal         func_16B370
    ctx->pc = 0x237AA8u;
    SET_GPR_U32(ctx, 31, 0x237AB0u);
    ctx->pc = 0x16B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B370u, 0x237AA8u, 0x237AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237AB0u;
label_237ab0:
    // 0x237ab0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x237ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x237ab4: 0x2444db50  addiu       $a0, $v0, -0x24B0
    ctx->pc = 0x237ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x237ab8: 0xc05ae10  jal         func_16B840
    ctx->pc = 0x237AB8u;
    SET_GPR_U32(ctx, 31, 0x237AC0u);
    ctx->pc = 0x16B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B840u, 0x237AB8u, 0x237AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237AC0u;
label_237ac0:
    // 0x237ac0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x237ac0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237ac4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x237ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x237ac8: 0xa420db64  sh          $zero, -0x249C($at)
    ctx->pc = 0x237ac8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61DB64u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x61DB64u, _value); } while (0);
    // 0x237acc: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x237accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x237ad0: 0x2483d9a0  addiu       $v1, $a0, -0x2660
    ctx->pc = 0x237ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957472));
    // 0x237ad4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x237ad4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x61D9A0u));
    // 0x237ad8: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x237ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x237adc: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x237adcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x237ae0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x237ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x237ae4: 0x2446d9b0  addiu       $a2, $v0, -0x2650
    ctx->pc = 0x237ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957488));
    // 0x237ae8: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x237ae8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x61D9B0u));
    // 0x237aec: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x237aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x237af0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x237af0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x237af4: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x237af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237af8: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x237af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x237afc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237afcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237b00: 0x0  nop
    ctx->pc = 0x237b00u;
    // NOP
    // 0x237b04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x237b04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x237b08: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x237b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x237b0c: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x237b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237b10: 0x3c0644fa  lui         $a2, 0x44FA
    ctx->pc = 0x237b10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17658 << 16));
    // 0x237b14: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x237b14u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237b18: 0x0  nop
    ctx->pc = 0x237b18u;
    // NOP
    // 0x237b1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x237b1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x237b20: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x237b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x237b24: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x237b24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x237b28: 0x24e2dba0  addiu       $v0, $a3, -0x2460
    ctx->pc = 0x237b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957984));
    // 0x237b2c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x237b2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237b30: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x237b30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x237b34: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x237b34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x237b38: 0x27a80100  addiu       $t0, $sp, 0x100
    ctx->pc = 0x237b38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x237b3c: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x237b3cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x237b40: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x237b40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x237b44: 0x2607d9a0  addiu       $a3, $s0, -0x2660
    ctx->pc = 0x237b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957472));
    // 0x237b48: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x237b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x237b4c: 0x2448d9b0  addiu       $t0, $v0, -0x2650
    ctx->pc = 0x237b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957488));
    // 0x237b50: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x237b50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x237b54: 0x70005628  paddub      $t2, $zero, $zero
    ctx->pc = 0x237b54u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237b58: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x237b58u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237b5c: 0xc05acdc  jal         func_16B370
    ctx->pc = 0x237B5Cu;
    SET_GPR_U32(ctx, 31, 0x237B64u);
    ctx->pc = 0x16B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B370u, 0x237B5Cu, 0x237B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B64u;
label_237b64:
    // 0x237b64: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x237b64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237b68: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x237b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x237b6c: 0x2442dba0  addiu       $v0, $v0, -0x2460
    ctx->pc = 0x237b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957984));
    // 0x237b70: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x237b70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237b74: 0xc05ae10  jal         func_16B840
    ctx->pc = 0x237B74u;
    SET_GPR_U32(ctx, 31, 0x237B7Cu);
    ctx->pc = 0x16B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B840u, 0x237B74u, 0x237B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B7Cu;
label_237b7c:
    // 0x237b7c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x237b7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237b80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x237b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x237b84: 0xa420dbb4  sh          $zero, -0x244C($at)
    ctx->pc = 0x237b84u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61DBB4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x61DBB4u, _value); } while (0);
    // 0x237b88: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x237b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x237b8c: 0x24a2d9b0  addiu       $v0, $a1, -0x2650
    ctx->pc = 0x237b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957488));
    // 0x237b90: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x237b90u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x61D9B0u));
    // 0x237b94: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x237b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x237b98: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x237b98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x237b9c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x237b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x237ba0: 0x2444d940  addiu       $a0, $v0, -0x26C0
    ctx->pc = 0x237ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957376));
    // 0x237ba4: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x237ba4u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x61D940u));
    // 0x237ba8: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x237ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x237bac: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x237bacu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x237bb0: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x237bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237bb4: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x237bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x237bb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237bbc: 0x0  nop
    ctx->pc = 0x237bbcu;
    // NOP
    // 0x237bc0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x237bc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x237bc4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x237bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x237bc8: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x237bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237bcc: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x237bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x237bd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x237bd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237bd4: 0x0  nop
    ctx->pc = 0x237bd4u;
    // NOP
    // 0x237bd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x237bd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x237bdc: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x237bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x237be0: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x237be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x237be4: 0x24b2dbf0  addiu       $s2, $a1, -0x2410
    ctx->pc = 0x237be4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958064));
    // 0x237be8: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x237be8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x237bec: 0x27a900f0  addiu       $t1, $sp, 0xF0
    ctx->pc = 0x237becu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x237bf0: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x237bf0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x237bf4: 0x27b70100  addiu       $s7, $sp, 0x100
    ctx->pc = 0x237bf4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x237bf8: 0x72e03628  paddub      $a2, $s7, $zero
    ctx->pc = 0x237bf8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x237bfc: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x237bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
    // 0x237c00: 0x263ed9b0  addiu       $fp, $s1, -0x2650
    ctx->pc = 0x237c00u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957488));
    // 0x237c04: 0x73c03e28  paddub      $a3, $fp, $zero
    ctx->pc = 0x237c04u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x237c08: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x237c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x237c0c: 0x2468d940  addiu       $t0, $v1, -0x26C0
    ctx->pc = 0x237c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957376));
    // 0x237c10: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x237c10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x237c14: 0x70005628  paddub      $t2, $zero, $zero
    ctx->pc = 0x237c14u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237c18: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x237c18u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237c1c: 0xc05acdc  jal         func_16B370
    ctx->pc = 0x237C1Cu;
    SET_GPR_U32(ctx, 31, 0x237C24u);
    ctx->pc = 0x16B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B370u, 0x237C1Cu, 0x237C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C24u;
label_237c24:
    // 0x237c24: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x237c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x237c28: 0x2443dbf0  addiu       $v1, $v0, -0x2410
    ctx->pc = 0x237c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958064));
    // 0x237c2c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x237c2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x237c30: 0xc05ae10  jal         func_16B840
    ctx->pc = 0x237C30u;
    SET_GPR_U32(ctx, 31, 0x237C38u);
    ctx->pc = 0x16B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B840u, 0x237C30u, 0x237C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C38u;
label_237c38:
    // 0x237c38: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x237c38u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237c3c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x237c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x237c40: 0xa420dc04  sh          $zero, -0x23FC($at)
    ctx->pc = 0x237c40u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61DC04u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x61DC04u, _value); } while (0);
    // 0x237c44: 0x8fa302e8  lw          $v1, 0x2E8($sp)
    ctx->pc = 0x237c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237c48: 0x8c6602d0  lw          $a2, 0x2D0($v1)
    ctx->pc = 0x237c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x237c4c: 0x24d43b60  addiu       $s4, $a2, 0x3B60
    ctx->pc = 0x237c4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 15200));
    // 0x237c50: 0xafb402d4  sw          $s4, 0x2D4($sp)
    ctx->pc = 0x237c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 20));
    // 0x237c54: 0x8fb502d4  lw          $s5, 0x2D4($sp)
    ctx->pc = 0x237c54u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x237c58: 0x96a20140  lhu         $v0, 0x140($s5)
    ctx->pc = 0x237c58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 320)));
    // 0x237c5c: 0x344600a4  ori         $a2, $v0, 0xA4
    ctx->pc = 0x237c5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)164);
    // 0x237c60: 0xa6a60140  sh          $a2, 0x140($s5)
    ctx->pc = 0x237c60u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 320), (uint16_t)GPR_U32(ctx, 6));
    // 0x237c64: 0x8fa202d4  lw          $v0, 0x2D4($sp)
    ctx->pc = 0x237c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x237c68: 0x8fa702d4  lw          $a3, 0x2D4($sp)
    ctx->pc = 0x237c68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x237c6c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x237c6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x237c70: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x237c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x237c74: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x237c74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x237c78: 0x8fa602d4  lw          $a2, 0x2D4($sp)
    ctx->pc = 0x237c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x237c7c: 0xc040c00  jal         func_103000
    ctx->pc = 0x237C7Cu;
    SET_GPR_U32(ctx, 31, 0x237C84u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x237C84u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x237C84u) { return; }
    ctx->pc = 0x237C84u;
label_237c84:
    // 0x237c84: 0x8fb102d4  lw          $s1, 0x2D4($sp)
    ctx->pc = 0x237c84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x237c88: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x237c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237c8c: 0x3c0743fa  lui         $a3, 0x43FA
    ctx->pc = 0x237c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17402 << 16));
    // 0x237c90: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x237c90u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237c94: 0x0  nop
    ctx->pc = 0x237c94u;
    // NOP
    // 0x237c98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x237c98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x237c9c: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x237c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x237ca0: 0x8fa802e8  lw          $t0, 0x2E8($sp)
    ctx->pc = 0x237ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237ca4: 0x8d020130  lw          $v0, 0x130($t0)
    ctx->pc = 0x237ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 304)));
    // 0x237ca8: 0x24440980  addiu       $a0, $v0, 0x980
    ctx->pc = 0x237ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2432));
    // 0x237cac: 0x8fb002d4  lw          $s0, 0x2D4($sp)
    ctx->pc = 0x237cacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x237cb0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x237cb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x237cb4: 0xc040ca2  jal         func_103288
    ctx->pc = 0x237CB4u;
    SET_GPR_U32(ctx, 31, 0x237CBCu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x237CBCu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x237CBCu) { return; }
    ctx->pc = 0x237CBCu;
label_237cbc:
    // 0x237cbc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x237cbcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237cc0: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x237cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x237cc4: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x237cc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x237cc8: 0x8fa502e8  lw          $a1, 0x2E8($sp)
    ctx->pc = 0x237cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237ccc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x237cccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x237cd0: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x237cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x237cd4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x237cd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237cd8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x237cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x237cdc: 0x2443af70  addiu       $v1, $v0, -0x5090
    ctx->pc = 0x237cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946672));
    // 0x237ce0: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x237ce0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x237ce4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x237ce4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237ce8: 0xc0863c0  jal         func_218F00
    ctx->pc = 0x237CE8u;
    SET_GPR_U32(ctx, 31, 0x237CF0u);
    ctx->pc = 0x218F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218F00u, 0x237CE8u, 0x237CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237CF0u;
label_237cf0:
    // 0x237cf0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x237cf0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237cf4: 0x3c064348  lui         $a2, 0x4348
    ctx->pc = 0x237cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17224 << 16));
    // 0x237cf8: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x237cf8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x237cfc: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x237cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237d00: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x237d00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237d04: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x237d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x237d08: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x237d08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237d0c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x237d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x237d10: 0x2446af80  addiu       $a2, $v0, -0x5080
    ctx->pc = 0x237d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946688));
    // 0x237d14: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x237d14u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237d18: 0xc0863c0  jal         func_218F00
    ctx->pc = 0x237D18u;
    SET_GPR_U32(ctx, 31, 0x237D20u);
    ctx->pc = 0x218F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218F00u, 0x237D18u, 0x237D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D20u;
label_237d20:
    // 0x237d20: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x237d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x237d24: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x237d24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x237d28: 0x8fa502e8  lw          $a1, 0x2E8($sp)
    ctx->pc = 0x237d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237d2c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x237d2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x237d30: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x237d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x237d34: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x237d34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x237d38: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x237d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x237d3c: 0x2446af90  addiu       $a2, $v0, -0x5070
    ctx->pc = 0x237d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946704));
    // 0x237d40: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x237d40u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237d44: 0xc0863c0  jal         func_218F00
    ctx->pc = 0x237D44u;
    SET_GPR_U32(ctx, 31, 0x237D4Cu);
    ctx->pc = 0x218F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218F00u, 0x237D44u, 0x237D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D4Cu;
label_237d4c:
    // 0x237d4c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x237d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x237d50: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x237d50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x237d54: 0x8fa402e8  lw          $a0, 0x2E8($sp)
    ctx->pc = 0x237d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237d58: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x237d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x237d5c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x237d5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x237d60: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x237d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x237d64: 0x2446afa0  addiu       $a2, $v0, -0x5060
    ctx->pc = 0x237d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946720));
    // 0x237d68: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x237d68u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237d6c: 0xc0863c0  jal         func_218F00
    ctx->pc = 0x237D6Cu;
    SET_GPR_U32(ctx, 31, 0x237D74u);
    ctx->pc = 0x218F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218F00u, 0x237D6Cu, 0x237D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D74u;
label_237d74:
    // 0x237d74: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x237d74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237d78: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x237d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x237d7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x237d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x237d80: 0x8fa402e8  lw          $a0, 0x2E8($sp)
    ctx->pc = 0x237d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237d84: 0x24170026  addiu       $s7, $zero, 0x26
    ctx->pc = 0x237d84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x237d88: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x237d88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x237d8c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x237d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x237d90: 0x2466afb0  addiu       $a2, $v1, -0x5050
    ctx->pc = 0x237d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946736));
    // 0x237d94: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x237d94u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237d98: 0xc0863c0  jal         func_218F00
    ctx->pc = 0x237D98u;
    SET_GPR_U32(ctx, 31, 0x237DA0u);
    ctx->pc = 0x218F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218F00u, 0x237D98u, 0x237DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237DA0u;
label_237da0:
    // 0x237da0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x237da0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237da4: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x237da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x237da8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x237da8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x237dac: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x237dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237db0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x237db0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237db4: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x237db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x237db8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x237db8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237dbc: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x237dbcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x237dc0: 0x2522afc0  addiu       $v0, $t1, -0x5040
    ctx->pc = 0x237dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294946752));
    // 0x237dc4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x237dc4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237dc8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x237dc8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237dcc: 0xc0863c0  jal         func_218F00
    ctx->pc = 0x237DCCu;
    SET_GPR_U32(ctx, 31, 0x237DD4u);
    ctx->pc = 0x218F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218F00u, 0x237DCCu, 0x237DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237DD4u;
label_237dd4:
    // 0x237dd4: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x237dd4u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237dd8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x237dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x237ddc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x237ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x237de0: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x237de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237de4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x237de4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237de8: 0x24140026  addiu       $s4, $zero, 0x26
    ctx->pc = 0x237de8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x237dec: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x237decu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x237df0: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x237df0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x237df4: 0x26a3afd0  addiu       $v1, $s5, -0x5030
    ctx->pc = 0x237df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946768));
    // 0x237df8: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x237df8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x237dfc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x237dfcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237e00: 0xc0863c0  jal         func_218F00
    ctx->pc = 0x237E00u;
    SET_GPR_U32(ctx, 31, 0x237E08u);
    ctx->pc = 0x218F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218F00u, 0x237E00u, 0x237E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E08u;
label_237e08:
    // 0x237e08: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x237e08u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237e0c: 0x3c094348  lui         $t1, 0x4348
    ctx->pc = 0x237e0cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17224 << 16));
    // 0x237e10: 0x44896000  mtc1        $t1, $f12
    ctx->pc = 0x237e10u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x237e14: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x237e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237e18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x237e18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237e1c: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x237e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x237e20: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x237e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x237e24: 0x2446afe0  addiu       $a2, $v0, -0x5020
    ctx->pc = 0x237e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946784));
    // 0x237e28: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x237e28u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237e2c: 0xc0863c0  jal         func_218F00
    ctx->pc = 0x237E2Cu;
    SET_GPR_U32(ctx, 31, 0x237E34u);
    ctx->pc = 0x218F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218F00u, 0x237E2Cu, 0x237E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E34u;
label_237e34:
    // 0x237e34: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x237e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x237e38: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x237e38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x237e3c: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x237e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237e40: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x237e40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237e44: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x237e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x237e48: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x237e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x237e4c: 0x2446af70  addiu       $a2, $v0, -0x5090
    ctx->pc = 0x237e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946672));
    // 0x237e50: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x237e50u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237e54: 0xc0863c0  jal         func_218F00
    ctx->pc = 0x237E54u;
    SET_GPR_U32(ctx, 31, 0x237E5Cu);
    ctx->pc = 0x218F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218F00u, 0x237E54u, 0x237E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E5Cu;
label_237e5c:
    // 0x237e5c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x237e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x237e60: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x237e60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x237e64: 0x8fa402e8  lw          $a0, 0x2E8($sp)
    ctx->pc = 0x237e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237e68: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x237e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x237e6c: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x237e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x237e70: 0x24c3af80  addiu       $v1, $a2, -0x5080
    ctx->pc = 0x237e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946688));
    // 0x237e74: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x237e74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x237e78: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x237e78u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237e7c: 0xc0863c0  jal         func_218F00
    ctx->pc = 0x237E7Cu;
    SET_GPR_U32(ctx, 31, 0x237E84u);
    ctx->pc = 0x218F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218F00u, 0x237E7Cu, 0x237E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E84u;
label_237e84:
    // 0x237e84: 0x3c164348  lui         $s6, 0x4348
    ctx->pc = 0x237e84u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)17224 << 16));
    // 0x237e88: 0x44966000  mtc1        $s6, $f12
    ctx->pc = 0x237e88u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x237e8c: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x237e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237e90: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x237e90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237e94: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x237e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x237e98: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x237e98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x237e9c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x237e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x237ea0: 0x2462af90  addiu       $v0, $v1, -0x5070
    ctx->pc = 0x237ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946704));
    // 0x237ea4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x237ea4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237ea8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x237ea8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237eac: 0xc0863c0  jal         func_218F00
    ctx->pc = 0x237EACu;
    SET_GPR_U32(ctx, 31, 0x237EB4u);
    ctx->pc = 0x218F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218F00u, 0x237EACu, 0x237EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237EB4u;
label_237eb4:
    // 0x237eb4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x237eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x237eb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x237eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x237ebc: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x237ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237ec0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x237ec0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237ec4: 0x24080026  addiu       $t0, $zero, 0x26
    ctx->pc = 0x237ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x237ec8: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x237ec8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x237ecc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x237eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x237ed0: 0x2446afa0  addiu       $a2, $v0, -0x5060
    ctx->pc = 0x237ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946720));
    // 0x237ed4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x237ed4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237ed8: 0xc0863c0  jal         func_218F00
    ctx->pc = 0x237ED8u;
    SET_GPR_U32(ctx, 31, 0x237EE0u);
    ctx->pc = 0x218F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218F00u, 0x237ED8u, 0x237EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237EE0u;
label_237ee0:
    // 0x237ee0: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x237ee0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237ee4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x237ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x237ee8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x237ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x237eec: 0x8fbe02e8  lw          $fp, 0x2E8($sp)
    ctx->pc = 0x237eecu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237ef0: 0x73c02628  paddub      $a0, $fp, $zero
    ctx->pc = 0x237ef0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x237ef4: 0x24070026  addiu       $a3, $zero, 0x26
    ctx->pc = 0x237ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x237ef8: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x237ef8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x237efc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x237efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x237f00: 0x2468afb0  addiu       $t0, $v1, -0x5050
    ctx->pc = 0x237f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946736));
    // 0x237f04: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x237f04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x237f08: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x237f08u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237f0c: 0xc0863c0  jal         func_218F00
    ctx->pc = 0x237F0Cu;
    SET_GPR_U32(ctx, 31, 0x237F14u);
    ctx->pc = 0x218F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218F00u, 0x237F0Cu, 0x237F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F14u;
label_237f14:
    // 0x237f14: 0x3c094348  lui         $t1, 0x4348
    ctx->pc = 0x237f14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17224 << 16));
    // 0x237f18: 0x44896000  mtc1        $t1, $f12
    ctx->pc = 0x237f18u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x237f1c: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x237f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237f20: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x237f20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237f24: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x237f24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x237f28: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x237f28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x237f2c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x237f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x237f30: 0x2442afc0  addiu       $v0, $v0, -0x5040
    ctx->pc = 0x237f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946752));
    // 0x237f34: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x237f34u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237f38: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x237f38u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237f3c: 0xc0863c0  jal         func_218F00
    ctx->pc = 0x237F3Cu;
    SET_GPR_U32(ctx, 31, 0x237F44u);
    ctx->pc = 0x218F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218F00u, 0x237F3Cu, 0x237F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F44u;
label_237f44:
    // 0x237f44: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x237f44u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237f48: 0x3c114348  lui         $s1, 0x4348
    ctx->pc = 0x237f48u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)17224 << 16));
    // 0x237f4c: 0x44916000  mtc1        $s1, $f12
    ctx->pc = 0x237f4cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x237f50: 0x8fa402e8  lw          $a0, 0x2E8($sp)
    ctx->pc = 0x237f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237f54: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x237f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x237f58: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x237f58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x237f5c: 0x24c2afd0  addiu       $v0, $a2, -0x5030
    ctx->pc = 0x237f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946768));
    // 0x237f60: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x237f60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237f64: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x237f64u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237f68: 0xc0863c0  jal         func_218F00
    ctx->pc = 0x237F68u;
    SET_GPR_U32(ctx, 31, 0x237F70u);
    ctx->pc = 0x218F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218F00u, 0x237F68u, 0x237F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F70u;
label_237f70:
    // 0x237f70: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x237f70u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237f74: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x237f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x237f78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x237f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x237f7c: 0x8fa802e8  lw          $t0, 0x2E8($sp)
    ctx->pc = 0x237f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237f80: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x237f80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x237f84: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x237f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x237f88: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x237f88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237f8c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x237f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x237f90: 0x2466afe0  addiu       $a2, $v1, -0x5020
    ctx->pc = 0x237f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946784));
    // 0x237f94: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x237f94u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x237f98: 0xc0863c0  jal         func_218F00
    ctx->pc = 0x237F98u;
    SET_GPR_U32(ctx, 31, 0x237FA0u);
    ctx->pc = 0x218F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218F00u, 0x237F98u, 0x237FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237FA0u;
label_237fa0:
    // 0x237fa0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x237fa0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237fa4: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x237fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237fa8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x237fa8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x237fac: 0xc08ff70  jal         func_23FDC0
    ctx->pc = 0x237FACu;
    SET_GPR_U32(ctx, 31, 0x237FB4u);
    ctx->pc = 0x23FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FDC0u, 0x237FACu, 0x237FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237FB4u;
label_237fb4:
    // 0x237fb4: 0x8fa402e8  lw          $a0, 0x2E8($sp)
    ctx->pc = 0x237fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237fb8: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x237fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x237fbc: 0xa0a00072  sb          $zero, 0x72($a1)
    ctx->pc = 0x237fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 114), (uint8_t)GPR_U32(ctx, 0));
    // 0x237fc0: 0x8fb202e8  lw          $s2, 0x2E8($sp)
    ctx->pc = 0x237fc0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237fc4: 0x26431330  addiu       $v1, $s2, 0x1330
    ctx->pc = 0x237fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4912));
    // 0x237fc8: 0xa0600070  sb          $zero, 0x70($v1)
    ctx->pc = 0x237fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x237fcc: 0x8fb702e8  lw          $s7, 0x2E8($sp)
    ctx->pc = 0x237fccu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x237fd0: 0x26e41330  addiu       $a0, $s7, 0x1330
    ctx->pc = 0x237fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4912));
    // 0x237fd4: 0xa0800071  sb          $zero, 0x71($a0)
    ctx->pc = 0x237fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 113), (uint8_t)GPR_U32(ctx, 0));
    // 0x237fd8: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x237fd8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x237fdc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x237fdcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x237fe0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x237fe0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x237fe4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x237fe4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x237fe8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x237fe8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x237fec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x237fecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x237ff0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x237ff0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237ff4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x237ff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237ff8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x237ff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x237ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238000: 0x27bd02f0  addiu       $sp, $sp, 0x2F0
    ctx->pc = 0x238000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x238004: 0x3e00008  jr          $ra
    ctx->pc = 0x238004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23800Cu;
}
