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

// Function: entry_001aea18
// Address: 0x1aea18 - 0x1aea54
void entry_001aea18_0x1aea18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aea18_0x1aea18");
#endif

    ctx->pc = 0x1aea18u;

    // 0x1aea18: 0x2e4307d0  sltiu       $v1, $s2, 0x7D0
    ctx->pc = 0x1aea18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1aea1c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AEA1Cu;
    {
        const bool branch_taken_0x1aea1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aea1c) {
            ctx->pc = 0x1AEA08u;
            return;
        }
    }
    ctx->pc = 0x1AEA24u;
    // 0x1aea24: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1aea24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1aea28: 0x8c230ae8  lw          $v1, 0xAE8($at)
    ctx->pc = 0x1aea28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1aea2c: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x1aea2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1aea30: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1aea30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1aea34: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1aea34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1aea38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1aea38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1aea3c: 0xac230ae8  sw          $v1, 0xAE8($at)
    ctx->pc = 0x1aea3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1aea40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1aea40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1aea44: 0x8c310ae8  lw          $s1, 0xAE8($at)
    ctx->pc = 0x1aea44u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1aea48: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1aea48u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1aea4c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1AEA4Cu;
    {
        const bool branch_taken_0x1aea4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aea4c) {
            ctx->pc = 0x1AEAA0u;
            return;
        }
    }
    ctx->pc = 0x1AEA54u;
}
