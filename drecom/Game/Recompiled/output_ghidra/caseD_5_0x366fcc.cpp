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

// Function: caseD_5
// Address: 0x366fcc - 0x367040
void caseD_5_0x366fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x366fcc");
#endif

    switch (ctx->pc) {
        case 0x366fdcu: goto label_366fdc;
        case 0x366fe8u: goto label_366fe8;
        case 0x366ff8u: goto label_366ff8;
        case 0x367004u: goto label_367004;
        default: break;
    }

    ctx->pc = 0x366fccu;

    // 0x366fcc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366fd0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x366fd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x366fd4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x366FD4u;
    SET_GPR_U32(ctx, 31, 0x366FDCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x366FD4u, 0x366FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366FDCu;
label_366fdc:
    // 0x366fdc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366fe0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x366FE0u;
    SET_GPR_U32(ctx, 31, 0x366FE8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x366FE0u, 0x366FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366FE8u;
label_366fe8:
    // 0x366fe8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366fec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x366fecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x366ff0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x366FF0u;
    SET_GPR_U32(ctx, 31, 0x366FF8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x366FF0u, 0x366FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366FF8u;
label_366ff8:
    // 0x366ff8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366ffc: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x366FFCu;
    SET_GPR_U32(ctx, 31, 0x367004u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x366FFCu, 0x367004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367004u;
label_367004:
    // 0x367004: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x367004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x367008: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x367008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36700c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x36700Cu;
    {
        const bool branch_taken_0x36700c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36700c) {
            ctx->pc = 0x367040u;
            return;
        }
    }
    ctx->pc = 0x367014u;
    // 0x367014: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x367014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367018: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x367018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36701c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36701cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x367020: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x367020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x367024: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x367024u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x367028: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x367028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36702c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36702cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x367030: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x367030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x367034: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x367034u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x367038: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x367038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36703c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36703cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x367040u;
}
