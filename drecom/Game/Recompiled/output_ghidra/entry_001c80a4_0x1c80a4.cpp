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

// Function: entry_001c80a4
// Address: 0x1c80a4 - 0x1c8100
void entry_001c80a4_0x1c80a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c80a4_0x1c80a4");
#endif

    switch (ctx->pc) {
        case 0x1c80b0u: goto label_1c80b0;
        case 0x1c80c8u: goto label_1c80c8;
        case 0x1c80d8u: goto label_1c80d8;
        default: break;
    }

    ctx->pc = 0x1c80a4u;

    // 0x1c80a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c80a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c80a8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C80A8u;
    SET_GPR_U32(ctx, 31, 0x1C80B0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C80A8u, 0x1C80B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80B0u;
label_1c80b0:
    // 0x1c80b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c80b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c80b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c80b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c80b8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c80b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c80bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c80bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c80c0: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C80C0u;
    SET_GPR_U32(ctx, 31, 0x1C80C8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C80C0u, 0x1C80C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80C8u;
label_1c80c8:
    // 0x1c80c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c80c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c80cc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c80ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c80d0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C80D0u;
    SET_GPR_U32(ctx, 31, 0x1C80D8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C80D0u, 0x1C80D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80D8u;
label_1c80d8:
    // 0x1c80d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c80d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c80dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c80dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c80e0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1c80e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1c80e4: 0x1060009f  beqz        $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x1C80E4u;
    {
        const bool branch_taken_0x1c80e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c80e4) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C80ECu;
    // 0x1c80ec: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c80ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c80f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c80f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c80f4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c80f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c80f8: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1C80F8u;
    {
        const bool branch_taken_0x1c80f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c80f8) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C8100u;
}
