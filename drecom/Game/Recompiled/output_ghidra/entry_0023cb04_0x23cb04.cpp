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

// Function: entry_0023cb04
// Address: 0x23cb04 - 0x23cb50
void entry_0023cb04_0x23cb04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023cb04_0x23cb04");
#endif

    ctx->pc = 0x23cb04u;

    // 0x23cb04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cb08: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x23cb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23cb0c: 0x3c03c20c  lui         $v1, 0xC20C
    ctx->pc = 0x23cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49676 << 16));
    // 0x23cb10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23cb10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cb14: 0x0  nop
    ctx->pc = 0x23cb14u;
    // NOP
    // 0x23cb18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23cb18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23cb1c: 0x0  nop
    ctx->pc = 0x23cb1cu;
    // NOP
    // 0x23cb20: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x23CB20u;
    {
        const bool branch_taken_0x23cb20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23cb20) {
            ctx->pc = 0x23CB50u;
            return;
        }
    }
    ctx->pc = 0x23CB28u;
    // 0x23cb28: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x23cb28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
    // 0x23cb2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23cb2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cb30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cb34: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23cb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23cb38: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x23cb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x23cb3c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x23cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x23cb40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23cb40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cb44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cb48: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23cb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23cb4c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x23cb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    ctx->pc = 0x23cb50u;
}
