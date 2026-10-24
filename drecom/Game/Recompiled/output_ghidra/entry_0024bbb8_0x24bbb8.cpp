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

// Function: entry_0024bbb8
// Address: 0x24bbb8 - 0x24bbcc
void entry_0024bbb8_0x24bbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024bbb8_0x24bbb8");
#endif

    ctx->pc = 0x24bbb8u;

    // 0x24bbb8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24bbbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24bbc0: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x24bbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x24bbc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24bbc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24bbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x24bbccu;
}
