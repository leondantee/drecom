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

// Function: entry_001c8620
// Address: 0x1c8620 - 0x1c8688
void entry_001c8620_0x1c8620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8620_0x1c8620");
#endif

    switch (ctx->pc) {
        case 0x1c8630u: goto label_1c8630;
        case 0x1c8640u: goto label_1c8640;
        case 0x1c8654u: goto label_1c8654;
        case 0x1c8660u: goto label_1c8660;
        default: break;
    }

    ctx->pc = 0x1c8620u;

    // 0x1c8620: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8624: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c8624u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c8628: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C8628u;
    SET_GPR_U32(ctx, 31, 0x1C8630u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C8628u, 0x1C8630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8630u;
label_1c8630:
    // 0x1c8630: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8634: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c8634u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c8638: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C8638u;
    SET_GPR_U32(ctx, 31, 0x1C8640u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C8638u, 0x1C8640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8640u;
label_1c8640:
    // 0x1c8640: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c8640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8644: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8648: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c8648u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c864c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C864Cu;
    SET_GPR_U32(ctx, 31, 0x1C8654u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C864Cu, 0x1C8654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8654u;
label_1c8654:
    // 0x1c8654: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c8654u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c8658: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C8658u;
    SET_GPR_U32(ctx, 31, 0x1C8660u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C8658u, 0x1C8660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8660u;
label_1c8660:
    // 0x1c8660: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8664: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x1c8664u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1c8668: 0x1080020e  beqz        $a0, . + 4 + (0x20E << 2)
    ctx->pc = 0x1C8668u;
    {
        const bool branch_taken_0x1c8668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8668) {
            ctx->pc = 0x1C8EA4u;
            return;
        }
    }
    ctx->pc = 0x1C8670u;
    // 0x1c8670: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8674: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c8674u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c8678: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c8678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c867c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1c867cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8680: 0x10000241  b           . + 4 + (0x241 << 2)
    ctx->pc = 0x1C8680u;
    {
        const bool branch_taken_0x1c8680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8680) {
            ctx->pc = 0x1C8F88u;
            return;
        }
    }
    ctx->pc = 0x1C8688u;
}
