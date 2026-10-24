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

// Function: Em06_R1_run
// Address: 0x1985e0 - 0x1986fc
void Em06_R1_run_0x1985e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R1_run_0x1985e0");
#endif

    switch (ctx->pc) {
        case 0x198634u: goto label_198634;
        case 0x198678u: goto label_198678;
        case 0x19868cu: goto label_19868c;
        case 0x1986a4u: goto label_1986a4;
        case 0x1986c4u: goto label_1986c4;
        case 0x1986d0u: goto label_1986d0;
        case 0x1986e0u: goto label_1986e0;
        case 0x1986ecu: goto label_1986ec;
        default: break;
    }

    ctx->pc = 0x1985e0u;

    // 0x1985e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1985e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1985e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1985e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1985e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1985e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1985ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1985ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1985f0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1985f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1985f4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1985f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1985f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1985f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1985fc: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1985FCu;
    {
        const bool branch_taken_0x1985fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1985fc) {
            ctx->pc = 0x19864Cu;
            goto label_19864c;
        }
    }
    ctx->pc = 0x198604u;
    // 0x198604: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198604u;
    {
        const bool branch_taken_0x198604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198604) {
            ctx->pc = 0x198614u;
            goto label_198614;
        }
    }
    ctx->pc = 0x19860Cu;
    // 0x19860c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x19860Cu;
    {
        const bool branch_taken_0x19860c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19860c) {
            ctx->pc = 0x1986ECu;
            goto label_1986ec;
        }
    }
    ctx->pc = 0x198614u;
label_198614:
    // 0x198614: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198618: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19861c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19861cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x198620: 0x24065a29  addiu       $a2, $zero, 0x5A29
    ctx->pc = 0x198620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23081));
    // 0x198624: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x198624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198628: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x198628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19862c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19862Cu;
    SET_GPR_U32(ctx, 31, 0x198634u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19862Cu, 0x198634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198634u;
label_198634:
    // 0x198634: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198638: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x198638u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19863c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19863cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x198640: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x198640u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x198644: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x198644u;
    {
        const bool branch_taken_0x198644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198644) {
            ctx->pc = 0x1986ECu;
            goto label_1986ec;
        }
    }
    ctx->pc = 0x19864Cu;
label_19864c:
    // 0x19864c: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x19864cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
    // 0x198650: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x198650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x198654: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x198654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x198658: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19865c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19865cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198660: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198664: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x198664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x198668: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x198668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19866c: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x19866cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x198670: 0xc05c848  jal         func_172120
    ctx->pc = 0x198670u;
    SET_GPR_U32(ctx, 31, 0x198678u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x198670u, 0x198678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198678u;
label_198678:
    // 0x198678: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19867c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x19867cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198680: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x198680u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x198684: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x198684u;
    SET_GPR_U32(ctx, 31, 0x19868Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x198684u, 0x19868Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19868Cu;
label_19868c:
    // 0x19868c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19868cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198690: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x198690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x198694: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198698: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x198698u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19869c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x19869Cu;
    SET_GPR_U32(ctx, 31, 0x1986A4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x19869Cu, 0x1986A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1986A4u;
label_1986a4:
    // 0x1986a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1986a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1986a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1986a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1986ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1986acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1986b0: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1986b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1986b4: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1986b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1986b8: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x1986b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1986bc: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1986BCu;
    SET_GPR_U32(ctx, 31, 0x1986C4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1986C4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1986C4u) { return; }
    ctx->pc = 0x1986C4u;
label_1986c4:
    // 0x1986c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1986c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1986c8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1986C8u;
    SET_GPR_U32(ctx, 31, 0x1986D0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1986C8u, 0x1986D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1986D0u;
label_1986d0:
    // 0x1986d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1986d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1986d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1986d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1986d8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1986D8u;
    SET_GPR_U32(ctx, 31, 0x1986E0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1986D8u, 0x1986E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1986E0u;
label_1986e0:
    // 0x1986e0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1986e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1986e4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x1986E4u;
    SET_GPR_U32(ctx, 31, 0x1986ECu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x1986E4u, 0x1986ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1986ECu;
label_1986ec:
    // 0x1986ec: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1986ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1986f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1986f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1986f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1986F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1986F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1986FCu;
}
