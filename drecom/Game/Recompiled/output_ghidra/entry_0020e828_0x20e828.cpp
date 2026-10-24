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

// Function: entry_0020e828
// Address: 0x20e828 - 0x20e89c
void entry_0020e828_0x20e828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020e828_0x20e828");
#endif

    switch (ctx->pc) {
        case 0x20e838u: goto label_20e838;
        case 0x20e844u: goto label_20e844;
        case 0x20e854u: goto label_20e854;
        case 0x20e860u: goto label_20e860;
        default: break;
    }

    ctx->pc = 0x20e828u;

    // 0x20e828: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e82c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20e82cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20e830: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20E830u;
    SET_GPR_U32(ctx, 31, 0x20E838u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20E830u, 0x20E838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E838u;
label_20e838:
    // 0x20e838: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e83c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x20E83Cu;
    SET_GPR_U32(ctx, 31, 0x20E844u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x20E83Cu, 0x20E844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E844u;
label_20e844:
    // 0x20e844: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e848: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20e848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e84c: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20E84Cu;
    SET_GPR_U32(ctx, 31, 0x20E854u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20E84Cu, 0x20E854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E854u;
label_20e854:
    // 0x20e854: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e858: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20E858u;
    SET_GPR_U32(ctx, 31, 0x20E860u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20E858u, 0x20E860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E860u;
label_20e860:
    // 0x20e860: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e864: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20e864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20e868: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x20E868u;
    {
        const bool branch_taken_0x20e868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e868) {
            ctx->pc = 0x20EA3Cu;
            return;
        }
    }
    ctx->pc = 0x20E870u;
    // 0x20e870: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20e870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x20e874: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e874u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e878: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e87c: 0x24631350  addiu       $v1, $v1, 0x1350
    ctx->pc = 0x20e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4944));
    // 0x20e880: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x20e880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x20e884: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e888: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x20e888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20e88c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20e88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20e890: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x20e890u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e894: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x20E894u;
    {
        const bool branch_taken_0x20e894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e894) {
            ctx->pc = 0x20EA3Cu;
            return;
        }
    }
    ctx->pc = 0x20E89Cu;
}
