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

// Function: entry_0016d428
// Address: 0x16d428 - 0x16d4a8
void entry_0016d428_0x16d428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d428_0x16d428");
#endif

    switch (ctx->pc) {
        case 0x16d484u: goto label_16d484;
        default: break;
    }

    ctx->pc = 0x16d428u;

    // 0x16d428: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x16d428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x16d42c: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x16d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x16d430: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16d430u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x16d434: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x16d434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x16d438: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x16d438u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x16d43c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x16d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x16d440: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x16d440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x16d444: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16d444u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x16d448: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x16d448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16d44c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16d44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16d450: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16d450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x16d454: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16d454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16d458: 0x8c330ae8  lw          $s3, 0xAE8($at)
    ctx->pc = 0x16d458u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x16d45c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16d460: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x16d460u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d464: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x16d464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16d468: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x16d468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x16d46c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16d470: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x16d470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16d474: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x16d474u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x16d478: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x16d478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16d47c: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x16D47Cu;
    SET_GPR_U32(ctx, 31, 0x16D484u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x16D484u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16D484u) { return; }
    ctx->pc = 0x16D484u;
label_16d484:
    // 0x16d484: 0x7260a628  paddub      $s4, $s3, $zero
    ctx->pc = 0x16d484u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x16d488: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x16d488u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x16d48c: 0x72608628  paddub      $s0, $s3, $zero
    ctx->pc = 0x16d48cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x16d490: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x16d490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x16d494: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D494u;
    {
        const bool branch_taken_0x16d494 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d494) {
            ctx->pc = 0x16D4A8u;
            return;
        }
    }
    ctx->pc = 0x16D49Cu;
    // 0x16d49c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x16d49cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16d4a0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x16D4A0u;
    {
        const bool branch_taken_0x16d4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d4a0) {
            ctx->pc = 0x16D554u;
            return;
        }
    }
    ctx->pc = 0x16D4A8u;
}
