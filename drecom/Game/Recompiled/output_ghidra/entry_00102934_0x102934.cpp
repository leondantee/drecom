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

// Function: entry_00102934
// Address: 0x102934 - 0x102938
void entry_00102934_0x102934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102934_0x102934");
#endif

    ctx->pc = 0x102934u;

    // 0x102934: 0xc046760  jal         func_119D80
    ctx->pc = 0x102934u;
    SET_GPR_U32(ctx, 31, 0x10293Cu);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10293Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10293Cu) { return; }
    ctx->pc = 0x10293Cu;
}
