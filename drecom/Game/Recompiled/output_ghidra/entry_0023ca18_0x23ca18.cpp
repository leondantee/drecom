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

// Function: entry_0023ca18
// Address: 0x23ca18 - 0x23caec
void entry_0023ca18_0x23ca18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023ca18_0x23ca18");
#endif

    switch (ctx->pc) {
        case 0x23ca44u: goto label_23ca44;
        case 0x23ca60u: goto label_23ca60;
        case 0x23ca78u: goto label_23ca78;
        case 0x23ca84u: goto label_23ca84;
        default: break;
    }

    ctx->pc = 0x23ca18u;

    // 0x23ca18: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23ca18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ca1c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x23ca1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ca20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ca24: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23ca24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ca28: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23ca28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23ca2c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23ca2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23ca30: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23ca34: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23ca34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23ca38: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x23ca38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23ca3c: 0xc05c848  jal         func_172120
    ctx->pc = 0x23CA3Cu;
    SET_GPR_U32(ctx, 31, 0x23CA44u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23CA3Cu, 0x23CA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA44u;
label_23ca44:
    // 0x23ca44: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x23ca44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x23ca48: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ca4c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23ca4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ca50: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x23ca50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ca54: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23ca54u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23ca58: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23CA58u;
    SET_GPR_U32(ctx, 31, 0x23CA60u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23CA58u, 0x23CA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA60u;
label_23ca60:
    // 0x23ca60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ca64: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23ca64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23ca68: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23ca68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ca6c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23ca6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23ca70: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23CA70u;
    SET_GPR_U32(ctx, 31, 0x23CA78u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23CA70u, 0x23CA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA78u;
label_23ca78:
    // 0x23ca78: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23ca78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ca7c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23CA7Cu;
    SET_GPR_U32(ctx, 31, 0x23CA84u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23CA7Cu, 0x23CA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA84u;
label_23ca84:
    // 0x23ca84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ca84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ca88: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x23ca88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x23ca8c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x23ca8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23ca90: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23ca90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23ca94: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x23ca94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x23ca98: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x23CA98u;
    {
        const bool branch_taken_0x23ca98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ca98) {
            ctx->pc = 0x23CB04u;
            return;
        }
    }
    ctx->pc = 0x23CAA0u;
    // 0x23caa0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23caa4: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x23caa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23caa8: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x23caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
    // 0x23caac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23caacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cab0: 0x0  nop
    ctx->pc = 0x23cab0u;
    // NOP
    // 0x23cab4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23cab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23cab8: 0x0  nop
    ctx->pc = 0x23cab8u;
    // NOP
    // 0x23cabc: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x23CABCu;
    {
        const bool branch_taken_0x23cabc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23cabc) {
            ctx->pc = 0x23CAECu;
            return;
        }
    }
    ctx->pc = 0x23CAC4u;
    // 0x23cac4: 0x3c03c20c  lui         $v1, 0xC20C
    ctx->pc = 0x23cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49676 << 16));
    // 0x23cac8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23cac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cacc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23caccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cad0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23cad4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x23cad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x23cad8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x23cad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x23cadc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23cadcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cae0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cae4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23cae8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x23cae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    ctx->pc = 0x23caecu;
}
