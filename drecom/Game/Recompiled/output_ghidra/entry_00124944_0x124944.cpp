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

// Function: entry_00124944
// Address: 0x124944 - 0x124964
void entry_00124944_0x124944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124944_0x124944");
#endif

    ctx->pc = 0x124944u;

    // 0x124944: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x124944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124948: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x124948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12494c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12494cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x124950: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x124950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x124954: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x124954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124958: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x124958u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12495c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12495Cu;
    SET_GPR_U32(ctx, 31, 0x124964u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12495Cu, 0x124964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124964u;
}
