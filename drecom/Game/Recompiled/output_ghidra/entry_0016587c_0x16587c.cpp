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

// Function: entry_0016587c
// Address: 0x16587c - 0x1658a0
void entry_0016587c_0x16587c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016587c_0x16587c");
#endif

    ctx->pc = 0x16587cu;

    // 0x16587c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16587cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165880: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x165880u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x165884: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x165884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x165888: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16588c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16588Cu;
    {
        const bool branch_taken_0x16588c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16588c) {
            ctx->pc = 0x1658A0u;
            return;
        }
    }
    ctx->pc = 0x165894u;
    // 0x165894: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x165894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x165898: 0xac205a04  sw          $zero, 0x5A04($at)
    ctx->pc = 0x165898u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F5A04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A04u, _value); } while (0);
    // 0x16589c: 0x0  nop
    ctx->pc = 0x16589cu;
    // NOP
    ctx->pc = 0x1658a0u;
}
