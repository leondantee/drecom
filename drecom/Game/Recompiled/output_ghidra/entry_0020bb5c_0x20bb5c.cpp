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

// Function: entry_0020bb5c
// Address: 0x20bb5c - 0x20bb74
void entry_0020bb5c_0x20bb5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020bb5c_0x20bb5c");
#endif

    ctx->pc = 0x20bb5cu;

    // 0x20bb5c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bb60: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x20bb60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20bb64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20bb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20bb68: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x20bb68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x20bb6c: 0x100001a3  b           . + 4 + (0x1A3 << 2)
    ctx->pc = 0x20BB6Cu;
    {
        const bool branch_taken_0x20bb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bb6c) {
            ctx->pc = 0x20C1FCu;
            return;
        }
    }
    ctx->pc = 0x20BB74u;
}
