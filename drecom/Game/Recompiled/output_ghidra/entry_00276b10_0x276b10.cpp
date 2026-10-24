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

// Function: entry_00276b10
// Address: 0x276b10 - 0x276c88
void entry_00276b10_0x276b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276b10_0x276b10");
#endif

    switch (ctx->pc) {
        case 0x276b18u: goto label_276b18;
        case 0x276b44u: goto label_276b44;
        case 0x276b6cu: goto label_276b6c;
        case 0x276bb8u: goto label_276bb8;
        case 0x276c5cu: goto label_276c5c;
        default: break;
    }

    ctx->pc = 0x276b10u;

    // 0x276b10: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276B10u;
    SET_GPR_U32(ctx, 31, 0x276B18u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276B10u, 0x276B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276B18u;
label_276b18:
    // 0x276b18: 0x3c0344d4  lui         $v1, 0x44D4
    ctx->pc = 0x276b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17620 << 16));
    // 0x276b1c: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x276b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x276b20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276b24: 0x0  nop
    ctx->pc = 0x276b24u;
    // NOP
    // 0x276b28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x276b28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276b2c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x276b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x276b30: 0xc420d2c0  lwc1        $f0, -0x2D40($at)
    ctx->pc = 0x276b30u;
    { uint32_t bits = FAST_READ32(0x38D2C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276b34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x276b34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x276b38: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x276b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x276b3c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276B3Cu;
    SET_GPR_U32(ctx, 31, 0x276B44u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276B3Cu, 0x276B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276B44u;
label_276b44:
    // 0x276b44: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x276b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x276b48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276b4c: 0x0  nop
    ctx->pc = 0x276b4cu;
    // NOP
    // 0x276b50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x276b50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276b54: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x276b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x276b58: 0xc420d2c4  lwc1        $f0, -0x2D3C($at)
    ctx->pc = 0x276b58u;
    { uint32_t bits = FAST_READ32(0x38D2C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276b5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x276b5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x276b60: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x276b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x276b64: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276B64u;
    SET_GPR_U32(ctx, 31, 0x276B6Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276B64u, 0x276B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276B6Cu;
label_276b6c:
    // 0x276b6c: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x276b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x276b70: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x276b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x276b74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276b78: 0x0  nop
    ctx->pc = 0x276b78u;
    // NOP
    // 0x276b7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x276b7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276b80: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x276b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x276b84: 0xc420d2c8  lwc1        $f0, -0x2D38($at)
    ctx->pc = 0x276b84u;
    { uint32_t bits = FAST_READ32(0x38D2C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276b88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x276b88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x276b8c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x276b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x276b90: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x276b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
    // 0x276b94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276b98: 0x0  nop
    ctx->pc = 0x276b98u;
    // NOP
    // 0x276b9c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x276b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x276ba0: 0x24040b05  addiu       $a0, $zero, 0xB05
    ctx->pc = 0x276ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2821));
    // 0x276ba4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x276ba4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276ba8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x276ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x276bac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x276bacu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276bb0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x276BB0u;
    SET_GPR_U32(ctx, 31, 0x276BB8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x276BB0u, 0x276BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276BB8u;
label_276bb8:
    // 0x276bb8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276bbc: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x276bbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x276bc0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x276bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x276bc4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276bc8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x276bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x276bcc: 0xa044013a  sb          $a0, 0x13A($v0)
    ctx->pc = 0x276bccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x276bd0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276bd4: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x276bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x276bd8: 0xa060011d  sb          $zero, 0x11D($v1)
    ctx->pc = 0x276bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x276bdc: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x276bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x276be0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x276be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276be4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x276be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x276be8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x276be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276bec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276bf0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x276bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x276bf4: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x276bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x276bf8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276bfc: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x276bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x276c00: 0xa060011b  sb          $zero, 0x11B($v1)
    ctx->pc = 0x276c00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x276c04: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276c08: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x276c08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x276c0c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x276c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x276c10: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276c14: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x276c14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x276c18: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x276c18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x276c1c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276c20: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x276c20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x276c24: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x276c24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x276c28: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276c2c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x276c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x276c30: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x276c30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x276c34: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276c38: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x276c38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x276c3c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x276c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x276c40: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276c44: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x276c44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x276c48: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x276c48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x276c4c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276c50: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x276c50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x276c54: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x276C54u;
    SET_GPR_U32(ctx, 31, 0x276C5Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x276C54u, 0x276C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276C5Cu;
label_276c5c:
    // 0x276c5c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276c60: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x276c60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x276c64: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276c68: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x276c68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x276c6c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x276c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x276c70: 0x34440011  ori         $a0, $v0, 0x11
    ctx->pc = 0x276c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x276c74: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x276C74u;
    {
        const bool branch_taken_0x276c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x276c74) {
            ctx->pc = 0x276C88u;
            return;
        }
    }
    ctx->pc = 0x276C7Cu;
    // 0x276c7c: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x276c7cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276c80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x276C80u;
    {
        const bool branch_taken_0x276c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276c80) {
            ctx->pc = 0x276CB0u;
            return;
        }
    }
    ctx->pc = 0x276C88u;
}
