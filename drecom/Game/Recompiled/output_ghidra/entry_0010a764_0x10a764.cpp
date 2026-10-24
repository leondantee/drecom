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

// Function: entry_0010a764
// Address: 0x10a764 - 0x10a774
void entry_0010a764_0x10a764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a764_0x10a764");
#endif

    ctx->pc = 0x10a764u;

    // 0x10a764: 0x8ea24480  lw          $v0, 0x4480($s5)
    ctx->pc = 0x10a764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 17536)));
    // 0x10a768: 0x1040ffc7  beqz        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x10A768u;
    {
        const bool branch_taken_0x10a768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A768u;
        // 0x10a76c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a768) {
            ctx->pc = 0x10A688u;
            return;
        }
    }
    ctx->pc = 0x10A770u;
    // 0x10a770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10a774u;
}
