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

// Function: entry_001486e0
// Address: 0x1486e0 - 0x14873c
void entry_001486e0_0x1486e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001486e0_0x1486e0");
#endif

    switch (ctx->pc) {
        case 0x1486f4u: goto label_1486f4;
        case 0x148708u: goto label_148708;
        case 0x148714u: goto label_148714;
        default: break;
    }

    ctx->pc = 0x1486e0u;

    // 0x1486e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1486e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1486e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1486e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1486e8: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1486e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1486ec: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1486ECu;
    SET_GPR_U32(ctx, 31, 0x1486F4u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1486ECu, 0x1486F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1486F4u;
label_1486f4:
    // 0x1486f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1486f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1486f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1486f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1486fc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1486fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x148700: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x148700u;
    SET_GPR_U32(ctx, 31, 0x148708u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x148700u, 0x148708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148708u;
label_148708:
    // 0x148708: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x148708u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14870c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14870Cu;
    SET_GPR_U32(ctx, 31, 0x148714u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14870Cu, 0x148714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148714u;
label_148714:
    // 0x148714: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148718: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x148718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14871c: 0x106000ed  beqz        $v1, . + 4 + (0xED << 2)
    ctx->pc = 0x14871Cu;
    {
        const bool branch_taken_0x14871c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14871c) {
            ctx->pc = 0x148AD4u;
            return;
        }
    }
    ctx->pc = 0x148724u;
    // 0x148724: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148728: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x148728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14872c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14872cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x148730: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x148730u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x148734: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x148734u;
    {
        const bool branch_taken_0x148734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148734) {
            ctx->pc = 0x148AD4u;
            return;
        }
    }
    ctx->pc = 0x14873Cu;
}
