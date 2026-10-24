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

// Function: entry_001bf294
// Address: 0x1bf294 - 0x1bf2b4
void entry_001bf294_0x1bf294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf294_0x1bf294");
#endif

    ctx->pc = 0x1bf294u;

    // 0x1bf294: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf298: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf29c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bf29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf2a0: 0x24060a0d  addiu       $a2, $zero, 0xA0D
    ctx->pc = 0x1bf2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2573));
    // 0x1bf2a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bf2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf2a8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bf2a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bf2ac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BF2ACu;
    SET_GPR_U32(ctx, 31, 0x1BF2B4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BF2ACu, 0x1BF2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF2B4u;
}
