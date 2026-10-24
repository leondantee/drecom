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

// Function: entry_0023fc30
// Address: 0x23fc30 - 0x23fc90
void entry_0023fc30_0x23fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023fc30_0x23fc30");
#endif

    ctx->pc = 0x23fc30u;

    // 0x23fc30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fc34: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23fc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23fc38: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x23fc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23fc3c: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x23fc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
    // 0x23fc40: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x23fc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x23fc44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fc44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23fc48: 0x0  nop
    ctx->pc = 0x23fc48u;
    // NOP
    // 0x23fc4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23fc4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23fc50: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x23fc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x23fc54: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fc58: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23fc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23fc5c: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x23fc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23fc60: 0x3c03c080  lui         $v1, 0xC080
    ctx->pc = 0x23fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49280 << 16));
    // 0x23fc64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fc64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23fc68: 0x0  nop
    ctx->pc = 0x23fc68u;
    // NOP
    // 0x23fc6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23fc6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23fc70: 0x0  nop
    ctx->pc = 0x23fc70u;
    // NOP
    // 0x23fc74: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x23FC74u;
    {
        const bool branch_taken_0x23fc74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23fc74) {
            ctx->pc = 0x23FC90u;
            return;
        }
    }
    ctx->pc = 0x23FC7Cu;
    // 0x23fc7c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x23fc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fc80: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x23fc80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x23fc84: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x23fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x23fc88: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23fc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x23fc8c: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x23fc8cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x23fc90u;
}
