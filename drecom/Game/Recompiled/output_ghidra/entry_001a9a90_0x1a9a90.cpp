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

// Function: entry_001a9a90
// Address: 0x1a9a90 - 0x1a9ab4
void entry_001a9a90_0x1a9a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9a90_0x1a9a90");
#endif

    ctx->pc = 0x1a9a90u;

    // 0x1a9a90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a9a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9a94: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a9a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a9a98: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9A98u;
    {
        const bool branch_taken_0x1a9a98 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a9a98) {
            ctx->pc = 0x1A9AB4u;
            return;
        }
    }
    ctx->pc = 0x1A9AA0u;
    // 0x1a9aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9aa4: 0x0  nop
    ctx->pc = 0x1a9aa4u;
    // NOP
    // 0x1a9aa8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a9aa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a9aac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9AACu;
    {
        const bool branch_taken_0x1a9aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9aac) {
            ctx->pc = 0x1A9AD0u;
            return;
        }
    }
    ctx->pc = 0x1A9AB4u;
}
