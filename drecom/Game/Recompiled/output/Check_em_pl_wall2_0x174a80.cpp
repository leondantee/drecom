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

// Function: Check_em_pl_wall2
// Address: 0x174a80 - 0x174bb8
void Check_em_pl_wall2_0x174a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_em_pl_wall2_0x174a80");
#endif

    switch (ctx->pc) {
        case 0x174ab4u: goto label_174ab4;
        case 0x174adcu: goto label_174adc;
        case 0x174b38u: goto label_174b38;
        case 0x174b5cu: goto label_174b5c;
        case 0x174b84u: goto label_174b84;
        default: break;
    }

    ctx->pc = 0x174a80u;

    // 0x174a80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x174a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x174a84: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x174a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x174a88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x174a8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x174a90: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x174a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x174a94: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x174a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    // 0x174a98: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x174a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x174a9c: 0x2451dbc0  addiu       $s1, $v0, -0x2440
    ctx->pc = 0x174a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x174aa0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x174aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x174aa4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x174aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x174aa8: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x174aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x174aac: 0xc040c9e  jal         func_103278
    ctx->pc = 0x174AACu;
    SET_GPR_U32(ctx, 31, 0x174AB4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x174AB4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x174AB4u) { return; }
    ctx->pc = 0x174AB4u;
label_174ab4:
    // 0x174ab4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x174ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174ab8: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x174ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x174abc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x174abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174ac0: 0x0  nop
    ctx->pc = 0x174ac0u;
    // NOP
    // 0x174ac4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x174ac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x174ac8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x174ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x174acc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x174accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x174ad0: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x174ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x174ad4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x174AD4u;
    SET_GPR_U32(ctx, 31, 0x174ADCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x174ADCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x174ADCu) { return; }
    ctx->pc = 0x174ADCu;
label_174adc:
    // 0x174adc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x174adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174ae0: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x174ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x174ae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x174ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174ae8: 0x0  nop
    ctx->pc = 0x174ae8u;
    // NOP
    // 0x174aec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x174aecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x174af0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x174af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x174af4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x174af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x174af8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x174af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x174afc: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x174AFCu;
    {
        const bool branch_taken_0x174afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x174afc) {
            ctx->pc = 0x174B68u;
            goto label_174b68;
        }
    }
    ctx->pc = 0x174B04u;
    // 0x174b04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174b08: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x174B08u;
    {
        const bool branch_taken_0x174b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x174b08) {
            ctx->pc = 0x174B44u;
            goto label_174b44;
        }
    }
    ctx->pc = 0x174B10u;
    // 0x174b10: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x174B10u;
    {
        const bool branch_taken_0x174b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x174b10) {
            ctx->pc = 0x174B20u;
            goto label_174b20;
        }
    }
    ctx->pc = 0x174B18u;
    // 0x174b18: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x174B18u;
    {
        const bool branch_taken_0x174b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174b18) {
            ctx->pc = 0x174B88u;
            goto label_174b88;
        }
    }
    ctx->pc = 0x174B20u;
label_174b20:
    // 0x174b20: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x174b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x174b24: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x174b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x174b28: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x174b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x174b2c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x174b2cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x174b30: 0xc059e1c  jal         func_167870
    ctx->pc = 0x174B30u;
    SET_GPR_U32(ctx, 31, 0x174B38u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x174B30u, 0x174B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B38u;
label_174b38:
    // 0x174b38: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x174b38u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x174b3c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x174B3Cu;
    {
        const bool branch_taken_0x174b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174b3c) {
            ctx->pc = 0x174B88u;
            goto label_174b88;
        }
    }
    ctx->pc = 0x174B44u;
label_174b44:
    // 0x174b44: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x174b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x174b48: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x174b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x174b4c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x174b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x174b50: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x174b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x174b54: 0xc059e1c  jal         func_167870
    ctx->pc = 0x174B54u;
    SET_GPR_U32(ctx, 31, 0x174B5Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x174B54u, 0x174B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B5Cu;
label_174b5c:
    // 0x174b5c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x174b5cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x174b60: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x174B60u;
    {
        const bool branch_taken_0x174b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174b60) {
            ctx->pc = 0x174B88u;
            goto label_174b88;
        }
    }
    ctx->pc = 0x174B68u;
label_174b68:
    // 0x174b68: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x174b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x174b6c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x174b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x174b70: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x174b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x174b74: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x174b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x174b78: 0x344707c0  ori         $a3, $v0, 0x7C0
    ctx->pc = 0x174b78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1984);
    // 0x174b7c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x174B7Cu;
    SET_GPR_U32(ctx, 31, 0x174B84u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x174B7Cu, 0x174B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B84u;
label_174b84:
    // 0x174b84: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x174b84u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_174b88:
    // 0x174b88: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174B88u;
    {
        const bool branch_taken_0x174b88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x174b88) {
            ctx->pc = 0x174B9Cu;
            goto label_174b9c;
        }
    }
    ctx->pc = 0x174B90u;
    // 0x174b90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174b94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x174B94u;
    {
        const bool branch_taken_0x174b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174b94) {
            ctx->pc = 0x174BA0u;
            goto label_174ba0;
        }
    }
    ctx->pc = 0x174B9Cu;
label_174b9c:
    // 0x174b9c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x174b9cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_174ba0:
    // 0x174ba0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x174ba0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174ba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174ba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174bac: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x174bacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x174bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x174BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174BB8u;
}
