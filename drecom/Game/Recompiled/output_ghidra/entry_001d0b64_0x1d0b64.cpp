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

// Function: entry_001d0b64
// Address: 0x1d0b64 - 0x1d0be8
void entry_001d0b64_0x1d0b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0b64_0x1d0b64");
#endif

    switch (ctx->pc) {
        case 0x1d0b74u: goto label_1d0b74;
        case 0x1d0b80u: goto label_1d0b80;
        case 0x1d0b94u: goto label_1d0b94;
        case 0x1d0ba0u: goto label_1d0ba0;
        default: break;
    }

    ctx->pc = 0x1d0b64u;

    // 0x1d0b64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0b68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d0b68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0b6c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1D0B6Cu;
    SET_GPR_U32(ctx, 31, 0x1D0B74u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1D0B6Cu, 0x1D0B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B74u;
label_1d0b74:
    // 0x1d0b74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0b78: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1D0B78u;
    SET_GPR_U32(ctx, 31, 0x1D0B80u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1D0B78u, 0x1D0B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B80u;
label_1d0b80:
    // 0x1d0b80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d0b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0b84: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0b88: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d0b88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0b8c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1D0B8Cu;
    SET_GPR_U32(ctx, 31, 0x1D0B94u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1D0B8Cu, 0x1D0B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B94u;
label_1d0b94:
    // 0x1d0b94: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d0b94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0b98: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1D0B98u;
    SET_GPR_U32(ctx, 31, 0x1D0BA0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1D0B98u, 0x1D0BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0BA0u;
label_1d0ba0:
    // 0x1d0ba0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0ba4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1d0ba4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1d0ba8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1D0BA8u;
    {
        const bool branch_taken_0x1d0ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0ba8) {
            ctx->pc = 0x1D0BE8u;
            return;
        }
    }
    ctx->pc = 0x1D0BB0u;
    // 0x1d0bb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0bb4: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1d0bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0bb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d0bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0bbc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0bc0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1d0bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d0bc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0bc8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1d0bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0bcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0bd0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1d0bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0bd4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0bd8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1d0bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0bdc: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1d0bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1d0be0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0be4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1d0be4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1d0be8u;
}
