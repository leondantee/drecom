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

// Function: entry_001b91c4
// Address: 0x1b91c4 - 0x1b91ec
void entry_001b91c4_0x1b91c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b91c4_0x1b91c4");
#endif

    switch (ctx->pc) {
        case 0x1b91dcu: goto label_1b91dc;
        default: break;
    }

    ctx->pc = 0x1b91c4u;

    // 0x1b91c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b91c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b91c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b91cc: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x1b91ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x1b91d0: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1b91d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1b91d4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B91D4u;
    SET_GPR_U32(ctx, 31, 0x1B91DCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B91DCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B91DCu) { return; }
    ctx->pc = 0x1B91DCu;
label_1b91dc:
    // 0x1b91dc: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b91dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b91e0: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x1b91e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x1b91e4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b91e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b91e8: 0xa0c40003  sb          $a0, 0x3($a2)
    ctx->pc = 0x1b91e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1b91ecu;
}
