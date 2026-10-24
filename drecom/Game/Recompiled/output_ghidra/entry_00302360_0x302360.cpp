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

// Function: entry_00302360
// Address: 0x302360 - 0x302380
void entry_00302360_0x302360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00302360_0x302360");
#endif

    ctx->pc = 0x302360u;

    // 0x302360: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x302360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302364: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x302364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302368: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x302368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30236c: 0x24065a01  addiu       $a2, $zero, 0x5A01
    ctx->pc = 0x30236cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23041));
    // 0x302370: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x302370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302374: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x302374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x302378: 0xc0965d0  jal         func_259740
    ctx->pc = 0x302378u;
    SET_GPR_U32(ctx, 31, 0x302380u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x302378u, 0x302380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302380u;
}
