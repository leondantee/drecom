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

// Function: entry_0012ab7c
// Address: 0x12ab7c - 0x12ac20
void entry_0012ab7c_0x12ab7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ab7c_0x12ab7c");
#endif

    switch (ctx->pc) {
        case 0x12ab8cu: goto label_12ab8c;
        case 0x12ab98u: goto label_12ab98;
        case 0x12aba8u: goto label_12aba8;
        case 0x12abb4u: goto label_12abb4;
        case 0x12abccu: goto label_12abcc;
        default: break;
    }

    ctx->pc = 0x12ab7cu;

    // 0x12ab7c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ab80: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12ab80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12ab84: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12AB84u;
    SET_GPR_U32(ctx, 31, 0x12AB8Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12AB84u, 0x12AB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AB8Cu;
label_12ab8c:
    // 0x12ab8c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ab90: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12AB90u;
    SET_GPR_U32(ctx, 31, 0x12AB98u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12AB90u, 0x12AB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AB98u;
label_12ab98:
    // 0x12ab98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ab9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12ab9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12aba0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12ABA0u;
    SET_GPR_U32(ctx, 31, 0x12ABA8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12ABA0u, 0x12ABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ABA8u;
label_12aba8:
    // 0x12aba8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12aba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12abac: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12ABACu;
    SET_GPR_U32(ctx, 31, 0x12ABB4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12ABACu, 0x12ABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ABB4u;
label_12abb4:
    // 0x12abb4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12abb8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12abb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12abbc: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x12ABBCu;
    {
        const bool branch_taken_0x12abbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12abbc) {
            ctx->pc = 0x12ACD8u;
            return;
        }
    }
    ctx->pc = 0x12ABC4u;
    // 0x12abc4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x12ABC4u;
    SET_GPR_U32(ctx, 31, 0x12ABCCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12ABC4u, 0x12ABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ABCCu;
label_12abcc:
    // 0x12abcc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12abccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12abd0: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x12abd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x12abd4: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x12ABD4u;
    {
        const bool branch_taken_0x12abd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12abd4) {
            ctx->pc = 0x12ACD8u;
            return;
        }
    }
    ctx->pc = 0x12ABDCu;
    // 0x12abdc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12abe0: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12abe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12abe4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12abe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12abe8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x12abe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x12abec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12abecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12abf0: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x12ABF0u;
    {
        const bool branch_taken_0x12abf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12abf0) {
            ctx->pc = 0x12ACB0u;
            return;
        }
    }
    ctx->pc = 0x12ABF8u;
    // 0x12abf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12abfc: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x12ABFCu;
    {
        const bool branch_taken_0x12abfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12abfc) {
            ctx->pc = 0x12AC80u;
            return;
        }
    }
    ctx->pc = 0x12AC04u;
    // 0x12ac04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ac08: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12AC08u;
    {
        const bool branch_taken_0x12ac08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12ac08) {
            ctx->pc = 0x12AC50u;
            return;
        }
    }
    ctx->pc = 0x12AC10u;
    // 0x12ac10: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AC10u;
    {
        const bool branch_taken_0x12ac10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ac10) {
            ctx->pc = 0x12AC20u;
            return;
        }
    }
    ctx->pc = 0x12AC18u;
    // 0x12ac18: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12AC18u;
    {
        const bool branch_taken_0x12ac18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ac18) {
            ctx->pc = 0x12AC20u;
            return;
        }
    }
    ctx->pc = 0x12AC20u;
}
