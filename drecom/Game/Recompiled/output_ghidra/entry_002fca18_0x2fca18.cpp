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

// Function: entry_002fca18
// Address: 0x2fca18 - 0x2fca20
void entry_002fca18_0x2fca18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fca18_0x2fca18");
#endif

    ctx->pc = 0x2fca18u;

    // 0x2fca18: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2fca18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fca1c: 0xafa50168  sw          $a1, 0x168($sp)
    ctx->pc = 0x2fca1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 5));
    ctx->pc = 0x2fca20u;
}
