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

// Function: Em1a_R1_wait
// Address: 0x360140 - 0x3601ec
void Em1a_R1_wait_0x360140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1a_R1_wait_0x360140");
#endif

    switch (ctx->pc) {
        case 0x360194u: goto label_360194;
        case 0x3601b4u: goto label_3601b4;
        case 0x3601c0u: goto label_3601c0;
        case 0x3601d0u: goto label_3601d0;
        case 0x3601dcu: goto label_3601dc;
        default: break;
    }

    ctx->pc = 0x360140u;

    // 0x360140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x360140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x360144: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x360144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x360148: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x360148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x36014c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36014cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360150: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x360150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x360154: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x360154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x360158: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x360158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36015c: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x36015Cu;
    {
        const bool branch_taken_0x36015c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36015c) {
            ctx->pc = 0x3601A4u;
            goto label_3601a4;
        }
    }
    ctx->pc = 0x360164u;
    // 0x360164: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x360164u;
    {
        const bool branch_taken_0x360164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x360164) {
            ctx->pc = 0x360174u;
            goto label_360174;
        }
    }
    ctx->pc = 0x36016Cu;
    // 0x36016c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x36016Cu;
    {
        const bool branch_taken_0x36016c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36016c) {
            ctx->pc = 0x3601DCu;
            goto label_3601dc;
        }
    }
    ctx->pc = 0x360174u;
label_360174:
    // 0x360174: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x360174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360178: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x360178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36017c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36017cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x360180: 0x24060a00  addiu       $a2, $zero, 0xA00
    ctx->pc = 0x360180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
    // 0x360184: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x360184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360188: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x360188u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36018c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36018Cu;
    SET_GPR_U32(ctx, 31, 0x360194u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36018Cu, 0x360194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360194u;
label_360194:
    // 0x360194: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x360194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360198: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x360198u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36019c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36019cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3601a0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3601a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_3601a4:
    // 0x3601a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3601a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3601a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3601a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3601ac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3601ACu;
    SET_GPR_U32(ctx, 31, 0x3601B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3601ACu, 0x3601B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3601B4u;
label_3601b4:
    // 0x3601b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3601b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3601b8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3601B8u;
    SET_GPR_U32(ctx, 31, 0x3601C0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3601B8u, 0x3601C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3601C0u;
label_3601c0:
    // 0x3601c0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3601c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3601c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3601c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3601c8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3601C8u;
    SET_GPR_U32(ctx, 31, 0x3601D0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3601C8u, 0x3601D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3601D0u;
label_3601d0:
    // 0x3601d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3601d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3601d4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x3601D4u;
    SET_GPR_U32(ctx, 31, 0x3601DCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3601D4u, 0x3601DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3601DCu;
label_3601dc:
    // 0x3601dc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3601dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3601e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3601e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3601e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3601E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3601E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3601ECu;
}
