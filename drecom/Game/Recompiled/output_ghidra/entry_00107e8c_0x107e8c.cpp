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

// Function: entry_00107e8c
// Address: 0x107e8c - 0x107ea4
void entry_00107e8c_0x107e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107e8c_0x107e8c");
#endif

    switch (ctx->pc) {
        case 0x107e94u: goto label_107e94;
        default: break;
    }

    ctx->pc = 0x107e8cu;

    // 0x107e8c: 0xc0417d6  jal         func_105F58
    ctx->pc = 0x107E8Cu;
    SET_GPR_U32(ctx, 31, 0x107E94u);
    ctx->pc = 0x107E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E8Cu;
    // 0x107e90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F58u, 0x107E8Cu, 0x107E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E94u;
label_107e94:
    // 0x107e94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x107e94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e98: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x107E98u;
    {
        const bool branch_taken_0x107e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E98u;
        // 0x107e9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e98) {
            ctx->pc = 0x107EA4u;
            return;
        }
    }
    ctx->pc = 0x107EA0u;
    // 0x107ea0: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x107ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    ctx->pc = 0x107ea4u;
}
