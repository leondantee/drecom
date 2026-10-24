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

// Function: entry_00304474
// Address: 0x304474 - 0x3044a4
void entry_00304474_0x304474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00304474_0x304474");
#endif

    switch (ctx->pc) {
        case 0x304494u: goto label_304494;
        default: break;
    }

    ctx->pc = 0x304474u;

    // 0x304474: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304478: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30447c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30447cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x304480: 0x24061441  addiu       $a2, $zero, 0x1441
    ctx->pc = 0x304480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5185));
    // 0x304484: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x304484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304488: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x304488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30448c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30448Cu;
    SET_GPR_U32(ctx, 31, 0x304494u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30448Cu, 0x304494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304494u;
label_304494:
    // 0x304494: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x304494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304498: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x304498u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30449c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30449cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3044a0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3044a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x3044a4u;
}
