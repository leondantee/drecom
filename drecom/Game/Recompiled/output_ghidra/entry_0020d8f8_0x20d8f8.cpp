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

// Function: entry_0020d8f8
// Address: 0x20d8f8 - 0x20d93c
void entry_0020d8f8_0x20d8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d8f8_0x20d8f8");
#endif

    switch (ctx->pc) {
        case 0x20d924u: goto label_20d924;
        default: break;
    }

    ctx->pc = 0x20d8f8u;

    // 0x20d8f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d8fc: 0x8c421310  lw          $v0, 0x1310($v0)
    ctx->pc = 0x20d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4880)));
    // 0x20d900: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x20d900u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x20d904: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20d904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d908: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d90c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20d90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20d910: 0x24063c1a  addiu       $a2, $zero, 0x3C1A
    ctx->pc = 0x20d910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15386));
    // 0x20d914: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20d914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d918: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20d918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20d91c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20D91Cu;
    SET_GPR_U32(ctx, 31, 0x20D924u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20D91Cu, 0x20D924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D924u;
label_20d924:
    // 0x20d924: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20d924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d928: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20d928u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20d92c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d930: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20d930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20d934: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20d934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20d938: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20d938u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x20d93cu;
}
