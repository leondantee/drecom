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

// Function: entry_003154a8
// Address: 0x3154a8 - 0x3154d0
void entry_003154a8_0x3154a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003154a8_0x3154a8");
#endif

    ctx->pc = 0x3154a8u;

    // 0x3154a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3154a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3154ac: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x3154acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3154b0: 0x3c033f65  lui         $v1, 0x3F65
    ctx->pc = 0x3154b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16229 << 16));
    // 0x3154b4: 0x3463c73e  ori         $v1, $v1, 0xC73E
    ctx->pc = 0x3154b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51006);
    // 0x3154b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3154b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3154bc: 0x0  nop
    ctx->pc = 0x3154bcu;
    // NOP
    // 0x3154c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3154c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3154c4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x3154c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3154c8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x3154c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x3154cc: 0x0  nop
    ctx->pc = 0x3154ccu;
    // NOP
    ctx->pc = 0x3154d0u;
}
