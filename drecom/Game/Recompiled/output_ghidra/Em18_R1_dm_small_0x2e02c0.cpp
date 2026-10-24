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

// Function: Em18_R1_dm_small
// Address: 0x2e02c0 - 0x2e04b4
void Em18_R1_dm_small_0x2e02c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_dm_small_0x2e02c0");
#endif

    switch (ctx->pc) {
        case 0x2e030cu: goto label_2e030c;
        case 0x2e037cu: goto label_2e037c;
        case 0x2e03b4u: goto label_2e03b4;
        case 0x2e03d8u: goto label_2e03d8;
        case 0x2e0414u: goto label_2e0414;
        case 0x2e042cu: goto label_2e042c;
        case 0x2e0440u: goto label_2e0440;
        case 0x2e0450u: goto label_2e0450;
        case 0x2e045cu: goto label_2e045c;
        default: break;
    }

    ctx->pc = 0x2e02c0u;

    // 0x2e02c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e02c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e02c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2e02c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2e02c8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2e02c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2e02cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e02ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e02d0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2e02d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e02d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e02d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e02d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e02d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e02dc: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2E02DCu;
    {
        const bool branch_taken_0x2e02dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e02dc) {
            ctx->pc = 0x2E03F0u;
            goto label_2e03f0;
        }
    }
    ctx->pc = 0x2E02E4u;
    // 0x2e02e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E02E4u;
    {
        const bool branch_taken_0x2e02e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e02e4) {
            ctx->pc = 0x2E02F4u;
            goto label_2e02f4;
        }
    }
    ctx->pc = 0x2E02ECu;
    // 0x2e02ec: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2E02ECu;
    {
        const bool branch_taken_0x2e02ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e02ec) {
            ctx->pc = 0x2E04A4u;
            goto label_2e04a4;
        }
    }
    ctx->pc = 0x2E02F4u;
label_2e02f4:
    // 0x2e02f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e02f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e02f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e02f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e02fc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2e02fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e0300: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x2e0300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e0304: 0xc058f20  jal         func_163C80
    ctx->pc = 0x2E0304u;
    SET_GPR_U32(ctx, 31, 0x2E030Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x2E0304u, 0x2E030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E030Cu;
label_2e030c:
    // 0x2e030c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e030cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2e0310: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2e0310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0314: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e0314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0318: 0x0  nop
    ctx->pc = 0x2e0318u;
    // NOP
    // 0x2e031c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e031cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0320: 0x0  nop
    ctx->pc = 0x2e0320u;
    // NOP
    // 0x2e0324: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0324u;
    {
        const bool branch_taken_0x2e0324 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0324) {
            ctx->pc = 0x2E0338u;
            goto label_2e0338;
        }
    }
    ctx->pc = 0x2E032Cu;
    // 0x2e032c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0330: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e0330u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e0334: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e0334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2e0338:
    // 0x2e0338: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2e0338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e033c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2e033cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2e0340: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e0340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e0344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e0344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0348: 0x0  nop
    ctx->pc = 0x2e0348u;
    // NOP
    // 0x2e034c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e034cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0350: 0x0  nop
    ctx->pc = 0x2e0350u;
    // NOP
    // 0x2e0354: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2E0354u;
    {
        const bool branch_taken_0x2e0354 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0354) {
            ctx->pc = 0x2E0394u;
            goto label_2e0394;
        }
    }
    ctx->pc = 0x2E035Cu;
    // 0x2e035c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e035cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0360: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e0360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0364: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e0364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e0368: 0x24060504  addiu       $a2, $zero, 0x504
    ctx->pc = 0x2e0368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x2e036c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e036cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0370: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e0370u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e0374: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E0374u;
    SET_GPR_U32(ctx, 31, 0x2E037Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E0374u, 0x2E037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E037Cu;
label_2e037c:
    // 0x2e037c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0380: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x2e0380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0384: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e0384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0388: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e0388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2e038c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E038Cu;
    {
        const bool branch_taken_0x2e038c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e038c) {
            ctx->pc = 0x2E03E0u;
            goto label_2e03e0;
        }
    }
    ctx->pc = 0x2E0394u;
label_2e0394:
    // 0x2e0394: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e0394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0398: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e0398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e039c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e039cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e03a0: 0x24060505  addiu       $a2, $zero, 0x505
    ctx->pc = 0x2e03a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
    // 0x2e03a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e03a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e03a8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e03a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e03ac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E03ACu;
    SET_GPR_U32(ctx, 31, 0x2E03B4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E03ACu, 0x2E03B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E03B4u;
label_2e03b4:
    // 0x2e03b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e03b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e03b8: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x2e03b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e03bc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2e03bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2e03c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e03c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e03c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e03c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e03c8: 0x0  nop
    ctx->pc = 0x2e03c8u;
    // NOP
    // 0x2e03cc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e03ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e03d0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E03D0u;
    SET_GPR_U32(ctx, 31, 0x2E03D8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E03D0u, 0x2E03D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E03D8u;
label_2e03d8:
    // 0x2e03d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e03d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e03dc: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e03dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_2e03e0:
    // 0x2e03e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e03e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e03e4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e03e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e03e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e03e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e03ec: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e03ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2e03f0:
    // 0x2e03f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e03f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e03f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e03f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e03f8: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2e03f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2e03fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e03fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e0400: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e0400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e0404: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x2e0404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e0408: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x2e0408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e040c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2E040Cu;
    SET_GPR_U32(ctx, 31, 0x2E0414u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2E040Cu, 0x2E0414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0414u;
label_2e0414:
    // 0x2e0414: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e0414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0418: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2e0418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2e041c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e041cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0420: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e0420u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e0424: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E0424u;
    SET_GPR_U32(ctx, 31, 0x2E042Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E0424u, 0x2E042Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E042Cu;
label_2e042c:
    // 0x2e042c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e042cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0430: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e0430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0434: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x2e0434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e0438: 0xc05cd58  jal         func_173560
    ctx->pc = 0x2E0438u;
    SET_GPR_U32(ctx, 31, 0x2E0440u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x2E0438u, 0x2E0440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0440u;
label_2e0440:
    // 0x2e0440: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e0440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0444: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e0444u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e0448: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E0448u;
    SET_GPR_U32(ctx, 31, 0x2E0450u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E0448u, 0x2E0450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0450u;
label_2e0450:
    // 0x2e0450: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e0450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0454: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E0454u;
    SET_GPR_U32(ctx, 31, 0x2E045Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E0454u, 0x2E045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E045Cu;
label_2e045c:
    // 0x2e045c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e045cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0460: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e0460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2e0464: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E0464u;
    {
        const bool branch_taken_0x2e0464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0464) {
            ctx->pc = 0x2E04A4u;
            goto label_2e04a4;
        }
    }
    ctx->pc = 0x2E046Cu;
    // 0x2e046c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e046cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0470: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e0470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0474: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e0474u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0478: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e0478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e047c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0480: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e0480u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0484: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e0484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0488: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e0488u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e048c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e048cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0490: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e0490u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0494: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e0494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0498: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e0498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e049c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E049Cu;
    {
        const bool branch_taken_0x2e049c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e049c) {
            ctx->pc = 0x2E04A4u;
            goto label_2e04a4;
        }
    }
    ctx->pc = 0x2E04A4u;
label_2e04a4:
    // 0x2e04a4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2e04a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e04a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e04a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e04ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2E04ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E04ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E04B4u;
}
