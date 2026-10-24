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

// Function: entry_00188e1c
// Address: 0x188e1c - 0x188e60
void entry_00188e1c_0x188e1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188e1c_0x188e1c");
#endif

    ctx->pc = 0x188e1cu;

    // 0x188e1c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x188e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x188e20: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x188e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x188e24: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x188e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188e28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x188e28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188e2c: 0x0  nop
    ctx->pc = 0x188e2cu;
    // NOP
    // 0x188e30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188e30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188e34: 0x0  nop
    ctx->pc = 0x188e34u;
    // NOP
    // 0x188e38: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x188E38u;
    {
        const bool branch_taken_0x188e38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188e38) {
            ctx->pc = 0x188E60u;
            return;
        }
    }
    ctx->pc = 0x188E40u;
    // 0x188e40: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x188e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x188e44: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x188e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x188e48: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x188e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x188e4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x188e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188e50: 0xc46000d0  lwc1        $f0, 0xD0($v1)
    ctx->pc = 0x188e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188e54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x188e54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x188e58: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x188e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x188e5c: 0x0  nop
    ctx->pc = 0x188e5cu;
    // NOP
    ctx->pc = 0x188e60u;
}
