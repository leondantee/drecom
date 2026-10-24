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
// Address: 0x367bb0 - 0x367c44
void caseD_1_0x367bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x367bb0");
#endif

    switch (ctx->pc) {
        case 0x367bd4u: goto label_367bd4;
        case 0x367becu: goto label_367bec;
        case 0x367c00u: goto label_367c00;
        case 0x367c10u: goto label_367c10;
        case 0x367c1cu: goto label_367c1c;
        default: break;
    }

    ctx->pc = 0x367bb0u;

    // 0x367bb0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367bb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367bb8: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x367bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x367bbc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x367bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x367bc0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x367bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x367bc4: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x367bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x367bc8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x367bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x367bcc: 0xc058f50  jal         func_163D40
    ctx->pc = 0x367BCCu;
    SET_GPR_U32(ctx, 31, 0x367BD4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x367BCCu, 0x367BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367BD4u;
label_367bd4:
    // 0x367bd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367bd8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x367bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x367bdc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367be0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x367be0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x367be4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x367BE4u;
    SET_GPR_U32(ctx, 31, 0x367BECu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x367BE4u, 0x367BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367BECu;
label_367bec:
    // 0x367bec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367bf0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367bf4: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x367bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x367bf8: 0xc05cd58  jal         func_173560
    ctx->pc = 0x367BF8u;
    SET_GPR_U32(ctx, 31, 0x367C00u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x367BF8u, 0x367C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C00u;
label_367c00:
    // 0x367c00: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367c04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x367c04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x367c08: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x367C08u;
    SET_GPR_U32(ctx, 31, 0x367C10u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x367C08u, 0x367C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C10u;
label_367c10:
    // 0x367c10: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367c14: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x367C14u;
    SET_GPR_U32(ctx, 31, 0x367C1Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x367C14u, 0x367C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C1Cu;
label_367c1c:
    // 0x367c1c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367c20: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x367c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x367c24: 0x10600086  beqz        $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x367C24u;
    {
        const bool branch_taken_0x367c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367c24) {
            ctx->pc = 0x367E40u;
            return;
        }
    }
    ctx->pc = 0x367C2Cu;
    // 0x367c2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367c30: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x367c30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x367c34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x367c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x367c38: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x367c38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x367c3c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x367C3Cu;
    {
        const bool branch_taken_0x367c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x367c3c) {
            ctx->pc = 0x367E40u;
            return;
        }
    }
    ctx->pc = 0x367C44u;
}
