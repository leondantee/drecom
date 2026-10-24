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

// Function: entry_0018e198
// Address: 0x18e198 - 0x18e1ac
void entry_0018e198_0x18e198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e198_0x18e198");
#endif

    ctx->pc = 0x18e198u;

    // 0x18e198: 0x1620ffac  bnez        $s1, . + 4 + (-0x54 << 2)
    ctx->pc = 0x18E198u;
    {
        const bool branch_taken_0x18e198 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e198) {
            ctx->pc = 0x18E04Cu;
            return;
        }
    }
    ctx->pc = 0x18E1A0u;
    // 0x18e1a0: 0x8eb20048  lw          $s2, 0x48($s5)
    ctx->pc = 0x18e1a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x18e1a4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x18E1A4u;
    {
        const bool branch_taken_0x18e1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e1a4) {
            ctx->pc = 0x18E2A8u;
            return;
        }
    }
    ctx->pc = 0x18E1ACu;
}
