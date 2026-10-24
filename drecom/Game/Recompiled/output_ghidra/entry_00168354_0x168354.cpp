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

// Function: entry_00168354
// Address: 0x168354 - 0x168428
void entry_00168354_0x168354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168354_0x168354");
#endif

    switch (ctx->pc) {
        case 0x1683acu: goto label_1683ac;
        case 0x1683bcu: goto label_1683bc;
        case 0x1683d8u: goto label_1683d8;
        case 0x1683ecu: goto label_1683ec;
        default: break;
    }

    ctx->pc = 0x168354u;

    // 0x168354: 0x121043  sra         $v0, $s2, 1
    ctx->pc = 0x168354u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
    // 0x168358: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x168358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x16835c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16835cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x168360: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x168360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x168364: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x168364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168368: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x168368u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16836c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x16836cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x168370: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x168370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x168374: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x168374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x168378: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x168378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16837c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x16837cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x168380: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x168380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x168384: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x168384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x168388: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x168388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16838c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16838cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168390: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x168390u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x168394: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x168394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x168398: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x168398u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x16839c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x16839cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1683a0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1683a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1683a4: 0xc05a10c  jal         func_168430
    ctx->pc = 0x1683A4u;
    SET_GPR_U32(ctx, 31, 0x1683ACu);
    ctx->pc = 0x168430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168430u, 0x1683A4u, 0x1683ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1683ACu;
label_1683ac:
    // 0x1683ac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1683acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1683b0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1683b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1683b4: 0xc05afe0  jal         func_16BF80
    ctx->pc = 0x1683B4u;
    SET_GPR_U32(ctx, 31, 0x1683BCu);
    ctx->pc = 0x16BF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BF80u, 0x1683B4u, 0x1683BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1683BCu;
label_1683bc:
    // 0x1683bc: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1683bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1683c0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1683c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1683c4: 0x2445aaf0  addiu       $a1, $v0, -0x5510
    ctx->pc = 0x1683c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x1683c8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1683c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1683cc: 0xc42cab00  lwc1        $f12, -0x5500($at)
    ctx->pc = 0x1683ccu;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1683d0: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1683D0u;
    SET_GPR_U32(ctx, 31, 0x1683D8u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1683D8u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1683D8u) { return; }
    ctx->pc = 0x1683D8u;
label_1683d8:
    // 0x1683d8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1683d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1683dc: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1683dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1683e0: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x1683e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1683e4: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1683E4u;
    SET_GPR_U32(ctx, 31, 0x1683ECu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x1683ECu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1683ECu) { return; }
    ctx->pc = 0x1683ECu;
label_1683ec:
    // 0x1683ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1683ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1683f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1683f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1683f4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1683f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1683f8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1683f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1683fc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1683fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168400: 0x8c22ab20  lw          $v0, -0x54E0($at)
    ctx->pc = 0x168400u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47AB20u));
    // 0x168404: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x168404u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x168408: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x168408u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16840c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16840cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168410: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x168410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16841c: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x16841cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x168420: 0x3e00008  jr          $ra
    ctx->pc = 0x168420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168428u;
}
