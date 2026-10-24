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
// Address: 0x36a690 - 0x36a720
void caseD_7_0x36a690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x36a690");
#endif

    switch (ctx->pc) {
        case 0x36a6a0u: goto label_36a6a0;
        case 0x36a6acu: goto label_36a6ac;
        case 0x36a6c0u: goto label_36a6c0;
        case 0x36a6ccu: goto label_36a6cc;
        default: break;
    }

    ctx->pc = 0x36a690u;

    // 0x36a690: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a694: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36a694u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36a698: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36A698u;
    SET_GPR_U32(ctx, 31, 0x36A6A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36A698u, 0x36A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A6A0u;
label_36a6a0:
    // 0x36a6a0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a6a4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36A6A4u;
    SET_GPR_U32(ctx, 31, 0x36A6ACu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36A6A4u, 0x36A6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A6ACu;
label_36a6ac:
    // 0x36a6ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36a6acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36a6b0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a6b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36a6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a6b8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x36A6B8u;
    SET_GPR_U32(ctx, 31, 0x36A6C0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x36A6B8u, 0x36A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A6C0u;
label_36a6c0:
    // 0x36a6c0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36a6c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36a6c4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x36A6C4u;
    SET_GPR_U32(ctx, 31, 0x36A6CCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x36A6C4u, 0x36A6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A6CCu;
label_36a6cc:
    // 0x36a6cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a6d0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36a6d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36a6d4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x36A6D4u;
    {
        const bool branch_taken_0x36a6d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a6d4) {
            ctx->pc = 0x36A720u;
            return;
        }
    }
    ctx->pc = 0x36A6DCu;
    // 0x36a6dc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x36a6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36a6e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a6e4: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x36a6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x36a6e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36a6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a6ec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a6f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36a6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36a6f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a6f8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x36a6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a6fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a700: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36a700u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a704: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a708: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36a708u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a70c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x36a70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36a710: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a714: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x36a714u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x36a718: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x36A718u;
    {
        const bool branch_taken_0x36a718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a718) {
            ctx->pc = 0x36A720u;
            return;
        }
    }
    ctx->pc = 0x36A720u;
}
