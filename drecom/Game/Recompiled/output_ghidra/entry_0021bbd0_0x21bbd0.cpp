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

// Function: entry_0021bbd0
// Address: 0x21bbd0 - 0x21bbf8
void entry_0021bbd0_0x21bbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021bbd0_0x21bbd0");
#endif

    ctx->pc = 0x21bbd0u;

    // 0x21bbd0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x21bbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21bbd4: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x21bbd4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x21bbd8: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x21bbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21bbdc: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x21bbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
    // 0x21bbe0: 0x3463098f  ori         $v1, $v1, 0x98F
    ctx->pc = 0x21bbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2447);
    // 0x21bbe4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21bbe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bbe8: 0x0  nop
    ctx->pc = 0x21bbe8u;
    // NOP
    // 0x21bbec: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x21bbecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x21bbf0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x21bbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21bbf4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x21bbf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x21bbf8u;
}
