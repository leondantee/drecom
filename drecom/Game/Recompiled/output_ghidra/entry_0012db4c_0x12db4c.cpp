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

// Function: entry_0012db4c
// Address: 0x12db4c - 0x12db74
void entry_0012db4c_0x12db4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012db4c_0x12db4c");
#endif

    ctx->pc = 0x12db4cu;

    // 0x12db4c: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x12db4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12db50: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12db50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12db54: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x12db54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x12db58: 0x8ca50368  lw          $a1, 0x368($a1)
    ctx->pc = 0x12db58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x12db5c: 0x24073c12  addiu       $a3, $zero, 0x3C12
    ctx->pc = 0x12db5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15378));
    // 0x12db60: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x12db60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x12db64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12db64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12db68: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12db68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12db6c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12DB6Cu;
    SET_GPR_U32(ctx, 31, 0x12DB74u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12DB6Cu, 0x12DB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DB74u;
}
