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

// Function: entry_00107508
// Address: 0x107508 - 0x10753c
void entry_00107508_0x107508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107508_0x107508");
#endif

    switch (ctx->pc) {
        case 0x107510u: goto label_107510;
        case 0x107518u: goto label_107518;
        default: break;
    }

    ctx->pc = 0x107508u;

label_107508:
    // 0x107508: 0xc041cf8  jal         func_1073E0
    ctx->pc = 0x107508u;
    SET_GPR_U32(ctx, 31, 0x107510u);
    ctx->pc = 0x1073E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1073E0u, 0x107508u, 0x107510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107510u;
label_107510:
    // 0x107510: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107510u;
    SET_GPR_U32(ctx, 31, 0x107518u);
    ctx->pc = 0x107514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107510u;
    // 0x107514: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107510u, 0x107518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107518u;
label_107518:
    // 0x107518: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x107518u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10751c: 0x1076000d  beq         $v1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x10751Cu;
    {
        const bool branch_taken_0x10751c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x107520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10751Cu;
        // 0x107520: 0x2c6201b4  sltiu       $v0, $v1, 0x1B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)436) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10751c) {
            ctx->pc = 0x107554u;
            return;
        }
    }
    ctx->pc = 0x107524u;
    // 0x107524: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x107524u;
    {
        const bool branch_taken_0x107524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107524) {
            ctx->pc = 0x10753Cu;
            return;
        }
    }
    ctx->pc = 0x10752Cu;
    // 0x10752c: 0x10740011  beq         $v1, $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x10752Cu;
    {
        const bool branch_taken_0x10752c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x10752c) {
            ctx->pc = 0x107574u;
            return;
        }
    }
    ctx->pc = 0x107534u;
    // 0x107534: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x107534u;
    {
        const bool branch_taken_0x107534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107534) {
            ctx->pc = 0x107508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107508;
        }
    }
    ctx->pc = 0x10753Cu;
}
