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
// Address: 0x34b28c - 0x34b34c
void caseD_7_0x34b28c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x34b28c");
#endif

    switch (ctx->pc) {
        case 0x34b29cu: goto label_34b29c;
        case 0x34b2acu: goto label_34b2ac;
        case 0x34b2bcu: goto label_34b2bc;
        case 0x34b2ccu: goto label_34b2cc;
        default: break;
    }

    ctx->pc = 0x34b28cu;

    // 0x34b28c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b290: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34b290u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34b294: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34B294u;
    SET_GPR_U32(ctx, 31, 0x34B29Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34B294u, 0x34B29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B29Cu;
label_34b29c:
    // 0x34b29c: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x34b29cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b2a0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x34b2a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x34b2a4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34B2A4u;
    SET_GPR_U32(ctx, 31, 0x34B2ACu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34B2A4u, 0x34B2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B2ACu;
label_34b2ac:
    // 0x34b2ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b2b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34b2b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34b2b4: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34B2B4u;
    SET_GPR_U32(ctx, 31, 0x34B2BCu);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34B2B4u, 0x34B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B2BCu;
label_34b2bc:
    // 0x34b2bc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34b2bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34b2c0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b2c4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34B2C4u;
    SET_GPR_U32(ctx, 31, 0x34B2CCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34B2C4u, 0x34B2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B2CCu;
label_34b2cc:
    // 0x34b2cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b2d0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34b2d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34b2d4: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x34B2D4u;
    {
        const bool branch_taken_0x34b2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b2d4) {
            ctx->pc = 0x34B34Cu;
            return;
        }
    }
    ctx->pc = 0x34B2DCu;
    // 0x34b2dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34b2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b2e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b2e4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34b2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34b2e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34b2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b2ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b2f0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34b2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34b2f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b2f8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34b2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34b2fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b300: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34b300u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34b304: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b308: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34b308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34b30c: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x34b30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34b310: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b314: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34b314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34b318: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x34b318u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x34b31c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b320: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34b320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34b324: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34b324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34b328: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x34b328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34b32c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34b32cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34b330: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34b330u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x34b334: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b338: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34b338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34b33c: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34b33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34b340: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x34b340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x34b344: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x34b344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34b348: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x34b348u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    ctx->pc = 0x34b34cu;
}
