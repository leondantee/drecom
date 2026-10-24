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

// Function: caseD_3
// Address: 0x13a014 - 0x13a0b0
void caseD_3_0x13a014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x13a014");
#endif

    switch (ctx->pc) {
        case 0x13a024u: goto label_13a024;
        case 0x13a030u: goto label_13a030;
        case 0x13a044u: goto label_13a044;
        case 0x13a050u: goto label_13a050;
        default: break;
    }

    ctx->pc = 0x13a014u;

    // 0x13a014: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a018: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13a018u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13a01c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x13A01Cu;
    SET_GPR_U32(ctx, 31, 0x13A024u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x13A01Cu, 0x13A024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A024u;
label_13a024:
    // 0x13a024: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a028: 0xc05cd10  jal         func_173440
    ctx->pc = 0x13A028u;
    SET_GPR_U32(ctx, 31, 0x13A030u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x13A028u, 0x13A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A030u;
label_13a030:
    // 0x13a030: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13a030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13a034: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a038: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13a038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a03c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x13A03Cu;
    SET_GPR_U32(ctx, 31, 0x13A044u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x13A03Cu, 0x13A044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A044u;
label_13a044:
    // 0x13a044: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x13a044u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13a048: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x13A048u;
    SET_GPR_U32(ctx, 31, 0x13A050u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x13A048u, 0x13A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A050u;
label_13a050:
    // 0x13a050: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a054: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x13a054u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x13a058: 0x1060009d  beqz        $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x13A058u;
    {
        const bool branch_taken_0x13a058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a058) {
            ctx->pc = 0x13A2D0u;
            return;
        }
    }
    ctx->pc = 0x13A060u;
    // 0x13a060: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a064: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x13a064u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x13a068: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x13a068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13a06c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13a06cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13a070: 0x461000f  bgez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x13A070u;
    {
        const bool branch_taken_0x13a070 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x13a070) {
            ctx->pc = 0x13A0B0u;
            return;
        }
    }
    ctx->pc = 0x13A078u;
    // 0x13a078: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x13a078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13a07c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a080: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x13a080u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x13a084: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13a084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a088: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a08c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x13a08cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x13a090: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a094: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x13a094u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a098: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a09c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x13a09cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a0a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a0a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x13a0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x13a0a8: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x13A0A8u;
    {
        const bool branch_taken_0x13a0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a0a8) {
            ctx->pc = 0x13A2D0u;
            return;
        }
    }
    ctx->pc = 0x13A0B0u;
}
