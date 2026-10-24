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

// Function: entry_0010cd70
// Address: 0x10cd70 - 0x10cd98
void entry_0010cd70_0x10cd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cd70_0x10cd70");
#endif

    ctx->pc = 0x10cd70u;

    // 0x10cd70: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10cd74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10cd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10cd78: 0x24423990  addiu       $v0, $v0, 0x3990
    ctx->pc = 0x10cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14736));
    // 0x10cd7c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x10cd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10cd80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10cd84: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x10cd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10cd88: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CD88u;
    {
        const bool branch_taken_0x10cd88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD88u;
        // 0x10cd8c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd88) {
            ctx->pc = 0x10CD98u;
            return;
        }
    }
    ctx->pc = 0x10CD90u;
    // 0x10cd90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10CD90u;
    {
        const bool branch_taken_0x10cd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD90u;
        // 0x10cd94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd90) {
            ctx->pc = 0x10CDA0u;
            return;
        }
    }
    ctx->pc = 0x10CD98u;
}
