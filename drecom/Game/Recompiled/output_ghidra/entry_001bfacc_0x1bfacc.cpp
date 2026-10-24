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

// Function: entry_001bfacc
// Address: 0x1bfacc - 0x1bfaec
void entry_001bfacc_0x1bfacc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfacc_0x1bfacc");
#endif

    ctx->pc = 0x1bfaccu;

    // 0x1bfacc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bfaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfad0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bfad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfad4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bfad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bfad8: 0x24060a17  addiu       $a2, $zero, 0xA17
    ctx->pc = 0x1bfad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2583));
    // 0x1bfadc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bfadcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfae0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bfae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bfae4: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1BFAE4u;
    SET_GPR_U32(ctx, 31, 0x1BFAECu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1BFAE4u, 0x1BFAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFAECu;
}
