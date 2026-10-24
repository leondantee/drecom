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

// Function: entry_0010c928
// Address: 0x10c928 - 0x10c940
void entry_0010c928_0x10c928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c928_0x10c928");
#endif

    ctx->pc = 0x10c928u;

    // 0x10c928: 0x90820064  lbu         $v0, 0x64($a0)
    ctx->pc = 0x10c928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x10c92c: 0x10430017  beq         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x10C92Cu;
    {
        const bool branch_taken_0x10c92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C92Cu;
        // 0x10c930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c92c) {
            ctx->pc = 0x10C98Cu;
            return;
        }
    }
    ctx->pc = 0x10C934u;
    // 0x10c934: 0x90830069  lbu         $v1, 0x69($a0)
    ctx->pc = 0x10c934u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 105)));
    // 0x10c938: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10C938u;
    {
        const bool branch_taken_0x10c938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C938u;
        // 0x10c93c: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c938) {
            ctx->pc = 0x10C97Cu;
            return;
        }
    }
    ctx->pc = 0x10C940u;
}
