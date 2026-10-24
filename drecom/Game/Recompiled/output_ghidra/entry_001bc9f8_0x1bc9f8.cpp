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

// Function: entry_001bc9f8
// Address: 0x1bc9f8 - 0x1bca20
void entry_001bc9f8_0x1bc9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc9f8_0x1bc9f8");
#endif

    switch (ctx->pc) {
        case 0x1bca10u: goto label_1bca10;
        default: break;
    }

    ctx->pc = 0x1bc9f8u;

    // 0x1bc9f8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc9fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bc9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bca00: 0x24a41b40  addiu       $a0, $a1, 0x1B40
    ctx->pc = 0x1bca00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 6976));
    // 0x1bca04: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x1bca04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1bca08: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1BCA08u;
    SET_GPR_U32(ctx, 31, 0x1BCA10u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1BCA10u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BCA10u) { return; }
    ctx->pc = 0x1BCA10u;
label_1bca10:
    // 0x1bca10: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bca10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bca14: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bca14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bca18: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1bca18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bca1c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1bca1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1bca20u;
}
