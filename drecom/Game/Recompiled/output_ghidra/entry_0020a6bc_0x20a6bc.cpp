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

// Function: entry_0020a6bc
// Address: 0x20a6bc - 0x20a6e0
void entry_0020a6bc_0x20a6bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a6bc_0x20a6bc");
#endif

    ctx->pc = 0x20a6bcu;

    // 0x20a6bc: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x20a6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x20a6c0: 0x24a392c0  addiu       $v1, $a1, -0x6D40
    ctx->pc = 0x20a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939328));
    // 0x20a6c4: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x20a6c4u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x6192C0u));
    // 0x20a6c8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20a6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20a6cc: 0x24649390  addiu       $a0, $v1, -0x6C70
    ctx->pc = 0x20a6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939536));
    // 0x20a6d0: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x20a6d0u;
    do { __m128i _value = (GPR_VEC(ctx, 5)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x619390u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x619390u, _value); } while (0);
    // 0x20a6d4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x20a6d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a6d8: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x20A6D8u;
    {
        const bool branch_taken_0x20a6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a6d8) {
            ctx->pc = 0x20A8B0u;
            return;
        }
    }
    ctx->pc = 0x20A6E0u;
}
