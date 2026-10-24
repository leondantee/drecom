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

// Function: entry_00274cf8
// Address: 0x274cf8 - 0x274e70
void entry_00274cf8_0x274cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274cf8_0x274cf8");
#endif

    switch (ctx->pc) {
        case 0x274d00u: goto label_274d00;
        case 0x274d2cu: goto label_274d2c;
        case 0x274d54u: goto label_274d54;
        case 0x274da0u: goto label_274da0;
        case 0x274e44u: goto label_274e44;
        default: break;
    }

    ctx->pc = 0x274cf8u;

    // 0x274cf8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274CF8u;
    SET_GPR_U32(ctx, 31, 0x274D00u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274CF8u, 0x274D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D00u;
label_274d00:
    // 0x274d00: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x274d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x274d04: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x274d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x274d08: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x274d08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274d0c: 0x0  nop
    ctx->pc = 0x274d0cu;
    // NOP
    // 0x274d10: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x274d10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274d14: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x274d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x274d18: 0xc420d2c0  lwc1        $f0, -0x2D40($at)
    ctx->pc = 0x274d18u;
    { uint32_t bits = FAST_READ32(0x38D2C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274d1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x274d1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x274d20: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x274d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x274d24: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274D24u;
    SET_GPR_U32(ctx, 31, 0x274D2Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274D24u, 0x274D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D2Cu;
label_274d2c:
    // 0x274d2c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x274d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x274d30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x274d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274d34: 0x0  nop
    ctx->pc = 0x274d34u;
    // NOP
    // 0x274d38: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x274d38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274d3c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x274d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x274d40: 0xc420d2c4  lwc1        $f0, -0x2D3C($at)
    ctx->pc = 0x274d40u;
    { uint32_t bits = FAST_READ32(0x38D2C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274d44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x274d44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x274d48: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x274d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x274d4c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274D4Cu;
    SET_GPR_U32(ctx, 31, 0x274D54u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274D4Cu, 0x274D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D54u;
label_274d54:
    // 0x274d54: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x274d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x274d58: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x274d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x274d5c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x274d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274d60: 0x0  nop
    ctx->pc = 0x274d60u;
    // NOP
    // 0x274d64: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x274d64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274d68: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x274d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x274d6c: 0xc420d2c8  lwc1        $f0, -0x2D38($at)
    ctx->pc = 0x274d6cu;
    { uint32_t bits = FAST_READ32(0x38D2C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274d70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x274d70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x274d74: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x274d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x274d78: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x274d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x274d7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274d80: 0x0  nop
    ctx->pc = 0x274d80u;
    // NOP
    // 0x274d84: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x274d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x274d88: 0x24040b05  addiu       $a0, $zero, 0xB05
    ctx->pc = 0x274d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2821));
    // 0x274d8c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x274d8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274d90: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x274d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x274d94: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x274d94u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274d98: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x274D98u;
    SET_GPR_U32(ctx, 31, 0x274DA0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x274D98u, 0x274DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274DA0u;
label_274da0:
    // 0x274da0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274da4: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x274da4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x274da8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x274da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x274dac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274db0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x274db0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x274db4: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x274db4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x274db8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274dbc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x274dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x274dc0: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x274dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x274dc4: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x274dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x274dc8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x274dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x274dcc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x274dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x274dd0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x274dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x274dd4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274dd8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x274dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x274ddc: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x274ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x274de0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274de4: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x274de4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x274de8: 0xa060011b  sb          $zero, 0x11B($v1)
    ctx->pc = 0x274de8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x274dec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274df0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x274df0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x274df4: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x274df4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x274df8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274dfc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x274dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x274e00: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x274e00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x274e04: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274e08: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x274e08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x274e0c: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x274e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x274e10: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274e14: 0x8c25a618  lw          $a1, -0x59E8($at)
    ctx->pc = 0x274e14u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x53A618u));
    // 0x274e18: 0xa0a0013d  sb          $zero, 0x13D($a1)
    ctx->pc = 0x274e18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x274e1c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274e20: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x274e20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x274e24: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x274e24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x274e28: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274e2c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x274e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x274e30: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x274e30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x274e34: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274e38: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x274e38u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x274e3c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x274E3Cu;
    SET_GPR_U32(ctx, 31, 0x274E44u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x274E3Cu, 0x274E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274E44u;
label_274e44:
    // 0x274e44: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274e48: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x274e48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x274e4c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274e50: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x274e50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x274e54: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x274e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x274e58: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x274e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x274e5c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x274E5Cu;
    {
        const bool branch_taken_0x274e5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x274e5c) {
            ctx->pc = 0x274E70u;
            return;
        }
    }
    ctx->pc = 0x274E64u;
    // 0x274e64: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x274e64u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274e68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x274E68u;
    {
        const bool branch_taken_0x274e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274e68) {
            ctx->pc = 0x274E90u;
            return;
        }
    }
    ctx->pc = 0x274E70u;
}
