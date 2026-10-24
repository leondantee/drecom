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

// Function: entry_00117c3c
// Address: 0x117c3c - 0x117c48
void entry_00117c3c_0x117c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117c3c_0x117c3c");
#endif

    ctx->pc = 0x117c3cu;

    // 0x117c3c: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x117c3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x117c40: 0x5640fff1  bnel        $s2, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x117C40u;
    {
        const bool branch_taken_0x117c40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x117c40) {
            ctx->pc = 0x117C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117C40u;
            // 0x117c44: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117C08u;
            return;
        }
    }
    ctx->pc = 0x117C48u;
}
