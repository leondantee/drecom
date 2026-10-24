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

// Function: entry_003615f4
// Address: 0x3615f4 - 0x361604
void entry_003615f4_0x3615f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003615f4_0x3615f4");
#endif

    ctx->pc = 0x3615f4u;

    // 0x3615f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3615f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3615f8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3615f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3615fc: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x3615FCu;
    SET_GPR_U32(ctx, 31, 0x361604u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x3615FCu, 0x361604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361604u;
}
