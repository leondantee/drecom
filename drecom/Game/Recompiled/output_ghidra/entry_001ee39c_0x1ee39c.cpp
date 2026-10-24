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

// Function: entry_001ee39c
// Address: 0x1ee39c - 0x1ee3bc
void entry_001ee39c_0x1ee39c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee39c_0x1ee39c");
#endif

    ctx->pc = 0x1ee39cu;

    // 0x1ee39c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee3a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee3a4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ee3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ee3a8: 0x2406780a  addiu       $a2, $zero, 0x780A
    ctx->pc = 0x1ee3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30730));
    // 0x1ee3ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ee3acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee3b0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ee3b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ee3b4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EE3B4u;
    SET_GPR_U32(ctx, 31, 0x1EE3BCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EE3B4u, 0x1EE3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE3BCu;
}
