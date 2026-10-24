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

// Function: entry_002148d8
// Address: 0x2148d8 - 0x2148e8
void entry_002148d8_0x2148d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002148d8_0x2148d8");
#endif

    ctx->pc = 0x2148d8u;

    // 0x2148d8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2148d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2148dc: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x2148DCu;
    {
        const bool branch_taken_0x2148dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2148E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148DCu;
        // 0x2148e0: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148dc) {
            ctx->pc = 0x214B1Cu;
            return;
        }
    }
    ctx->pc = 0x2148E4u;
    // 0x2148e4: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x2148e4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x2148e8u;
}
