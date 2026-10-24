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

// Function: caseD_7
// Address: 0x2ddbc4 - 0x2ddc50
void caseD_7_0x2ddbc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x2ddbc4");
#endif

    switch (ctx->pc) {
        case 0x2ddbd4u: goto label_2ddbd4;
        case 0x2ddbe4u: goto label_2ddbe4;
        case 0x2ddbf4u: goto label_2ddbf4;
        case 0x2ddc08u: goto label_2ddc08;
        default: break;
    }

    ctx->pc = 0x2ddbc4u;

    // 0x2ddbc4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddbc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ddbc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ddbcc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DDBCCu;
    SET_GPR_U32(ctx, 31, 0x2DDBD4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DDBCCu, 0x2DDBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDBD4u;
label_2ddbd4:
    // 0x2ddbd4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2ddbd4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ddbd8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddbdc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DDBDCu;
    SET_GPR_U32(ctx, 31, 0x2DDBE4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DDBDCu, 0x2DDBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDBE4u;
label_2ddbe4:
    // 0x2ddbe4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddbe8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ddbe8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ddbec: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DDBECu;
    SET_GPR_U32(ctx, 31, 0x2DDBF4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DDBECu, 0x2DDBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDBF4u;
label_2ddbf4:
    // 0x2ddbf4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2ddbf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ddbf8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2ddbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddbfc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2ddbfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2ddc00: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DDC00u;
    SET_GPR_U32(ctx, 31, 0x2DDC08u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DDC00u, 0x2DDC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC08u;
label_2ddc08:
    // 0x2ddc08: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2ddc08u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ddc0c: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x2ddc0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddc10: 0x910309e7  lbu         $v1, 0x9E7($t0)
    ctx->pc = 0x2ddc10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2535)));
    // 0x2ddc14: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x2DDC14u;
    {
        const bool branch_taken_0x2ddc14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddc14) {
            ctx->pc = 0x2DDDC8u;
            return;
        }
    }
    ctx->pc = 0x2DDC1Cu;
    // 0x2ddc1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ddc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ddc20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddc24: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2ddc24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ddc28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddc2c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2ddc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ddc30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddc34: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2ddc34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ddc38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddc3c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2ddc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ddc40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddc44: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2ddc44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2ddc48: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2DDC48u;
    {
        const bool branch_taken_0x2ddc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddc48) {
            ctx->pc = 0x2DDDC8u;
            return;
        }
    }
    ctx->pc = 0x2DDC50u;
}
