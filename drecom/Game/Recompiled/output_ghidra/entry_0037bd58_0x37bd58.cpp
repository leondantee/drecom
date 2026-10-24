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

// Function: entry_0037bd58
// Address: 0x37bd58 - 0x37bd60
void entry_0037bd58_0x37bd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037bd58_0x37bd58");
#endif

    ctx->pc = 0x37bd58u;

    // 0x37bd58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37bd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37bd5c: 0xae235dcc  sw          $v1, 0x5DCC($s1)
    ctx->pc = 0x37bd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24012), GPR_U32(ctx, 3));
    ctx->pc = 0x37bd60u;
}
