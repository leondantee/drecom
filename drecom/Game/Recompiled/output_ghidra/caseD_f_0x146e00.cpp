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

// Function: caseD_f
// Address: 0x146e00 - 0x146e80
void caseD_f_0x146e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x146e00");
#endif

    switch (ctx->pc) {
        case 0x146e14u: goto label_146e14;
        case 0x146e24u: goto label_146e24;
        case 0x146e44u: goto label_146e44;
        case 0x146e54u: goto label_146e54;
        default: break;
    }

    ctx->pc = 0x146e00u;

    // 0x146e00: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x146e00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146e04: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x146e04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x146e08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x146e08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x146e0c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x146E0Cu;
    SET_GPR_U32(ctx, 31, 0x146E14u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x146E0Cu, 0x146E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146E14u;
label_146e14:
    // 0x146e14: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x146e14u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146e18: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146e1c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x146E1Cu;
    SET_GPR_U32(ctx, 31, 0x146E24u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x146E1Cu, 0x146E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146E24u;
label_146e24:
    // 0x146e24: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x146e24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146e28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x146e28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x146e2c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x146e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146e30: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x146e30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x146e34: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x146e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x146e38: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x146e38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x146e3c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x146E3Cu;
    SET_GPR_U32(ctx, 31, 0x146E44u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x146E3Cu, 0x146E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146E44u;
label_146e44:
    // 0x146e44: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x146e44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146e48: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x146e48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x146e4c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x146E4Cu;
    SET_GPR_U32(ctx, 31, 0x146E54u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x146E4Cu, 0x146E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146E54u;
label_146e54:
    // 0x146e54: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x146e54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146e58: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x146e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146e5c: 0x90c309e7  lbu         $v1, 0x9E7($a2)
    ctx->pc = 0x146e5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2535)));
    // 0x146e60: 0x106001e9  beqz        $v1, . + 4 + (0x1E9 << 2)
    ctx->pc = 0x146E60u;
    {
        const bool branch_taken_0x146e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146e60) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x146E68u;
    // 0x146e68: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146e6c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x146e6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x146e70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x146e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x146e74: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x146e74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x146e78: 0x100001e3  b           . + 4 + (0x1E3 << 2)
    ctx->pc = 0x146E78u;
    {
        const bool branch_taken_0x146e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146e78) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x146E80u;
}
