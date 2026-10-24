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

// Function: entry_0029d86c
// Address: 0x29d86c - 0x29d878
void entry_0029d86c_0x29d86c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d86c_0x29d86c");
#endif

    ctx->pc = 0x29d86cu;

    // 0x29d86c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d870: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d874: 0xa4400048  sh          $zero, 0x48($v0)
    ctx->pc = 0x29d874u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 72), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x29d878u;
}
