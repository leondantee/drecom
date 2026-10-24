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

// Function: entry_0012d830
// Address: 0x12d830 - 0x12d8ac
void entry_0012d830_0x12d830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d830_0x12d830");
#endif

    switch (ctx->pc) {
        case 0x12d840u: goto label_12d840;
        case 0x12d84cu: goto label_12d84c;
        case 0x12d85cu: goto label_12d85c;
        case 0x12d868u: goto label_12d868;
        default: break;
    }

    ctx->pc = 0x12d830u;

    // 0x12d830: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d834: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12d834u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d838: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12D838u;
    SET_GPR_U32(ctx, 31, 0x12D840u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12D838u, 0x12D840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D840u;
label_12d840:
    // 0x12d840: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d844: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12D844u;
    SET_GPR_U32(ctx, 31, 0x12D84Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12D844u, 0x12D84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D84Cu;
label_12d84c:
    // 0x12d84c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d850: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12d850u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d854: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12D854u;
    SET_GPR_U32(ctx, 31, 0x12D85Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12D854u, 0x12D85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D85Cu;
label_12d85c:
    // 0x12d85c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d860: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12D860u;
    SET_GPR_U32(ctx, 31, 0x12D868u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12D860u, 0x12D868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D868u;
label_12d868:
    // 0x12d868: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d86c: 0x906309e6  lbu         $v1, 0x9E6($v1)
    ctx->pc = 0x12d86cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2534)));
    // 0x12d870: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x12D870u;
    {
        const bool branch_taken_0x12d870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d870) {
            ctx->pc = 0x12D8ACu;
            return;
        }
    }
    ctx->pc = 0x12D878u;
    // 0x12d878: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12d878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d87c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d880: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12d880u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12d884: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12d884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12d888: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d88c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12d88cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12d890: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d894: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12d894u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d898: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d89c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12d89cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d8a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d8a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12d8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12d8a8: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12d8a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x12d8acu;
}
