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

// Function: default
// Address: 0x1bac54 - 0x1bac80
void ps2_default_0x1bac54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1bac54");
#endif

    ctx->pc = 0x1bac54u;

    // 0x1bac54: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bac54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bac58: 0x8c641b6c  lw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1bac58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x1bac5c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAC5Cu;
    {
        const bool branch_taken_0x1bac5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bac5c) {
            ctx->pc = 0x1BAC80u;
            return;
        }
    }
    ctx->pc = 0x1BAC64u;
    // 0x1bac64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bac64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bac68: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x1bac68u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1bac6c: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x1bac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
    // 0x1bac70: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1bac70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1bac74: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1bac74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1bac78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bac78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bac7c: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1bac7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1bac80u;
}
