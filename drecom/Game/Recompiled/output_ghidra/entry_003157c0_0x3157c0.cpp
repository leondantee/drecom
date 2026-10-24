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

// Function: entry_003157c0
// Address: 0x3157c0 - 0x3157e8
void entry_003157c0_0x3157c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003157c0_0x3157c0");
#endif

    ctx->pc = 0x3157c0u;

    // 0x3157c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3157c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3157c4: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x3157c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3157c8: 0x3c033fa0  lui         $v1, 0x3FA0
    ctx->pc = 0x3157c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16288 << 16));
    // 0x3157cc: 0x3463d845  ori         $v1, $v1, 0xD845
    ctx->pc = 0x3157ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55365);
    // 0x3157d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3157d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3157d4: 0x0  nop
    ctx->pc = 0x3157d4u;
    // NOP
    // 0x3157d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3157d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3157dc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x3157dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3157e0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x3157e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3157e4: 0x0  nop
    ctx->pc = 0x3157e4u;
    // NOP
    ctx->pc = 0x3157e8u;
}
