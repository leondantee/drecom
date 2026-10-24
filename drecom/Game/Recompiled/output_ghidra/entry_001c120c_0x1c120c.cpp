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

// Function: entry_001c120c
// Address: 0x1c120c - 0x1c122c
void entry_001c120c_0x1c120c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c120c_0x1c120c");
#endif

    ctx->pc = 0x1c120cu;

    // 0x1c120c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c120cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1210: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1214: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c1214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c1218: 0x24060a21  addiu       $a2, $zero, 0xA21
    ctx->pc = 0x1c1218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2593));
    // 0x1c121c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c121cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1220: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c1220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c1224: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C1224u;
    SET_GPR_U32(ctx, 31, 0x1C122Cu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C1224u, 0x1C122Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C122Cu;
}
