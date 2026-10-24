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

// Function: entry_001ec24c
// Address: 0x1ec24c - 0x1ec2e8
void entry_001ec24c_0x1ec24c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec24c_0x1ec24c");
#endif

    ctx->pc = 0x1ec24cu;

    // 0x1ec24c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec250: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec254: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1ec254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec258: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec25c: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec260: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ec260u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec264: 0x0  nop
    ctx->pc = 0x1ec264u;
    // NOP
    // 0x1ec268: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x1EC268u;
    {
        const bool branch_taken_0x1ec268 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec268) {
            ctx->pc = 0x1EC360u;
            return;
        }
    }
    ctx->pc = 0x1EC270u;
    // 0x1ec270: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec274: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec278: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1ec278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec27c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec280: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec284: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ec284u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec288: 0x0  nop
    ctx->pc = 0x1ec288u;
    // NOP
    // 0x1ec28c: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1EC28Cu;
    {
        const bool branch_taken_0x1ec28c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec28c) {
            ctx->pc = 0x1EC2E8u;
            return;
        }
    }
    ctx->pc = 0x1EC294u;
    // 0x1ec294: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec298: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec29c: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x1ec29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec2a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec2a4: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec2a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ec2a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ec2ac: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x1ec2b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec2b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec2b8: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1ec2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec2bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec2c0: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec2c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ec2c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec2c8: 0x0  nop
    ctx->pc = 0x1ec2c8u;
    // NOP
    // 0x1ec2cc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC2CCu;
    {
        const bool branch_taken_0x1ec2cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec2cc) {
            ctx->pc = 0x1EC2E8u;
            return;
        }
    }
    ctx->pc = 0x1EC2D4u;
    // 0x1ec2d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec2d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec2dc: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1ec2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec2e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec2e4: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x1ec2e8u;
}
