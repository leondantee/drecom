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

// Function: entry_002cdad8
// Address: 0x2cdad8 - 0x2cdaf8
void entry_002cdad8_0x2cdad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cdad8_0x2cdad8");
#endif

    ctx->pc = 0x2cdad8u;

    // 0x2cdad8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cdad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdadc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cdadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdae0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cdae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cdae4: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x2cdae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x2cdae8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cdae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdaec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cdaecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cdaf0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CDAF0u;
    SET_GPR_U32(ctx, 31, 0x2CDAF8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CDAF0u, 0x2CDAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDAF8u;
}
