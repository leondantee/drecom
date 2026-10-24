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

// Function: entry_001ec138
// Address: 0x1ec138 - 0x1ec1d4
void entry_001ec138_0x1ec138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec138_0x1ec138");
#endif

    ctx->pc = 0x1ec138u;

    // 0x1ec138: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec13c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec140: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1ec140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec144: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec148: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x1ec148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec14c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ec14cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec150: 0x0  nop
    ctx->pc = 0x1ec150u;
    // NOP
    // 0x1ec154: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x1EC154u;
    {
        const bool branch_taken_0x1ec154 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec154) {
            ctx->pc = 0x1EC24Cu;
            return;
        }
    }
    ctx->pc = 0x1EC15Cu;
    // 0x1ec15c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec160: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec164: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1ec164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec168: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec16c: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x1ec16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec170: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ec170u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec174: 0x0  nop
    ctx->pc = 0x1ec174u;
    // NOP
    // 0x1ec178: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1EC178u;
    {
        const bool branch_taken_0x1ec178 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec178) {
            ctx->pc = 0x1EC1D4u;
            return;
        }
    }
    ctx->pc = 0x1EC180u;
    // 0x1ec180: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec184: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec188: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x1ec188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec18c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec190: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x1ec190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec194: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ec194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ec198: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1ec198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x1ec19c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec1a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec1a4: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1ec1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec1a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec1ac: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x1ec1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec1b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ec1b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec1b4: 0x0  nop
    ctx->pc = 0x1ec1b4u;
    // NOP
    // 0x1ec1b8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC1B8u;
    {
        const bool branch_taken_0x1ec1b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec1b8) {
            ctx->pc = 0x1EC1D4u;
            return;
        }
    }
    ctx->pc = 0x1EC1C0u;
    // 0x1ec1c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec1c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec1c8: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1ec1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec1cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec1d0: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1ec1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    ctx->pc = 0x1ec1d4u;
}
