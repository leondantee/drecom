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

// Function: caseD_d
// Address: 0x146d54 - 0x146dc8
void caseD_d_0x146d54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x146d54");
#endif

    switch (ctx->pc) {
        case 0x146d68u: goto label_146d68;
        case 0x146d78u: goto label_146d78;
        case 0x146d94u: goto label_146d94;
        case 0x146da4u: goto label_146da4;
        default: break;
    }

    ctx->pc = 0x146d54u;

    // 0x146d54: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x146d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146d58: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x146d58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x146d5c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x146d5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x146d60: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x146D60u;
    SET_GPR_U32(ctx, 31, 0x146D68u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x146D60u, 0x146D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146D68u;
label_146d68:
    // 0x146d68: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x146d68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146d6c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x146d6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x146d70: 0xc05cd10  jal         func_173440
    ctx->pc = 0x146D70u;
    SET_GPR_U32(ctx, 31, 0x146D78u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x146D70u, 0x146D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146D78u;
label_146d78:
    // 0x146d78: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x146d78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146d7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x146d7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x146d80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146d84: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x146d84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146d88: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x146d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x146d8c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x146D8Cu;
    SET_GPR_U32(ctx, 31, 0x146D94u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x146D8Cu, 0x146D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146D94u;
label_146d94:
    // 0x146d94: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146d94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146d98: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x146d98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x146d9c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x146D9Cu;
    SET_GPR_U32(ctx, 31, 0x146DA4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x146D9Cu, 0x146DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146DA4u;
label_146da4:
    // 0x146da4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146da8: 0x908509e7  lbu         $a1, 0x9E7($a0)
    ctx->pc = 0x146da8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x146dac: 0x10a00216  beqz        $a1, . + 4 + (0x216 << 2)
    ctx->pc = 0x146DACu;
    {
        const bool branch_taken_0x146dac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x146dac) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x146DB4u;
    // 0x146db4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x146db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x146db8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146dbc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x146dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x146dc0: 0x10000211  b           . + 4 + (0x211 << 2)
    ctx->pc = 0x146DC0u;
    {
        const bool branch_taken_0x146dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146dc0) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x146DC8u;
}
