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

// Function: entry_002cfc94
// Address: 0x2cfc94 - 0x2cfd18
void entry_002cfc94_0x2cfc94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cfc94_0x2cfc94");
#endif

    switch (ctx->pc) {
        case 0x2cfd10u: goto label_2cfd10;
        default: break;
    }

    ctx->pc = 0x2cfc94u;

    // 0x2cfc94: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cfc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cfc98: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cfc98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cfc9c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cfc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cfca0: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cfca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cfca4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cfca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfca8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cfca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfcac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cfcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cfcb0: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2CFCB0u;
    {
        const bool branch_taken_0x2cfcb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cfcb0) {
            ctx->pc = 0x2CFD18u;
            return;
        }
    }
    ctx->pc = 0x2CFCB8u;
    // 0x2cfcb8: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x2cfcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x2cfcbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfcbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfcc0: 0x0  nop
    ctx->pc = 0x2cfcc0u;
    // NOP
    // 0x2cfcc4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2cfcc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2cfcc8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2cfcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2cfccc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfcccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfcd0: 0x0  nop
    ctx->pc = 0x2cfcd0u;
    // NOP
    // 0x2cfcd4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2cfcd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2cfcd8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cfcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cfcdc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cfcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cfce0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cfce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cfce4: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cfce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cfce8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cfce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfcec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cfcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfcf0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2cfcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2cfcf4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cfcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cfcf8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2cfcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2cfcfc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2cfcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfd00: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2cfd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cfd04: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2cfd04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cfd08: 0xc0d5fb4  jal         func_357ED0
    ctx->pc = 0x2CFD08u;
    SET_GPR_U32(ctx, 31, 0x2CFD10u);
    ctx->pc = 0x357ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357ED0u, 0x2CFD08u, 0x2CFD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFD10u;
label_2cfd10:
    // 0x2cfd10: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x2CFD10u;
    {
        const bool branch_taken_0x2cfd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd10) {
            ctx->pc = 0x2D00A0u;
            return;
        }
    }
    ctx->pc = 0x2CFD18u;
}
