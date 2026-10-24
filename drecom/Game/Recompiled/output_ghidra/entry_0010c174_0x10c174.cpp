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

// Function: entry_0010c174
// Address: 0x10c174 - 0x10c188
void entry_0010c174_0x10c174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c174_0x10c174");
#endif

    ctx->pc = 0x10c174u;

    // 0x10c174: 0x3c17003b  lui         $s7, 0x3B
    ctx->pc = 0x10c174u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
    // 0x10c178: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x10c178u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10c17c: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x10c17cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c180: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x10c180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c184: 0x0  nop
    ctx->pc = 0x10c184u;
    // NOP
    ctx->pc = 0x10c188u;
}
