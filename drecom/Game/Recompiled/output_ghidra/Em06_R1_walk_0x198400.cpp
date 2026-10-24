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

// Function: Em06_R1_walk
// Address: 0x198400 - 0x19851c
void Em06_R1_walk_0x198400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R1_walk_0x198400");
#endif

    switch (ctx->pc) {
        case 0x198454u: goto label_198454;
        case 0x198498u: goto label_198498;
        case 0x1984acu: goto label_1984ac;
        case 0x1984c4u: goto label_1984c4;
        case 0x1984e4u: goto label_1984e4;
        case 0x1984f0u: goto label_1984f0;
        case 0x198500u: goto label_198500;
        case 0x19850cu: goto label_19850c;
        default: break;
    }

    ctx->pc = 0x198400u;

    // 0x198400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x198400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x198404: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x198404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x198408: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x198408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x19840c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19840cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198410: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x198410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x198414: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x198414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x198418: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19841c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x19841Cu;
    {
        const bool branch_taken_0x19841c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19841c) {
            ctx->pc = 0x19846Cu;
            goto label_19846c;
        }
    }
    ctx->pc = 0x198424u;
    // 0x198424: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198424u;
    {
        const bool branch_taken_0x198424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198424) {
            ctx->pc = 0x198434u;
            goto label_198434;
        }
    }
    ctx->pc = 0x19842Cu;
    // 0x19842c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x19842Cu;
    {
        const bool branch_taken_0x19842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19842c) {
            ctx->pc = 0x19850Cu;
            goto label_19850c;
        }
    }
    ctx->pc = 0x198434u;
label_198434:
    // 0x198434: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198438: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19843c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19843cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x198440: 0x24065a0c  addiu       $a2, $zero, 0x5A0C
    ctx->pc = 0x198440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23052));
    // 0x198444: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x198444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198448: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x198448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19844c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19844Cu;
    SET_GPR_U32(ctx, 31, 0x198454u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19844Cu, 0x198454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198454u;
label_198454:
    // 0x198454: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198458: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x198458u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19845c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19845cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x198460: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x198460u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x198464: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x198464u;
    {
        const bool branch_taken_0x198464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198464) {
            ctx->pc = 0x19850Cu;
            goto label_19850c;
        }
    }
    ctx->pc = 0x19846Cu;
label_19846c:
    // 0x19846c: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x19846cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
    // 0x198470: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x198470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x198474: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x198474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x198478: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19847c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19847cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198480: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198484: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x198484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x198488: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x198488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19848c: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x19848cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x198490: 0xc05c848  jal         func_172120
    ctx->pc = 0x198490u;
    SET_GPR_U32(ctx, 31, 0x198498u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x198490u, 0x198498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198498u;
label_198498:
    // 0x198498: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19849c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x19849cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1984a0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1984a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1984a4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1984A4u;
    SET_GPR_U32(ctx, 31, 0x1984ACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1984A4u, 0x1984ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1984ACu;
label_1984ac:
    // 0x1984ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1984acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1984b0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1984b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1984b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1984b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1984b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1984b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1984bc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1984BCu;
    SET_GPR_U32(ctx, 31, 0x1984C4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1984BCu, 0x1984C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1984C4u;
label_1984c4:
    // 0x1984c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1984c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1984c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1984c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1984cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1984ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1984d0: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1984d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1984d4: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1984d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1984d8: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x1984d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1984dc: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1984DCu;
    SET_GPR_U32(ctx, 31, 0x1984E4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1984E4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1984E4u) { return; }
    ctx->pc = 0x1984E4u;
label_1984e4:
    // 0x1984e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1984e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1984e8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1984E8u;
    SET_GPR_U32(ctx, 31, 0x1984F0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1984E8u, 0x1984F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1984F0u;
label_1984f0:
    // 0x1984f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1984f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1984f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1984f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1984f8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1984F8u;
    SET_GPR_U32(ctx, 31, 0x198500u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1984F8u, 0x198500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198500u;
label_198500:
    // 0x198500: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198504: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x198504u;
    SET_GPR_U32(ctx, 31, 0x19850Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x198504u, 0x19850Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19850Cu;
label_19850c:
    // 0x19850c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19850cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198510: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x198510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x198514: 0x3e00008  jr          $ra
    ctx->pc = 0x198514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19851Cu;
}
