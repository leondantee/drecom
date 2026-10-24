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

// Function: entry_002cb05c
// Address: 0x2cb05c - 0x2cb160
void entry_002cb05c_0x2cb05c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cb05c_0x2cb05c");
#endif

    switch (ctx->pc) {
        case 0x2cb06cu: goto label_2cb06c;
        case 0x2cb08cu: goto label_2cb08c;
        case 0x2cb09cu: goto label_2cb09c;
        case 0x2cb0a8u: goto label_2cb0a8;
        case 0x2cb134u: goto label_2cb134;
        default: break;
    }

    ctx->pc = 0x2cb05cu;

    // 0x2cb05c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb060: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cb060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cb064: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CB064u;
    SET_GPR_U32(ctx, 31, 0x2CB06Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CB064u, 0x2CB06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB06Cu;
label_2cb06c:
    // 0x2cb06c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb070: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb074: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb078: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cb078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cb07c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2cb07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2cb080: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2cb080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2cb084: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CB084u;
    SET_GPR_U32(ctx, 31, 0x2CB08Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CB084u, 0x2CB08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB08Cu;
label_2cb08c:
    // 0x2cb08c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb090: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cb090u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cb094: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CB094u;
    SET_GPR_U32(ctx, 31, 0x2CB09Cu);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CB094u, 0x2CB09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB09Cu;
label_2cb09c:
    // 0x2cb09c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb0a0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CB0A0u;
    SET_GPR_U32(ctx, 31, 0x2CB0A8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CB0A0u, 0x2CB0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB0A8u;
label_2cb0a8:
    // 0x2cb0a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb0ac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cb0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cb0b0: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2cb0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb0b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb0b8: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x2cb0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb0bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cb0bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cb0c0: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2cb0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2cb0c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb0c8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2cb0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cb0cc: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x2cb0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb0d0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2cb0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2cb0d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cb0d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb0d8: 0x0  nop
    ctx->pc = 0x2cb0d8u;
    // NOP
    // 0x2cb0dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cb0dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cb0e0: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2cb0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2cb0e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb0e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cb0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cb0ec: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x2cb0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb0f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb0f4: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2cb0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb0f8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2cb0f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cb0fc: 0x0  nop
    ctx->pc = 0x2cb0fcu;
    // NOP
    // 0x2cb100: 0x450000a0  bc1f        . + 4 + (0xA0 << 2)
    ctx->pc = 0x2CB100u;
    {
        const bool branch_taken_0x2cb100 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb100) {
            ctx->pc = 0x2CB384u;
            return;
        }
    }
    ctx->pc = 0x2CB108u;
    // 0x2cb108: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cb108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cb10c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb110: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cb110u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cb114: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb118: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb11c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cb11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cb120: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x2cb120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2cb124: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cb124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb128: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cb128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cb12c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CB12Cu;
    SET_GPR_U32(ctx, 31, 0x2CB134u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CB12Cu, 0x2CB134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB134u;
label_2cb134:
    // 0x2cb134: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb138: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb13c: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x2cb13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x2cb140: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb144: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb148: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2cb148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2cb14c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb14cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb150: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb154: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2cb154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2cb158: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x2CB158u;
    {
        const bool branch_taken_0x2cb158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb158) {
            ctx->pc = 0x2CB384u;
            return;
        }
    }
    ctx->pc = 0x2CB160u;
}
