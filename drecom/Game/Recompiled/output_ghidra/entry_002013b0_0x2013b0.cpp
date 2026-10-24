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

// Function: entry_002013b0
// Address: 0x2013b0 - 0x2013e4
void entry_002013b0_0x2013b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002013b0_0x2013b0");
#endif

    ctx->pc = 0x2013b0u;

    // 0x2013b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2013b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2013b4: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x2013b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x2013b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2013b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2013bc: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2013bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2013c0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2013C0u;
    {
        const bool branch_taken_0x2013c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2013c0) {
            ctx->pc = 0x201468u;
            return;
        }
    }
    ctx->pc = 0x2013C8u;
    // 0x2013c8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2013c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2013cc: 0x8c229fb0  lw          $v0, -0x6050($at)
    ctx->pc = 0x2013ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x389FB0u));
    // 0x2013d0: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2013D0u;
    {
        const bool branch_taken_0x2013d0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2013d0) {
            ctx->pc = 0x2013E4u;
            return;
        }
    }
    ctx->pc = 0x2013D8u;
    // 0x2013d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2013d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2013dc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2013dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2013e0: 0xac229fb0  sw          $v0, -0x6050($at)
    ctx->pc = 0x2013e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x389FB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x389FB0u, _value); } while (0);
    ctx->pc = 0x2013e4u;
}
