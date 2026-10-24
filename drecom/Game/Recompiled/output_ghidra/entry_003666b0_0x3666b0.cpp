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

// Function: entry_003666b0
// Address: 0x3666b0 - 0x3666c8
void entry_003666b0_0x3666b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003666b0_0x3666b0");
#endif

    ctx->pc = 0x3666b0u;

    // 0x3666b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3666b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3666b4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3666b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3666b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3666b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3666bc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3666bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3666c0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x3666C0u;
    {
        const bool branch_taken_0x3666c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3666c0) {
            ctx->pc = 0x3667D4u;
            return;
        }
    }
    ctx->pc = 0x3666C8u;
}
