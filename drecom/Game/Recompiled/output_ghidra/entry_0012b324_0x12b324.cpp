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

// Function: entry_0012b324
// Address: 0x12b324 - 0x12b344
void entry_0012b324_0x12b324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b324_0x12b324");
#endif

    ctx->pc = 0x12b324u;

    // 0x12b324: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b328: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b32c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12b32cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12b330: 0x24063c04  addiu       $a2, $zero, 0x3C04
    ctx->pc = 0x12b330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15364));
    // 0x12b334: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12b334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b338: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12b338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12b33c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12B33Cu;
    SET_GPR_U32(ctx, 31, 0x12B344u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12B33Cu, 0x12B344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B344u;
}
