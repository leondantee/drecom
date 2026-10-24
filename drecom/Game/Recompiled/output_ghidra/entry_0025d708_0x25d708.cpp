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

// Function: entry_0025d708
// Address: 0x25d708 - 0x25d738
void entry_0025d708_0x25d708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d708_0x25d708");
#endif

    ctx->pc = 0x25d708u;

    // 0x25d708: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x25d708u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25d70c: 0x3c023f8e  lui         $v0, 0x3F8E
    ctx->pc = 0x25d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16270 << 16));
    // 0x25d710: 0x34449a53  ori         $a0, $v0, 0x9A53
    ctx->pc = 0x25d710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39507);
    // 0x25d714: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x25d714u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d718: 0xc6001564  lwc1        $f0, 0x1564($s0)
    ctx->pc = 0x25d718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d71c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25d71cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25d720: 0xe7a00214  swc1        $f0, 0x214($sp)
    ctx->pc = 0x25d720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
    // 0x25d724: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x25d724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x25d728: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x25d728u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d72c: 0xc7a00214  lwc1        $f0, 0x214($sp)
    ctx->pc = 0x25d72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d730: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25d730u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25d734: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x25d734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    ctx->pc = 0x25d738u;
}
