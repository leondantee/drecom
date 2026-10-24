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

// Function: entry_0011bc90
// Address: 0x11bc90 - 0x11bca0
void entry_0011bc90_0x11bc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bc90_0x11bc90");
#endif

    ctx->pc = 0x11bc90u;

    // 0x11bc90: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x11bc90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x11bc94: 0x33c20002  andi        $v0, $fp, 0x2
    ctx->pc = 0x11bc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
    // 0x11bc98: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x11bc98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11bc9c: 0xafa60210  sw          $a2, 0x210($sp)
    ctx->pc = 0x11bc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 6));
    ctx->pc = 0x11bca0u;
}
