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

// Function: entry_001ec2e8
// Address: 0x1ec2e8 - 0x1ec360
void entry_001ec2e8_0x1ec2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec2e8_0x1ec2e8");
#endif

    ctx->pc = 0x1ec2e8u;

    // 0x1ec2e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec2ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec2f0: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1ec2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec2f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec2f8: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec2fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec2fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec300: 0x0  nop
    ctx->pc = 0x1ec300u;
    // NOP
    // 0x1ec304: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1EC304u;
    {
        const bool branch_taken_0x1ec304 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec304) {
            ctx->pc = 0x1EC360u;
            return;
        }
    }
    ctx->pc = 0x1EC30Cu;
    // 0x1ec30c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec310: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec314: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x1ec314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec318: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec31c: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec320: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ec320u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ec324: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x1ec328: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec32c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec330: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1ec330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec334: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec338: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec33c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec33cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec340: 0x0  nop
    ctx->pc = 0x1ec340u;
    // NOP
    // 0x1ec344: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC344u;
    {
        const bool branch_taken_0x1ec344 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec344) {
            ctx->pc = 0x1EC360u;
            return;
        }
    }
    ctx->pc = 0x1EC34Cu;
    // 0x1ec34c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec350: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec354: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1ec354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec358: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec35c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x1ec360u;
}
