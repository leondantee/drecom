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

// Function: entry_0019ae54
// Address: 0x19ae54 - 0x19ae6c
void entry_0019ae54_0x19ae54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ae54_0x19ae54");
#endif

    ctx->pc = 0x19ae54u;

    // 0x19ae54: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x19ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19ae58: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x19ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19ae5c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x19ae5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19ae60: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x19ae60u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x19ae64: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x19AE64u;
    SET_GPR_U32(ctx, 31, 0x19AE6Cu);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x19AE64u, 0x19AE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE6Cu;
}
