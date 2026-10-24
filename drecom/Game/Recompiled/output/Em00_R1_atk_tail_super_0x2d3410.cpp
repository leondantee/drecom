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

// Function: Em00_R1_atk_tail_super
// Address: 0x2d3410 - 0x2d34cc
void Em00_R1_atk_tail_super_0x2d3410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_atk_tail_super_0x2d3410");
#endif

    switch (ctx->pc) {
        case 0x2d3464u: goto label_2d3464;
        case 0x2d3480u: goto label_2d3480;
        default: break;
    }

    ctx->pc = 0x2d3410u;

    // 0x2d3410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d3410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d3414: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d3414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d3418: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d3418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d341c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d341cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3420: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d3420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d3424: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d3424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d3428: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d3428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d342c: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D342Cu;
    {
        const bool branch_taken_0x2d342c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d342c) {
            ctx->pc = 0x2D3474u;
            goto label_2d3474;
        }
    }
    ctx->pc = 0x2D3434u;
    // 0x2d3434: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3434u;
    {
        const bool branch_taken_0x2d3434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3434) {
            ctx->pc = 0x2D3444u;
            goto label_2d3444;
        }
    }
    ctx->pc = 0x2D343Cu;
    // 0x2d343c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2D343Cu;
    {
        const bool branch_taken_0x2d343c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d343c) {
            ctx->pc = 0x2D34BCu;
            goto label_2d34bc;
        }
    }
    ctx->pc = 0x2D3444u;
label_2d3444:
    // 0x2d3444: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3448: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d344c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d344cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d3450: 0x24063c1d  addiu       $a2, $zero, 0x3C1D
    ctx->pc = 0x2d3450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15389));
    // 0x2d3454: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d3454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3458: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d3458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d345c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D345Cu;
    SET_GPR_U32(ctx, 31, 0x2D3464u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D345Cu, 0x2D3464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3464u;
label_2d3464:
    // 0x2d3464: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3468: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d3468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d346c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d346cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3470: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d3470u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d3474:
    // 0x2d3474: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3478: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D3478u;
    SET_GPR_U32(ctx, 31, 0x2D3480u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D3478u, 0x2D3480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3480u;
label_2d3480:
    // 0x2d3480: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3484: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d3484u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d3488: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D3488u;
    {
        const bool branch_taken_0x2d3488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3488) {
            ctx->pc = 0x2D34BCu;
            goto label_2d34bc;
        }
    }
    ctx->pc = 0x2D3490u;
    // 0x2d3490: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d3490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3494: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3498: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d3498u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d349c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d349cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d34a0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d34a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d34a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d34a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d34a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d34a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d34ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d34acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d34b0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d34b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d34b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d34b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d34b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d34b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d34bc:
    // 0x2d34bc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d34bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d34c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d34c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d34c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D34C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D34C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D34CCu;
}
