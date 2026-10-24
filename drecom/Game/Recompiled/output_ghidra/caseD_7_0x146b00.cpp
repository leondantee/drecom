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
// Address: 0x146b00 - 0x146b6c
void caseD_7_0x146b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x146b00");
#endif

    switch (ctx->pc) {
        case 0x146b10u: goto label_146b10;
        case 0x146b1cu: goto label_146b1c;
        case 0x146b34u: goto label_146b34;
        case 0x146b44u: goto label_146b44;
        default: break;
    }

    ctx->pc = 0x146b00u;

    // 0x146b00: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146b04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x146b04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x146b08: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x146B08u;
    SET_GPR_U32(ctx, 31, 0x146B10u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x146B08u, 0x146B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146B10u;
label_146b10:
    // 0x146b10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146b14: 0xc05cd10  jal         func_173440
    ctx->pc = 0x146B14u;
    SET_GPR_U32(ctx, 31, 0x146B1Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x146B14u, 0x146B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146B1Cu;
label_146b1c:
    // 0x146b1c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146b1cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146b20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x146b20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x146b24: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146b28: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x146b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x146b2c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x146B2Cu;
    SET_GPR_U32(ctx, 31, 0x146B34u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x146B2Cu, 0x146B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146B34u;
label_146b34:
    // 0x146b34: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146b34u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146b38: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x146b38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x146b3c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x146B3Cu;
    SET_GPR_U32(ctx, 31, 0x146B44u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x146B3Cu, 0x146B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146B44u;
label_146b44:
    // 0x146b44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146b48: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x146b48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x146b4c: 0x10a002ae  beqz        $a1, . + 4 + (0x2AE << 2)
    ctx->pc = 0x146B4Cu;
    {
        const bool branch_taken_0x146b4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x146b4c) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x146B54u;
    // 0x146b54: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x146b54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146b58: 0x90c70002  lbu         $a3, 0x2($a2)
    ctx->pc = 0x146b58u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x146b5c: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x146b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x146b60: 0xa0c80002  sb          $t0, 0x2($a2)
    ctx->pc = 0x146b60u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 8));
    // 0x146b64: 0x100002a8  b           . + 4 + (0x2A8 << 2)
    ctx->pc = 0x146B64u;
    {
        const bool branch_taken_0x146b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146b64) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x146B6Cu;
}
