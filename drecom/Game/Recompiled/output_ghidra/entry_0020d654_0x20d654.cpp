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

// Function: entry_0020d654
// Address: 0x20d654 - 0x20d68c
void entry_0020d654_0x20d654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d654_0x20d654");
#endif

    switch (ctx->pc) {
        case 0x20d674u: goto label_20d674;
        default: break;
    }

    ctx->pc = 0x20d654u;

    // 0x20d654: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20d654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d658: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20d658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d65c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20d65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20d660: 0x24063c17  addiu       $a2, $zero, 0x3C17
    ctx->pc = 0x20d660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15383));
    // 0x20d664: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20d664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d668: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20d668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20d66c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20D66Cu;
    SET_GPR_U32(ctx, 31, 0x20D674u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20D66Cu, 0x20D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D674u;
label_20d674:
    // 0x20d674: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20d674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d678: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20d678u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20d67c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d680: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20d680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20d684: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20d684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20d688: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20d688u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x20d68cu;
}
