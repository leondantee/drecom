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

// Function: entry_00155cd8
// Address: 0x155cd8 - 0x155ce8
void entry_00155cd8_0x155cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155cd8_0x155cd8");
#endif

    ctx->pc = 0x155cd8u;

    // 0x155cd8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x155cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x155cdc: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x155cdcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x155ce0: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x155CE0u;
    {
        const bool branch_taken_0x155ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155ce0) {
            ctx->pc = 0x155C44u;
            return;
        }
    }
    ctx->pc = 0x155CE8u;
}
