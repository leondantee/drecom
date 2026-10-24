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

// Function: Quake_init
// Address: 0x1586e0 - 0x158748
void Quake_init_0x1586e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Quake_init_0x1586e0");
#endif

    switch (ctx->pc) {
        case 0x158700u: goto label_158700;
        default: break;
    }

    ctx->pc = 0x1586e0u;

    // 0x1586e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1586e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1586e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1586e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1586e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1586e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1586ec: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1586ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1586f0: 0x2470f860  addiu       $s0, $v1, -0x7A0
    ctx->pc = 0x1586f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965344));
    // 0x1586f4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1586f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1586f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1586F8u;
    {
        const bool branch_taken_0x1586f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1586f8) {
            ctx->pc = 0x158728u;
            goto label_158728;
        }
    }
    ctx->pc = 0x158700u;
label_158700:
    // 0x158700: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x158700u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x158704: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x158704u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x158708: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x158708u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x15870c: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x15870cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x158710: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x158710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158714: 0x0  nop
    ctx->pc = 0x158714u;
    // NOP
    // 0x158718: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x158718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x15871c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x15871cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x158720: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x158720u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x158724: 0x0  nop
    ctx->pc = 0x158724u;
    // NOP
label_158728:
    // 0x158728: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x158728u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x15872c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x15872Cu;
    {
        const bool branch_taken_0x15872c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15872c) {
            ctx->pc = 0x158700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158700;
        }
    }
    ctx->pc = 0x158734u;
    // 0x158734: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15873c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15873cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x158740: 0x3e00008  jr          $ra
    ctx->pc = 0x158740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158748u;
}
