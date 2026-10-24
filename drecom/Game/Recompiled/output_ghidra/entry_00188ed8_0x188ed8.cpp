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

// Function: entry_00188ed8
// Address: 0x188ed8 - 0x188f10
void entry_00188ed8_0x188ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188ed8_0x188ed8");
#endif

    ctx->pc = 0x188ed8u;

    // 0x188ed8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x188ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x188edc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x188edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x188ee0: 0xc44100e0  lwc1        $f1, 0xE0($v0)
    ctx->pc = 0x188ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188ee4: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x188ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188ee8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x188ee8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188eec: 0x0  nop
    ctx->pc = 0x188eecu;
    // NOP
    // 0x188ef0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x188EF0u;
    {
        const bool branch_taken_0x188ef0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188ef0) {
            ctx->pc = 0x188F10u;
            return;
        }
    }
    ctx->pc = 0x188EF8u;
    // 0x188ef8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x188ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x188efc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x188efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x188f00: 0xc44000e0  lwc1        $f0, 0xE0($v0)
    ctx->pc = 0x188f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188f04: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x188f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x188f08: 0x72008e28  paddub      $s1, $s0, $zero
    ctx->pc = 0x188f08u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x188f0c: 0x0  nop
    ctx->pc = 0x188f0cu;
    // NOP
    ctx->pc = 0x188f10u;
}
