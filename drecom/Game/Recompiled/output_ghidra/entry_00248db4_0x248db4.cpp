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

// Function: entry_00248db4
// Address: 0x248db4 - 0x248e14
void entry_00248db4_0x248db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248db4_0x248db4");
#endif

    ctx->pc = 0x248db4u;

    // 0x248db4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248db8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x248db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248dbc: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x248dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248dc0: 0x3c033e75  lui         $v1, 0x3E75
    ctx->pc = 0x248dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15989 << 16));
    // 0x248dc4: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x248dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x248dc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248dc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248dcc: 0x0  nop
    ctx->pc = 0x248dccu;
    // NOP
    // 0x248dd0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x248dd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x248dd4: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x248dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x248dd8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248ddc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248de0: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x248de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248de4: 0x3c03c220  lui         $v1, 0xC220
    ctx->pc = 0x248de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49696 << 16));
    // 0x248de8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248de8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248dec: 0x0  nop
    ctx->pc = 0x248decu;
    // NOP
    // 0x248df0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x248df0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248df4: 0x0  nop
    ctx->pc = 0x248df4u;
    // NOP
    // 0x248df8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x248DF8u;
    {
        const bool branch_taken_0x248df8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x248df8) {
            ctx->pc = 0x248E14u;
            return;
        }
    }
    ctx->pc = 0x248E00u;
    // 0x248e00: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x248e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248e04: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x248e04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x248e08: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x248e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x248e0c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x248e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x248e10: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x248e10u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x248e14u;
}
