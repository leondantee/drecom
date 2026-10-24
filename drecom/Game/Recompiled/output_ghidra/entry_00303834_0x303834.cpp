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

// Function: entry_00303834
// Address: 0x303834 - 0x30386c
void entry_00303834_0x303834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00303834_0x303834");
#endif

    switch (ctx->pc) {
        case 0x303854u: goto label_303854;
        default: break;
    }

    ctx->pc = 0x303834u;

    // 0x303834: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303838: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30383c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30383cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x303840: 0x24062826  addiu       $a2, $zero, 0x2826
    ctx->pc = 0x303840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10278));
    // 0x303844: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x303844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303848: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x303848u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30384c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30384Cu;
    SET_GPR_U32(ctx, 31, 0x303854u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30384Cu, 0x303854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303854u;
label_303854:
    // 0x303854: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303858: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x303858u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30385c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30385cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303860: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x303860u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x303864: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x303864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x303868: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x303868u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x30386cu;
}
