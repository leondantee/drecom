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

// Function: entry_0021b2b8
// Address: 0x21b2b8 - 0x21b2e0
void entry_0021b2b8_0x21b2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b2b8_0x21b2b8");
#endif

    ctx->pc = 0x21b2b8u;

    // 0x21b2b8: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x21b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21b2bc: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x21b2bcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x21b2c0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x21b2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b2c4: 0x3c033f65  lui         $v1, 0x3F65
    ctx->pc = 0x21b2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16229 << 16));
    // 0x21b2c8: 0x3463c73e  ori         $v1, $v1, 0xC73E
    ctx->pc = 0x21b2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51006);
    // 0x21b2cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b2ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b2d0: 0x0  nop
    ctx->pc = 0x21b2d0u;
    // NOP
    // 0x21b2d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21b2d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21b2d8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x21b2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21b2dc: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x21b2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->pc = 0x21b2e0u;
}
