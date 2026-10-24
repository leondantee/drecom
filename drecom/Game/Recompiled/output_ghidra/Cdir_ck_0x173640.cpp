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

// Function: Cdir_ck
// Address: 0x173640 - 0x173754
void Cdir_ck_0x173640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cdir_ck_0x173640");
#endif

    ctx->pc = 0x173640u;

    // 0x173640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173644: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x173644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x173648: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x173648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x17364c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173650: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x173650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173654: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x173654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x173658: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x173658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17365c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17365cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x173660: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x173660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x173664: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x173664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173668: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x173668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x17366c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17366cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x173670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173674: 0x0  nop
    ctx->pc = 0x173674u;
    // NOP
    // 0x173678: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x173678u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17367c: 0x0  nop
    ctx->pc = 0x17367cu;
    // NOP
    // 0x173680: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x173680u;
    {
        const bool branch_taken_0x173680 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173680) {
            ctx->pc = 0x1736A4u;
            goto label_1736a4;
        }
    }
    ctx->pc = 0x173688u;
    // 0x173688: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x173688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17368c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x17368cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x173690: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x173690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x173694: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173698: 0x0  nop
    ctx->pc = 0x173698u;
    // NOP
    // 0x17369c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17369cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1736a0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1736a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1736a4:
    // 0x1736a4: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x1736a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1736a8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1736a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1736ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1736acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1736b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1736b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1736b4: 0x0  nop
    ctx->pc = 0x1736b4u;
    // NOP
    // 0x1736b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1736b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1736bc: 0x0  nop
    ctx->pc = 0x1736bcu;
    // NOP
    // 0x1736c0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1736C0u;
    {
        const bool branch_taken_0x1736c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1736c0) {
            ctx->pc = 0x1736E4u;
            goto label_1736e4;
        }
    }
    ctx->pc = 0x1736C8u;
    // 0x1736c8: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x1736c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1736cc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1736ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1736d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1736d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1736d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1736d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1736d8: 0x0  nop
    ctx->pc = 0x1736d8u;
    // NOP
    // 0x1736dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1736dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1736e0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1736e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1736e4:
    // 0x1736e4: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x1736e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1736e8: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1736e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1736ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1736ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1736f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1736f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1736f4: 0x0  nop
    ctx->pc = 0x1736f4u;
    // NOP
    // 0x1736f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1736f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1736fc: 0x0  nop
    ctx->pc = 0x1736fcu;
    // NOP
    // 0x173700: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x173700u;
    {
        const bool branch_taken_0x173700 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x173700) {
            ctx->pc = 0x173714u;
            goto label_173714;
        }
    }
    ctx->pc = 0x173708u;
    // 0x173708: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x173708u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17370c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x17370Cu;
    {
        const bool branch_taken_0x17370c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17370c) {
            ctx->pc = 0x173748u;
            goto label_173748;
        }
    }
    ctx->pc = 0x173714u;
label_173714:
    // 0x173714: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x173714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173718: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x173718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x17371c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17371cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x173720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173724: 0x0  nop
    ctx->pc = 0x173724u;
    // NOP
    // 0x173728: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x173728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17372c: 0x0  nop
    ctx->pc = 0x17372cu;
    // NOP
    // 0x173730: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x173730u;
    {
        const bool branch_taken_0x173730 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173730) {
            ctx->pc = 0x173744u;
            goto label_173744;
        }
    }
    ctx->pc = 0x173738u;
    // 0x173738: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x173738u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17373c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17373Cu;
    {
        const bool branch_taken_0x17373c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17373c) {
            ctx->pc = 0x173748u;
            goto label_173748;
        }
    }
    ctx->pc = 0x173744u;
label_173744:
    // 0x173744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_173748:
    // 0x173748: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x173748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17374c: 0x3e00008  jr          $ra
    ctx->pc = 0x17374Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17374Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173754u;
}
