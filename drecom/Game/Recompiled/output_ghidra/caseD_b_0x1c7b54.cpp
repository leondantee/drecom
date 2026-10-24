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

// Function: caseD_b
// Address: 0x1c7b54 - 0x1c7bf8
void caseD_b_0x1c7b54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x1c7b54");
#endif

    switch (ctx->pc) {
        case 0x1c7b78u: goto label_1c7b78;
        case 0x1c7b88u: goto label_1c7b88;
        case 0x1c7ba0u: goto label_1c7ba0;
        case 0x1c7bb0u: goto label_1c7bb0;
        default: break;
    }

    ctx->pc = 0x1c7b54u;

    // 0x1c7b54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7b58: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c7b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c7b5c: 0x3c028040  lui         $v0, 0x8040
    ctx->pc = 0x1c7b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32832 << 16));
    // 0x1c7b60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c7b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c7b64: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1c7b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1c7b68: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7b6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c7b6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c7b70: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C7B70u;
    SET_GPR_U32(ctx, 31, 0x1C7B78u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C7B70u, 0x1C7B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B78u;
label_1c7b78:
    // 0x1c7b78: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c7b78u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7b7c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7b80: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C7B80u;
    SET_GPR_U32(ctx, 31, 0x1C7B88u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C7B80u, 0x1C7B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B88u;
label_1c7b88:
    // 0x1c7b88: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1c7b88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7b8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c7b8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c7b90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7b94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c7b94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c7b98: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C7B98u;
    SET_GPR_U32(ctx, 31, 0x1C7BA0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C7B98u, 0x1C7BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BA0u;
label_1c7ba0:
    // 0x1c7ba0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c7ba0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7ba4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c7ba4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c7ba8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C7BA8u;
    SET_GPR_U32(ctx, 31, 0x1C7BB0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C7BA8u, 0x1C7BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7BB0u;
label_1c7bb0:
    // 0x1c7bb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c7bb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7bb4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7bb8: 0x946409ee  lhu         $a0, 0x9EE($v1)
    ctx->pc = 0x1c7bb8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2542)));
    // 0x1c7bbc: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1c7bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1c7bc0: 0x28650008  slti        $a1, $v1, 0x8
    ctx->pc = 0x1c7bc0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c7bc4: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C7BC4u;
    {
        const bool branch_taken_0x1c7bc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7bc4) {
            ctx->pc = 0x1C7BF8u;
            return;
        }
    }
    ctx->pc = 0x1C7BCCu;
    // 0x1c7bcc: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x1c7bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1c7bd0: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x1c7bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x1c7bd4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C7BD4u;
    {
        const bool branch_taken_0x1c7bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7bd4) {
            ctx->pc = 0x1C7BF8u;
            return;
        }
    }
    ctx->pc = 0x1C7BDCu;
    // 0x1c7bdc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7be0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c7be0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7be4: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c7be4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7be8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1c7be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c7bec: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1c7becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1c7bf0: 0x652025  or          $a0, $v1, $a1
    ctx->pc = 0x1c7bf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1c7bf4: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1c7bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    ctx->pc = 0x1c7bf8u;
}
