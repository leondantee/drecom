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
// Address: 0x132af4 - 0x132b78
void caseD_7_0x132af4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x132af4");
#endif

    switch (ctx->pc) {
        case 0x132b04u: goto label_132b04;
        case 0x132b10u: goto label_132b10;
        case 0x132b20u: goto label_132b20;
        case 0x132b2cu: goto label_132b2c;
        default: break;
    }

    ctx->pc = 0x132af4u;

    // 0x132af4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132af8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x132af8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x132afc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x132AFCu;
    SET_GPR_U32(ctx, 31, 0x132B04u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x132AFCu, 0x132B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B04u;
label_132b04:
    // 0x132b04: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132b08: 0xc05cd10  jal         func_173440
    ctx->pc = 0x132B08u;
    SET_GPR_U32(ctx, 31, 0x132B10u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x132B08u, 0x132B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B10u;
label_132b10:
    // 0x132b10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132b14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x132b14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x132b18: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x132B18u;
    SET_GPR_U32(ctx, 31, 0x132B20u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x132B18u, 0x132B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B20u;
label_132b20:
    // 0x132b20: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132b24: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x132B24u;
    SET_GPR_U32(ctx, 31, 0x132B2Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x132B24u, 0x132B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B2Cu;
label_132b2c:
    // 0x132b2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132b30: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x132b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x132b34: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x132B34u;
    {
        const bool branch_taken_0x132b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132b34) {
            ctx->pc = 0x132B78u;
            return;
        }
    }
    ctx->pc = 0x132B3Cu;
    // 0x132b3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x132b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132b40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132b44: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x132b44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x132b48: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x132b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x132b4c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132b50: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x132b50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x132b54: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132b58: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x132b58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x132b5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132b60: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x132b60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x132b64: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132b68: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x132b68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x132b6c: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x132b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x132b70: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x132B70u;
    {
        const bool branch_taken_0x132b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132b70) {
            ctx->pc = 0x132B78u;
            return;
        }
    }
    ctx->pc = 0x132B78u;
}
