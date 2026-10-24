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

// Function: caseD_3
// Address: 0x2d29a4 - 0x2d2a14
void caseD_3_0x2d29a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x2d29a4");
#endif

    switch (ctx->pc) {
        case 0x2d29b0u: goto label_2d29b0;
        default: break;
    }

    ctx->pc = 0x2d29a4u;

    // 0x2d29a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d29a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d29a8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D29A8u;
    SET_GPR_U32(ctx, 31, 0x2D29B0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D29A8u, 0x2D29B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D29B0u;
label_2d29b0:
    // 0x2d29b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d29b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d29b4: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2d29b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d29b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d29b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d29bc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2d29bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d29c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d29c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d29c4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2d29c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2d29c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d29c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d29cc: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2d29ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d29d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d29d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d29d4: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x2d29d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d29d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d29d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d29dc: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2d29dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2d29e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d29e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d29e4: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2d29e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d29e8: 0x3c024289  lui         $v0, 0x4289
    ctx->pc = 0x2d29e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17033 << 16));
    // 0x2d29ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d29ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d29f0: 0x0  nop
    ctx->pc = 0x2d29f0u;
    // NOP
    // 0x2d29f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d29f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d29f8: 0x0  nop
    ctx->pc = 0x2d29f8u;
    // NOP
    // 0x2d29fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D29FCu;
    {
        const bool branch_taken_0x2d29fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d29fc) {
            ctx->pc = 0x2D2A14u;
            return;
        }
    }
    ctx->pc = 0x2D2A04u;
    // 0x2d2a04: 0x3c024289  lui         $v0, 0x4289
    ctx->pc = 0x2d2a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17033 << 16));
    // 0x2d2a08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2a0c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2a10: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2d2a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x2d2a14u;
}
