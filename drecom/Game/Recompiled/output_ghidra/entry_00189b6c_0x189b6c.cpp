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

// Function: entry_00189b6c
// Address: 0x189b6c - 0x189ba4
void entry_00189b6c_0x189b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189b6c_0x189b6c");
#endif

    ctx->pc = 0x189b6cu;

    // 0x189b6c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x189b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189b70: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189b74: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x189b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x189b78: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x189b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x189b7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x189b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x189b80: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x189b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x189b84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x189b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x189b88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x189B88u;
    {
        const bool branch_taken_0x189b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189b88) {
            ctx->pc = 0x189BA4u;
            return;
        }
    }
    ctx->pc = 0x189B90u;
    // 0x189b90: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189b94: 0xc44000e0  lwc1        $f0, 0xE0($v0)
    ctx->pc = 0x189b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189b98: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x189b9c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x189B9Cu;
    {
        const bool branch_taken_0x189b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189b9c) {
            ctx->pc = 0x189BC4u;
            return;
        }
    }
    ctx->pc = 0x189BA4u;
}
