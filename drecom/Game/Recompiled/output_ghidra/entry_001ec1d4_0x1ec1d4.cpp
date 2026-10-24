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

// Function: entry_001ec1d4
// Address: 0x1ec1d4 - 0x1ec24c
void entry_001ec1d4_0x1ec1d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec1d4_0x1ec1d4");
#endif

    ctx->pc = 0x1ec1d4u;

    // 0x1ec1d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec1d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec1dc: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1ec1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec1e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec1e4: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x1ec1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec1e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec1e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec1ec: 0x0  nop
    ctx->pc = 0x1ec1ecu;
    // NOP
    // 0x1ec1f0: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1EC1F0u;
    {
        const bool branch_taken_0x1ec1f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec1f0) {
            ctx->pc = 0x1EC24Cu;
            return;
        }
    }
    ctx->pc = 0x1EC1F8u;
    // 0x1ec1f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec1fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec200: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x1ec200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec204: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec208: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x1ec208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec20c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ec20cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ec210: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1ec210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x1ec214: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec218: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec21c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1ec21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec220: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec224: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x1ec224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec228: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec22c: 0x0  nop
    ctx->pc = 0x1ec22cu;
    // NOP
    // 0x1ec230: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC230u;
    {
        const bool branch_taken_0x1ec230 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec230) {
            ctx->pc = 0x1EC24Cu;
            return;
        }
    }
    ctx->pc = 0x1EC238u;
    // 0x1ec238: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec23c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec240: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1ec240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec244: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec248: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1ec248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    ctx->pc = 0x1ec24cu;
}
