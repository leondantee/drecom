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

// Function: entry_001e2f30
// Address: 0x1e2f30 - 0x1e3088
void entry_001e2f30_0x1e2f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2f30_0x1e2f30");
#endif

    switch (ctx->pc) {
        case 0x1e2fc8u: goto label_1e2fc8;
        case 0x1e305cu: goto label_1e305c;
        default: break;
    }

    ctx->pc = 0x1e2f30u;

    // 0x1e2f30: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e2f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2f34: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x1e2f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1e2f38: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e2f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2f3c: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x1e2f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x1e2f40: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e2f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2f44: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x1e2f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x1e2f48: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e2f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2f4c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e2f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e2f50: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1E2F50u;
    {
        const bool branch_taken_0x1e2f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2f50) {
            ctx->pc = 0x1E30C8u;
            return;
        }
    }
    ctx->pc = 0x1E2F58u;
    // 0x1e2f58: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1e2f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2f5c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1e2f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1e2f60: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e2f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1e2f64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2f68: 0x0  nop
    ctx->pc = 0x1e2f68u;
    // NOP
    // 0x1e2f6c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e2f6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e2f70: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e2f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1e2f74: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1e2f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2f78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e2f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2f7c: 0x0  nop
    ctx->pc = 0x1e2f7cu;
    // NOP
    // 0x1e2f80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e2f80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2f84: 0x0  nop
    ctx->pc = 0x1e2f84u;
    // NOP
    // 0x1e2f88: 0x4500004f  bc1f        . + 4 + (0x4F << 2)
    ctx->pc = 0x1E2F88u;
    {
        const bool branch_taken_0x1e2f88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2f88) {
            ctx->pc = 0x1E30C8u;
            return;
        }
    }
    ctx->pc = 0x1E2F90u;
    // 0x1e2f90: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e2f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2f94: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1e2f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1e2f98: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e2f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e2f9c: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e2f9cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e2fa0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2fa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2fa8: 0x0  nop
    ctx->pc = 0x1e2fa8u;
    // NOP
    // 0x1e2fac: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x1e2facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x1e2fb0: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x1e2fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x1e2fb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e2fb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e2fb8: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x1e2fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1e2fbc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e2fbcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e2fc0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1E2FC0u;
    SET_GPR_U32(ctx, 31, 0x1E2FC8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E2FC0u, 0x1E2FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2FC8u;
label_1e2fc8:
    // 0x1e2fc8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e2fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e2fcc: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x1e2fccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x1e2fd0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e2fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e2fd4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e2fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e2fd8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x1e2fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x1e2fdc: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x1e2fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e2fe0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e2fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e2fe4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x1e2fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x1e2fe8: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x1e2fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e2fec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e2fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e2ff0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x1e2ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x1e2ff4: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x1e2ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e2ff8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e2ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e2ffc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x1e2ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x1e3000: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x1e3000u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3004: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e3004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e3008: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x1e3008u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x1e300c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x1e300cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3010: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e3010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e3014: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x1e3014u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x1e3018: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x1e3018u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e301c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e301cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e3020: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x1e3020u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x1e3024: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x1e3024u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3028: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e3028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e302c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x1e302cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x1e3030: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x1e3030u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3034: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e3034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e3038: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x1e3038u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x1e303c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x1e303cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3040: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e3040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e3044: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x1e3044u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x1e3048: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x1e3048u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e304c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e304cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e3050: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x1e3050u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x1e3054: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1E3054u;
    SET_GPR_U32(ctx, 31, 0x1E305Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E3054u, 0x1E305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E305Cu;
label_1e305c:
    // 0x1e305c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e305cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e3060: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x1e3060u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x1e3064: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1e3064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1e3068: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x1e3068u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x1e306c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1e306cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1e3070: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x1e3070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x1e3074: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3074u;
    {
        const bool branch_taken_0x1e3074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e3074) {
            ctx->pc = 0x1E3088u;
            return;
        }
    }
    ctx->pc = 0x1E307Cu;
    // 0x1e307c: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1e307cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e3080: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E3080u;
    {
        const bool branch_taken_0x1e3080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3080) {
            ctx->pc = 0x1E30B0u;
            return;
        }
    }
    ctx->pc = 0x1E3088u;
}
