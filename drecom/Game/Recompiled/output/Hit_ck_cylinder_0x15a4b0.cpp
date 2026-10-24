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

// Function: Hit_ck_cylinder
// Address: 0x15a4b0 - 0x15a58c
void Hit_ck_cylinder_0x15a4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Hit_ck_cylinder_0x15a4b0");
#endif

    switch (ctx->pc) {
        case 0x15a534u: goto label_15a534;
        case 0x15a558u: goto label_15a558;
        default: break;
    }

    ctx->pc = 0x15a4b0u;

    // 0x15a4b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15a4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15a4b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x15a4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x15a4b8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x15a4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15a4bc: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x15a4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x15a4c0: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x15a4c0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15a4c4: 0xe7ad0038  swc1        $f13, 0x38($sp)
    ctx->pc = 0x15a4c4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15a4c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a4cc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x15a4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a4d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15a4d4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15a4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a4d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15a4d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a4dc: 0x0  nop
    ctx->pc = 0x15a4dcu;
    // NOP
    // 0x15a4e0: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x15A4E0u;
    {
        const bool branch_taken_0x15a4e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a4e0) {
            ctx->pc = 0x15A578u;
            goto label_15a578;
        }
    }
    ctx->pc = 0x15A4E8u;
    // 0x15a4e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a4ec: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x15a4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a4f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15a4f4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x15a4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a4f8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x15a4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a4fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15a4fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15a500: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x15a500u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a504: 0x0  nop
    ctx->pc = 0x15a504u;
    // NOP
    // 0x15a508: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x15A508u;
    {
        const bool branch_taken_0x15a508 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a508) {
            ctx->pc = 0x15A578u;
            goto label_15a578;
        }
    }
    ctx->pc = 0x15A510u;
    // 0x15a510: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15a510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a514: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x15a514u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15a518: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x15a518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a51c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x15a51cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x15a520: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15a520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a524: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x15a524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15a528: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x15a528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a52c: 0xc040c80  jal         func_103200
    ctx->pc = 0x15A52Cu;
    SET_GPR_U32(ctx, 31, 0x15A534u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x15A534u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A534u) { return; }
    ctx->pc = 0x15A534u;
label_15a534:
    // 0x15a534: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x15a534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a538: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15a538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a53c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15a53cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15a540: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x15a540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a544: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x15a544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a548: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15a548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15a54c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15a54cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15a550: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15A550u;
    SET_GPR_U32(ctx, 31, 0x15A558u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15A550u, 0x15A558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A558u;
label_15a558:
    // 0x15a558: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x15a558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a55c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15a55cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a560: 0x0  nop
    ctx->pc = 0x15a560u;
    // NOP
    // 0x15a564: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15A564u;
    {
        const bool branch_taken_0x15a564 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a564) {
            ctx->pc = 0x15A578u;
            goto label_15a578;
        }
    }
    ctx->pc = 0x15A56Cu;
    // 0x15a56c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a570: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15A570u;
    {
        const bool branch_taken_0x15a570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a570) {
            ctx->pc = 0x15A57Cu;
            goto label_15a57c;
        }
    }
    ctx->pc = 0x15A578u;
label_15a578:
    // 0x15a578: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15a578u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_15a57c:
    // 0x15a57c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x15a57cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a580: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x15a580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15a584: 0x3e00008  jr          $ra
    ctx->pc = 0x15A584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A58Cu;
}
