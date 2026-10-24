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

// Function: entry_0033e3b0
// Address: 0x33e3b0 - 0x33e400
void entry_0033e3b0_0x33e3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033e3b0_0x33e3b0");
#endif

    ctx->pc = 0x33e3b0u;

    // 0x33e3b0: 0x2e22000f  sltiu       $v0, $s1, 0xF
    ctx->pc = 0x33e3b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x33e3b4: 0x1440ff5f  bnez        $v0, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x33E3B4u;
    {
        const bool branch_taken_0x33e3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e3b4) {
            ctx->pc = 0x33E134u;
            return;
        }
    }
    ctx->pc = 0x33E3BCu;
    // 0x33e3bc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x33e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x33e3c0: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x33e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x33e3c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x33e3c8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x33e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x33e3cc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33e3ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x33e3d0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x33e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x33e3d4: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x33e3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x33e3d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x33e3dc: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x33e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x33e3e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33e3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33e3e4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33e3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x33e3e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33e3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x33e3ec: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x33e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x33e3f0: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x33e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x33e3f4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x33e3f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e3f8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x33E3F8u;
    {
        const bool branch_taken_0x33e3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e3f8) {
            ctx->pc = 0x33E478u;
            return;
        }
    }
    ctx->pc = 0x33E400u;
}
