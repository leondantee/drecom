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

// Function: set_eff_em19_flash
// Address: 0x3250e0 - 0x325330
void set_eff_em19_flash_0x3250e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_em19_flash_0x3250e0");
#endif

    switch (ctx->pc) {
        case 0x32510cu: goto label_32510c;
        case 0x325154u: goto label_325154;
        case 0x325170u: goto label_325170;
        case 0x3251b8u: goto label_3251b8;
        case 0x325204u: goto label_325204;
        case 0x32523cu: goto label_32523c;
        case 0x325274u: goto label_325274;
        case 0x3252acu: goto label_3252ac;
        case 0x3252e4u: goto label_3252e4;
        case 0x32531cu: goto label_32531c;
        default: break;
    }

    ctx->pc = 0x3250e0u;

    // 0x3250e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3250e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3250e4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3250e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x3250e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3250e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3250ec: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x3250ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x3250f0: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x3250f0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3250f4: 0xe7ad0038  swc1        $f13, 0x38($sp)
    ctx->pc = 0x3250f4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3250f8: 0xe7ae0040  swc1        $f14, 0x40($sp)
    ctx->pc = 0x3250f8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3250fc: 0xe7af0048  swc1        $f15, 0x48($sp)
    ctx->pc = 0x3250fcu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x325100: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x325100u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x325104: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x325104u;
    {
        const bool branch_taken_0x325104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325104) {
            ctx->pc = 0x325158u;
            goto label_325158;
        }
    }
    ctx->pc = 0x32510Cu;
label_32510c:
    // 0x32510c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32510cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x325110: 0x2442a198  addiu       $v0, $v0, -0x5E68
    ctx->pc = 0x325110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943128));
    // 0x325114: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x325114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x325118: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x325118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32511c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x32511cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x325120: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x325120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x325124: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x325124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x325128: 0x24461e20  addiu       $a2, $v0, 0x1E20
    ctx->pc = 0x325128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 7712));
    // 0x32512c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32512cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x325130: 0x24471e20  addiu       $a3, $v0, 0x1E20
    ctx->pc = 0x325130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7712));
    // 0x325134: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x325134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x325138: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x325138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x32513c: 0xc7ae0040  lwc1        $f14, 0x40($sp)
    ctx->pc = 0x32513cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x325140: 0xc7af0048  lwc1        $f15, 0x48($sp)
    ctx->pc = 0x325140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x325144: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x325144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325148: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x325148u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32514c: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x32514Cu;
    SET_GPR_U32(ctx, 31, 0x325154u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x32514Cu, 0x325154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325154u;
label_325154:
    // 0x325154: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x325154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_325158:
    // 0x325158: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x325158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x32515c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x32515Cu;
    {
        const bool branch_taken_0x32515c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32515c) {
            ctx->pc = 0x32510Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32510c;
        }
    }
    ctx->pc = 0x325164u;
    // 0x325164: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x325164u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x325168: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x325168u;
    {
        const bool branch_taken_0x325168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325168) {
            ctx->pc = 0x3251C0u;
            goto label_3251c0;
        }
    }
    ctx->pc = 0x325170u;
