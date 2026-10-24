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

// Function: Em01s_R1_run
// Address: 0x309190 - 0x30939c
void Em01s_R1_run_0x309190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01s_R1_run_0x309190");
#endif

    switch (ctx->pc) {
        case 0x3091fcu: goto label_3091fc;
        case 0x309240u: goto label_309240;
        case 0x309254u: goto label_309254;
        case 0x30926cu: goto label_30926c;
        case 0x309278u: goto label_309278;
        case 0x309288u: goto label_309288;
        case 0x309294u: goto label_309294;
        case 0x3092bcu: goto label_3092bc;
        case 0x3092dcu: goto label_3092dc;
        case 0x3092fcu: goto label_3092fc;
        case 0x309324u: goto label_309324;
        case 0x309330u: goto label_309330;
        case 0x309340u: goto label_309340;
        case 0x30934cu: goto label_30934c;
        default: break;
    }

    ctx->pc = 0x309190u;

    // 0x309190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x309190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x309194: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x309194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x309198: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x309198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x30919c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30919cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3091a0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3091a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3091a4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3091a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3091a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3091a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3091ac: 0x10830059  beq         $a0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x3091ACu;
    {
        const bool branch_taken_0x3091ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3091ac) {
            ctx->pc = 0x309314u;
            goto label_309314;
        }
    }
    ctx->pc = 0x3091B4u;
    // 0x3091b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3091b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3091b8: 0x10830038  beq         $a0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x3091B8u;
    {
        const bool branch_taken_0x3091b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3091b8) {
            ctx->pc = 0x30929Cu;
            goto label_30929c;
        }
    }
    ctx->pc = 0x3091C0u;
    // 0x3091c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3091c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3091c4: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3091C4u;
    {
        const bool branch_taken_0x3091c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3091c4) {
            ctx->pc = 0x309214u;
            goto label_309214;
        }
    }
    ctx->pc = 0x3091CCu;
    // 0x3091cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3091CCu;
    {
        const bool branch_taken_0x3091cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3091cc) {
            ctx->pc = 0x3091DCu;
            goto label_3091dc;
        }
    }
    ctx->pc = 0x3091D4u;
    // 0x3091d4: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x3091D4u;
    {
        const bool branch_taken_0x3091d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3091d4) {
            ctx->pc = 0x30938Cu;
            goto label_30938c;
        }
    }
    ctx->pc = 0x3091DCu;
label_3091dc:
    // 0x3091dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3091dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3091e0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3091e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3091e4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3091e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3091e8: 0x24062833  addiu       $a2, $zero, 0x2833
    ctx->pc = 0x3091e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10291));
    // 0x3091ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3091ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3091f0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3091f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3091f4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3091F4u;
    SET_GPR_U32(ctx, 31, 0x3091FCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3091F4u, 0x3091FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3091FCu;
label_3091fc:
    // 0x3091fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3091fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309200: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x309200u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x309204: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309208: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x309208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30920c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30920cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x309210: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x309210u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_309214:
    // 0x309214: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x309214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x309218: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x309218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x30921c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30921cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x309220: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x309220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309224: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309228: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x309228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30922c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x30922cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x309230: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x309230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x309234: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x309234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x309238: 0xc05c848  jal         func_172120
    ctx->pc = 0x309238u;
    SET_GPR_U32(ctx, 31, 0x309240u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x309238u, 0x309240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309240u;
label_309240:
    // 0x309240: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x309240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309244: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x309244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309248: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x309248u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30924c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30924Cu;
    SET_GPR_U32(ctx, 31, 0x309254u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30924Cu, 0x309254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309254u;
label_309254:
    // 0x309254: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x309254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309258: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x309258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x30925c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30925cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309260: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x309260u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x309264: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x309264u;
    SET_GPR_U32(ctx, 31, 0x30926Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x309264u, 0x30926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30926Cu;
label_30926c:
    // 0x30926c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30926cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309270: 0xc05cd10  jal         func_173440
    ctx->pc = 0x309270u;
    SET_GPR_U32(ctx, 31, 0x309278u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x309270u, 0x309278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309278u;
label_309278:
    // 0x309278: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x309278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30927c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x30927cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x309280: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x309280u;
    SET_GPR_U32(ctx, 31, 0x309288u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x309280u, 0x309288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309288u;
label_309288:
    // 0x309288: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x309288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30928c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30928Cu;
    SET_GPR_U32(ctx, 31, 0x309294u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30928Cu, 0x309294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309294u;
label_309294:
    // 0x309294: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x309294u;
    {
        const bool branch_taken_0x309294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309294) {
            ctx->pc = 0x30938Cu;
            goto label_30938c;
        }
    }
    ctx->pc = 0x30929Cu;
label_30929c:
    // 0x30929c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30929cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3092a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3092a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3092a4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3092a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3092a8: 0x24062833  addiu       $a2, $zero, 0x2833
    ctx->pc = 0x3092a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10291));
    // 0x3092ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3092acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3092b0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3092b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3092b4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3092B4u;
    SET_GPR_U32(ctx, 31, 0x3092BCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3092B4u, 0x3092BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3092BCu;
label_3092bc:
    // 0x3092bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3092bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3092c0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3092c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3092c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3092c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3092c8: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x3092c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x3092cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3092ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3092d0: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x3092d0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3092d4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3092D4u;
    SET_GPR_U32(ctx, 31, 0x3092DCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3092D4u, 0x3092DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3092DCu;
label_3092dc:
    // 0x3092dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3092dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3092e0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3092e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x3092e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3092e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3092e8: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x3092e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x3092ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3092ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3092f0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3092f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3092f4: 0xc0c2038  jal         func_3080E0
    ctx->pc = 0x3092F4u;
    SET_GPR_U32(ctx, 31, 0x3092FCu);
    ctx->pc = 0x3080E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3080E0u, 0x3092F4u, 0x3092FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3092FCu;
label_3092fc:
    // 0x3092fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3092fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309300: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x309300u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x309304: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309308: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x309308u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30930c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30930cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x309310: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x309310u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_309314:
    // 0x309314: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x309314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309318: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x309318u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30931c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30931Cu;
    SET_GPR_U32(ctx, 31, 0x309324u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30931Cu, 0x309324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309324u;
label_309324:
    // 0x309324: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x309324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309328: 0xc05cd10  jal         func_173440
    ctx->pc = 0x309328u;
    SET_GPR_U32(ctx, 31, 0x309330u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x309328u, 0x309330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309330u;
label_309330:
    // 0x309330: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x309330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309334: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x309334u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x309338: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x309338u;
    SET_GPR_U32(ctx, 31, 0x309340u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x309338u, 0x309340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309340u;
label_309340:
    // 0x309340: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x309340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309344: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x309344u;
    SET_GPR_U32(ctx, 31, 0x30934Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x309344u, 0x30934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30934Cu;
label_30934c:
    // 0x30934c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30934cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309350: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x309350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x309354: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x309354u;
    {
        const bool branch_taken_0x309354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x309354) {
            ctx->pc = 0x30938Cu;
            goto label_30938c;
        }
    }
    ctx->pc = 0x30935Cu;
    // 0x30935c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30935cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309360: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309364: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x309364u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x309368: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x309368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30936c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30936cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309370: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x309370u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x309374: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309378: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x309378u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30937c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30937cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309380: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x309380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x309384: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309388: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x309388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30938c:
    // 0x30938c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x30938cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309390: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x309390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x309394: 0x3e00008  jr          $ra
    ctx->pc = 0x309394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30939Cu;
}
