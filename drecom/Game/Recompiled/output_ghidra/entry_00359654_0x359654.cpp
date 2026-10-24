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

// Function: entry_00359654
// Address: 0x359654 - 0x359684
void entry_00359654_0x359654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00359654_0x359654");
#endif

    switch (ctx->pc) {
        case 0x359674u: goto label_359674;
        default: break;
    }

    ctx->pc = 0x359654u;

    // 0x359654: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x359654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359658: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35965c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x35965cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x359660: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x359660u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359664: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x359664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359668: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x359668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35966c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x35966Cu;
    SET_GPR_U32(ctx, 31, 0x359674u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x35966Cu, 0x359674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359674u;
label_359674:
    // 0x359674: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x359674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359678: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x359678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35967c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35967cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x359680: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x359680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x359684u;
}
