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

// Function: Pl_dis_ck
// Address: 0x379380 - 0x379444
void Pl_dis_ck_0x379380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_dis_ck_0x379380");
#endif

    switch (ctx->pc) {
        case 0x3793b8u: goto label_3793b8;
        case 0x3793dcu: goto label_3793dc;
        case 0x379418u: goto label_379418;
        case 0x379434u: goto label_379434;
        default: break;
    }

    ctx->pc = 0x379380u;

    // 0x379380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x379380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x379384: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x379384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x379388: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x379388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x37938c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x37938cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x379390: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x379390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x379394: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x379394u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x379398: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x379398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37939c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x37939cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3793a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3793a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3793a4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3793a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3793a8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3793a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3793ac: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x3793acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x3793b0: 0xc040c80  jal         func_103200
    ctx->pc = 0x3793B0u;
    SET_GPR_U32(ctx, 31, 0x3793B8u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x3793B8u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3793B8u) { return; }
    ctx->pc = 0x3793B8u;
label_3793b8:
    // 0x3793b8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x3793b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3793bc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3793bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3793c0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x3793c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3793c4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x3793c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3793c8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3793c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3793cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3793ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3793d0: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x3793d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3793d4: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x3793D4u;
    SET_GPR_U32(ctx, 31, 0x3793DCu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x3793D4u, 0x3793DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3793DCu;
label_3793dc:
    // 0x3793dc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3793dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3793e0: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x3793e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3793e4: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x3793e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x3793e8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3793e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3793ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3793ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3793f0: 0x0  nop
    ctx->pc = 0x3793f0u;
    // NOP
    // 0x3793f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3793f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3793f8: 0x0  nop
    ctx->pc = 0x3793f8u;
    // NOP
    // 0x3793fc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x3793FCu;
    {
        const bool branch_taken_0x3793fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3793fc) {
            ctx->pc = 0x379420u;
            goto label_379420;
        }
    }
    ctx->pc = 0x379404u;
    // 0x379404: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x379404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x379408: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x379408u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x37940c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x37940cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x379410: 0xc0d8608  jal         func_361820
    ctx->pc = 0x379410u;
    SET_GPR_U32(ctx, 31, 0x379418u);
    ctx->pc = 0x361820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361820u, 0x379410u, 0x379418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379418u;
label_379418:
    // 0x379418: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x379418u;
    {
        const bool branch_taken_0x379418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x379418) {
            ctx->pc = 0x379434u;
            goto label_379434;
        }
    }
    ctx->pc = 0x379420u;
label_379420:
    // 0x379420: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x379420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x379424: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x379424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x379428: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x379428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37942c: 0xc0d8608  jal         func_361820
    ctx->pc = 0x37942Cu;
    SET_GPR_U32(ctx, 31, 0x379434u);
    ctx->pc = 0x361820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361820u, 0x37942Cu, 0x379434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379434u;
label_379434:
    // 0x379434: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x379434u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379438: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x379438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x37943c: 0x3e00008  jr          $ra
    ctx->pc = 0x37943Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37943Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379444u;
}
