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

// Function: entry_0011847c
// Address: 0x11847c - 0x118490
void entry_0011847c_0x11847c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011847c_0x11847c");
#endif

    ctx->pc = 0x11847cu;

    // 0x11847c: 0x2c620555  sltiu       $v0, $v1, 0x555
    ctx->pc = 0x11847cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x118480: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118480u;
    {
        const bool branch_taken_0x118480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118480u;
        // 0x118484: 0x81482  srl         $v0, $t0, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118480) {
            ctx->pc = 0x118490u;
            return;
        }
    }
    ctx->pc = 0x118488u;
    // 0x118488: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x118488u;
    {
        const bool branch_taken_0x118488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118488u;
        // 0x11848c: 0x2446007c  addiu       $a2, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118488) {
            ctx->pc = 0x118494u;
            return;
        }
    }
    ctx->pc = 0x118490u;
}
