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

// Function: entry_00131620
// Address: 0x131620 - 0x131648
void entry_00131620_0x131620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131620_0x131620");
#endif

    switch (ctx->pc) {
        case 0x131640u: goto label_131640;
        default: break;
    }

    ctx->pc = 0x131620u;

    // 0x131620: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131624: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131628: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x131628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x13162c: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x13162cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x131630: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x131630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131634: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x131634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x131638: 0xc0965d0  jal         func_259740
    ctx->pc = 0x131638u;
    SET_GPR_U32(ctx, 31, 0x131640u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x131638u, 0x131640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131640u;
label_131640:
    // 0x131640: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x131640u;
    {
        const bool branch_taken_0x131640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131640) {
            ctx->pc = 0x1316B8u;
            return;
        }
    }
    ctx->pc = 0x131648u;
}
