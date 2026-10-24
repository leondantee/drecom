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

// Function: entry_0030c5d0
// Address: 0x30c5d0 - 0x30c658
void entry_0030c5d0_0x30c5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030c5d0_0x30c5d0");
#endif

    switch (ctx->pc) {
        case 0x30c5f0u: goto label_30c5f0;
        case 0x30c5fcu: goto label_30c5fc;
        case 0x30c60cu: goto label_30c60c;
        case 0x30c618u: goto label_30c618;
        default: break;
    }

    ctx->pc = 0x30c5d0u;

    // 0x30c5d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c5d4: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x30c5d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x30c5d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30c5dc: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x30c5dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x30c5e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30c5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c5e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30c5e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30c5e8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30C5E8u;
    SET_GPR_U32(ctx, 31, 0x30C5F0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30C5E8u, 0x30C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C5F0u;
label_30c5f0:
    // 0x30c5f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30c5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c5f4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30C5F4u;
    SET_GPR_U32(ctx, 31, 0x30C5FCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30C5F4u, 0x30C5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C5FCu;
label_30c5fc:
    // 0x30c5fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30c5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c600: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30c600u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30c604: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30C604u;
    SET_GPR_U32(ctx, 31, 0x30C60Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30C604u, 0x30C60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C60Cu;
label_30c60c:
    // 0x30c60c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30c60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c610: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30C610u;
    SET_GPR_U32(ctx, 31, 0x30C618u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30C610u, 0x30C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C618u;
label_30c618:
    // 0x30c618: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c61c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30c61cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30c620: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30C620u;
    {
        const bool branch_taken_0x30c620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c620) {
            ctx->pc = 0x30C658u;
            return;
        }
    }
    ctx->pc = 0x30C628u;
    // 0x30c628: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30c628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c62c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c630: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30c630u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30c634: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30c634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c638: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c63c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30c63cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30c640: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c644: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30c644u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c648: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c64c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30c64cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c650: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c654: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30c654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30c658u;
}
