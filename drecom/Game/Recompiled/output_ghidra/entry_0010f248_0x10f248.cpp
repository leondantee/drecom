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

// Function: entry_0010f248
// Address: 0x10f248 - 0x10f260
void entry_0010f248_0x10f248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f248_0x10f248");
#endif

    switch (ctx->pc) {
        case 0x10f254u: goto label_10f254;
        default: break;
    }

    ctx->pc = 0x10f248u;

    // 0x10f248: 0x8c4445bc  lw          $a0, 0x45BC($v0)
    ctx->pc = 0x10f248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17852)));
    // 0x10f24c: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10F24Cu;
    SET_GPR_U32(ctx, 31, 0x10F254u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10F254u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F254u) { return; }
    ctx->pc = 0x10F254u;
label_10f254:
    // 0x10f254: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x10f254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x10f258: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x10f258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x10f25c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x10f260u;
}
