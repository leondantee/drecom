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

// Function: entry_0029c3c8
// Address: 0x29c3c8 - 0x29c3d4
void entry_0029c3c8_0x29c3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c3c8_0x29c3c8");
#endif

    ctx->pc = 0x29c3c8u;

    // 0x29c3c8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x29c3c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c3cc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x29C3CCu;
    {
        const bool branch_taken_0x29c3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c3cc) {
            ctx->pc = 0x29C4D8u;
            return;
        }
    }
    ctx->pc = 0x29C3D4u;
}
