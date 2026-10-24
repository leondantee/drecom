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

// Function: entry_0031b66c
// Address: 0x31b66c - 0x31b698
void entry_0031b66c_0x31b66c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031b66c_0x31b66c");
#endif

    ctx->pc = 0x31b66cu;

    // 0x31b66c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b670: 0xac4012b4  sw          $zero, 0x12B4($v0)
    ctx->pc = 0x31b670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4788), GPR_U32(ctx, 0));
    // 0x31b674: 0x3c0245da  lui         $v0, 0x45DA
    ctx->pc = 0x31b674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17882 << 16));
    // 0x31b678: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x31b678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x31b67c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31b67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b680: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b684: 0xe44012cc  swc1        $f0, 0x12CC($v0)
    ctx->pc = 0x31b684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4812), bits); }
    // 0x31b688: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b68c: 0x8c6212b0  lw          $v0, 0x12B0($v1)
    ctx->pc = 0x31b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4784)));
    // 0x31b690: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31b690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31b694: 0xac6212b0  sw          $v0, 0x12B0($v1)
    ctx->pc = 0x31b694u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4784), GPR_U32(ctx, 2));
    ctx->pc = 0x31b698u;
}
