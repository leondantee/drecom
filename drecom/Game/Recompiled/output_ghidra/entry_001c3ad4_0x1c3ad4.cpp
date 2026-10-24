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

// Function: entry_001c3ad4
// Address: 0x1c3ad4 - 0x1c3af4
void entry_001c3ad4_0x1c3ad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3ad4_0x1c3ad4");
#endif

    ctx->pc = 0x1c3ad4u;

    // 0x1c3ad4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3ad8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3adc: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c3adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c3ae0: 0x24060a18  addiu       $a2, $zero, 0xA18
    ctx->pc = 0x1c3ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2584));
    // 0x1c3ae4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c3ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3ae8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c3ae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3aec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C3AECu;
    SET_GPR_U32(ctx, 31, 0x1C3AF4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C3AECu, 0x1C3AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3AF4u;
}
