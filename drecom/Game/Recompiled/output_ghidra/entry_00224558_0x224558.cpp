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

// Function: entry_00224558
// Address: 0x224558 - 0x22460c
void entry_00224558_0x224558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00224558_0x224558");
#endif

    ctx->pc = 0x224558u;

    // 0x224558: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22455c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22455cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224560: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x224560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x224564: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x224564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x224568: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x224568u;
    {
        const bool branch_taken_0x224568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224568) {
            ctx->pc = 0x224798u;
            return;
        }
    }
    ctx->pc = 0x224570u;
    // 0x224570: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224574: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224578: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x224578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22457c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22457cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224580: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x224580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224584: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x224584u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224588: 0x0  nop
    ctx->pc = 0x224588u;
    // NOP
    // 0x22458c: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x22458Cu;
    {
        const bool branch_taken_0x22458c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22458c) {
            ctx->pc = 0x224684u;
            return;
        }
    }
    ctx->pc = 0x224594u;
    // 0x224594: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224598: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22459c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x22459cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2245a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2245a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2245a4: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2245a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2245a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2245a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2245ac: 0x0  nop
    ctx->pc = 0x2245acu;
    // NOP
    // 0x2245b0: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x2245B0u;
    {
        const bool branch_taken_0x2245b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2245b0) {
            ctx->pc = 0x22460Cu;
            return;
        }
    }
    ctx->pc = 0x2245B8u;
    // 0x2245b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2245b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2245bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2245bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2245c0: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2245c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2245c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2245c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2245c8: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2245c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2245cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2245ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2245d0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2245d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2245d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2245d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2245d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2245d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2245dc: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2245dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2245e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2245e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2245e4: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2245e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2245e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2245e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2245ec: 0x0  nop
    ctx->pc = 0x2245ecu;
    // NOP
    // 0x2245f0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2245F0u;
    {
        const bool branch_taken_0x2245f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2245f0) {
            ctx->pc = 0x22460Cu;
            return;
        }
    }
    ctx->pc = 0x2245F8u;
    // 0x2245f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2245f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2245fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2245fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224600: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x224600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224604: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224608: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x224608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x22460cu;
}
