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

// Function: point_serch_connection_x
// Address: 0x253440 - 0x253584
void point_serch_connection_x_0x253440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("point_serch_connection_x_0x253440");
#endif

    switch (ctx->pc) {
        case 0x2534d8u: goto label_2534d8;
        case 0x253530u: goto label_253530;
        default: break;
    }

    ctx->pc = 0x253440u;

    // 0x253440: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x253440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x253444: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x253444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x253448: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x253448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25344c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25344cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x253450: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x253450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x253454: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x253454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x253458: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x253458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x25345c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x25345cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x253460: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x253460u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x253464: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x253464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x253468: 0x8c520104  lw          $s2, 0x104($v0)
    ctx->pc = 0x253468u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x25346c: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x25346cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x253470: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x253470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x253474: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253474u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x253478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25347c: 0x0  nop
    ctx->pc = 0x25347cu;
    // NOP
    // 0x253480: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x253480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x253484: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x253484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x253488: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x253488u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25348c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x25348cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x253490: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253490u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253494: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x253494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253498: 0x0  nop
    ctx->pc = 0x253498u;
    // NOP
    // 0x25349c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x25349cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2534a0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2534a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2534a4: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x2534a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2534a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2534a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2534ac: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2534acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2534b0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2534b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2534b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2534b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2534b8: 0x0  nop
    ctx->pc = 0x2534b8u;
    // NOP
    // 0x2534bc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2534bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2534c0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2534c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2534c4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2534c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2534c8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2534c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2534cc: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x2534ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2534d0: 0xc07965c  jal         func_1E5970
    ctx->pc = 0x2534D0u;
    SET_GPR_U32(ctx, 31, 0x2534D8u);
    ctx->pc = 0x1E5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5970u, 0x2534D0u, 0x2534D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2534D8u;
label_2534d8:
    // 0x2534d8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2534d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2534dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2534dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2534e0: 0x0  nop
    ctx->pc = 0x2534e0u;
    // NOP
    // 0x2534e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2534e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2534e8: 0x0  nop
    ctx->pc = 0x2534e8u;
    // NOP
    // 0x2534ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2534ECu;
    {
        const bool branch_taken_0x2534ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2534ec) {
            ctx->pc = 0x2534F8u;
            goto label_2534f8;
        }
    }
    ctx->pc = 0x2534F4u;
    // 0x2534f4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2534f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2534f8:
    // 0x2534f8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2534f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2534fc: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x2534fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x253500: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x253500u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253504: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x253504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x253508: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253508u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x25350c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25350cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253510: 0x0  nop
    ctx->pc = 0x253510u;
    // NOP
    // 0x253514: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x253514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x253518: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x253518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25351c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25351cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x253520: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x253520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x253524: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x253524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x253528: 0xc07965c  jal         func_1E5970
    ctx->pc = 0x253528u;
    SET_GPR_U32(ctx, 31, 0x253530u);
    ctx->pc = 0x1E5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5970u, 0x253528u, 0x253530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253530u;
label_253530:
    // 0x253530: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x253530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253534: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x253534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253538: 0x0  nop
    ctx->pc = 0x253538u;
    // NOP
    // 0x25353c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25353cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253540: 0x0  nop
    ctx->pc = 0x253540u;
    // NOP
    // 0x253544: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x253544u;
    {
        const bool branch_taken_0x253544 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x253544) {
            ctx->pc = 0x253550u;
            goto label_253550;
        }
    }
    ctx->pc = 0x25354Cu;
    // 0x25354c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x25354cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253550:
    // 0x253550: 0x16110004  bne         $s0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x253550u;
    {
        const bool branch_taken_0x253550 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x253550) {
            ctx->pc = 0x253564u;
            goto label_253564;
        }
    }
    ctx->pc = 0x253558u;
    // 0x253558: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x253558u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25355c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25355Cu;
    {
        const bool branch_taken_0x25355c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25355c) {
            ctx->pc = 0x253568u;
            goto label_253568;
        }
    }
    ctx->pc = 0x253564u;
label_253564:
    // 0x253564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253568:
    // 0x253568: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x253568u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25356c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25356cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253570: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x253570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x253574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253578: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x253578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25357c: 0x3e00008  jr          $ra
    ctx->pc = 0x25357Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25357Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253584u;
}
