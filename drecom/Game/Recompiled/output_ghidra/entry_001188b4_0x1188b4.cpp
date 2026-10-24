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

// Function: entry_001188b4
// Address: 0x1188b4 - 0x1188c0
void entry_001188b4_0x1188b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001188b4_0x1188b4");
#endif

    switch (ctx->pc) {
        case 0x1188bcu: goto label_1188bc;
        default: break;
    }

    ctx->pc = 0x1188b4u;

    // 0x1188b4: 0xc046346  jal         func_118D18
    ctx->pc = 0x1188B4u;
    SET_GPR_U32(ctx, 31, 0x1188BCu);
    ctx->pc = 0x118D18u;
    {
        ctx->pc = 0x1188BCu;
        ps2_stubs::__malloc_unlock(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1188BCu) { return; }
    ctx->pc = 0x1188BCu;
label_1188bc:
    // 0x1188bc: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x1188bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->pc = 0x1188c0u;
}
