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

// Function: entry_0021aa58
// Address: 0x21aa58 - 0x21aa6c
void entry_0021aa58_0x21aa58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021aa58_0x21aa58");
#endif

    ctx->pc = 0x21aa58u;

    // 0x21aa58: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x21aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21aa5c: 0x2475a610  addiu       $s5, $v1, -0x59F0
    ctx->pc = 0x21aa5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x21aa60: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x21aa60u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21aa64: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x21AA64u;
    {
        const bool branch_taken_0x21aa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aa64) {
            ctx->pc = 0x21AB74u;
            return;
        }
    }
    ctx->pc = 0x21AA6Cu;
}
