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

// Function: entry_0010f7cc
// Address: 0x10f7cc - 0x10f7dc
void entry_0010f7cc_0x10f7cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f7cc_0x10f7cc");
#endif

    ctx->pc = 0x10f7ccu;

    // 0x10f7cc: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x10F7CCu;
    {
        const bool branch_taken_0x10f7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7CCu;
        // 0x10f7d0: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f7cc) {
            ctx->pc = 0x10F740u;
            return;
        }
    }
    ctx->pc = 0x10F7D4u;
    // 0x10f7d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10F7D4u;
    {
        const bool branch_taken_0x10f7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7D4u;
        // 0x10f7d8: 0xae2045d4  sw          $zero, 0x45D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 17876), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f7d4) {
            ctx->pc = 0x10F7E4u;
            return;
        }
    }
    ctx->pc = 0x10F7DCu;
}
