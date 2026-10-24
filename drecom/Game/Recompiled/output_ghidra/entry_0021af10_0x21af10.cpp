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

// Function: entry_0021af10
// Address: 0x21af10 - 0x21af38
void entry_0021af10_0x21af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021af10_0x21af10");
#endif

    ctx->pc = 0x21af10u;

    // 0x21af10: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x21af10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21af14: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x21af14u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x21af18: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x21af18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21af1c: 0x3c033fa0  lui         $v1, 0x3FA0
    ctx->pc = 0x21af1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16288 << 16));
    // 0x21af20: 0x3463d845  ori         $v1, $v1, 0xD845
    ctx->pc = 0x21af20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55365);
    // 0x21af24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21af24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21af28: 0x0  nop
    ctx->pc = 0x21af28u;
    // NOP
    // 0x21af2c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x21af2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21af30: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x21af30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21af34: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x21af34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->pc = 0x21af38u;
}
