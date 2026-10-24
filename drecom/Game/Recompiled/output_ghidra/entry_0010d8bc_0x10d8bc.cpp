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

// Function: entry_0010d8bc
// Address: 0x10d8bc - 0x10d8cc
void entry_0010d8bc_0x10d8bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d8bc_0x10d8bc");
#endif

    ctx->pc = 0x10d8bcu;

    // 0x10d8bc: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x10D8BCu;
    {
        const bool branch_taken_0x10d8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8BCu;
        // 0x10d8c0: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d8bc) {
            ctx->pc = 0x10D830u;
            return;
        }
    }
    ctx->pc = 0x10D8C4u;
    // 0x10d8c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10D8C4u;
    {
        const bool branch_taken_0x10d8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8C4u;
        // 0x10d8c8: 0xae2045d0  sw          $zero, 0x45D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 17872), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d8c4) {
            ctx->pc = 0x10D8D8u;
            return;
        }
    }
    ctx->pc = 0x10D8CCu;
}
