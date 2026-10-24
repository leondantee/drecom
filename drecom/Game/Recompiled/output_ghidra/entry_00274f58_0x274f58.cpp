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

// Function: entry_00274f58
// Address: 0x274f58 - 0x2750d0
void entry_00274f58_0x274f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274f58_0x274f58");
#endif

    switch (ctx->pc) {
        case 0x274f60u: goto label_274f60;
        case 0x274f8cu: goto label_274f8c;
        case 0x274fb4u: goto label_274fb4;
        case 0x275000u: goto label_275000;
        case 0x2750a4u: goto label_2750a4;
        default: break;
    }

    ctx->pc = 0x274f58u;

    // 0x274f58: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274F58u;
    SET_GPR_U32(ctx, 31, 0x274F60u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274F58u, 0x274F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274F60u;
label_274f60:
    // 0x274f60: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x274f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x274f64: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x274f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x274f68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x274f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274f6c: 0x0  nop
    ctx->pc = 0x274f6cu;
    // NOP
    // 0x274f70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x274f70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274f74: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x274f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x274f78: 0xc420d2c0  lwc1        $f0, -0x2D40($at)
    ctx->pc = 0x274f78u;
    { uint32_t bits = FAST_READ32(0x38D2C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274f7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x274f7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x274f80: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x274f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x274f84: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274F84u;
    SET_GPR_U32(ctx, 31, 0x274F8Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274F84u, 0x274F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274F8Cu;
label_274f8c:
    // 0x274f8c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x274f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x274f90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x274f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274f94: 0x0  nop
    ctx->pc = 0x274f94u;
    // NOP
    // 0x274f98: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x274f98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274f9c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x274f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x274fa0: 0xc420d2c4  lwc1        $f0, -0x2D3C($at)
    ctx->pc = 0x274fa0u;
    { uint32_t bits = FAST_READ32(0x38D2C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274fa4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x274fa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x274fa8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x274fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x274fac: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274FACu;
    SET_GPR_U32(ctx, 31, 0x274FB4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274FACu, 0x274FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274FB4u;
label_274fb4:
    // 0x274fb4: 0x3c0344d4  lui         $v1, 0x44D4
    ctx->pc = 0x274fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17620 << 16));
    // 0x274fb8: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x274fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x274fbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x274fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274fc0: 0x0  nop
    ctx->pc = 0x274fc0u;
    // NOP
    // 0x274fc4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x274fc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274fc8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x274fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x274fcc: 0xc420d2c8  lwc1        $f0, -0x2D38($at)
    ctx->pc = 0x274fccu;
    { uint32_t bits = FAST_READ32(0x38D2C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274fd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x274fd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x274fd4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x274fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x274fd8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x274fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x274fdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274fe0: 0x0  nop
    ctx->pc = 0x274fe0u;
    // NOP
    // 0x274fe4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x274fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x274fe8: 0x24040b05  addiu       $a0, $zero, 0xB05
    ctx->pc = 0x274fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2821));
    // 0x274fec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x274fecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274ff0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x274ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x274ff4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x274ff4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274ff8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x274FF8u;
    SET_GPR_U32(ctx, 31, 0x275000u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x274FF8u, 0x275000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275000u;
label_275000:
    // 0x275000: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x275000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x275004: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x275004u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x275008: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x275008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27500c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x27500cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x275010: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x275010u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x275014: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x275014u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x275018: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x275018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x27501c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x27501cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x275020: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x275020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x275024: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x275024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x275028: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x275028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x27502c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x27502cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x275030: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x275030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x275034: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x275034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x275038: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x275038u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x27503c: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x27503cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x275040: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x275040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x275044: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x275044u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x275048: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x275048u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x27504c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x27504cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x275050: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x275050u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x275054: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x275054u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x275058: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x275058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x27505c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x27505cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x275060: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x275060u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x275064: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x275064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x275068: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x275068u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x27506c: 0xa060013c  sb          $zero, 0x13C($v1)
    ctx->pc = 0x27506cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x275070: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x275070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x275074: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x275074u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x275078: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x275078u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x27507c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x27507cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x275080: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x275080u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x275084: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x275084u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x275088: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x275088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x27508c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x27508cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x275090: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x275090u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x275094: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x275094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x275098: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x275098u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x27509c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27509Cu;
    SET_GPR_U32(ctx, 31, 0x2750A4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27509Cu, 0x2750A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2750A4u;
label_2750a4:
    // 0x2750a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2750a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2750a8: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2750a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2750ac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2750acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2750b0: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2750b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2750b4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2750b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2750b8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2750b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2750bc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2750BCu;
    {
        const bool branch_taken_0x2750bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2750bc) {
            ctx->pc = 0x2750D0u;
            return;
        }
    }
    ctx->pc = 0x2750C4u;
    // 0x2750c4: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x2750c4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2750c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2750C8u;
    {
        const bool branch_taken_0x2750c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2750c8) {
            ctx->pc = 0x2750F8u;
            return;
        }
    }
    ctx->pc = 0x2750D0u;
}
