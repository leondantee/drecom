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

// Function: entry_00305508
// Address: 0x305508 - 0x305580
void entry_00305508_0x305508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00305508_0x305508");
#endif

    switch (ctx->pc) {
        case 0x305518u: goto label_305518;
        case 0x305524u: goto label_305524;
        case 0x305534u: goto label_305534;
        case 0x305540u: goto label_305540;
        default: break;
    }

    ctx->pc = 0x305508u;

    // 0x305508: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30550c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30550cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305510: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x305510u;
    SET_GPR_U32(ctx, 31, 0x305518u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x305510u, 0x305518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305518u;
label_305518:
    // 0x305518: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30551c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30551Cu;
    SET_GPR_U32(ctx, 31, 0x305524u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30551Cu, 0x305524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305524u;
label_305524:
    // 0x305524: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305528: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305528u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30552c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30552Cu;
    SET_GPR_U32(ctx, 31, 0x305534u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30552Cu, 0x305534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305534u;
label_305534:
    // 0x305534: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305538: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x305538u;
    SET_GPR_U32(ctx, 31, 0x305540u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x305538u, 0x305540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305540u;
label_305540:
    // 0x305540: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305544: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x305544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x305548: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x305548u;
    {
        const bool branch_taken_0x305548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305548) {
            ctx->pc = 0x305580u;
            return;
        }
    }
    ctx->pc = 0x305550u;
    // 0x305550: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x305550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305554: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305558: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x305558u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30555c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30555cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305560: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305564: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x305564u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x305568: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30556c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30556cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x305570: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305574: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x305574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x305578: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30557c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30557cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x305580u;
}
