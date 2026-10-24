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

// Function: entry_002139a8
// Address: 0x2139a8 - 0x2139ac
void entry_002139a8_0x2139a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002139a8_0x2139a8");
#endif

    ctx->pc = 0x2139a8u;

    // 0x2139a8: 0xac409ce0  sw          $zero, -0x6320($v0)
    ctx->pc = 0x2139a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941920), GPR_U32(ctx, 0));
    ctx->pc = 0x2139acu;
}
