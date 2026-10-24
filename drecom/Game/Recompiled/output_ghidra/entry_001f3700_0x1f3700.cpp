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

// Function: entry_001f3700
// Address: 0x1f3700 - 0x1f37a8
void entry_001f3700_0x1f3700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3700_0x1f3700");
#endif

    switch (ctx->pc) {
        case 0x1f3748u: goto label_1f3748;
        case 0x1f3764u: goto label_1f3764;
        case 0x1f3794u: goto label_1f3794;
        default: break;
    }

    ctx->pc = 0x1f3700u;

    // 0x1f3700: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1f3700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3704: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x1f3704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x1f3708: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f370c: 0x0  nop
    ctx->pc = 0x1f370cu;
    // NOP
    // 0x1f3710: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f3710u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3714: 0x0  nop
    ctx->pc = 0x1f3714u;
    // NOP
    // 0x1f3718: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x1F3718u;
    {
        const bool branch_taken_0x1f3718 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f3718) {
            ctx->pc = 0x1F37A8u;
            return;
        }
    }
    ctx->pc = 0x1F3720u;
    // 0x1f3720: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f3720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3724: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f3724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3728: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f372c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f372cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3730: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f3730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f3734: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1f3734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f3738: 0xc60d00d4  lwc1        $f13, 0xD4($s0)
    ctx->pc = 0x1f3738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f373c: 0xc44e003c  lwc1        $f14, 0x3C($v0)
    ctx->pc = 0x1f373cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1f3740: 0xc05c8f8  jal         func_1723E0
    ctx->pc = 0x1F3740u;
    SET_GPR_U32(ctx, 31, 0x1F3748u);
    ctx->pc = 0x1723E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1723E0u, 0x1F3740u, 0x1F3748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3748u;
label_1f3748:
    // 0x1f3748: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1f3748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1f374c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f374cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3750: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f3750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3754: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1f3754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3758: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f3758u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f375c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F375Cu;
    SET_GPR_U32(ctx, 31, 0x1F3764u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F375Cu, 0x1F3764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3764u;
label_1f3764:
    // 0x1f3764: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3768: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f3768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1f376c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1f376cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1f3770: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f3770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f3774: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f3774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f3778: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f3778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f377c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f377cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3780: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1f3780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f3784: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1f3784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f3788: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x1f3788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1f378c: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F378Cu;
    SET_GPR_U32(ctx, 31, 0x1F3794u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F378Cu, 0x1F3794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3794u;
label_1f3794:
    // 0x1f3794: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3798: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f379c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1f379cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1f37a0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1F37A0u;
    {
        const bool branch_taken_0x1f37a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f37a0) {
            ctx->pc = 0x1F37F4u;
            return;
        }
    }
    ctx->pc = 0x1F37A8u;
}
