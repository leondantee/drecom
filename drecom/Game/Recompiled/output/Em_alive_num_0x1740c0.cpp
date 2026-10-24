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

// Function: Em_alive_num
// Address: 0x1740c0 - 0x174148
void Em_alive_num_0x1740c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_alive_num_0x1740c0");
#endif

    switch (ctx->pc) {
        case 0x1740e0u: goto label_1740e0;
        default: break;
    }

    ctx->pc = 0x1740c0u;

    // 0x1740c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1740c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1740c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1740c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1740c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1740c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1740cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1740ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1740d0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1740d0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1740d4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1740d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1740d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1740D8u;
    {
        const bool branch_taken_0x1740d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1740d8) {
            ctx->pc = 0x174118u;
            goto label_174118;
        }
    }
    ctx->pc = 0x1740E0u;
label_1740e0:
    // 0x1740e0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1740e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1740e4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1740e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1740e8: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x1740e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x1740ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1740ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1740f0: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x1740f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1740f4: 0x862210a6  lh          $v0, 0x10A6($s1)
    ctx->pc = 0x1740f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4262)));
    // 0x1740f8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1740f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1740fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1740fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x174100: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174100u;
    {
        const bool branch_taken_0x174100 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x174100) {
            ctx->pc = 0x174110u;
            goto label_174110;
        }
    }
    ctx->pc = 0x174108u;
    // 0x174108: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x174108u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17410c: 0x0  nop
    ctx->pc = 0x17410cu;
    // NOP
label_174110:
    // 0x174110: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x174110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x174114: 0x0  nop
    ctx->pc = 0x174114u;
    // NOP
label_174118:
    // 0x174118: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x174118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17411c: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x17411cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x174120: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x174120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x174124: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x174124u;
    {
        const bool branch_taken_0x174124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174124) {
            ctx->pc = 0x1740E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1740e0;
        }
    }
    ctx->pc = 0x17412Cu;
    // 0x17412c: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x17412cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x174130: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17413c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17413cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x174140: 0x3e00008  jr          $ra
    ctx->pc = 0x174140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174148u;
}
