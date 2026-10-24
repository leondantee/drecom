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

// Function: Em00_R1_atk_tail_r2
// Address: 0x2d3340 - 0x2d3400
void Em00_R1_atk_tail_r2_0x2d3340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_atk_tail_r2_0x2d3340");
#endif

    switch (ctx->pc) {
        case 0x2d3394u: goto label_2d3394;
        case 0x2d33b0u: goto label_2d33b0;
        default: break;
    }

    ctx->pc = 0x2d3340u;

    // 0x2d3340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d3340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d3344: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d3344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d3348: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d3348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d334c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d334cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3350: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d3350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d3354: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d3354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d3358: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d3358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d335c: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D335Cu;
    {
        const bool branch_taken_0x2d335c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d335c) {
            ctx->pc = 0x2D33A4u;
            goto label_2d33a4;
        }
    }
    ctx->pc = 0x2D3364u;
    // 0x2d3364: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3364u;
    {
        const bool branch_taken_0x2d3364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3364) {
            ctx->pc = 0x2D3374u;
            goto label_2d3374;
        }
    }
    ctx->pc = 0x2D336Cu;
    // 0x2d336c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2D336Cu;
    {
        const bool branch_taken_0x2d336c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d336c) {
            ctx->pc = 0x2D33F0u;
            goto label_2d33f0;
        }
    }
    ctx->pc = 0x2D3374u;
label_2d3374:
    // 0x2d3374: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3378: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d337c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d337cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d3380: 0x24063c18  addiu       $a2, $zero, 0x3C18
    ctx->pc = 0x2d3380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15384));
    // 0x2d3384: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d3384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3388: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d3388u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d338c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D338Cu;
    SET_GPR_U32(ctx, 31, 0x2D3394u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D338Cu, 0x2D3394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3394u;
label_2d3394:
    // 0x2d3394: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3398: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d3398u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d339c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d339cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d33a0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d33a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d33a4:
    // 0x2d33a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d33a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d33a8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D33A8u;
    SET_GPR_U32(ctx, 31, 0x2D33B0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D33A8u, 0x2D33B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D33B0u;
label_2d33b0:
    // 0x2d33b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d33b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d33b4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d33b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d33b8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D33B8u;
    {
        const bool branch_taken_0x2d33b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d33b8) {
            ctx->pc = 0x2D33F0u;
            goto label_2d33f0;
        }
    }
    ctx->pc = 0x2D33C0u;
    // 0x2d33c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d33c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d33c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d33c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d33c8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d33c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d33cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d33ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d33d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d33d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d33d4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d33d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d33d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d33d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d33dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d33dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d33e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d33e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d33e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d33e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d33e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d33e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d33ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d33ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d33f0:
    // 0x2d33f0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d33f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d33f4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d33f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d33f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D33F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D33F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3400u;
}
