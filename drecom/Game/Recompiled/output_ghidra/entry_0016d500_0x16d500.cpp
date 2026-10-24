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

// Function: entry_0016d500
// Address: 0x16d500 - 0x16d554
void entry_0016d500_0x16d500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d500_0x16d500");
#endif

    ctx->pc = 0x16d500u;

    // 0x16d500: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x16d500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x16d504: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x16d504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x16d508: 0x1620ffeb  bnez        $s1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x16D508u;
    {
        const bool branch_taken_0x16d508 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d508) {
            ctx->pc = 0x16D4B8u;
            return;
        }
    }
    ctx->pc = 0x16D510u;
    // 0x16d510: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x16d510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x16d514: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x16d514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x16d518: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16d518u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x16d51c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x16d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x16d520: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x16d520u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x16d524: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x16d524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x16d528: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x16d528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x16d52c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x16d530: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x16d530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x16d534: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x16d534u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x16d538: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x16d538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x16d53c: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x16d53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x16d540: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16d540u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x16d544: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x16d544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16d548: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16d548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16d54c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x16d550: 0x72801628  paddub      $v0, $s4, $zero
    ctx->pc = 0x16d550u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16d554u;
}
