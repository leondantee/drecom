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

// Function: Quake_kill
// Address: 0x158810 - 0x1588a0
void Quake_kill_0x158810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Quake_kill_0x158810");
#endif

    switch (ctx->pc) {
        case 0x158834u: goto label_158834;
        default: break;
    }

    ctx->pc = 0x158810u;

    // 0x158810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x158810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x158814: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x158818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15881c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x15881cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x158820: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x158820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x158824: 0x2470f860  addiu       $s0, $v1, -0x7A0
    ctx->pc = 0x158824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965344));
    // 0x158828: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x158828u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15882c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15882Cu;
    {
        const bool branch_taken_0x15882c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15882c) {
            ctx->pc = 0x158880u;
            goto label_158880;
        }
    }
    ctx->pc = 0x158834u;
label_158834:
    // 0x158834: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x158834u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x158838: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x158838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15883c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x15883cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x158840: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x158840u;
    {
        const bool branch_taken_0x158840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158840) {
            ctx->pc = 0x158878u;
            goto label_158878;
        }
    }
    ctx->pc = 0x158848u;
    // 0x158848: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x158848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x15884c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15884cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x158850: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x158850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158854: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x158854u;
    {
        const bool branch_taken_0x158854 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158854) {
            ctx->pc = 0x158878u;
            goto label_158878;
        }
    }
    ctx->pc = 0x15885Cu;
    // 0x15885c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x15885cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x158860: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x158860u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x158864: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x158864u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x158868: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x158868u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x15886c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15886cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158870: 0x0  nop
    ctx->pc = 0x158870u;
    // NOP
    // 0x158874: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x158874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_158878:
    // 0x158878: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x158878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x15887c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15887cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_158880:
    // 0x158880: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x158880u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x158884: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x158884u;
    {
        const bool branch_taken_0x158884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158884) {
            ctx->pc = 0x158834u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158834;
        }
    }
    ctx->pc = 0x15888Cu;
    // 0x15888c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15888cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158894: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x158894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158898: 0x3e00008  jr          $ra
    ctx->pc = 0x158898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1588A0u;
}
