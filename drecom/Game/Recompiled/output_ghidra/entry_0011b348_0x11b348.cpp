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

// Function: entry_0011b348
// Address: 0x11b348 - 0x11b360
void entry_0011b348_0x11b348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b348_0x11b348");
#endif

    switch (ctx->pc) {
        case 0x11b35cu: goto label_11b35c;
        default: break;
    }

    ctx->pc = 0x11b348u;

    // 0x11b348: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x11b348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x11b34c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B34Cu;
    {
        const bool branch_taken_0x11b34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b34c) {
            ctx->pc = 0x11B350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B34Cu;
            // 0x11b350: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B360u;
            return;
        }
    }
    ctx->pc = 0x11B354u;
    // 0x11b354: 0xc045ca0  jal         func_117280
    ctx->pc = 0x11B354u;
    SET_GPR_U32(ctx, 31, 0x11B35Cu);
    ctx->pc = 0x11B358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B354u;
    // 0x11b358: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x11B354u, 0x11B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B35Cu;
label_11b35c:
    // 0x11b35c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x11b35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x11b360u;
}
