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

// Function: entry_0018a398
// Address: 0x18a398 - 0x18a3a8
void entry_0018a398_0x18a398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a398_0x18a398");
#endif

    ctx->pc = 0x18a398u;

    // 0x18a398: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x18a398u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x18a39c: 0x26b50110  addiu       $s5, $s5, 0x110
    ctx->pc = 0x18a39cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
    // 0x18a3a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18a3a4: 0x0  nop
    ctx->pc = 0x18a3a4u;
    // NOP
    ctx->pc = 0x18a3a8u;
}
