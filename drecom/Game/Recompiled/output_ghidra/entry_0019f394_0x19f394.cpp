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

// Function: entry_0019f394
// Address: 0x19f394 - 0x19f39c
void entry_0019f394_0x19f394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f394_0x19f394");
#endif

    ctx->pc = 0x19f394u;

    // 0x19f394: 0xc046314  jal         func_118C50
    ctx->pc = 0x19F394u;
    SET_GPR_U32(ctx, 31, 0x19F39Cu);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x19F39Cu;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19F39Cu) { return; }
    ctx->pc = 0x19F39Cu;
}
