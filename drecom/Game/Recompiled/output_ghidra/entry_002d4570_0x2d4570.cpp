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

// Function: entry_002d4570
// Address: 0x2d4570 - 0x2d4590
void entry_002d4570_0x2d4570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d4570_0x2d4570");
#endif

    ctx->pc = 0x2d4570u;

    // 0x2d4570: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4574: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4578: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d4578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d457c: 0x24061408  addiu       $a2, $zero, 0x1408
    ctx->pc = 0x2d457cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5128));
    // 0x2d4580: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d4580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d4584: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d4584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d4588: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D4588u;
    SET_GPR_U32(ctx, 31, 0x2D4590u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D4588u, 0x2D4590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4590u;
}
