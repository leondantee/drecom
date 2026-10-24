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

// Function: entry_00195ce4
// Address: 0x195ce4 - 0x195cfc
void entry_00195ce4_0x195ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195ce4_0x195ce4");
#endif

    ctx->pc = 0x195ce4u;

    // 0x195ce4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x195ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195ce8: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195CE8u;
    {
        const bool branch_taken_0x195ce8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x195ce8) {
            ctx->pc = 0x195CFCu;
            return;
        }
    }
    ctx->pc = 0x195CF0u;
    // 0x195cf0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x195cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x195cf4: 0x8c521270  lw          $s2, 0x1270($v0)
    ctx->pc = 0x195cf4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4720)));
    // 0x195cf8: 0x0  nop
    ctx->pc = 0x195cf8u;
    // NOP
    ctx->pc = 0x195cfcu;
}
