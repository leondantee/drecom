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
// Address: 0x146c9c - 0x146d14
void caseD_b_0x146c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x146c9c");
#endif

    switch (ctx->pc) {
        case 0x146cb0u: goto label_146cb0;
        case 0x146cc0u: goto label_146cc0;
        case 0x146cd8u: goto label_146cd8;
        case 0x146ce8u: goto label_146ce8;
        default: break;
    }

    ctx->pc = 0x146c9cu;

    // 0x146c9c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x146c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146ca0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x146ca0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x146ca4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x146ca4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x146ca8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x146CA8u;
    SET_GPR_U32(ctx, 31, 0x146CB0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x146CA8u, 0x146CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146CB0u;
label_146cb0:
    // 0x146cb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146cb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146cb4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146cb8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x146CB8u;
    SET_GPR_U32(ctx, 31, 0x146CC0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x146CB8u, 0x146CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146CC0u;
label_146cc0:
    // 0x146cc0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146cc0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146cc4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x146cc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x146cc8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146ccc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x146cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x146cd0: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x146CD0u;
    SET_GPR_U32(ctx, 31, 0x146CD8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x146CD0u, 0x146CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146CD8u;
label_146cd8:
    // 0x146cd8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x146cd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146cdc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x146cdcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x146ce0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x146CE0u;
    SET_GPR_U32(ctx, 31, 0x146CE8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x146CE0u, 0x146CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146CE8u;
label_146ce8:
    // 0x146ce8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146ce8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146cec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146cf0: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x146cf0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x146cf4: 0x10a00244  beqz        $a1, . + 4 + (0x244 << 2)
    ctx->pc = 0x146CF4u;
    {
        const bool branch_taken_0x146cf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x146cf4) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x146CFCu;
    // 0x146cfc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146d00: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x146d00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x146d04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x146d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x146d08: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x146d08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x146d0c: 0x1000023e  b           . + 4 + (0x23E << 2)
    ctx->pc = 0x146D0Cu;
    {
        const bool branch_taken_0x146d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146d0c) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x146D14u;
}
