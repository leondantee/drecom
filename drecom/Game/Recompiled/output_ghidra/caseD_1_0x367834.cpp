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

// Function: caseD_1
// Address: 0x367834 - 0x3678c8
void caseD_1_0x367834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x367834");
#endif

    switch (ctx->pc) {
        case 0x367858u: goto label_367858;
        case 0x367870u: goto label_367870;
        case 0x367884u: goto label_367884;
        case 0x367894u: goto label_367894;
        case 0x3678a0u: goto label_3678a0;
        default: break;
    }

    ctx->pc = 0x367834u;

    // 0x367834: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x367834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x367838: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x367838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36783c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x36783cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x367840: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367844: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367848: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x367848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36784c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x36784cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x367850: 0xc058f50  jal         func_163D40
    ctx->pc = 0x367850u;
    SET_GPR_U32(ctx, 31, 0x367858u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x367850u, 0x367858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367858u;
label_367858:
    // 0x367858: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36785c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x36785cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x367860: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367864: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x367864u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x367868: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x367868u;
    SET_GPR_U32(ctx, 31, 0x367870u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x367868u, 0x367870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367870u;
label_367870:
    // 0x367870: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367874: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367878: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x367878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36787c: 0xc05cd58  jal         func_173560
    ctx->pc = 0x36787Cu;
    SET_GPR_U32(ctx, 31, 0x367884u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x36787Cu, 0x367884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367884u;
label_367884:
    // 0x367884: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367888: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x367888u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36788c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x36788Cu;
    SET_GPR_U32(ctx, 31, 0x367894u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x36788Cu, 0x367894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367894u;
label_367894:
    // 0x367894: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367898: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x367898u;
    SET_GPR_U32(ctx, 31, 0x3678A0u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x367898u, 0x3678A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3678A0u;
label_3678a0:
    // 0x3678a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3678a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3678a4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3678a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3678a8: 0x10600086  beqz        $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x3678A8u;
    {
        const bool branch_taken_0x3678a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3678a8) {
            ctx->pc = 0x367AC4u;
            return;
        }
    }
    ctx->pc = 0x3678B0u;
    // 0x3678b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3678b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3678b4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3678b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3678b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3678b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3678bc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3678bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3678c0: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x3678C0u;
    {
        const bool branch_taken_0x3678c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3678c0) {
            ctx->pc = 0x367AC4u;
            return;
        }
    }
    ctx->pc = 0x3678C8u;
}
