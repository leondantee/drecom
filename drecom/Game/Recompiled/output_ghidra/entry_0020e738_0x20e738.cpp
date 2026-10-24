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

// Function: entry_0020e738
// Address: 0x20e738 - 0x20e780
void entry_0020e738_0x20e738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020e738_0x20e738");
#endif

    switch (ctx->pc) {
        case 0x20e758u: goto label_20e758;
        default: break;
    }

    ctx->pc = 0x20e738u;

    // 0x20e738: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20e738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e73c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e740: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20e740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20e744: 0x24066416  addiu       $a2, $zero, 0x6416
    ctx->pc = 0x20e744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25622));
    // 0x20e748: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20e748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e74c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20e74cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20e750: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20E750u;
    SET_GPR_U32(ctx, 31, 0x20E758u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20E750u, 0x20E758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E758u;
label_20e758:
    // 0x20e758: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20e758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e75c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20e75cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20e760: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e764: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x20e764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x20e768: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x20e768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x20e76c: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x20e76cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e770: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e774: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20e774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20e778: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20e778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20e77c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20e77cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x20e780u;
}
