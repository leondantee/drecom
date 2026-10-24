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

// Function: entry_00107e64
// Address: 0x107e64 - 0x107e70
void entry_00107e64_0x107e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107e64_0x107e64");
#endif

    ctx->pc = 0x107e64u;

    // 0x107e64: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x107e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x107e68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x107E68u;
    {
        const bool branch_taken_0x107e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E68u;
        // 0x107e6c: 0x8c503e48  lw          $s0, 0x3E48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e68) {
            ctx->pc = 0x107E8Cu;
            return;
        }
    }
    ctx->pc = 0x107E70u;
}
