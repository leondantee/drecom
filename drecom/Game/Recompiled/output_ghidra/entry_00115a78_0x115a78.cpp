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

// Function: entry_00115a78
// Address: 0x115a78 - 0x115a8c
void entry_00115a78_0x115a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115a78_0x115a78");
#endif

    ctx->pc = 0x115a78u;

    // 0x115a78: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x115a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x115a7c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x115a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x115a80: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x115a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x115a84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x115A84u;
    {
        const bool branch_taken_0x115a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A84u;
        // 0x115a88: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a84) {
            ctx->pc = 0x115A98u;
            return;
        }
    }
    ctx->pc = 0x115A8Cu;
}
