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

// Function: entry_001c6614
// Address: 0x1c6614 - 0x1c6634
void entry_001c6614_0x1c6614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6614_0x1c6614");
#endif

    ctx->pc = 0x1c6614u;

    // 0x1c6614: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c6614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6618: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c6618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c661c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c661cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c6620: 0x24060a18  addiu       $a2, $zero, 0xA18
    ctx->pc = 0x1c6620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2584));
    // 0x1c6624: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c6624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6628: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c6628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c662c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C662Cu;
    SET_GPR_U32(ctx, 31, 0x1C6634u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C662Cu, 0x1C6634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6634u;
}
