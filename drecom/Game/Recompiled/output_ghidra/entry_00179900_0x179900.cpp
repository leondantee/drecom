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

// Function: entry_00179900
// Address: 0x179900 - 0x179910
void entry_00179900_0x179900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179900_0x179900");
#endif

    ctx->pc = 0x179900u;

    // 0x179900: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x179900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x179904: 0x39040  sll         $s2, $v1, 1
    ctx->pc = 0x179904u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x179908: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x179908u;
    {
        const bool branch_taken_0x179908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179908) {
            ctx->pc = 0x179938u;
            return;
        }
    }
    ctx->pc = 0x179910u;
}
