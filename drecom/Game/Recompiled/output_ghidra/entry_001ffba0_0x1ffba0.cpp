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

// Function: entry_001ffba0
// Address: 0x1ffba0 - 0x1ffbb8
void entry_001ffba0_0x1ffba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffba0_0x1ffba0");
#endif

    ctx->pc = 0x1ffba0u;

    // 0x1ffba0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffba4: 0x9064034f  lbu         $a0, 0x34F($v1)
    ctx->pc = 0x1ffba4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 847)));
    // 0x1ffba8: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1ffba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ffbac: 0xa065034f  sb          $a1, 0x34F($v1)
    ctx->pc = 0x1ffbacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 847), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ffbb0: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x1FFBB0u;
    {
        const bool branch_taken_0x1ffbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffbb0) {
            ctx->pc = 0x1FFF80u;
            return;
        }
    }
    ctx->pc = 0x1FFBB8u;
}
