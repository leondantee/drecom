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

// Function: Em1c_R1_atk_net
// Address: 0x36e530 - 0x36e5cc
void Em1c_R1_atk_net_0x36e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1c_R1_atk_net_0x36e530");
#endif

    switch (ctx->pc) {
        case 0x36e584u: goto label_36e584;
        case 0x36e5a4u: goto label_36e5a4;
        case 0x36e5b0u: goto label_36e5b0;
        case 0x36e5bcu: goto label_36e5bc;
        default: break;
    }

    ctx->pc = 0x36e530u;

    // 0x36e530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36e530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36e534: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36e534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x36e538: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36e538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x36e53c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e540: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36e540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e544: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36e544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36e548: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36e548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e54c: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x36E54Cu;
    {
        const bool branch_taken_0x36e54c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36e54c) {
            ctx->pc = 0x36E594u;
            goto label_36e594;
        }
    }
    ctx->pc = 0x36E554u;
    // 0x36e554: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36E554u;
    {
        const bool branch_taken_0x36e554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e554) {
            ctx->pc = 0x36E564u;
            goto label_36e564;
        }
    }
    ctx->pc = 0x36E55Cu;
    // 0x36e55c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x36E55Cu;
    {
        const bool branch_taken_0x36e55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e55c) {
            ctx->pc = 0x36E5BCu;
            goto label_36e5bc;
        }
    }
    ctx->pc = 0x36E564u;
label_36e564:
    // 0x36e564: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e568: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e56c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36e56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36e570: 0x24065a04  addiu       $a2, $zero, 0x5A04
    ctx->pc = 0x36e570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23044));
    // 0x36e574: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36e574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e578: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36e578u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36e57c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36E57Cu;
    SET_GPR_U32(ctx, 31, 0x36E584u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36E57Cu, 0x36E584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E584u;
label_36e584:
    // 0x36e584: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36e584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e588: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36e588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e58c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36e590: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36e590u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36e594:
    // 0x36e594: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e598: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36e598u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36e59c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36E59Cu;
    SET_GPR_U32(ctx, 31, 0x36E5A4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36E59Cu, 0x36E5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E5A4u;
label_36e5a4:
    // 0x36e5a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e5a8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36E5A8u;
    SET_GPR_U32(ctx, 31, 0x36E5B0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36E5A8u, 0x36E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E5B0u;
label_36e5b0:
    // 0x36e5b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e5b4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36E5B4u;
    SET_GPR_U32(ctx, 31, 0x36E5BCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36E5B4u, 0x36E5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E5BCu;
label_36e5bc:
    // 0x36e5bc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36e5bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e5c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36e5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36e5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x36E5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E5CCu;
}
