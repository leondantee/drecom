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

// Function: entry_0011b440
// Address: 0x11b440 - 0x11b468
void entry_0011b440_0x11b440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b440_0x11b440");
#endif

    ctx->pc = 0x11b440u;

    // 0x11b440: 0x27a201d4  addiu       $v0, $sp, 0x1D4
    ctx->pc = 0x11b440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x11b444: 0x27a301d8  addiu       $v1, $sp, 0x1D8
    ctx->pc = 0x11b444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x11b448: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x11b448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x11b44c: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x11b44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x11b450: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x11b450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x11b454: 0xafb001ec  sw          $s0, 0x1EC($sp)
    ctx->pc = 0x11b454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 16));
    // 0x11b458: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x11b458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x11b45c: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x11b45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
    // 0x11b460: 0xafa3021c  sw          $v1, 0x21C($sp)
    ctx->pc = 0x11b460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 3));
    // 0x11b464: 0x0  nop
    ctx->pc = 0x11b464u;
    // NOP
    ctx->pc = 0x11b468u;
}
