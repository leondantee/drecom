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

// Function: entry_001b59a8
// Address: 0x1b59a8 - 0x1b59cc
void entry_001b59a8_0x1b59a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b59a8_0x1b59a8");
#endif

    ctx->pc = 0x1b59a8u;

    // 0x1b59a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b59a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b59ac: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x1b59acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b59b0: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B59B0u;
    {
        const bool branch_taken_0x1b59b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b59b0) {
            ctx->pc = 0x1B59CCu;
            return;
        }
    }
    ctx->pc = 0x1B59B8u;
    // 0x1b59b8: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b59b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b59bc: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x1b59bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1b59c0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1b59c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1b59c4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b59c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b59c8: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x1b59c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1b59ccu;
}
