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

// Function: entry_00140920
// Address: 0x140920 - 0x140938
void entry_00140920_0x140920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140920_0x140920");
#endif

    ctx->pc = 0x140920u;

    // 0x140920: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140924: 0x8c230b18  lw          $v1, 0xB18($at)
    ctx->pc = 0x140924u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0B18u));
    // 0x140928: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x140928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x14092c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14092cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140930: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140934: 0xac220b18  sw          $v0, 0xB18($at)
    ctx->pc = 0x140934u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0B18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0B18u, _value); } while (0);
    ctx->pc = 0x140938u;
}
