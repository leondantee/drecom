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

// Function: entry_0021b8b8
// Address: 0x21b8b8 - 0x21b8e0
void entry_0021b8b8_0x21b8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b8b8_0x21b8b8");
#endif

    ctx->pc = 0x21b8b8u;

    // 0x21b8b8: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x21b8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21b8bc: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x21b8bcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21b8c0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x21b8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b8c4: 0x3c033f20  lui         $v1, 0x3F20
    ctx->pc = 0x21b8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16160 << 16));
    // 0x21b8c8: 0x3463d845  ori         $v1, $v1, 0xD845
    ctx->pc = 0x21b8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55365);
    // 0x21b8cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b8ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b8d0: 0x0  nop
    ctx->pc = 0x21b8d0u;
    // NOP
    // 0x21b8d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21b8d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21b8d8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x21b8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21b8dc: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x21b8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    ctx->pc = 0x21b8e0u;
}
