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

// Function: entry_0014085c
// Address: 0x14085c - 0x1408a8
void entry_0014085c_0x14085c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014085c_0x14085c");
#endif

    ctx->pc = 0x14085cu;

    // 0x14085c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14085cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140860: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x140860u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x140864: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x140864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x140868: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14086c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14086Cu;
    {
        const bool branch_taken_0x14086c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14086c) {
            ctx->pc = 0x1408A8u;
            return;
        }
    }
    ctx->pc = 0x140874u;
    // 0x140874: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140878: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x140878u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14087c: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x14087cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x140880: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x140880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x140884: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140888: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14088c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x14088cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x140890: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140894: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x140894u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x140898: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x140898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x14089c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14089cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1408a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1408a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1408a4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1408a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1408a8u;
}
