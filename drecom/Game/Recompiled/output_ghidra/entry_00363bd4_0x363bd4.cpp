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

// Function: entry_00363bd4
// Address: 0x363bd4 - 0x363c7c
void entry_00363bd4_0x363bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00363bd4_0x363bd4");
#endif

    switch (ctx->pc) {
        case 0x363bfcu: goto label_363bfc;
        case 0x363c20u: goto label_363c20;
        case 0x363c30u: goto label_363c30;
        case 0x363c48u: goto label_363c48;
        default: break;
    }

    ctx->pc = 0x363bd4u;

    // 0x363bd4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363bd8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x363bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x363bdc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x363bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x363be0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x363be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x363be4: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x363BE4u;
    {
        const bool branch_taken_0x363be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x363be4) {
            ctx->pc = 0x363D20u;
            return;
        }
    }
    ctx->pc = 0x363BECu;
    // 0x363bec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x363becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363bf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x363bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363bf4: 0xc05d25c  jal         func_174970
    ctx->pc = 0x363BF4u;
    SET_GPR_U32(ctx, 31, 0x363BFCu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x363BF4u, 0x363BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363BFCu;
label_363bfc:
    // 0x363bfc: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x363BFCu;
    {
        const bool branch_taken_0x363bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x363bfc) {
            ctx->pc = 0x363D20u;
            return;
        }
    }
    ctx->pc = 0x363C04u;
    // 0x363c04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363c08: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x363c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x363c0c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x363c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x363c10: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x363c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x363c14: 0x24660120  addiu       $a2, $v1, 0x120
    ctx->pc = 0x363c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x363c18: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x363C18u;
    SET_GPR_U32(ctx, 31, 0x363C20u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x363C18u, 0x363C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363C20u;
label_363c20:
    // 0x363c20: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x363c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x363c24: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x363c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x363c28: 0xc0455e6  jal         func_115798
    ctx->pc = 0x363C28u;
    SET_GPR_U32(ctx, 31, 0x363C30u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x363C28u, 0x363C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363C30u;
label_363c30:
    // 0x363c30: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x363c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x363c34: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x363c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363c38: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x363c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x363c3c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x363c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x363c40: 0xc058f20  jal         func_163C80
    ctx->pc = 0x363C40u;
    SET_GPR_U32(ctx, 31, 0x363C48u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x363C40u, 0x363C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363C48u;
label_363c48:
    // 0x363c48: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x363c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x363c4c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x363c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363c50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x363c50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363c54: 0x0  nop
    ctx->pc = 0x363c54u;
    // NOP
    // 0x363c58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x363c58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363c5c: 0x0  nop
    ctx->pc = 0x363c5cu;
    // NOP
    // 0x363c60: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x363C60u;
    {
        const bool branch_taken_0x363c60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x363c60) {
            ctx->pc = 0x363C7Cu;
            return;
        }
    }
    ctx->pc = 0x363C68u;
    // 0x363c68: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x363c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x363c6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x363c6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x363c70: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x363c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363c74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x363c74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x363c78: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x363c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x363c7cu;
}
