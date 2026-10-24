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

// Function: entry_0021d1cc
// Address: 0x21d1cc - 0x21d1e0
void entry_0021d1cc_0x21d1cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021d1cc_0x21d1cc");
#endif

    ctx->pc = 0x21d1ccu;

    // 0x21d1cc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x21d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x21d1d0: 0x2454a610  addiu       $s4, $v0, -0x59F0
    ctx->pc = 0x21d1d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x21d1d4: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x21d1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21d1d8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x21D1D8u;
    {
        const bool branch_taken_0x21d1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d1d8) {
            ctx->pc = 0x21D30Cu;
            return;
        }
    }
    ctx->pc = 0x21D1E0u;
}
