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

// Function: entry_0010c3d0
// Address: 0x10c3d0 - 0x10c3f0
void entry_0010c3d0_0x10c3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c3d0_0x10c3d0");
#endif

    ctx->pc = 0x10c3d0u;

    // 0x10c3d0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10c3d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10c3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10c3d8: 0x24423990  addiu       $v0, $v0, 0x3990
    ctx->pc = 0x10c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14736));
    // 0x10c3dc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x10c3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10c3e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10c3e4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x10c3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10c3e8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C3E8u;
    {
        const bool branch_taken_0x10c3e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C3E8u;
        // 0x10c3ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c3e8) {
            ctx->pc = 0x10C3FCu;
            return;
        }
    }
    ctx->pc = 0x10C3F0u;
}
