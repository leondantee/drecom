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

// Function: caseD_6
// Address: 0x26c140 - 0x26c174
void caseD_6_0x26c140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x26c140");
#endif

    switch (ctx->pc) {
        case 0x26c160u: goto label_26c160;
        default: break;
    }

    ctx->pc = 0x26c140u;

    // 0x26c140: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c144: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c148: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26c148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26c14c: 0x24060073  addiu       $a2, $zero, 0x73
    ctx->pc = 0x26c14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x26c150: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26c150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c154: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26c154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26c158: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26C158u;
    SET_GPR_U32(ctx, 31, 0x26C160u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26C158u, 0x26C160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C160u;
label_26c160:
    // 0x26c160: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x26c160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26c164: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c168: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x26c168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x26c16c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x26C16Cu;
    {
        const bool branch_taken_0x26c16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c16c) {
            ctx->pc = 0x26C21Cu;
            return;
        }
    }
    ctx->pc = 0x26C174u;
}
