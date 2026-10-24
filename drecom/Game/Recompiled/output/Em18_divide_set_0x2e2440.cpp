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

// Function: Em18_divide_set
// Address: 0x2e2440 - 0x2e2518
void Em18_divide_set_0x2e2440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_divide_set_0x2e2440");
#endif

    switch (ctx->pc) {
        case 0x2e2470u: goto label_2e2470;
        default: break;
    }

    ctx->pc = 0x2e2440u;

    // 0x2e2440: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e2440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e2444: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e2444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e2448: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e2448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e244c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e244cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e2450: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e2450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e2454: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2e2454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2e2458: 0xa3a50048  sb          $a1, 0x48($sp)
    ctx->pc = 0x2e2458u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e245c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e245cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e2460: 0x2473bb48  addiu       $s3, $v1, -0x44B8
    ctx->pc = 0x2e2460u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949704));
    // 0x2e2464: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2e2464u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e2468: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2E2468u;
    {
        const bool branch_taken_0x2e2468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2468) {
            ctx->pc = 0x2E24E8u;
            goto label_2e24e8;
        }
    }
    ctx->pc = 0x2E2470u;
label_2e2470:
    // 0x2e2470: 0x72601e28  paddub      $v1, $s3, $zero
    ctx->pc = 0x2e2470u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2e2474: 0x24730004  addiu       $s3, $v1, 0x4
    ctx->pc = 0x2e2474u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2e2478: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2e2478u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e247c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2e247cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e2480: 0x12030017  beq         $s0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E2480u;
    {
        const bool branch_taken_0x2e2480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2480) {
            ctx->pc = 0x2E24E0u;
            goto label_2e24e0;
        }
    }
    ctx->pc = 0x2E2488u;
    // 0x2e2488: 0x92030012  lbu         $v1, 0x12($s0)
    ctx->pc = 0x2e2488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2e248c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e248cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e2490: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2e2490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e2494: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E2494u;
    {
        const bool branch_taken_0x2e2494 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e2494) {
            ctx->pc = 0x2E24E0u;
            goto label_2e24e0;
        }
    }
    ctx->pc = 0x2E249Cu;
    // 0x2e249c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2e249cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e24a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2e24a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2e24a4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e24a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e24a8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E24A8u;
    {
        const bool branch_taken_0x2e24a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e24a8) {
            ctx->pc = 0x2E24E0u;
            goto label_2e24e0;
        }
    }
    ctx->pc = 0x2E24B0u;
    // 0x2e24b0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2e24b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e24b4: 0x3c03efff  lui         $v1, 0xEFFF
    ctx->pc = 0x2e24b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61439 << 16));
    // 0x2e24b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e24b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2e24bc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e24bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e24c0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2e24c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2e24c4: 0x26111330  addiu       $s1, $s0, 0x1330
    ctx->pc = 0x2e24c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x2e24c8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2e24c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e24cc: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x2e24ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
    // 0x2e24d0: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x2e24d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e24d4: 0xa22300dc  sb          $v1, 0xDC($s1)
    ctx->pc = 0x2e24d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 220), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e24d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E24D8u;
    {
        const bool branch_taken_0x2e24d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e24d8) {
            ctx->pc = 0x2E24FCu;
            goto label_2e24fc;
        }
    }
    ctx->pc = 0x2E24E0u;
label_2e24e0:
    // 0x2e24e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e24e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e24e4: 0x0  nop
    ctx->pc = 0x2e24e4u;
    // NOP
label_2e24e8:
    // 0x2e24e8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2e24e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2e24ec: 0x8c23bb40  lw          $v1, -0x44C0($at)
    ctx->pc = 0x2e24ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47BB40u));
    // 0x2e24f0: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x2e24f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e24f4: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2E24F4u;
    {
        const bool branch_taken_0x2e24f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e24f4) {
            ctx->pc = 0x2E2470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2470;
        }
    }
    ctx->pc = 0x2E24FCu;
label_2e24fc:
    // 0x2e24fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e24fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e2500: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e2500u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2504: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e2504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2508: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e2508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e250c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e250cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e2510: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2518u;
}
