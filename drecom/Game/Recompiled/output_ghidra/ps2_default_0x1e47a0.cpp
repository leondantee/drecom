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

// Function: default
// Address: 0x1e47a0 - 0x1e47d0
void ps2_default_0x1e47a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1e47a0");
#endif

    switch (ctx->pc) {
        case 0x1e47c0u: goto label_1e47c0;
        default: break;
    }

    ctx->pc = 0x1e47a0u;

    // 0x1e47a0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1e47a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1e47a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e47a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e47a8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e47a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e47ac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1e47acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e47b0: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x1e47b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1e47b4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1e47b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e47b8: 0xc06aff4  jal         func_1ABFD0
    ctx->pc = 0x1E47B8u;
    SET_GPR_U32(ctx, 31, 0x1E47C0u);
    ctx->pc = 0x1ABFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABFD0u, 0x1E47B8u, 0x1E47C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E47C0u;
label_1e47c0:
    // 0x1e47c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e47c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e47c4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1e47c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1e47c8: 0x1640ff8c  bnez        $s2, . + 4 + (-0x74 << 2)
    ctx->pc = 0x1E47C8u;
    {
        const bool branch_taken_0x1e47c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e47c8) {
            ctx->pc = 0x1E45FCu;
            return;
        }
    }
    ctx->pc = 0x1E47D0u;
}
