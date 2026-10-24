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

// Function: entry_002012f4
// Address: 0x2012f4 - 0x20132c
void entry_002012f4_0x2012f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002012f4_0x2012f4");
#endif

    ctx->pc = 0x2012f4u;

    // 0x2012f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2012f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2012f8: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x2012f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x2012fc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2012fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x201300: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x201300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x201304: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x201304u;
    {
        const bool branch_taken_0x201304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201304) {
            ctx->pc = 0x2013B0u;
            return;
        }
    }
    ctx->pc = 0x20130Cu;
    // 0x20130c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20130cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x201310: 0x8c229fb0  lw          $v0, -0x6050($at)
    ctx->pc = 0x201310u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x389FB0u));
    // 0x201314: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x201314u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x201318: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x201318u;
    {
        const bool branch_taken_0x201318 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x201318) {
            ctx->pc = 0x20132Cu;
            return;
        }
    }
    ctx->pc = 0x201320u;
    // 0x201320: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x201320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201324: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x201324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x201328: 0xac229fb0  sw          $v0, -0x6050($at)
    ctx->pc = 0x201328u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x389FB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x389FB0u, _value); } while (0);
    ctx->pc = 0x20132cu;
}
