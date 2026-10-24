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

// Function: Search_em2
// Address: 0x33d200 - 0x33d2c8
void Search_em2_0x33d200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Search_em2_0x33d200");
#endif

    switch (ctx->pc) {
        case 0x33d248u: goto label_33d248;
        default: break;
    }

    ctx->pc = 0x33d200u;

    // 0x33d200: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33d200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33d204: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33d204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33d208: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33d208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33d20c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33d20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33d210: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x33d210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x33d214: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x33d214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x33d218: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33d218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33d21c: 0x2451bb48  addiu       $s1, $v0, -0x44B8
    ctx->pc = 0x33d21cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949704));
    // 0x33d220: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x33d220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x33d224: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x33d224u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x33d228: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33D228u;
    {
        const bool branch_taken_0x33d228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d228) {
            ctx->pc = 0x33D23Cu;
            goto label_33d23c;
        }
    }
    ctx->pc = 0x33D230u;
    // 0x33d230: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33d230u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33d234: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x33D234u;
    {
        const bool branch_taken_0x33d234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d234) {
            ctx->pc = 0x33D2B0u;
            goto label_33d2b0;
        }
    }
    ctx->pc = 0x33D23Cu;
label_33d23c:
    // 0x33d23c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x33d23cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33d240: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x33D240u;
    {
        const bool branch_taken_0x33d240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d240) {
            ctx->pc = 0x33D298u;
            goto label_33d298;
        }
    }
    ctx->pc = 0x33D248u;
label_33d248:
    // 0x33d248: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x33d248u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33d24c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x33d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33d250: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33d250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33d254: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33D254u;
    {
        const bool branch_taken_0x33d254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d254) {
            ctx->pc = 0x33D290u;
            goto label_33d290;
        }
    }
    ctx->pc = 0x33D25Cu;
    // 0x33d25c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x33d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33d260: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x33d260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33d264: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33d264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33d268: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33D268u;
    {
        const bool branch_taken_0x33d268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d268) {
            ctx->pc = 0x33D290u;
            goto label_33d290;
        }
    }
    ctx->pc = 0x33D270u;
    // 0x33d270: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x33d270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x33d274: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33d274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33d278: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33d278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33d27c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33D27Cu;
    {
        const bool branch_taken_0x33d27c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33d27c) {
            ctx->pc = 0x33D290u;
            goto label_33d290;
        }
    }
    ctx->pc = 0x33D284u;
    // 0x33d284: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x33d284u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33d288: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33D288u;
    {
        const bool branch_taken_0x33d288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d288) {
            ctx->pc = 0x33D2B0u;
            goto label_33d2b0;
        }
    }
    ctx->pc = 0x33D290u;
label_33d290:
    // 0x33d290: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x33d290u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x33d294: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33d294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_33d298:
    // 0x33d298: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x33d298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x33d29c: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x33d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x33d2a0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x33d2a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33d2a4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x33D2A4u;
    {
        const bool branch_taken_0x33d2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d2a4) {
            ctx->pc = 0x33D248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d248;
        }
    }
    ctx->pc = 0x33D2ACu;
    // 0x33d2ac: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33d2acu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_33d2b0:
    // 0x33d2b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33d2b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33d2b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33d2b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33d2b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33d2b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d2bc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x33d2bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33d2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x33D2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D2C8u;
}
