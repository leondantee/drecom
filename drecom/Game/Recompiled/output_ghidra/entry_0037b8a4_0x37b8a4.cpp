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

// Function: entry_0037b8a4
// Address: 0x37b8a4 - 0x37b8d0
void entry_0037b8a4_0x37b8a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037b8a4_0x37b8a4");
#endif

    ctx->pc = 0x37b8a4u;

    // 0x37b8a4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b8a8: 0x8c2305a0  lw          $v1, 0x5A0($at)
    ctx->pc = 0x37b8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A05A0u));
    // 0x37b8ac: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x37b8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x37b8b0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x37B8B0u;
    {
        const bool branch_taken_0x37b8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b8b0) {
            ctx->pc = 0x37B8D0u;
            return;
        }
    }
    ctx->pc = 0x37B8B8u;
    // 0x37b8b8: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b8bc: 0x8c2605a0  lw          $a2, 0x5A0($at)
    ctx->pc = 0x37b8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x9A05A0u));
    // 0x37b8c0: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x37b8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x37b8c4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x37b8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x37b8c8: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b8cc: 0xac2305a0  sw          $v1, 0x5A0($at)
    ctx->pc = 0x37b8ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A05A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A05A0u, _value); } while (0);
    ctx->pc = 0x37b8d0u;
}
