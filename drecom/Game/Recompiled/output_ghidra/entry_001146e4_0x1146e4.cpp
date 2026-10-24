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

// Function: entry_001146e4
// Address: 0x1146e4 - 0x1146f4
void entry_001146e4_0x1146e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001146e4_0x1146e4");
#endif

    ctx->pc = 0x1146e4u;

    // 0x1146e4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1146E4u;
    {
        const bool branch_taken_0x1146e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1146E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146E4u;
        // 0x1146e8: 0xdfa40000  ld          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146e4) {
            ctx->pc = 0x114728u;
            return;
        }
    }
    ctx->pc = 0x1146ECu;
    // 0x1146ec: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1146ECu;
    {
        const bool branch_taken_0x1146ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146ECu;
        // 0x1146f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146ec) {
            ctx->pc = 0x114744u;
            return;
        }
    }
    ctx->pc = 0x1146F4u;
}
