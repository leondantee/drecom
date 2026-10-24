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

// Function: entry_0027b9e8
// Address: 0x27b9e8 - 0x27ba38
void entry_0027b9e8_0x27b9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027b9e8_0x27b9e8");
#endif

    ctx->pc = 0x27b9e8u;

    // 0x27b9e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b9ec: 0x8c241a9c  lw          $a0, 0x1A9C($at)
    ctx->pc = 0x27b9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x27b9f0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x27b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x27b9f4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27b9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27b9f8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x27B9F8u;
    {
        const bool branch_taken_0x27b9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b9f8) {
            ctx->pc = 0x27BA38u;
            return;
        }
    }
    ctx->pc = 0x27BA00u;
    // 0x27ba00: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27ba00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27ba04: 0x8c241aa0  lw          $a0, 0x1AA0($at)
    ctx->pc = 0x27ba04u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AA0u));
    // 0x27ba08: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x27ba08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x27ba0c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27ba0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27ba10: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x27BA10u;
    {
        const bool branch_taken_0x27ba10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ba10) {
            ctx->pc = 0x27BA38u;
            return;
        }
    }
    ctx->pc = 0x27BA18u;
    // 0x27ba18: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27ba18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27ba1c: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x27ba1cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ba20: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x27ba20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x27ba24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27ba24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ba28: 0x0  nop
    ctx->pc = 0x27ba28u;
    // NOP
    // 0x27ba2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27ba2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27ba30: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27ba30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27ba34: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x27ba34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    ctx->pc = 0x27ba38u;
}
