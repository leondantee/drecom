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

// Function: entry_00177168
// Address: 0x177168 - 0x177174
void entry_00177168_0x177168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177168_0x177168");
#endif

    ctx->pc = 0x177168u;

    // 0x177168: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x177168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x17716c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17716cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x177170: 0xa023160c  sb          $v1, 0x160C($at)
    ctx->pc = 0x177170u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D160Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D160Cu, _value); } while (0);
    ctx->pc = 0x177174u;
}
