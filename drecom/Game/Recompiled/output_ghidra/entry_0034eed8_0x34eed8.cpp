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

// Function: entry_0034eed8
// Address: 0x34eed8 - 0x34efe8
void entry_0034eed8_0x34eed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034eed8_0x34eed8");
#endif

    switch (ctx->pc) {
        case 0x34ef04u: goto label_34ef04;
        case 0x34ef20u: goto label_34ef20;
        case 0x34ef38u: goto label_34ef38;
        default: break;
    }

    ctx->pc = 0x34eed8u;

    // 0x34eed8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x34eed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34eedc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34eee0: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x34eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x34eee4: 0x3445fa35  ori         $a1, $v0, 0xFA35
    ctx->pc = 0x34eee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x34eee8: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x34eee8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34eeec: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x34eeecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x34eef0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x34eef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34eef4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34eef8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x34eef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x34eefc: 0xc05c848  jal         func_172120
    ctx->pc = 0x34EEFCu;
    SET_GPR_U32(ctx, 31, 0x34EF04u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x34EEFCu, 0x34EF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EF04u;
label_34ef04:
    // 0x34ef04: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x34ef04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x34ef08: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x34ef08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ef0c: 0xc4a100d4  lwc1        $f1, 0xD4($a1)
    ctx->pc = 0x34ef0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ef10: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x34ef10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ef14: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x34ef14u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34ef18: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34EF18u;
    SET_GPR_U32(ctx, 31, 0x34EF20u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34EF18u, 0x34EF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EF20u;
label_34ef20:
    // 0x34ef20: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ef24: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34ef24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x34ef28: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x34ef28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ef2c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x34ef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34ef30: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34EF30u;
    SET_GPR_U32(ctx, 31, 0x34EF38u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34EF30u, 0x34EF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EF38u;
label_34ef38:
    // 0x34ef38: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ef3c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ef40: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x34ef40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ef44: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ef48: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x34ef48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x34ef4c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ef50: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ef54: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x34ef54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ef58: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ef5c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x34ef5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x34ef60: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ef64: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ef68: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34ef68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ef6c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ef70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ef74: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x34ef74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ef78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34ef78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ef7c: 0x0  nop
    ctx->pc = 0x34ef7cu;
    // NOP
    // 0x34ef80: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x34EF80u;
    {
        const bool branch_taken_0x34ef80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34ef80) {
            ctx->pc = 0x34EFE8u;
            return;
        }
    }
    ctx->pc = 0x34EF88u;
    // 0x34ef88: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ef8c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ef90: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34ef90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ef94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34ef98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ef98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ef9c: 0x0  nop
    ctx->pc = 0x34ef9cu;
    // NOP
    // 0x34efa0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34efa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34efa4: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34efa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34efa8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34efac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34efacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34efb0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34efb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34efb4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34efb8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34efbc: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x34efbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34efc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34efc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34efc4: 0x0  nop
    ctx->pc = 0x34efc4u;
    // NOP
    // 0x34efc8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x34EFC8u;
    {
        const bool branch_taken_0x34efc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34efc8) {
            ctx->pc = 0x34EFE8u;
            return;
        }
    }
    ctx->pc = 0x34EFD0u;
    // 0x34efd0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34efd4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34efd8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x34efd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34efdc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34efe0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34efe4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34efe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    ctx->pc = 0x34efe8u;
}
