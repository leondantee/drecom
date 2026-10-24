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

// Function: entry_001b7bf0
// Address: 0x1b7bf0 - 0x1b7c18
void entry_001b7bf0_0x1b7bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7bf0_0x1b7bf0");
#endif

    switch (ctx->pc) {
        case 0x1b7c08u: goto label_1b7c08;
        default: break;
    }

    ctx->pc = 0x1b7bf0u;

    // 0x1b7bf0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7bf4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7bf8: 0x24841b40  addiu       $a0, $a0, 0x1B40
    ctx->pc = 0x1b7bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6976));
    // 0x1b7bfc: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x1b7bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x1b7c00: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B7C00u;
    SET_GPR_U32(ctx, 31, 0x1B7C08u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B7C08u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B7C08u) { return; }
    ctx->pc = 0x1B7C08u;
label_1b7c08:
    // 0x1b7c08: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7c0c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1b7c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1b7c10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b7c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b7c14: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1b7c14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1b7c18u;
}
