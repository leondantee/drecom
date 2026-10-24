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
// Address: 0x26fcb0 - 0x26fd2c
void caseD_3_0x26fcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x26fcb0");
#endif

    switch (ctx->pc) {
        case 0x26fcc0u: goto label_26fcc0;
        case 0x26fcd0u: goto label_26fcd0;
        case 0x26fcdcu: goto label_26fcdc;
        default: break;
    }

    ctx->pc = 0x26fcb0u;

    // 0x26fcb0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fcb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26fcb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26fcb8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26FCB8u;
    SET_GPR_U32(ctx, 31, 0x26FCC0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26FCB8u, 0x26FCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FCC0u;
label_26fcc0:
    // 0x26fcc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fcc4: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x26fcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x26fcc8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26FCC8u;
    SET_GPR_U32(ctx, 31, 0x26FCD0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26FCC8u, 0x26FCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FCD0u;
label_26fcd0:
    // 0x26fcd0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fcd4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x26FCD4u;
    SET_GPR_U32(ctx, 31, 0x26FCDCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x26FCD4u, 0x26FCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FCDCu;
label_26fcdc:
    // 0x26fcdc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fce0: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x26fce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fce4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26fce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fce8: 0x0  nop
    ctx->pc = 0x26fce8u;
    // NOP
    // 0x26fcec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26fcecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26fcf0: 0x0  nop
    ctx->pc = 0x26fcf0u;
    // NOP
    // 0x26fcf4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x26FCF4u;
    {
        const bool branch_taken_0x26fcf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26fcf4) {
            ctx->pc = 0x26FD2Cu;
            return;
        }
    }
    ctx->pc = 0x26FCFCu;
    // 0x26fcfc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fd00: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x26fd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fd04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fd08: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x26fd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fd0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26fd0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26fd10: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x26fd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x26fd14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fd18: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x26fd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fd1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fd20: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x26fd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fd24: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26fd24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26fd28: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x26fd28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    ctx->pc = 0x26fd2cu;
}
