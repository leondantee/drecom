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

// Function: entry_00266700
// Address: 0x266700 - 0x266708
void entry_00266700_0x266700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266700_0x266700");
#endif

    ctx->pc = 0x266700u;

    // 0x266700: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x266700u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266704: 0x0  nop
    ctx->pc = 0x266704u;
    // NOP
    ctx->pc = 0x266708u;
}
