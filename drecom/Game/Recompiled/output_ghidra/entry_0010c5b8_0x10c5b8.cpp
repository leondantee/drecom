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

// Function: entry_0010c5b8
// Address: 0x10c5b8 - 0x10c5d8
void entry_0010c5b8_0x10c5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c5b8_0x10c5b8");
#endif

    ctx->pc = 0x10c5b8u;

    // 0x10c5b8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10c5bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10c5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10c5c0: 0x24423990  addiu       $v0, $v0, 0x3990
    ctx->pc = 0x10c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14736));
    // 0x10c5c4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x10c5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10c5c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10c5cc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x10c5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10c5d0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C5D0u;
    {
        const bool branch_taken_0x10c5d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C5D0u;
        // 0x10c5d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c5d0) {
            ctx->pc = 0x10C5E4u;
            return;
        }
    }
    ctx->pc = 0x10C5D8u;
}
