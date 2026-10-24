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

// Function: entry_00225444
// Address: 0x225444 - 0x225488
void entry_00225444_0x225444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225444_0x225444");
#endif

    switch (ctx->pc) {
        case 0x225464u: goto label_225464;
        case 0x22546cu: goto label_22546c;
        default: break;
    }

    ctx->pc = 0x225444u;

    // 0x225444: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225448: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22544c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22544cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x225450: 0x24067804  addiu       $a2, $zero, 0x7804
    ctx->pc = 0x225450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30724));
    // 0x225454: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x225454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225458: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x225458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22545c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22545Cu;
    SET_GPR_U32(ctx, 31, 0x225464u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22545Cu, 0x225464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225464u;
label_225464:
    // 0x225464: 0xc067694  jal         func_19DA50
    ctx->pc = 0x225464u;
    SET_GPR_U32(ctx, 31, 0x22546Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x225464u, 0x22546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22546Cu;
label_22546c:
    // 0x22546c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22546cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x225470: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x225470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x225474: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x225474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x225478: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x225478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22547c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22547cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x225480: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225484: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x225484u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x225488u;
}
