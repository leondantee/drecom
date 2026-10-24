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

// Function: entry_00188e98
// Address: 0x188e98 - 0x188ed8
void entry_00188e98_0x188e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188e98_0x188e98");
#endif

    ctx->pc = 0x188e98u;

    // 0x188e98: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x188e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x188e9c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x188e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x188ea0: 0xc44100e0  lwc1        $f1, 0xE0($v0)
    ctx->pc = 0x188ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188ea4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x188ea4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188ea8: 0x0  nop
    ctx->pc = 0x188ea8u;
    // NOP
    // 0x188eac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188eacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188eb0: 0x0  nop
    ctx->pc = 0x188eb0u;
    // NOP
    // 0x188eb4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x188EB4u;
    {
        const bool branch_taken_0x188eb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188eb4) {
            ctx->pc = 0x188ED8u;
            return;
        }
    }
    ctx->pc = 0x188EBCu;
    // 0x188ebc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x188ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x188ec0: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x188ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x188ec4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x188ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x188ec8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x188ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188ecc: 0xc46000e0  lwc1        $f0, 0xE0($v1)
    ctx->pc = 0x188eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188ed0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x188ed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x188ed4: 0xe46000e0  swc1        $f0, 0xE0($v1)
    ctx->pc = 0x188ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 224), bits); }
    ctx->pc = 0x188ed8u;
}
