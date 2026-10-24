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

// Function: Em_critical_stop
// Address: 0x142390 - 0x142450
void Em_critical_stop_0x142390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_critical_stop_0x142390");
#endif

    switch (ctx->pc) {
        case 0x1423f8u: goto label_1423f8;
        default: break;
    }

    ctx->pc = 0x142390u;

    // 0x142390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x142390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x142394: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x142394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x142398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x142398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14239c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14239cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1423a0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1423a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1423a4: 0x8c2395b0  lw          $v1, -0x6A50($at)
    ctx->pc = 0x1423a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6195B0u));
    // 0x1423a8: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1423a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x1423ac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1423acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1423b0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1423b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1423b4: 0x24635180  addiu       $v1, $v1, 0x5180
    ctx->pc = 0x1423b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20864));
    // 0x1423b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1423b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1423bc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1423bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1423c0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1423c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1423c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1423c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1423c8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1423C8u;
    {
        const bool branch_taken_0x1423c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1423c8) {
            ctx->pc = 0x1423E0u;
            goto label_1423e0;
        }
    }
    ctx->pc = 0x1423D0u;
    // 0x1423d0: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1423D0u;
    {
        const bool branch_taken_0x1423d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1423d0) {
            ctx->pc = 0x142438u;
            goto label_142438;
        }
    }
    ctx->pc = 0x1423D8u;
    // 0x1423d8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1423D8u;
    {
        const bool branch_taken_0x1423d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1423d8) {
            ctx->pc = 0x142438u;
            goto label_142438;
        }
    }
    ctx->pc = 0x1423E0u;
label_1423e0:
    // 0x1423e0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1423e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1423e4: 0x8c32bb40  lw          $s2, -0x44C0($at)
    ctx->pc = 0x1423e4u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x47BB40u));
    // 0x1423e8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1423e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1423ec: 0x2471bb48  addiu       $s1, $v1, -0x44B8
    ctx->pc = 0x1423ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949704));
    // 0x1423f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1423F0u;
    {
        const bool branch_taken_0x1423f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1423f0) {
            ctx->pc = 0x142428u;
            goto label_142428;
        }
    }
    ctx->pc = 0x1423F8u;
label_1423f8:
    // 0x1423f8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1423f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1423fc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1423fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x142400: 0x8c2395b0  lw          $v1, -0x6A50($at)
    ctx->pc = 0x142400u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6195B0u));
    // 0x142404: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x142404u;
    {
        const bool branch_taken_0x142404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x142404) {
            ctx->pc = 0x142420u;
            goto label_142420;
        }
    }
    ctx->pc = 0x14240Cu;
    // 0x14240c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14240cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x142410: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x142410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x142414: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x142414u;
    {
        const bool branch_taken_0x142414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142414) {
            ctx->pc = 0x142420u;
            goto label_142420;
        }
    }
    ctx->pc = 0x14241Cu;
    // 0x14241c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x14241cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_142420:
    // 0x142420: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x142420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x142424: 0x0  nop
    ctx->pc = 0x142424u;
    // NOP
label_142428:
    // 0x142428: 0x72401e28  paddub      $v1, $s2, $zero
    ctx->pc = 0x142428u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x14242c: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x14242cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x142430: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x142430u;
    {
        const bool branch_taken_0x142430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x142430) {
            ctx->pc = 0x1423F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1423f8;
        }
    }
    ctx->pc = 0x142438u;
label_142438:
    // 0x142438: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x142438u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14243c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14243cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142440: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142444: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x142444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x142448: 0x3e00008  jr          $ra
    ctx->pc = 0x142448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142450u;
}
