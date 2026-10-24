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

// Function: entry_00329ee0
// Address: 0x329ee0 - 0x329f18
void entry_00329ee0_0x329ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329ee0_0x329ee0");
#endif

    ctx->pc = 0x329ee0u;

    // 0x329ee0: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x329ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x329ee4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x329ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x329ee8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x329ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x329eec: 0xc4601028  lwc1        $f0, 0x1028($v1)
    ctx->pc = 0x329eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329ef0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x329ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x329ef4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x329ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x329ef8: 0xe4601020  swc1        $f0, 0x1020($v1)
    ctx->pc = 0x329ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4128), bits); }
    // 0x329efc: 0x8643138c  lh          $v1, 0x138C($s2)
    ctx->pc = 0x329efcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 5004)));
    // 0x329f00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329f00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329f04: 0x0  nop
    ctx->pc = 0x329f04u;
    // NOP
    // 0x329f08: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x329f08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x329f0c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x329f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329f10: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x329f10u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x329f14: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x329f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->pc = 0x329f18u;
}
