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

// Function: entry_001b3708
// Address: 0x1b3708 - 0x1b3778
void entry_001b3708_0x1b3708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3708_0x1b3708");
#endif

    switch (ctx->pc) {
        case 0x1b3720u: goto label_1b3720;
        case 0x1b3730u: goto label_1b3730;
        case 0x1b3744u: goto label_1b3744;
        default: break;
    }

    ctx->pc = 0x1b3708u;

    // 0x1b3708: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b3708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b370c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1b370cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b3710: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1b3710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1b3714: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x1b3714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1b3718: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B3718u;
    SET_GPR_U32(ctx, 31, 0x1B3720u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B3718u, 0x1B3720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3720u;
label_1b3720:
    // 0x1b3720: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x1b3720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b3724: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x1b3724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b3728: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1B3728u;
    SET_GPR_U32(ctx, 31, 0x1B3730u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B3728u, 0x1B3730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3730u;
label_1b3730:
    // 0x1b3730: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1b3730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1b3734: 0xc7ac0088  lwc1        $f12, 0x88($sp)
    ctx->pc = 0x1b3734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b3738: 0xc60d00d4  lwc1        $f13, 0xD4($s0)
    ctx->pc = 0x1b3738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b373c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1B373Cu;
    SET_GPR_U32(ctx, 31, 0x1B3744u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B373Cu, 0x1B3744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3744u;
label_1b3744:
    // 0x1b3744: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1b3744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1b3748: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x1b3748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b374c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b374cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3750: 0x0  nop
    ctx->pc = 0x1b3750u;
    // NOP
    // 0x1b3754: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b3754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3758: 0x0  nop
    ctx->pc = 0x1b3758u;
    // NOP
    // 0x1b375c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B375Cu;
    {
        const bool branch_taken_0x1b375c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b375c) {
            ctx->pc = 0x1B3778u;
            return;
        }
    }
    ctx->pc = 0x1B3764u;
    // 0x1b3764: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b3764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1b3768: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b3768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b376c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x1b376cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3770: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b3770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b3774: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1b3774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->pc = 0x1b3778u;
}
