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

// Function: entry_0029a7d0
// Address: 0x29a7d0 - 0x29a7ec
void entry_0029a7d0_0x29a7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a7d0_0x29a7d0");
#endif

    ctx->pc = 0x29a7d0u;

    // 0x29a7d0: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x29a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29a7d4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x29a7d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29a7d8: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a7dc: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x29a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x29a7e0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x29a7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x29a7e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29A7E4u;
    {
        const bool branch_taken_0x29a7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a7e4) {
            ctx->pc = 0x29A800u;
            return;
        }
    }
    ctx->pc = 0x29A7ECu;
}
