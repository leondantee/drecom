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

// Function: entry_00123824
// Address: 0x123824 - 0x123874
void entry_00123824_0x123824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123824_0x123824");
#endif

    ctx->pc = 0x123824u;

    // 0x123824: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x123824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x123828: 0xac206840  sw          $zero, 0x6840($at)
    ctx->pc = 0x123828u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3B6840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B6840u, _value); } while (0);
    // 0x12382c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x12382cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x123830: 0xac206844  sw          $zero, 0x6844($at)
    ctx->pc = 0x123830u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3B6844u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B6844u, _value); } while (0);
    // 0x123834: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x123834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x123838: 0x24630ae8  addiu       $v1, $v1, 0xAE8
    ctx->pc = 0x123838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x12383c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12383cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x123840: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x123840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x123844: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x123844u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x123848: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x123848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x12384c: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x12384cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x123850: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x123850u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x123854: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x123854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x123858: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x123858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12385c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x12385cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x123860: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x123860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x123864: 0x8c330ae8  lw          $s3, 0xAE8($at)
    ctx->pc = 0x123864u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x123868: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x123868u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12386c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x12386Cu;
    {
        const bool branch_taken_0x12386c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12386c) {
            ctx->pc = 0x123908u;
            return;
        }
    }
    ctx->pc = 0x123874u;
}
