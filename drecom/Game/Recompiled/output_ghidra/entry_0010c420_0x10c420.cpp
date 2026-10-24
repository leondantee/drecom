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

// Function: entry_0010c420
// Address: 0x10c420 - 0x10c450
void entry_0010c420_0x10c420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c420_0x10c420");
#endif

    ctx->pc = 0x10c420u;

    // 0x10c420: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10c420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10c424: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10c424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10c428: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10c428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10c42c: 0x24423990  addiu       $v0, $v0, 0x3990
    ctx->pc = 0x10c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14736));
    // 0x10c430: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c434: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x10c434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10c438: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10c438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10c43c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x10c43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10c440: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C440u;
    {
        const bool branch_taken_0x10c440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C440u;
        // 0x10c444: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c440) {
            ctx->pc = 0x10C450u;
            return;
        }
    }
    ctx->pc = 0x10C448u;
    // 0x10c448: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10C448u;
    {
        const bool branch_taken_0x10c448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C448u;
        // 0x10c44c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c448) {
            ctx->pc = 0x10C470u;
            return;
        }
    }
    ctx->pc = 0x10C450u;
}
