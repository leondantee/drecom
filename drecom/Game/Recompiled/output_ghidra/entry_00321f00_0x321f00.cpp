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

// Function: entry_00321f00
// Address: 0x321f00 - 0x321ff8
void entry_00321f00_0x321f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321f00_0x321f00");
#endif

    switch (ctx->pc) {
        case 0x321f2cu: goto label_321f2c;
        case 0x321fa0u: goto label_321fa0;
        case 0x321facu: goto label_321fac;
        case 0x321fd0u: goto label_321fd0;
        case 0x321fe4u: goto label_321fe4;
        case 0x321ff0u: goto label_321ff0;
        default: break;
    }

    ctx->pc = 0x321f00u;

    // 0x321f00: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x321f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x321f04: 0x2442a610  addiu       $v0, $v0, -0x59F0
    ctx->pc = 0x321f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x321f08: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x321f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x321f0c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x321f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x321f10: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x321f10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x321f14: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x321f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x321f18: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x321f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x321f1c: 0x12020036  beq         $s0, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x321F1Cu;
    {
        const bool branch_taken_0x321f1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x321f1c) {
            ctx->pc = 0x321FF8u;
            return;
        }
    }
    ctx->pc = 0x321F24u;
    // 0x321f24: 0xc06765c  jal         func_19D970
    ctx->pc = 0x321F24u;
    SET_GPR_U32(ctx, 31, 0x321F2Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x321F24u, 0x321F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321F2Cu;
label_321f2c:
    // 0x321f2c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x321f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x321f30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x321f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x321f34: 0x0  nop
    ctx->pc = 0x321f34u;
    // NOP
    // 0x321f38: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x321f38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x321f3c: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x321f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x321f40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321f44: 0x0  nop
    ctx->pc = 0x321f44u;
    // NOP
    // 0x321f48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x321f48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x321f4c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x321f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x321f50: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x321f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x321f54: 0xa2020139  sb          $v0, 0x139($s0)
    ctx->pc = 0x321f54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 2));
    // 0x321f58: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x321f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x321f5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321f60: 0x0  nop
    ctx->pc = 0x321f60u;
    // NOP
    // 0x321f64: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x321f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x321f68: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x321f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x321f6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321f70: 0x0  nop
    ctx->pc = 0x321f70u;
    // NOP
    // 0x321f74: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x321f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x321f78: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x321f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x321f7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321f80: 0x0  nop
    ctx->pc = 0x321f80u;
    // NOP
    // 0x321f84: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x321f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x321f88: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x321f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x321f8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321f90: 0x0  nop
    ctx->pc = 0x321f90u;
    // NOP
    // 0x321f94: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x321f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x321f98: 0xc067648  jal         func_19D920
    ctx->pc = 0x321F98u;
    SET_GPR_U32(ctx, 31, 0x321FA0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x321F98u, 0x321FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321FA0u;
label_321fa0:
    // 0x321fa0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x321fa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x321fa4: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x321FA4u;
    SET_GPR_U32(ctx, 31, 0x321FACu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x321FA4u, 0x321FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321FACu;
label_321fac:
    // 0x321fac: 0x3c033fd3  lui         $v1, 0x3FD3
    ctx->pc = 0x321facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16339 << 16));
    // 0x321fb0: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x321fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x321fb4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x321fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x321fb8: 0x3c033333  lui         $v1, 0x3333
    ctx->pc = 0x321fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13107 << 16));
    // 0x321fbc: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x321fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x321fc0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x321fc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x321fc4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x321fc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321fc8: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x321FC8u;
    SET_GPR_U32(ctx, 31, 0x321FD0u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x321FC8u, 0x321FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321FD0u;
label_321fd0:
    // 0x321fd0: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x321fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x321fd4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x321fd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x321fd8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x321fd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321fdc: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x321FDCu;
    SET_GPR_U32(ctx, 31, 0x321FE4u);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x321FDCu, 0x321FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321FE4u;
label_321fe4:
    // 0x321fe4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x321fe4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321fe8: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x321FE8u;
    SET_GPR_U32(ctx, 31, 0x321FF0u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x321FE8u, 0x321FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321FF0u;
label_321ff0:
    // 0x321ff0: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x321ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x321ff4: 0x0  nop
    ctx->pc = 0x321ff4u;
    // NOP
    ctx->pc = 0x321ff8u;
}
