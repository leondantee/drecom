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

// Function: entry_0014c580
// Address: 0x14c580 - 0x14c5b0
void entry_0014c580_0x14c580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c580_0x14c580");
#endif

    switch (ctx->pc) {
        case 0x14c5a0u: goto label_14c5a0;
        default: break;
    }

    ctx->pc = 0x14c580u;

    // 0x14c580: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c584: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c588: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14c588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14c58c: 0x240600a4  addiu       $a2, $zero, 0xA4
    ctx->pc = 0x14c58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x14c590: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14c590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c594: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14c594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14c598: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14C598u;
    SET_GPR_U32(ctx, 31, 0x14C5A0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14C598u, 0x14C5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C5A0u;
label_14c5a0:
    // 0x14c5a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14c5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c5a4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14c5a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14c5a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14c5ac: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14c5acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14c5b0u;
}
