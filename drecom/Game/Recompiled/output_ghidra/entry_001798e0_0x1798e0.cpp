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

// Function: entry_001798e0
// Address: 0x1798e0 - 0x1798f0
void entry_001798e0_0x1798e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001798e0_0x1798e0");
#endif

    ctx->pc = 0x1798e0u;

    // 0x1798e0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1798e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1798e4: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x1798e4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1798e8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1798E8u;
    {
        const bool branch_taken_0x1798e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1798e8) {
            ctx->pc = 0x179938u;
            return;
        }
    }
    ctx->pc = 0x1798F0u;
}
