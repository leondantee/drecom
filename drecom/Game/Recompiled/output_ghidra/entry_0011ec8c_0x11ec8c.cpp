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

// Function: entry_0011ec8c
// Address: 0x11ec8c - 0x11ec98
void entry_0011ec8c_0x11ec8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ec8c_0x11ec8c");
#endif

    ctx->pc = 0x11ec8cu;

    // 0x11ec8c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11EC8Cu;
    {
        const bool branch_taken_0x11ec8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC8Cu;
        // 0x11ec90: 0xdfb30010  ld          $s3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec8c) {
            ctx->pc = 0x11ECB0u;
            return;
        }
    }
    ctx->pc = 0x11EC94u;
    // 0x11ec94: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x11ec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->pc = 0x11ec98u;
}
