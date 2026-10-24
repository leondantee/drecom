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

// Function: entry_00188e60
// Address: 0x188e60 - 0x188e98
void entry_00188e60_0x188e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188e60_0x188e60");
#endif

    ctx->pc = 0x188e60u;

    // 0x188e60: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x188e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x188e64: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x188e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x188e68: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x188e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188e6c: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x188e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188e70: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x188e70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188e74: 0x0  nop
    ctx->pc = 0x188e74u;
    // NOP
    // 0x188e78: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x188E78u;
    {
        const bool branch_taken_0x188e78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188e78) {
            ctx->pc = 0x188E98u;
            return;
        }
    }
    ctx->pc = 0x188E80u;
    // 0x188e80: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x188e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x188e84: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x188e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x188e88: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x188e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188e8c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x188e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x188e90: 0x72008e28  paddub      $s1, $s0, $zero
    ctx->pc = 0x188e90u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x188e94: 0x0  nop
    ctx->pc = 0x188e94u;
    // NOP
    ctx->pc = 0x188e98u;
}
