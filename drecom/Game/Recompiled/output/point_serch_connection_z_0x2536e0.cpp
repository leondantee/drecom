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

// Function: point_serch_connection_z
// Address: 0x2536e0 - 0x253824
void point_serch_connection_z_0x2536e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("point_serch_connection_z_0x2536e0");
#endif

    switch (ctx->pc) {
        case 0x253778u: goto label_253778;
        case 0x2537d0u: goto label_2537d0;
        default: break;
    }

    ctx->pc = 0x2536e0u;

    // 0x2536e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2536e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2536e4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x2536e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x2536e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2536e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2536ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2536ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2536f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2536f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2536f4: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x2536f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x2536f8: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x2536f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x2536fc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2536fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x253700: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x253700u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x253704: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x253704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x253708: 0x8c520104  lw          $s2, 0x104($v0)
    ctx->pc = 0x253708u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x25370c: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x25370cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x253710: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x253710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x253714: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253714u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253718: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x253718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25371c: 0x0  nop
    ctx->pc = 0x25371cu;
    // NOP
    // 0x253720: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x253720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x253724: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x253724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x253728: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x253728u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25372c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x25372cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x253730: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253730u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253734: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x253734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253738: 0x0  nop
    ctx->pc = 0x253738u;
    // NOP
    // 0x25373c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x25373cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x253740: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x253740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x253744: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x253744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x253748: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x253748u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25374c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x25374cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x253750: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253750u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253754: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x253754u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253758: 0x0  nop
    ctx->pc = 0x253758u;
    // NOP
    // 0x25375c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x25375cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x253760: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x253760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x253764: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x253764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x253768: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x253768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25376c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x25376cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x253770: 0xc07965c  jal         func_1E5970
    ctx->pc = 0x253770u;
    SET_GPR_U32(ctx, 31, 0x253778u);
    ctx->pc = 0x1E5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5970u, 0x253770u, 0x253778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253778u;
label_253778:
    // 0x253778: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x253778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25377c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25377cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253780: 0x0  nop
    ctx->pc = 0x253780u;
    // NOP
    // 0x253784: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x253784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253788: 0x0  nop
    ctx->pc = 0x253788u;
    // NOP
    // 0x25378c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25378Cu;
    {
        const bool branch_taken_0x25378c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25378c) {
            ctx->pc = 0x253798u;
            goto label_253798;
        }
    }
    ctx->pc = 0x253794u;
    // 0x253794: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x253794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253798:
    // 0x253798: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x253798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x25379c: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x25379cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x2537a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2537a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2537a4: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2537a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2537a8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2537a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2537ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2537acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2537b0: 0x0  nop
    ctx->pc = 0x2537b0u;
    // NOP
    // 0x2537b4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2537b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2537b8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2537b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2537bc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2537bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2537c0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2537c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2537c4: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x2537c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2537c8: 0xc07965c  jal         func_1E5970
    ctx->pc = 0x2537C8u;
    SET_GPR_U32(ctx, 31, 0x2537D0u);
    ctx->pc = 0x1E5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5970u, 0x2537C8u, 0x2537D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2537D0u;
label_2537d0:
    // 0x2537d0: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2537d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2537d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2537d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2537d8: 0x0  nop
    ctx->pc = 0x2537d8u;
    // NOP
    // 0x2537dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2537dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2537e0: 0x0  nop
    ctx->pc = 0x2537e0u;
    // NOP
    // 0x2537e4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2537E4u;
    {
        const bool branch_taken_0x2537e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2537e4) {
            ctx->pc = 0x2537F0u;
            goto label_2537f0;
        }
    }
    ctx->pc = 0x2537ECu;
    // 0x2537ec: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2537ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2537f0:
    // 0x2537f0: 0x16110004  bne         $s0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2537F0u;
    {
        const bool branch_taken_0x2537f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x2537f0) {
            ctx->pc = 0x253804u;
            goto label_253804;
        }
    }
    ctx->pc = 0x2537F8u;
    // 0x2537f8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x2537f8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2537fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2537FCu;
    {
        const bool branch_taken_0x2537fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2537fc) {
            ctx->pc = 0x253808u;
            goto label_253808;
        }
    }
    ctx->pc = 0x253804u;
label_253804:
    // 0x253804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253808:
    // 0x253808: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x253808u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25380c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25380cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253810: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x253810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x253814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253818: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x253818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25381c: 0x3e00008  jr          $ra
    ctx->pc = 0x25381Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25381Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253824u;
}
