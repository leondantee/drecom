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

// Function: Em1c_R1_atk_dash
// Address: 0x36e5e0 - 0x36e67c
void Em1c_R1_atk_dash_0x36e5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1c_R1_atk_dash_0x36e5e0");
#endif

    switch (ctx->pc) {
        case 0x36e634u: goto label_36e634;
        case 0x36e654u: goto label_36e654;
        case 0x36e660u: goto label_36e660;
        case 0x36e66cu: goto label_36e66c;
        default: break;
    }

    ctx->pc = 0x36e5e0u;

    // 0x36e5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36e5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36e5e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36e5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x36e5e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36e5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x36e5ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e5f0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36e5f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e5f4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36e5f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36e5f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e5fc: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x36E5FCu;
    {
        const bool branch_taken_0x36e5fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36e5fc) {
            ctx->pc = 0x36E644u;
            goto label_36e644;
        }
    }
    ctx->pc = 0x36E604u;
    // 0x36e604: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36E604u;
    {
        const bool branch_taken_0x36e604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e604) {
            ctx->pc = 0x36E614u;
            goto label_36e614;
        }
    }
    ctx->pc = 0x36E60Cu;
    // 0x36e60c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x36E60Cu;
    {
        const bool branch_taken_0x36e60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e60c) {
            ctx->pc = 0x36E66Cu;
            goto label_36e66c;
        }
    }
    ctx->pc = 0x36E614u;
label_36e614:
    // 0x36e614: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e618: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e61c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36e61cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36e620: 0x24065a07  addiu       $a2, $zero, 0x5A07
    ctx->pc = 0x36e620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23047));
    // 0x36e624: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36e624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e628: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36e628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36e62c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36E62Cu;
    SET_GPR_U32(ctx, 31, 0x36E634u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36E62Cu, 0x36E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E634u;
label_36e634:
    // 0x36e634: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36e634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e638: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36e638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e63c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36e640: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36e640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36e644:
    // 0x36e644: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e648: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36e648u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36e64c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36E64Cu;
    SET_GPR_U32(ctx, 31, 0x36E654u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36E64Cu, 0x36E654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E654u;
label_36e654:
    // 0x36e654: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e658: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36E658u;
    SET_GPR_U32(ctx, 31, 0x36E660u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36E658u, 0x36E660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E660u;
label_36e660:
    // 0x36e660: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e664: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36E664u;
    SET_GPR_U32(ctx, 31, 0x36E66Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36E664u, 0x36E66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E66Cu;
label_36e66c:
    // 0x36e66c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36e66cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e670: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36e670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36e674: 0x3e00008  jr          $ra
    ctx->pc = 0x36E674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E67Cu;
}
