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

// Function: Em1c_R1_atk_ele
// Address: 0x36e320 - 0x36e3bc
void Em1c_R1_atk_ele_0x36e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1c_R1_atk_ele_0x36e320");
#endif

    switch (ctx->pc) {
        case 0x36e374u: goto label_36e374;
        case 0x36e394u: goto label_36e394;
        case 0x36e3a0u: goto label_36e3a0;
        case 0x36e3acu: goto label_36e3ac;
        default: break;
    }

    ctx->pc = 0x36e320u;

    // 0x36e320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36e320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36e324: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36e324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x36e328: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36e328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x36e32c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e330: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36e330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e334: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36e334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36e338: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36e338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e33c: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x36E33Cu;
    {
        const bool branch_taken_0x36e33c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36e33c) {
            ctx->pc = 0x36E384u;
            goto label_36e384;
        }
    }
    ctx->pc = 0x36E344u;
    // 0x36e344: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36E344u;
    {
        const bool branch_taken_0x36e344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e344) {
            ctx->pc = 0x36E354u;
            goto label_36e354;
        }
    }
    ctx->pc = 0x36E34Cu;
    // 0x36e34c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x36E34Cu;
    {
        const bool branch_taken_0x36e34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e34c) {
            ctx->pc = 0x36E3ACu;
            goto label_36e3ac;
        }
    }
    ctx->pc = 0x36E354u;
label_36e354:
    // 0x36e354: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e358: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e35c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36e35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36e360: 0x24065a06  addiu       $a2, $zero, 0x5A06
    ctx->pc = 0x36e360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23046));
    // 0x36e364: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36e364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e368: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36e368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36e36c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36E36Cu;
    SET_GPR_U32(ctx, 31, 0x36E374u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36E36Cu, 0x36E374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E374u;
label_36e374:
    // 0x36e374: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36e374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e378: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36e378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e37c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36e380: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36e380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36e384:
    // 0x36e384: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e388: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36e388u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36e38c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36E38Cu;
    SET_GPR_U32(ctx, 31, 0x36E394u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36E38Cu, 0x36E394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E394u;
label_36e394:
    // 0x36e394: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e398: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36E398u;
    SET_GPR_U32(ctx, 31, 0x36E3A0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36E398u, 0x36E3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E3A0u;
label_36e3a0:
    // 0x36e3a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e3a4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36E3A4u;
    SET_GPR_U32(ctx, 31, 0x36E3ACu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36E3A4u, 0x36E3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E3ACu;
label_36e3ac:
    // 0x36e3ac: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36e3acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e3b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36e3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36e3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x36E3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E3BCu;
}
