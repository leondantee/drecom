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

// Function: entry_0010cdc8
// Address: 0x10cdc8 - 0x10cdf0
void entry_0010cdc8_0x10cdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cdc8_0x10cdc8");
#endif

    ctx->pc = 0x10cdc8u;

    // 0x10cdc8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10cdcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10cdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10cdd0: 0x24423990  addiu       $v0, $v0, 0x3990
    ctx->pc = 0x10cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14736));
    // 0x10cdd4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x10cdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10cdd8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10cddc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x10cddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10cde0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CDE0u;
    {
        const bool branch_taken_0x10cde0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CDE0u;
        // 0x10cde4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cde0) {
            ctx->pc = 0x10CDF0u;
            return;
        }
    }
    ctx->pc = 0x10CDE8u;
    // 0x10cde8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10CDE8u;
    {
        const bool branch_taken_0x10cde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CDE8u;
        // 0x10cdec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cde8) {
            ctx->pc = 0x10CDF8u;
            return;
        }
    }
    ctx->pc = 0x10CDF0u;
}
