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

// Function: entry_001798f0
// Address: 0x1798f0 - 0x179900
void entry_001798f0_0x1798f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001798f0_0x1798f0");
#endif

    ctx->pc = 0x1798f0u;

    // 0x1798f0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1798f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1798f4: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x1798f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1798f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1798F8u;
    {
        const bool branch_taken_0x1798f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1798f8) {
            ctx->pc = 0x179938u;
            return;
        }
    }
    ctx->pc = 0x179900u;
}
