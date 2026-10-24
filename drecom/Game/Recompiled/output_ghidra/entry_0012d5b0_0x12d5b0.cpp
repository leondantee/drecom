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

// Function: entry_0012d5b0
// Address: 0x12d5b0 - 0x12d634
void entry_0012d5b0_0x12d5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d5b0_0x12d5b0");
#endif

    switch (ctx->pc) {
        case 0x12d5c0u: goto label_12d5c0;
        case 0x12d5ccu: goto label_12d5cc;
        case 0x12d5dcu: goto label_12d5dc;
        case 0x12d5e8u: goto label_12d5e8;
        default: break;
    }

    ctx->pc = 0x12d5b0u;

    // 0x12d5b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12d5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d5b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12d5b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d5b8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12D5B8u;
    SET_GPR_U32(ctx, 31, 0x12D5C0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12D5B8u, 0x12D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D5C0u;
label_12d5c0:
    // 0x12d5c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12d5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d5c4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12D5C4u;
    SET_GPR_U32(ctx, 31, 0x12D5CCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12D5C4u, 0x12D5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D5CCu;
label_12d5cc:
    // 0x12d5cc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12d5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d5d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12d5d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d5d4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12D5D4u;
    SET_GPR_U32(ctx, 31, 0x12D5DCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12D5D4u, 0x12D5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D5DCu;
label_12d5dc:
    // 0x12d5dc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12d5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d5e0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12D5E0u;
    SET_GPR_U32(ctx, 31, 0x12D5E8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12D5E0u, 0x12D5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D5E8u;
label_12d5e8:
    // 0x12d5e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12d5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d5ec: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12d5ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12d5f0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x12D5F0u;
    {
        const bool branch_taken_0x12d5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d5f0) {
            ctx->pc = 0x12D634u;
            return;
        }
    }
    ctx->pc = 0x12D5F8u;
    // 0x12d5f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12d5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d5fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d600: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12d600u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12d604: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12d604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12d608: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12d608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d60c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12d60cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12d610: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12d610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d614: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12d614u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d618: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12d618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d61c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12d61cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d620: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12d620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d624: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12d624u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12d628: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12d628u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x12d62c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12D62Cu;
    {
        const bool branch_taken_0x12d62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d62c) {
            ctx->pc = 0x12D634u;
            return;
        }
    }
    ctx->pc = 0x12D634u;
}
