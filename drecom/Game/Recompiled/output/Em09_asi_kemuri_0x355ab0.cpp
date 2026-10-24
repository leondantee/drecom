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

// Function: Em09_asi_kemuri
// Address: 0x355ab0 - 0x355c14
void Em09_asi_kemuri_0x355ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_asi_kemuri_0x355ab0");
#endif

    switch (ctx->pc) {
        case 0x355accu: goto label_355acc;
        case 0x355ad8u: goto label_355ad8;
        case 0x355ae4u: goto label_355ae4;
        case 0x355aecu: goto label_355aec;
        case 0x355b2cu: goto label_355b2c;
        case 0x355b34u: goto label_355b34;
        case 0x355b74u: goto label_355b74;
        case 0x355b7cu: goto label_355b7c;
        case 0x355bbcu: goto label_355bbc;
        case 0x355bc4u: goto label_355bc4;
        case 0x355c04u: goto label_355c04;
        default: break;
    }

    ctx->pc = 0x355ab0u;

    // 0x355ab0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x355ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x355ab4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x355ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x355ab8: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x355ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x355abc: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x355abcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x355ac0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x355ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x355ac4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x355AC4u;
    SET_GPR_U32(ctx, 31, 0x355ACCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x355AC4u, 0x355ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355ACCu;
label_355acc:
    // 0x355acc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x355accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x355ad0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x355AD0u;
    SET_GPR_U32(ctx, 31, 0x355AD8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x355AD0u, 0x355AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355AD8u;
label_355ad8:
    // 0x355ad8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x355ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x355adc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x355ADCu;
    SET_GPR_U32(ctx, 31, 0x355AE4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x355ADCu, 0x355AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355AE4u;
label_355ae4:
    // 0x355ae4: 0xc067648  jal         func_19D920
    ctx->pc = 0x355AE4u;
    SET_GPR_U32(ctx, 31, 0x355AECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x355AE4u, 0x355AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355AECu;
label_355aec:
    // 0x355aec: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x355aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x355af0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x355af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x355af4: 0x0  nop
    ctx->pc = 0x355af4u;
    // NOP
    // 0x355af8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x355af8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x355afc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x355afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355b00: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x355b00u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x355b04: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x355b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x355b08: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x355b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x355b0c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x355b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x355b10: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x355b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x355b14: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x355b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x355b18: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x355b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x355b1c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x355b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x355b20: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x355b20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x355b24: 0xc086a38  jal         func_21A8E0
    ctx->pc = 0x355B24u;
    SET_GPR_U32(ctx, 31, 0x355B2Cu);
    ctx->pc = 0x21A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A8E0u, 0x355B24u, 0x355B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355B2Cu;
label_355b2c:
    // 0x355b2c: 0xc067648  jal         func_19D920
    ctx->pc = 0x355B2Cu;
    SET_GPR_U32(ctx, 31, 0x355B34u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x355B2Cu, 0x355B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355B34u;
label_355b34:
    // 0x355b34: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x355b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x355b38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x355b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x355b3c: 0x0  nop
    ctx->pc = 0x355b3cu;
    // NOP
    // 0x355b40: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x355b40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x355b44: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x355b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355b48: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x355b48u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x355b4c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x355b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x355b50: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x355b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x355b54: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x355b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x355b58: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x355b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x355b5c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x355b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x355b60: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x355b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x355b64: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x355b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x355b68: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x355b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x355b6c: 0xc086a38  jal         func_21A8E0
    ctx->pc = 0x355B6Cu;
    SET_GPR_U32(ctx, 31, 0x355B74u);
    ctx->pc = 0x21A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A8E0u, 0x355B6Cu, 0x355B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355B74u;
label_355b74:
    // 0x355b74: 0xc067648  jal         func_19D920
    ctx->pc = 0x355B74u;
    SET_GPR_U32(ctx, 31, 0x355B7Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x355B74u, 0x355B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355B7Cu;
label_355b7c:
    // 0x355b7c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x355b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x355b80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x355b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x355b84: 0x0  nop
    ctx->pc = 0x355b84u;
    // NOP
    // 0x355b88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x355b88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x355b8c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x355b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355b90: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x355b90u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x355b94: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x355b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x355b98: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x355b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x355b9c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x355b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x355ba0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x355ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x355ba4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x355ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x355ba8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x355ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x355bac: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x355bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x355bb0: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x355bb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x355bb4: 0xc086a38  jal         func_21A8E0
    ctx->pc = 0x355BB4u;
    SET_GPR_U32(ctx, 31, 0x355BBCu);
    ctx->pc = 0x21A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A8E0u, 0x355BB4u, 0x355BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355BBCu;
label_355bbc:
    // 0x355bbc: 0xc067648  jal         func_19D920
    ctx->pc = 0x355BBCu;
    SET_GPR_U32(ctx, 31, 0x355BC4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x355BBCu, 0x355BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355BC4u;
label_355bc4:
    // 0x355bc4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x355bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x355bc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x355bc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x355bcc: 0x0  nop
    ctx->pc = 0x355bccu;
    // NOP
    // 0x355bd0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x355bd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x355bd4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x355bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355bd8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x355bd8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x355bdc: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x355bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x355be0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x355be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x355be4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x355be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x355be8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x355be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x355bec: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x355becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x355bf0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x355bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x355bf4: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x355bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x355bf8: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x355bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x355bfc: 0xc086a38  jal         func_21A8E0
    ctx->pc = 0x355BFCu;
    SET_GPR_U32(ctx, 31, 0x355C04u);
    ctx->pc = 0x21A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A8E0u, 0x355BFCu, 0x355C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355C04u;
label_355c04:
    // 0x355c04: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x355c04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355c08: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x355c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x355c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x355C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355C14u;
}
