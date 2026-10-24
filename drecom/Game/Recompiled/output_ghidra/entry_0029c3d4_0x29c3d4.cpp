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

// Function: entry_0029c3d4
// Address: 0x29c3d4 - 0x29c3e0
void entry_0029c3d4_0x29c3d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c3d4_0x29c3d4");
#endif

    ctx->pc = 0x29c3d4u;

    // 0x29c3d4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x29c3d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c3d8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x29C3D8u;
    {
        const bool branch_taken_0x29c3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c3d8) {
            ctx->pc = 0x29C4B8u;
            return;
        }
    }
    ctx->pc = 0x29C3E0u;
}
