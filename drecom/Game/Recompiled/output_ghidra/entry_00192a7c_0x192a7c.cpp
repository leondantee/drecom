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

// Function: entry_00192a7c
// Address: 0x192a7c - 0x192a9c
void entry_00192a7c_0x192a7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192a7c_0x192a7c");
#endif

    ctx->pc = 0x192a7cu;

    // 0x192a7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x192a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x192a80: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x192a80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x192a84: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x192A84u;
    {
        const bool branch_taken_0x192a84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x192a84) {
            ctx->pc = 0x192A9Cu;
            return;
        }
    }
    ctx->pc = 0x192A8Cu;
    // 0x192a8c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x192a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x192a90: 0x245edf50  addiu       $fp, $v0, -0x20B0
    ctx->pc = 0x192a90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
    // 0x192a94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x192A94u;
    {
        const bool branch_taken_0x192a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192a94) {
            ctx->pc = 0x192AA4u;
            return;
        }
    }
    ctx->pc = 0x192A9Cu;
}
