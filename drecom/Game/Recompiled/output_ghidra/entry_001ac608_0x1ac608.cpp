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

// Function: entry_001ac608
// Address: 0x1ac608 - 0x1ac644
void entry_001ac608_0x1ac608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac608_0x1ac608");
#endif

    ctx->pc = 0x1ac608u;

    // 0x1ac608: 0x2e4307d0  sltiu       $v1, $s2, 0x7D0
    ctx->pc = 0x1ac608u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1ac60c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AC60Cu;
    {
        const bool branch_taken_0x1ac60c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac60c) {
            ctx->pc = 0x1AC5F8u;
            return;
        }
    }
    ctx->pc = 0x1AC614u;
    // 0x1ac614: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ac614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ac618: 0x8c230ae8  lw          $v1, 0xAE8($at)
    ctx->pc = 0x1ac618u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1ac61c: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x1ac61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1ac620: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1ac620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1ac624: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ac624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ac628: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ac628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ac62c: 0xac230ae8  sw          $v1, 0xAE8($at)
    ctx->pc = 0x1ac62cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1ac630: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ac630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ac634: 0x8c310ae8  lw          $s1, 0xAE8($at)
    ctx->pc = 0x1ac634u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1ac638: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1ac638u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ac63c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1AC63Cu;
    {
        const bool branch_taken_0x1ac63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac63c) {
            ctx->pc = 0x1AC690u;
            return;
        }
    }
    ctx->pc = 0x1AC644u;
}
