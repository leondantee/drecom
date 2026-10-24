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

// Function: entry_0010c83c
// Address: 0x10c83c - 0x10c84c
void entry_0010c83c_0x10c83c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c83c_0x10c83c");
#endif

    ctx->pc = 0x10c83cu;

    // 0x10c83c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x10c83cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x10c840: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x10c840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10c844: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10C844u;
    {
        const bool branch_taken_0x10c844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C844u;
        // 0x10c848: 0x90620043  lbu         $v0, 0x43($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 67)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c844) {
            ctx->pc = 0x10C850u;
            return;
        }
    }
    ctx->pc = 0x10C84Cu;
}
