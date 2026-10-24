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

// Function: entry_002305d4
// Address: 0x2305d4 - 0x230634
void entry_002305d4_0x2305d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002305d4_0x2305d4");
#endif

    ctx->pc = 0x2305d4u;

    // 0x2305d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2305d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2305d8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2305d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2305dc: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x2305dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2305e0: 0x3c033e75  lui         $v1, 0x3E75
    ctx->pc = 0x2305e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15989 << 16));
    // 0x2305e4: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2305e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2305e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2305e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2305ec: 0x0  nop
    ctx->pc = 0x2305ecu;
    // NOP
    // 0x2305f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2305f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2305f4: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x2305f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x2305f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2305f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2305fc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2305fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x230600: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x230600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230604: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x230604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
    // 0x230608: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23060c: 0x0  nop
    ctx->pc = 0x23060cu;
    // NOP
    // 0x230610: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x230610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230614: 0x0  nop
    ctx->pc = 0x230614u;
    // NOP
    // 0x230618: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x230618u;
    {
        const bool branch_taken_0x230618 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x230618) {
            ctx->pc = 0x230634u;
            return;
        }
    }
    ctx->pc = 0x230620u;
    // 0x230620: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x230620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230624: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x230624u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x230628: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x230628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x23062c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23062cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x230630: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x230630u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x230634u;
}
