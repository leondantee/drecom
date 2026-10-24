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

// Function: entry_00217100
// Address: 0x217100 - 0x21711c
void entry_00217100_0x217100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217100_0x217100");
#endif

    ctx->pc = 0x217100u;

    // 0x217100: 0x8c43aaf8  lw          $v1, -0x5508($v0)
    ctx->pc = 0x217100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945528)));
    // 0x217104: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x217104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217108: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x217108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21710c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21710Cu;
    {
        const bool branch_taken_0x21710c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x217110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21710Cu;
        // 0x217110: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21710c) {
            ctx->pc = 0x21711Cu;
            return;
        }
    }
    ctx->pc = 0x217114u;
    // 0x217114: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x217114u;
    {
        const bool branch_taken_0x217114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217114u;
        // 0x217118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217114) {
            ctx->pc = 0x2171D8u;
            return;
        }
    }
    ctx->pc = 0x21711Cu;
}
