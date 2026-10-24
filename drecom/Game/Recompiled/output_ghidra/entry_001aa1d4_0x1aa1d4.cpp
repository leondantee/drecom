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

// Function: entry_001aa1d4
// Address: 0x1aa1d4 - 0x1aa1ec
void entry_001aa1d4_0x1aa1d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa1d4_0x1aa1d4");
#endif

    ctx->pc = 0x1aa1d4u;

    // 0x1aa1d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa1d8: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x1aa1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x1aa1dc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1aa1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1aa1e0: 0xac62020c  sw          $v0, 0x20C($v1)
    ctx->pc = 0x1aa1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 524), GPR_U32(ctx, 2));
    // 0x1aa1e4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA1E4u;
    {
        const bool branch_taken_0x1aa1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa1e4) {
            ctx->pc = 0x1AA20Cu;
            return;
        }
    }
    ctx->pc = 0x1AA1ECu;
}
