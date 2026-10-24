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

// Function: entry_001898c0
// Address: 0x1898c0 - 0x1898f8
void entry_001898c0_0x1898c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001898c0_0x1898c0");
#endif

    ctx->pc = 0x1898c0u;

    // 0x1898c0: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1898c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1898c4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1898c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1898c8: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x1898c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1898cc: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1898ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1898d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1898d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1898d4: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1898d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1898d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1898d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1898dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1898DCu;
    {
        const bool branch_taken_0x1898dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1898dc) {
            ctx->pc = 0x1898F8u;
            return;
        }
    }
    ctx->pc = 0x1898E4u;
    // 0x1898e4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1898e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1898e8: 0xc44000e0  lwc1        $f0, 0xE0($v0)
    ctx->pc = 0x1898e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1898ec: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1898ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1898f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1898F0u;
    {
        const bool branch_taken_0x1898f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1898f0) {
            ctx->pc = 0x189918u;
            return;
        }
    }
    ctx->pc = 0x1898F8u;
}