label_325170:
    // 0x325170: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x325170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x325174: 0x2442a1a0  addiu       $v0, $v0, -0x5E60
    ctx->pc = 0x325174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943136));
    // 0x325178: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x325178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x32517c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x32517cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x325180: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x325180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x325184: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x325184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x325188: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x325188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32518c: 0x24461e30  addiu       $a2, $v0, 0x1E30
    ctx->pc = 0x32518cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 7728));
    // 0x325190: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x325190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x325194: 0x24471e20  addiu       $a3, $v0, 0x1E20
    ctx->pc = 0x325194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7712));
    // 0x325198: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x325198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32519c: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x32519cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3251a0: 0xc7ae0040  lwc1        $f14, 0x40($sp)
    ctx->pc = 0x3251a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3251a4: 0xc7af0048  lwc1        $f15, 0x48($sp)
    ctx->pc = 0x3251a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x3251a8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3251a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3251ac: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x3251acu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3251b0: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x3251B0u;
    SET_GPR_U32(ctx, 31, 0x3251B8u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x3251B0u, 0x3251B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3251B8u;
label_3251b8:
    // 0x3251b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3251b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3251bc: 0x0  nop
    ctx->pc = 0x3251bcu;
    // NOP
label_3251c0:
    // 0x3251c0: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x3251c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3251c4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3251C4u;
    {
        const bool branch_taken_0x3251c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3251c4) {
            ctx->pc = 0x325170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325170;
        }
    }
    ctx->pc = 0x3251CCu;
    // 0x3251cc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3251ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3251d0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3251d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3251d4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3251d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3251d8: 0x24461e40  addiu       $a2, $v0, 0x1E40
    ctx->pc = 0x3251d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 7744));
    // 0x3251dc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3251dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3251e0: 0x24471e20  addiu       $a3, $v0, 0x1E20
    ctx->pc = 0x3251e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7712));
    // 0x3251e4: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x3251e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3251e8: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x3251e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3251ec: 0xc7ae0040  lwc1        $f14, 0x40($sp)
    ctx->pc = 0x3251ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3251f0: 0xc7af0048  lwc1        $f15, 0x48($sp)
    ctx->pc = 0x3251f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x3251f4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3251f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3251f8: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x3251f8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3251fc: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x3251FCu;
    SET_GPR_U32(ctx, 31, 0x325204u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x3251FCu, 0x325204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325204u;
label_325204:
    // 0x325204: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x325204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x325208: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x325208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x32520c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32520cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x325210: 0x24461e50  addiu       $a2, $v0, 0x1E50
    ctx->pc = 0x325210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 7760));
    // 0x325214: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x325214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x325218: 0x24471e20  addiu       $a3, $v0, 0x1E20
    ctx->pc = 0x325218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7712));
    // 0x32521c: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x32521cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x325220: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x325220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x325224: 0xc7ae0040  lwc1        $f14, 0x40($sp)
    ctx->pc = 0x325224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x325228: 0xc7af0048  lwc1        $f15, 0x48($sp)
    ctx->pc = 0x325228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x32522c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x32522cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325230: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x325230u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x325234: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x325234u;
    SET_GPR_U32(ctx, 31, 0x32523Cu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x325234u, 0x32523Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32523Cu;
label_32523c:
    // 0x32523c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x32523cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x325240: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x325240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x325244: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x325244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x325248: 0x24461e40  addiu       $a2, $v0, 0x1E40
    ctx->pc = 0x325248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 7744));
    // 0x32524c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32524cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x325250: 0x24471e20  addiu       $a3, $v0, 0x1E20
    ctx->pc = 0x325250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7712));
    // 0x325254: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x325254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x325258: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x325258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x32525c: 0xc7ae0040  lwc1        $f14, 0x40($sp)
    ctx->pc = 0x32525cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x325260: 0xc7af0048  lwc1        $f15, 0x48($sp)
    ctx->pc = 0x325260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x325264: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x325264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325268: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x325268u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32526c: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x32526Cu;
    SET_GPR_U32(ctx, 31, 0x325274u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x32526Cu, 0x325274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325274u;
label_325274:
    // 0x325274: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x325274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x325278: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x325278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x32527c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32527cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x325280: 0x24461e50  addiu       $a2, $v0, 0x1E50
    ctx->pc = 0x325280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 7760));
    // 0x325284: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x325284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x325288: 0x24471e20  addiu       $a3, $v0, 0x1E20
    ctx->pc = 0x325288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7712));
    // 0x32528c: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x32528cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x325290: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x325290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x325294: 0xc7ae0040  lwc1        $f14, 0x40($sp)
    ctx->pc = 0x325294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x325298: 0xc7af0048  lwc1        $f15, 0x48($sp)
    ctx->pc = 0x325298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x32529c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x32529cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3252a0: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x3252a0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3252a4: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x3252A4u;
    SET_GPR_U32(ctx, 31, 0x3252ACu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x3252A4u, 0x3252ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3252ACu;
label_3252ac:
    // 0x3252ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3252acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3252b0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3252b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3252b4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3252b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3252b8: 0x24461e60  addiu       $a2, $v0, 0x1E60
    ctx->pc = 0x3252b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 7776));
    // 0x3252bc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3252bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3252c0: 0x24471e20  addiu       $a3, $v0, 0x1E20
    ctx->pc = 0x3252c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7712));
    // 0x3252c4: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x3252c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3252c8: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x3252c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3252cc: 0xc7ae0040  lwc1        $f14, 0x40($sp)
    ctx->pc = 0x3252ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3252d0: 0xc7af0048  lwc1        $f15, 0x48($sp)
    ctx->pc = 0x3252d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x3252d4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3252d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3252d8: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x3252d8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3252dc: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x3252DCu;
    SET_GPR_U32(ctx, 31, 0x3252E4u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x3252DCu, 0x3252E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3252E4u;
label_3252e4:
    // 0x3252e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3252e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3252e8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x3252e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3252ec: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3252ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3252f0: 0x24461e70  addiu       $a2, $v0, 0x1E70
    ctx->pc = 0x3252f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 7792));
    // 0x3252f4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3252f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3252f8: 0x24471e20  addiu       $a3, $v0, 0x1E20
    ctx->pc = 0x3252f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7712));
    // 0x3252fc: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x3252fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x325300: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x325300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x325304: 0xc7ae0040  lwc1        $f14, 0x40($sp)
    ctx->pc = 0x325304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x325308: 0xc7af0048  lwc1        $f15, 0x48($sp)
    ctx->pc = 0x325308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x32530c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x32530cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325310: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x325310u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x325314: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x325314u;
    SET_GPR_U32(ctx, 31, 0x32531Cu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x325314u, 0x32531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32531Cu;
label_32531c:
    // 0x32531c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x32531cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x325320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325324: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x325324u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x325328: 0x3e00008  jr          $ra
    ctx->pc = 0x325328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325330u;
}
