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

// Function: entry_00321c98
// Address: 0x321c98 - 0x321d78
void entry_00321c98_0x321c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321c98_0x321c98");
#endif

    switch (ctx->pc) {
        case 0x321d20u: goto label_321d20;
        case 0x321d2cu: goto label_321d2c;
        case 0x321d50u: goto label_321d50;
        case 0x321d64u: goto label_321d64;
        case 0x321d70u: goto label_321d70;
        default: break;
    }

    ctx->pc = 0x321c98u;

    // 0x321c98: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x321c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x321c9c: 0x2442a610  addiu       $v0, $v0, -0x59F0
    ctx->pc = 0x321c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x321ca0: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x321ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x321ca4: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x321ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x321ca8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x321ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x321cac: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x321cacu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321cb0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x321cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x321cb4: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x321cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x321cb8: 0x1202002f  beq         $s0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x321CB8u;
    {
        const bool branch_taken_0x321cb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x321cb8) {
            ctx->pc = 0x321D78u;
            return;
        }
    }
    ctx->pc = 0x321CC0u;
    // 0x321cc0: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x321cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x321cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321cc8: 0x0  nop
    ctx->pc = 0x321cc8u;
    // NOP
    // 0x321ccc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x321cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x321cd0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x321cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x321cd4: 0xa2050139  sb          $a1, 0x139($s0)
    ctx->pc = 0x321cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 5));
    // 0x321cd8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x321cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x321cdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321ce0: 0x0  nop
    ctx->pc = 0x321ce0u;
    // NOP
    // 0x321ce4: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x321ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x321ce8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x321ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x321cec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321cf0: 0x0  nop
    ctx->pc = 0x321cf0u;
    // NOP
    // 0x321cf4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x321cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x321cf8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x321cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x321cfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x321cfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321d00: 0x0  nop
    ctx->pc = 0x321d00u;
    // NOP
    // 0x321d04: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x321d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x321d08: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x321d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x321d0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321d0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321d10: 0x0  nop
    ctx->pc = 0x321d10u;
    // NOP
    // 0x321d14: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x321d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x321d18: 0xc067648  jal         func_19D920
    ctx->pc = 0x321D18u;
    SET_GPR_U32(ctx, 31, 0x321D20u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x321D18u, 0x321D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D20u;
label_321d20:
    // 0x321d20: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x321d20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x321d24: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x321D24u;
    SET_GPR_U32(ctx, 31, 0x321D2Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x321D24u, 0x321D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D2Cu;
label_321d2c:
    // 0x321d2c: 0x3c053fd3  lui         $a1, 0x3FD3
    ctx->pc = 0x321d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16339 << 16));
    // 0x321d30: 0x34a43333  ori         $a0, $a1, 0x3333
    ctx->pc = 0x321d30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13107);
    // 0x321d34: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x321d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x321d38: 0x3c043333  lui         $a0, 0x3333
    ctx->pc = 0x321d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13107 << 16));
    // 0x321d3c: 0x34843333  ori         $a0, $a0, 0x3333
    ctx->pc = 0x321d3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
    // 0x321d40: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x321d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x321d44: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x321d44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321d48: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x321D48u;
    SET_GPR_U32(ctx, 31, 0x321D50u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x321D48u, 0x321D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D50u;
label_321d50:
    // 0x321d50: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x321d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x321d54: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x321d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x321d58: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x321d58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321d5c: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x321D5Cu;
    SET_GPR_U32(ctx, 31, 0x321D64u);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x321D5Cu, 0x321D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D64u;
label_321d64:
    // 0x321d64: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x321d64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321d68: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x321D68u;
    SET_GPR_U32(ctx, 31, 0x321D70u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x321D68u, 0x321D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D70u;
label_321d70:
    // 0x321d70: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x321d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x321d74: 0x0  nop
    ctx->pc = 0x321d74u;
    // NOP
    ctx->pc = 0x321d78u;
}
