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

// Function: Get_cam_pos_view
// Address: 0x15a9e0 - 0x15aae4
void Get_cam_pos_view_0x15a9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_cam_pos_view_0x15a9e0");
#endif

    switch (ctx->pc) {
        case 0x15aa18u: goto label_15aa18;
        case 0x15aa24u: goto label_15aa24;
        case 0x15aa38u: goto label_15aa38;
        case 0x15aab8u: goto label_15aab8;
        case 0x15aaccu: goto label_15aacc;
        default: break;
    }

    ctx->pc = 0x15a9e0u;

    // 0x15a9e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15a9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15a9e4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x15a9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x15a9e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15a9ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a9f0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x15a9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x15a9f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15a9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15a9f8: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x15a9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x15a9fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15a9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15aa00: 0x8c310af8  lw          $s1, 0xAF8($at)
    ctx->pc = 0x15aa00u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5D0AF8u));
    // 0x15aa04: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x15aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15aa08: 0x260501a0  addiu       $a1, $s0, 0x1A0
    ctx->pc = 0x15aa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x15aa0c: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15aa0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x15aa10: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15AA10u;
    SET_GPR_U32(ctx, 31, 0x15AA18u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15AA10u, 0x15AA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AA18u;
label_15aa18:
    // 0x15aa18: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x15aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15aa1c: 0xc067588  jal         func_19D620
    ctx->pc = 0x15AA1Cu;
    SET_GPR_U32(ctx, 31, 0x15AA24u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x15AA1Cu, 0x15AA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AA24u;
label_15aa24:
    // 0x15aa24: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15aa24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15aa28: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x15aa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15aa2c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x15aa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15aa30: 0xc040c24  jal         func_103090
    ctx->pc = 0x15AA30u;
    SET_GPR_U32(ctx, 31, 0x15AA38u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x15AA38u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15AA38u) { return; }
    ctx->pc = 0x15AA38u;
label_15aa38:
    // 0x15aa38: 0xc6210180  lwc1        $f1, 0x180($s1)
    ctx->pc = 0x15aa38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15aa3c: 0xc60001b0  lwc1        $f0, 0x1B0($s0)
    ctx->pc = 0x15aa3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15aa40: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15aa40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15aa44: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x15aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x15aa48: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x15aa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x15aa4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15aa4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15aa50: 0x0  nop
    ctx->pc = 0x15aa50u;
    // NOP
    // 0x15aa54: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x15aa54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15aa58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15aa5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15aa5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15aa60: 0x0  nop
    ctx->pc = 0x15aa60u;
    // NOP
    // 0x15aa64: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15aa64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15aa68: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15aa68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15aa6c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x15aa6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15aa70: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x15aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x15aa74: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x15aa74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x15aa78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15aa78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15aa7c: 0x0  nop
    ctx->pc = 0x15aa7cu;
    // NOP
    // 0x15aa80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15aa80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15aa84: 0x0  nop
    ctx->pc = 0x15aa84u;
    // NOP
    // 0x15aa88: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x15AA88u;
    {
        const bool branch_taken_0x15aa88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15aa88) {
            ctx->pc = 0x15AAA4u;
            goto label_15aaa4;
        }
    }
    ctx->pc = 0x15AA90u;
    // 0x15aa90: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x15aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x15aa94: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x15aa94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x15aa98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15aa98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15aa9c: 0x0  nop
    ctx->pc = 0x15aa9cu;
    // NOP
    // 0x15aaa0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15aaa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_15aaa4:
    // 0x15aaa4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x15aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15aaa8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x15aaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15aaac: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x15aaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15aab0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x15AAB0u;
    SET_GPR_U32(ctx, 31, 0x15AAB8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x15AAB8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15AAB8u) { return; }
    ctx->pc = 0x15AAB8u;
label_15aab8:
    // 0x15aab8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x15aab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15aabc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x15aabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15aac0: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15aac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x15aac4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x15AAC4u;
    SET_GPR_U32(ctx, 31, 0x15AACCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x15AAC4u, 0x15AACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AACCu;
label_15aacc:
    // 0x15aacc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x15aaccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15aad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15aad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15aad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15aad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15aad8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15aad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15aadc: 0x3e00008  jr          $ra
    ctx->pc = 0x15AADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AAE4u;
}
