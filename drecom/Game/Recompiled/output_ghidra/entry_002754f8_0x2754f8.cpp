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

// Function: entry_002754f8
// Address: 0x2754f8 - 0x275500
void entry_002754f8_0x2754f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002754f8_0x2754f8");
#endif

    ctx->pc = 0x2754f8u;

    // 0x2754f8: 0x2416001e  addiu       $s6, $zero, 0x1E
    ctx->pc = 0x2754f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2754fc: 0x0  nop
    ctx->pc = 0x2754fcu;
    // NOP
    ctx->pc = 0x275500u;
}
