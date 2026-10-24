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

// Function: Em00_R1_meta
// Address: 0x2d3620 - 0x2d376c
void Em00_R1_meta_0x2d3620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_meta_0x2d3620");
#endif

    switch (ctx->pc) {
        case 0x2d3674u: goto label_2d3674;
        case 0x2d36b8u: goto label_2d36b8;
        case 0x2d36ccu: goto label_2d36cc;
        case 0x2d36f4u: goto label_2d36f4;
        case 0x2d3700u: goto label_2d3700;
        case 0x2d3710u: goto label_2d3710;
        case 0x2d371cu: goto label_2d371c;
        default: break;
    }

    ctx->pc = 0x2d3620u;

    // 0x2d3620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d3620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d3624: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d3624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d3628: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d3628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d362c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d362cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3630: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d3630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d3634: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d3634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d3638: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d3638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d363c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D363Cu;
    {
        const bool branch_taken_0x2d363c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d363c) {
            ctx->pc = 0x2D368Cu;
            goto label_2d368c;
        }
    }
    ctx->pc = 0x2D3644u;
    // 0x2d3644: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3644u;
    {
        const bool branch_taken_0x2d3644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3644) {
            ctx->pc = 0x2D3654u;
            goto label_2d3654;
        }
    }
    ctx->pc = 0x2D364Cu;
    // 0x2d364c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2D364Cu;
    {
        const bool branch_taken_0x2d364c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d364c) {
            ctx->pc = 0x2D375Cu;
            goto label_2d375c;
        }
    }
    ctx->pc = 0x2D3654u;
label_2d3654:
    // 0x2d3654: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3658: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d365c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d365cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d3660: 0x24065a22  addiu       $a2, $zero, 0x5A22
    ctx->pc = 0x2d3660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23074));
    // 0x2d3664: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d3664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3668: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d3668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d366c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D366Cu;
    SET_GPR_U32(ctx, 31, 0x2D3674u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D366Cu, 0x2D3674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3674u;
label_2d3674:
    // 0x2d3674: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3678: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d3678u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d367c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d367cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3680: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d3680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d3684: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3688: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d3688u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d368c:
    // 0x2d368c: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x2d368cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x2d3690: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2d3690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2d3694: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d3694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d3698: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d369c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d369cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d36a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d36a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d36a4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d36a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d36a8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d36a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d36ac: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x2d36acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2d36b0: 0xc05c848  jal         func_172120
    ctx->pc = 0x2D36B0u;
    SET_GPR_U32(ctx, 31, 0x2D36B8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2D36B0u, 0x2D36B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D36B8u;
label_2d36b8:
    // 0x2d36b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d36b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d36bc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d36bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d36c0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2d36c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d36c4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D36C4u;
    SET_GPR_U32(ctx, 31, 0x2D36CCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D36C4u, 0x2D36CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D36CCu;
label_2d36cc:
    // 0x2d36cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d36ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d36d0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2d36d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2d36d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d36d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d36d8: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2d36d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d36dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d36dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d36e0: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2d36e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d36e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d36e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d36e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d36e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d36ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D36ECu;
    SET_GPR_U32(ctx, 31, 0x2D36F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D36ECu, 0x2D36F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D36F4u;
label_2d36f4:
    // 0x2d36f4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d36f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d36f8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D36F8u;
    SET_GPR_U32(ctx, 31, 0x2D3700u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D36F8u, 0x2D3700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3700u;
label_2d3700:
    // 0x2d3700: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3704: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d3704u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d3708: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D3708u;
    SET_GPR_U32(ctx, 31, 0x2D3710u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D3708u, 0x2D3710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3710u;
label_2d3710:
    // 0x2d3710: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3714: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D3714u;
    SET_GPR_U32(ctx, 31, 0x2D371Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D3714u, 0x2D371Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D371Cu;
label_2d371c:
    // 0x2d371c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d371cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3720: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d3720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d3724: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D3724u;
    {
        const bool branch_taken_0x2d3724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3724) {
            ctx->pc = 0x2D375Cu;
            goto label_2d375c;
        }
    }
    ctx->pc = 0x2D372Cu;
    // 0x2d372c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d372cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3730: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3734: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d3734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d3738: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2d3738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d373c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d373cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3740: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d3740u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d3744: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3748: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d3748u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d374c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d374cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3750: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d3750u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3754: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3758: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d3758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d375c:
    // 0x2d375c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d375cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3760: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d3760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d3764: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D376Cu;
}
