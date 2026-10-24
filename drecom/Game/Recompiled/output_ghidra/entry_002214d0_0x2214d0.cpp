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

// Function: entry_002214d0
// Address: 0x2214d0 - 0x221514
void entry_002214d0_0x2214d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002214d0_0x2214d0");
#endif

    ctx->pc = 0x2214d0u;

    // 0x2214d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2214d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2214d4: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x2214d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x2214d8: 0x30868000  andi        $a2, $a0, 0x8000
    ctx->pc = 0x2214d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x2214dc: 0x14c0000d  bnez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2214DCu;
    {
        const bool branch_taken_0x2214dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2214dc) {
            ctx->pc = 0x221514u;
            return;
        }
    }
    ctx->pc = 0x2214E4u;
    // 0x2214e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2214e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2214e8: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x2214e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x2214ec: 0x34830001  ori         $v1, $a0, 0x1
    ctx->pc = 0x2214ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x2214f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2214f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2214f4: 0xac231a50  sw          $v1, 0x1A50($at)
    ctx->pc = 0x2214f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A50u, _value); } while (0);
    // 0x2214f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2214f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2214fc: 0x8c251a50  lw          $a1, 0x1A50($at)
    ctx->pc = 0x2214fcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x221500: 0x3c04fffd  lui         $a0, 0xFFFD
    ctx->pc = 0x221500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65533 << 16));
    // 0x221504: 0x3483fffd  ori         $v1, $a0, 0xFFFD
    ctx->pc = 0x221504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65533);
    // 0x221508: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x221508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x22150c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22150cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x221510: 0xac231a50  sw          $v1, 0x1A50($at)
    ctx->pc = 0x221510u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A50u, _value); } while (0);
    ctx->pc = 0x221514u;
}
