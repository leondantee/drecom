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

// Function: caseD_4
// Address: 0x14a218 - 0x14a250
void caseD_4_0x14a218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x14a218");
#endif

    switch (ctx->pc) {
        case 0x14a248u: goto label_14a248;
        default: break;
    }

    ctx->pc = 0x14a218u;

    // 0x14a218: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a21c: 0x8c421b60  lw          $v0, 0x1B60($v0)
    ctx->pc = 0x14a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x14a220: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14A220u;
    {
        const bool branch_taken_0x14a220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a220) {
            ctx->pc = 0x14A250u;
            return;
        }
    }
    ctx->pc = 0x14A228u;
    // 0x14a228: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a22c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a230: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14a230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14a234: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x14a234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x14a238: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x14a238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x14a23c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14a23cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14a240: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14A240u;
    SET_GPR_U32(ctx, 31, 0x14A248u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14A240u, 0x14A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A248u;
label_14a248:
    // 0x14a248: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14A248u;
    {
        const bool branch_taken_0x14a248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a248) {
            ctx->pc = 0x14A270u;
            return;
        }
    }
    ctx->pc = 0x14A250u;
}
