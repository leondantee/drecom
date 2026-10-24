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

// Function: entry_001c90d4
// Address: 0x1c90d4 - 0x1c9138
void entry_001c90d4_0x1c90d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c90d4_0x1c90d4");
#endif

    switch (ctx->pc) {
        case 0x1c90e8u: goto label_1c90e8;
        default: break;
    }

    ctx->pc = 0x1c90d4u;

    // 0x1c90d4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1c90d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c90d8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c90d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c90dc: 0xa0431577  sb          $v1, 0x1577($v0)
    ctx->pc = 0x1c90dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5495), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c90e0: 0xc057048  jal         func_15C120
    ctx->pc = 0x1C90E0u;
    SET_GPR_U32(ctx, 31, 0x1C90E8u);
    ctx->pc = 0x15C120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C120u, 0x1C90E0u, 0x1C90E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C90E8u;
label_1c90e8:
    // 0x1c90e8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C90E8u;
    {
        const bool branch_taken_0x1c90e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c90e8) {
            ctx->pc = 0x1C9138u;
            return;
        }
    }
    ctx->pc = 0x1C90F0u;
    // 0x1c90f0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c90f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c90f4: 0x8c6313ec  lw          $v1, 0x13EC($v1)
    ctx->pc = 0x1c90f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5100)));
    // 0x1c90f8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C90F8u;
    {
        const bool branch_taken_0x1c90f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c90f8) {
            ctx->pc = 0x1C9138u;
            return;
        }
    }
    ctx->pc = 0x1C9100u;
    // 0x1c9100: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9104: 0x8c8513ec  lw          $a1, 0x13EC($a0)
    ctx->pc = 0x1c9104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5100)));
    // 0x1c9108: 0xc4a1128c  lwc1        $f1, 0x128C($a1)
    ctx->pc = 0x1c9108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c910c: 0x3c0444fa  lui         $a0, 0x44FA
    ctx->pc = 0x1c910cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17658 << 16));
    // 0x1c9110: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c9110u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9114: 0x0  nop
    ctx->pc = 0x1c9114u;
    // NOP
    // 0x1c9118: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c9118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c911c: 0x0  nop
    ctx->pc = 0x1c911cu;
    // NOP
    // 0x1c9120: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9120u;
    {
        const bool branch_taken_0x1c9120 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9120) {
            ctx->pc = 0x1C9138u;
            return;
        }
    }
    ctx->pc = 0x1C9128u;
    // 0x1c9128: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c912c: 0x8c4313ec  lw          $v1, 0x13EC($v0)
    ctx->pc = 0x1c912cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5100)));
    // 0x1c9130: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9134: 0xac4313e8  sw          $v1, 0x13E8($v0)
    ctx->pc = 0x1c9134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5096), GPR_U32(ctx, 3));
    ctx->pc = 0x1c9138u;
}
