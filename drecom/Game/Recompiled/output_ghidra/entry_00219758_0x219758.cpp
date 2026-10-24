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

// Function: entry_00219758
// Address: 0x219758 - 0x21976c
void entry_00219758_0x219758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219758_0x219758");
#endif

    ctx->pc = 0x219758u;

    // 0x219758: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x219758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21975c: 0x2475a610  addiu       $s5, $v1, -0x59F0
    ctx->pc = 0x21975cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x219760: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x219760u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x219764: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x219764u;
    {
        const bool branch_taken_0x219764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219764) {
            ctx->pc = 0x2199CCu;
            return;
        }
    }
    ctx->pc = 0x21976Cu;
}
