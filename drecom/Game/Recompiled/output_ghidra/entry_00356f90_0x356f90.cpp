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

// Function: entry_00356f90
// Address: 0x356f90 - 0x356fb8
void entry_00356f90_0x356f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00356f90_0x356f90");
#endif

    ctx->pc = 0x356f90u;

    // 0x356f90: 0x26270001  addiu       $a3, $s1, 0x1
    ctx->pc = 0x356f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x356f94: 0x70e08e28  paddub      $s1, $a3, $zero
    ctx->pc = 0x356f94u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x356f98: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x356f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356f9c: 0x3c064049  lui         $a2, 0x4049
    ctx->pc = 0x356f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16457 << 16));
    // 0x356fa0: 0x34c40e56  ori         $a0, $a2, 0xE56
    ctx->pc = 0x356fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3670);
    // 0x356fa4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x356fa4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356fa8: 0x0  nop
    ctx->pc = 0x356fa8u;
    // NOP
    // 0x356fac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x356facu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x356fb0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x356fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x356fb4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x356fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    ctx->pc = 0x356fb8u;
}
