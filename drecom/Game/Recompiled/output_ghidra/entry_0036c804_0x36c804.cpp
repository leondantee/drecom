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

// Function: entry_0036c804
// Address: 0x36c804 - 0x36c834
void entry_0036c804_0x36c804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036c804_0x36c804");
#endif

    switch (ctx->pc) {
        case 0x36c824u: goto label_36c824;
        default: break;
    }

    ctx->pc = 0x36c804u;

    // 0x36c804: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36c804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c808: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36c808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c80c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36c80cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36c810: 0x24065a09  addiu       $a2, $zero, 0x5A09
    ctx->pc = 0x36c810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23049));
    // 0x36c814: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36c814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c818: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36c818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36c81c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36C81Cu;
    SET_GPR_U32(ctx, 31, 0x36C824u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36C81Cu, 0x36C824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C824u;
label_36c824:
    // 0x36c824: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c828: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36c828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36c82c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36c830: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36c830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x36c834u;
}
