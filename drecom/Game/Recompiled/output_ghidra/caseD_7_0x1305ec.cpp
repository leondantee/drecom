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
// Address: 0x1305ec - 0x130678
void caseD_7_0x1305ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1305ec");
#endif

    switch (ctx->pc) {
        case 0x130600u: goto label_130600;
        case 0x13060cu: goto label_13060c;
        case 0x13061cu: goto label_13061c;
        case 0x13062cu: goto label_13062c;
        default: break;
    }

    ctx->pc = 0x1305ecu;

    // 0x1305ec: 0x8fa800b8  lw          $t0, 0xB8($sp)
    ctx->pc = 0x1305ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1305f0: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x1305f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1305f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1305f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1305f8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1305F8u;
    SET_GPR_U32(ctx, 31, 0x130600u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1305F8u, 0x130600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130600u;
label_130600:
    // 0x130600: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x130600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130604: 0xc05cd10  jal         func_173440
    ctx->pc = 0x130604u;
    SET_GPR_U32(ctx, 31, 0x13060Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x130604u, 0x13060Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13060Cu;
label_13060c:
    // 0x13060c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x13060cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130610: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x130610u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x130614: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x130614u;
    SET_GPR_U32(ctx, 31, 0x13061Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x130614u, 0x13061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13061Cu;
label_13061c:
    // 0x13061c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13061cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130620: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x130620u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x130624: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x130624u;
    SET_GPR_U32(ctx, 31, 0x13062Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x130624u, 0x13062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13062Cu;
label_13062c:
    // 0x13062c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x13062cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130630: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x130630u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x130634: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x130634u;
    {
        const bool branch_taken_0x130634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x130634) {
            ctx->pc = 0x130678u;
            return;
        }
    }
    ctx->pc = 0x13063Cu;
    // 0x13063c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13063cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130640: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x130640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130644: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x130644u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x130648: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x130648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13064c: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x13064cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130650: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x130650u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x130654: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x130654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130658: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x130658u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13065c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x13065cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130660: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x130660u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x130664: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x130664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130668: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x130668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x13066c: 0xa620007c  sh          $zero, 0x7C($s1)
    ctx->pc = 0x13066cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x130670: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x130670u;
    {
        const bool branch_taken_0x130670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130670) {
            ctx->pc = 0x130678u;
            return;
        }
    }
    ctx->pc = 0x130678u;
}
