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

// Function: entry_0010ef8c
// Address: 0x10ef8c - 0x10efa4
void entry_0010ef8c_0x10ef8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ef8c_0x10ef8c");
#endif

    switch (ctx->pc) {
        case 0x10ef98u: goto label_10ef98;
        default: break;
    }

    ctx->pc = 0x10ef8cu;

    // 0x10ef8c: 0x8e6445bc  lw          $a0, 0x45BC($s3)
    ctx->pc = 0x10ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 17852)));
    // 0x10ef90: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10EF90u;
    SET_GPR_U32(ctx, 31, 0x10EF98u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10EF98u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10EF98u) { return; }
    ctx->pc = 0x10EF98u;
label_10ef98:
    // 0x10ef98: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x10ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x10ef9c: 0x2231825  or          $v1, $s1, $v1
    ctx->pc = 0x10ef9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x10efa0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x10efa4u;
}
