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

// Function: entry_00211974
// Address: 0x211974 - 0x211990
void entry_00211974_0x211974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00211974_0x211974");
#endif

    ctx->pc = 0x211974u;

    // 0x211974: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x211978: 0x8c2a1a98  lw          $t2, 0x1A98($at)
    ctx->pc = 0x211978u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x21197c: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x21197cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x211980: 0x3469ffff  ori         $t1, $v1, 0xFFFF
    ctx->pc = 0x211980u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x211984: 0x1495024  and         $t2, $t2, $t1
    ctx->pc = 0x211984u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x211988: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x21198c: 0xac2a1a98  sw          $t2, 0x1A98($at)
    ctx->pc = 0x21198cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x211990u;
}
