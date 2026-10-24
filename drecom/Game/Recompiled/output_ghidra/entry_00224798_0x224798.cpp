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

// Function: entry_00224798
// Address: 0x224798 - 0x224834
void entry_00224798_0x224798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00224798_0x224798");
#endif

    ctx->pc = 0x224798u;

    // 0x224798: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22479c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22479cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2247a0: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x2247a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2247a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2247a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2247a8: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x2247a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2247ac: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2247acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2247b0: 0x0  nop
    ctx->pc = 0x2247b0u;
    // NOP
    // 0x2247b4: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x2247B4u;
    {
        const bool branch_taken_0x2247b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2247b4) {
            ctx->pc = 0x2248ACu;
            return;
        }
    }
    ctx->pc = 0x2247BCu;
    // 0x2247bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2247bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2247c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2247c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2247c4: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x2247c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2247c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2247c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2247cc: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x2247ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2247d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2247d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2247d4: 0x0  nop
    ctx->pc = 0x2247d4u;
    // NOP
    // 0x2247d8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x2247D8u;
    {
        const bool branch_taken_0x2247d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2247d8) {
            ctx->pc = 0x224834u;
            return;
        }
    }
    ctx->pc = 0x2247E0u;
    // 0x2247e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2247e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2247e4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2247e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2247e8: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2247e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2247ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2247ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2247f0: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x2247f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2247f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2247f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2247f8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2247f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2247fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2247fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224800: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224804: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x224804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224808: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22480c: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x22480cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224810: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x224810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224814: 0x0  nop
    ctx->pc = 0x224814u;
    // NOP
    // 0x224818: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x224818u;
    {
        const bool branch_taken_0x224818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x224818) {
            ctx->pc = 0x224834u;
            return;
        }
    }
    ctx->pc = 0x224820u;
    // 0x224820: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224824: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224828: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x224828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22482c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22482cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224830: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x224830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x224834u;
}
