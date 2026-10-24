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

// Function: entry_001e9128
// Address: 0x1e9128 - 0x1e9140
void entry_001e9128_0x1e9128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9128_0x1e9128");
#endif

    ctx->pc = 0x1e9128u;

    // 0x1e9128: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e912c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1e912cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1e9130: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1e9130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1e9134: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e9134u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1e9138: 0x46102bd  bgez        $v1, . + 4 + (0x2BD << 2)
    ctx->pc = 0x1E9138u;
    {
        const bool branch_taken_0x1e9138 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1e9138) {
            ctx->pc = 0x1E9C30u;
            return;
        }
    }
    ctx->pc = 0x1E9140u;
}
