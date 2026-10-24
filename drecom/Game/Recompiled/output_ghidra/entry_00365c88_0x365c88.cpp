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

// Function: entry_00365c88
// Address: 0x365c88 - 0x365d34
void entry_00365c88_0x365c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00365c88_0x365c88");
#endif

    switch (ctx->pc) {
        case 0x365ca0u: goto label_365ca0;
        case 0x365cccu: goto label_365ccc;
        case 0x365ce4u: goto label_365ce4;
        case 0x365cf0u: goto label_365cf0;
        case 0x365d00u: goto label_365d00;
        case 0x365d0cu: goto label_365d0c;
        default: break;
    }

    ctx->pc = 0x365c88u;

    // 0x365c88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365c8c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x365c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x365c90: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x365c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x365c94: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x365c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x365c98: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x365C98u;
    SET_GPR_U32(ctx, 31, 0x365CA0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x365C98u, 0x365CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365CA0u;
label_365ca0:
    // 0x365ca0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365ca4: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x365ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x365ca8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365cac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365cb0: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x365cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x365cb4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x365cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x365cb8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x365cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x365cbc: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x365cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x365cc0: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x365cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x365cc4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x365CC4u;
    SET_GPR_U32(ctx, 31, 0x365CCCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x365CC4u, 0x365CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365CCCu;
label_365ccc:
    // 0x365ccc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365cd0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x365cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x365cd4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365cd8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365cd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365cdc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x365CDCu;
    SET_GPR_U32(ctx, 31, 0x365CE4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x365CDCu, 0x365CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365CE4u;
label_365ce4:
    // 0x365ce4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365ce8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x365CE8u;
    SET_GPR_U32(ctx, 31, 0x365CF0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x365CE8u, 0x365CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365CF0u;
label_365cf0:
    // 0x365cf0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365cf4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365cf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365cf8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x365CF8u;
    SET_GPR_U32(ctx, 31, 0x365D00u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x365CF8u, 0x365D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D00u;
label_365d00:
    // 0x365d00: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365d04: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x365D04u;
    SET_GPR_U32(ctx, 31, 0x365D0Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x365D04u, 0x365D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D0Cu;
label_365d0c:
    // 0x365d0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365d10: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x365d10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x365d14: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x365D14u;
    {
        const bool branch_taken_0x365d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365d14) {
            ctx->pc = 0x365E70u;
            return;
        }
    }
    ctx->pc = 0x365D1Cu;
    // 0x365d1c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365d20: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x365d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x365d24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x365d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x365d28: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x365d28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x365d2c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x365D2Cu;
    {
        const bool branch_taken_0x365d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365d2c) {
            ctx->pc = 0x365E70u;
            return;
        }
    }
    ctx->pc = 0x365D34u;
}
