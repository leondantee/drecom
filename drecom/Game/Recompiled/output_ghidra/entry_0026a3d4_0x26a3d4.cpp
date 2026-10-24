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

// Function: entry_0026a3d4
// Address: 0x26a3d4 - 0x26a3e0
void entry_0026a3d4_0x26a3d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026a3d4_0x26a3d4");
#endif

    ctx->pc = 0x26a3d4u;

    // 0x26a3d4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x26a3d4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26a3d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26A3D8u;
    {
        const bool branch_taken_0x26a3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a3d8) {
            ctx->pc = 0x26A3E4u;
            return;
        }
    }
    ctx->pc = 0x26A3E0u;
}
