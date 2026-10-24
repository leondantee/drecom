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

// Function: set_eff_em0b_blackfire
// Address: 0x218f00 - 0x219220
void set_eff_em0b_blackfire_0x218f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_em0b_blackfire_0x218f00");
#endif

    switch (ctx->pc) {
        case 0x218f5cu: goto label_218f5c;
        case 0x218ff0u: goto label_218ff0;
        case 0x21908cu: goto label_21908c;
        case 0x219124u: goto label_219124;
        default: break;
    }

    ctx->pc = 0x218f00u;

    // 0x218f00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x218f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x218f04: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x218f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x218f08: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x218f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x218f0c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x218f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x218f10: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x218f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x218f14: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x218f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x218f18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x218f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x218f1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x218f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x218f20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x218f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x218f24: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x218f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x218f28: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x218f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x218f2c: 0xafa60098  sw          $a2, 0x98($sp)
    ctx->pc = 0x218f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 6));
    // 0x218f30: 0xe7ac00a0  swc1        $f12, 0xA0($sp)
    ctx->pc = 0x218f30u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x218f34: 0xafa700a8  sw          $a3, 0xA8($sp)
    ctx->pc = 0x218f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 7));
    // 0x218f38: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x218f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x218f3c: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x218F3Cu;
    {
        const bool branch_taken_0x218f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x218f3c) {
            ctx->pc = 0x21904Cu;
            goto label_21904c;
        }
    }
    ctx->pc = 0x218F44u;
    // 0x218f44: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x218f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x218f48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x218f48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x218f4c: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x218f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x218f50: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x218f50u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x218f54: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x218F54u;
    SET_GPR_U32(ctx, 31, 0x218F5Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x218F54u, 0x218F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F5Cu;
label_218f5c:
    // 0x218f5c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218f60: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x218f60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x218f64: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218f68: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218f68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218f6c: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x218f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x218f70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x218f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218f74: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218f78: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218f78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218f7c: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x218f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x218f80: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218f84: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218f84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218f88: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x218f88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x218f8c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218f90: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218f90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218f94: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x218f94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x218f98: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218f9c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218fa0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x218fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x218fa4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218fa8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218fac: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x218facu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x218fb0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218fb4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218fb8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x218fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x218fbc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218fc0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218fc4: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x218fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x218fc8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218fcc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218fccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218fd0: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x218fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x218fd4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218fd8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218fdc: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x218fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x218fe0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218fe4: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x218fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x218fe8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x218FE8u;
    SET_GPR_U32(ctx, 31, 0x218FF0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x218FE8u, 0x218FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218FF0u;
label_218ff0:
    // 0x218ff0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218ff4: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x218ff4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x218ff8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218ffc: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x218ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x219000: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x219000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x219004: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x219004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x219008: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x219008u;
    {
        const bool branch_taken_0x219008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x219008) {
            ctx->pc = 0x21901Cu;
            goto label_21901c;
        }
    }
    ctx->pc = 0x219010u;
    // 0x219010: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x219010u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219014: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x219014u;
    {
        const bool branch_taken_0x219014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219014) {
            ctx->pc = 0x219038u;
            goto label_219038;
        }
    }
    ctx->pc = 0x21901Cu;
label_21901c:
    // 0x21901c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21901cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219020: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x219020u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x219024: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219028: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x219028u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x21902c: 0x24530118  addiu       $s3, $v0, 0x118
    ctx->pc = 0x21902cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x219030: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x219030u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x219034: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x219034u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_219038:
    // 0x219038: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x219038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x21903c: 0x2454a610  addiu       $s4, $v0, -0x59F0
    ctx->pc = 0x21903cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x219040: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x219040u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x219044: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x219044u;
    {
        const bool branch_taken_0x219044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219044) {
            ctx->pc = 0x219188u;
            goto label_219188;
        }
    }
    ctx->pc = 0x21904Cu;
