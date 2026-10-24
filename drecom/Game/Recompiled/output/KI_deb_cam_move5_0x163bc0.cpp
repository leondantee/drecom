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

// Function: KI_deb_cam_move5
// Address: 0x163bc0 - 0x163c64
void KI_deb_cam_move5_0x163bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KI_deb_cam_move5_0x163bc0");
#endif

    switch (ctx->pc) {
        case 0x163c28u: goto label_163c28;
        case 0x163c48u: goto label_163c48;
        default: break;
    }

    ctx->pc = 0x163bc0u;

    // 0x163bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x163bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x163bc4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x163bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x163bc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163bcc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x163bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x163bd0: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x163bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x163bd4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x163bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x163bd8: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x163bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x163bdc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x163bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x163be0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x163be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x163be4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x163be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x163be8: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x163be8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x163bec: 0xc60101a4  lwc1        $f1, 0x1A4($s0)
    ctx->pc = 0x163becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163bf0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163bf4: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x163bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x163bf8: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x163bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163bfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163bfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163c00: 0x0  nop
    ctx->pc = 0x163c00u;
    // NOP
    // 0x163c04: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x163C04u;
    {
        const bool branch_taken_0x163c04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163c04) {
            ctx->pc = 0x163C28u;
            goto label_163c28;
        }
    }
    ctx->pc = 0x163C0Cu;
    // 0x163c0c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163c10: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x163c10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x163c14: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x163c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163c18: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x163c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x163c1c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x163c1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x163c20: 0xc056518  jal         func_159460
    ctx->pc = 0x163C20u;
    SET_GPR_U32(ctx, 31, 0x163C28u);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x163C20u, 0x163C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163C28u;
label_163c28:
    // 0x163c28: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x163c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x163c2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163c30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x163c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163c34: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163c38: 0xc420dc94  lwc1        $f0, -0x236C($at)
    ctx->pc = 0x163c38u;
    { uint32_t bits = FAST_READ32(0x3EDC94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163c3c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x163c3cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163c40: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x163C40u;
    SET_GPR_U32(ctx, 31, 0x163C48u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x163C40u, 0x163C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163C48u;
label_163c48:
    // 0x163c48: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163c4c: 0xe4204f28  swc1        $f0, 0x4F28($at)
    ctx->pc = 0x163c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F28u, _value); } while (0); }
    // 0x163c50: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x163c50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163c58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x163c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x163c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x163C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163C64u;
}
