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

// Function: entry_002d4fc4
// Address: 0x2d4fc4 - 0x2d503c
void entry_002d4fc4_0x2d4fc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d4fc4_0x2d4fc4");
#endif

    switch (ctx->pc) {
        case 0x2d4fd4u: goto label_2d4fd4;
        case 0x2d4fe0u: goto label_2d4fe0;
        case 0x2d4ff0u: goto label_2d4ff0;
        case 0x2d4ffcu: goto label_2d4ffc;
        default: break;
    }

    ctx->pc = 0x2d4fc4u;

    // 0x2d4fc4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4fc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4fc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d4fcc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D4FCCu;
    SET_GPR_U32(ctx, 31, 0x2D4FD4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D4FCCu, 0x2D4FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4FD4u;
label_2d4fd4:
    // 0x2d4fd4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4fd8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D4FD8u;
    SET_GPR_U32(ctx, 31, 0x2D4FE0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D4FD8u, 0x2D4FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4FE0u;
label_2d4fe0:
    // 0x2d4fe0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4fe4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4fe4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d4fe8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D4FE8u;
    SET_GPR_U32(ctx, 31, 0x2D4FF0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D4FE8u, 0x2D4FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4FF0u;
label_2d4ff0:
    // 0x2d4ff0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4ff4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D4FF4u;
    SET_GPR_U32(ctx, 31, 0x2D4FFCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D4FF4u, 0x2D4FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4FFCu;
label_2d4ffc:
    // 0x2d4ffc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5000: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d5000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d5004: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D5004u;
    {
        const bool branch_taken_0x2d5004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5004) {
            ctx->pc = 0x2D503Cu;
            return;
        }
    }
    ctx->pc = 0x2D500Cu;
    // 0x2d500c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d500cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5010: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d5010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5014: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d5014u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d5018: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d5018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d501c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d501cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5020: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d5020u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d5024: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d5024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5028: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d5028u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d502c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d502cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5030: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d5030u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5034: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d5034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5038: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d5038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d503cu;
}