label_21904c:
    // 0x21904c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x21904cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x219050: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x219050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x219054: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x219054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x219058: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x219058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x21905c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21905cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x219060: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x219060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x219064: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x219064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x219068: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x219068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21906c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21906cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x219070: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x219070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x219074: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x219074u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x219078: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x219078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21907c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21907cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219080: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x219080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x219084: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x219084u;
    SET_GPR_U32(ctx, 31, 0x21908Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x219084u, 0x21908Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21908Cu;
label_21908c:
    // 0x21908c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21908cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219090: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x219090u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x219094: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219098: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219098u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21909c: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x21909cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2190a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2190a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2190a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2190a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2190a8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2190a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2190ac: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2190acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2190b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2190b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2190b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2190b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2190b8: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2190b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2190bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2190bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2190c0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2190c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2190c4: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2190c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2190c8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2190c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2190cc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2190ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2190d0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2190d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2190d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2190d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2190d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2190d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2190dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2190dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2190e0: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x2190e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x2190e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2190e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2190e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2190e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2190ec: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2190ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2190f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2190f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2190f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2190f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2190f8: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2190f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2190fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2190fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219100: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219100u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219104: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x219104u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x219108: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21910c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21910cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219110: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x219110u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x219114: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219118: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x219118u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21911c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21911Cu;
    SET_GPR_U32(ctx, 31, 0x219124u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21911Cu, 0x219124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219124u;
label_219124:
    // 0x219124: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219128: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x219128u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21912c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21912cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219130: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x219130u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x219134: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x219134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x219138: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x219138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x21913c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21913Cu;
    {
        const bool branch_taken_0x21913c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21913c) {
            ctx->pc = 0x219150u;
            goto label_219150;
        }
    }
    ctx->pc = 0x219144u;
    // 0x219144: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x219144u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219148: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x219148u;
    {
        const bool branch_taken_0x219148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219148) {
            ctx->pc = 0x219178u;
            goto label_219178;
        }
    }
    ctx->pc = 0x219150u;
label_219150:
    // 0x219150: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219154: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x219154u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x219158: 0x94620118  lhu         $v0, 0x118($v1)
    ctx->pc = 0x219158u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x21915c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21915cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x219160: 0xa4620118  sh          $v0, 0x118($v1)
    ctx->pc = 0x219160u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x219164: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219168: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x219168u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x21916c: 0x24550118  addiu       $s5, $v0, 0x118
    ctx->pc = 0x21916cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x219170: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x219170u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x219174: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x219174u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_219178:
    // 0x219178: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x219178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x21917c: 0x2456a610  addiu       $s6, $v0, -0x59F0
    ctx->pc = 0x21917cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x219180: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x219180u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x219184: 0x0  nop
    ctx->pc = 0x219184u;
    // NOP
label_219188:
    // 0x219188: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x219188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x21918c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x21918cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x219190: 0x12020017  beq         $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x219190u;
    {
        const bool branch_taken_0x219190 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x219190) {
            ctx->pc = 0x2191F0u;
            goto label_2191f0;
        }
    }
    ctx->pc = 0x219198u;
    // 0x219198: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x219198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x21919c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21919cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2191a0: 0x0  nop
    ctx->pc = 0x2191a0u;
    // NOP
    // 0x2191a4: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2191a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2191a8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2191a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2191ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2191acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2191b0: 0x0  nop
    ctx->pc = 0x2191b0u;
    // NOP
    // 0x2191b4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2191b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2191b8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2191b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2191bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2191bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2191c0: 0x0  nop
    ctx->pc = 0x2191c0u;
    // NOP
    // 0x2191c4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2191c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2191c8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2191c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2191cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2191ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2191d0: 0x0  nop
    ctx->pc = 0x2191d0u;
    // NOP
    // 0x2191d4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2191d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2191d8: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x2191d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2191dc: 0xfe0201f0  sd          $v0, 0x1F0($s0)
    ctx->pc = 0x2191dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 496), GPR_U64(ctx, 2));
    // 0x2191e0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2191e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2191e4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2191e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2191e8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2191e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2191ec: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x2191ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_2191f0:
    // 0x2191f0: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x2191f0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2191f4: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x2191f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2191f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2191f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2191fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2191fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x219200: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x219200u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x219204: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x219204u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x219208: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x219208u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21920c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21920cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219210: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x219210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219214: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x219214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x219218: 0x3e00008  jr          $ra
    ctx->pc = 0x219218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219220u;
}
