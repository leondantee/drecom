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

// Function: entry_0032f15c
// Address: 0x32f15c - 0x32f168
void entry_0032f15c_0x32f15c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032f15c_0x32f15c");
#endif

    ctx->pc = 0x32f15cu;

    // 0x32f15c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x32f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x32f160: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x32f160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x32f164: 0x0  nop
    ctx->pc = 0x32f164u;
    // NOP
    ctx->pc = 0x32f168u;
}
