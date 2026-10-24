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

// Function: entry_0020b524
// Address: 0x20b524 - 0x20b548
void entry_0020b524_0x20b524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b524_0x20b524");
#endif

    ctx->pc = 0x20b524u;

    // 0x20b524: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20b524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20b528: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x20b528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x20b52c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x20b52cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x6192C0u));
    // 0x20b530: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20b530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20b534: 0x24639390  addiu       $v1, $v1, -0x6C70
    ctx->pc = 0x20b534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939536));
    // 0x20b538: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x20b538u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x619390u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x619390u, _value); } while (0);
    // 0x20b53c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x20b53cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b540: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x20B540u;
    {
        const bool branch_taken_0x20b540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b540) {
            ctx->pc = 0x20B718u;
            return;
        }
    }
    ctx->pc = 0x20B548u;
}
