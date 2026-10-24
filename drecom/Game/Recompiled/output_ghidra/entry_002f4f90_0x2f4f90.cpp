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

// Function: entry_002f4f90
// Address: 0x2f4f90 - 0x2f4fa4
void entry_002f4f90_0x2f4f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f4f90_0x2f4f90");
#endif

    ctx->pc = 0x2f4f90u;

    // 0x2f4f90: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2f4f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2f4f94: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x2f4f94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2f4f98: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x2f4f98u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f4f9c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2F4F9Cu;
    {
        const bool branch_taken_0x2f4f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4f9c) {
            ctx->pc = 0x2F5188u;
            return;
        }
    }
    ctx->pc = 0x2F4FA4u;
}
