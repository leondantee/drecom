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

// Function: entry_0012e5a0
// Address: 0x12e5a0 - 0x12e61c
void entry_0012e5a0_0x12e5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e5a0_0x12e5a0");
#endif

    switch (ctx->pc) {
        case 0x12e5b0u: goto label_12e5b0;
        case 0x12e5bcu: goto label_12e5bc;
        case 0x12e5ccu: goto label_12e5cc;
        case 0x12e5d8u: goto label_12e5d8;
        default: break;
    }

    ctx->pc = 0x12e5a0u;

    // 0x12e5a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e5a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12e5a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12e5a8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12E5A8u;
    SET_GPR_U32(ctx, 31, 0x12E5B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12E5A8u, 0x12E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5B0u;
label_12e5b0:
    // 0x12e5b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e5b4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12E5B4u;
    SET_GPR_U32(ctx, 31, 0x12E5BCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12E5B4u, 0x12E5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5BCu;
label_12e5bc:
    // 0x12e5bc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e5c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12e5c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12e5c4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12E5C4u;
    SET_GPR_U32(ctx, 31, 0x12E5CCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12E5C4u, 0x12E5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5CCu;
label_12e5cc:
    // 0x12e5cc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e5d0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12E5D0u;
    SET_GPR_U32(ctx, 31, 0x12E5D8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12E5D0u, 0x12E5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5D8u;
label_12e5d8:
    // 0x12e5d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e5dc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12e5dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12e5e0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x12E5E0u;
    {
        const bool branch_taken_0x12e5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e5e0) {
            ctx->pc = 0x12E61Cu;
            return;
        }
    }
    ctx->pc = 0x12E5E8u;
    // 0x12e5e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e5ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e5f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12e5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12e5f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12e5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12e5f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e5fc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12e5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12e600: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e604: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12e604u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12e608: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e60c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12e60cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12e610: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e614: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12e614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12e618: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12e618u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x12e61cu;
}
