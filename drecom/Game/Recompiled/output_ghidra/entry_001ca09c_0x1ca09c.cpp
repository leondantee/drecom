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

// Function: entry_001ca09c
// Address: 0x1ca09c - 0x1ca0bc
void entry_001ca09c_0x1ca09c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca09c_0x1ca09c");
#endif

    ctx->pc = 0x1ca09cu;

    // 0x1ca09c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca0a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca0a4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ca0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ca0a8: 0x24060792  addiu       $a2, $zero, 0x792
    ctx->pc = 0x1ca0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1938));
    // 0x1ca0ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ca0acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca0b0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ca0b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ca0b4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CA0B4u;
    SET_GPR_U32(ctx, 31, 0x1CA0BCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CA0B4u, 0x1CA0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA0BCu;
}
