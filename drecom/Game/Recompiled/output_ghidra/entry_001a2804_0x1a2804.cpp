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

// Function: entry_001a2804
// Address: 0x1a2804 - 0x1a2818
void entry_001a2804_0x1a2804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2804_0x1a2804");
#endif

    ctx->pc = 0x1a2804u;

    // 0x1a2804: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a2804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a2808: 0x8c231a40  lw          $v1, 0x1A40($at)
    ctx->pc = 0x1a2808u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x1a280c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1a280cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1a2810: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a2810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a2814: 0xac231a40  sw          $v1, 0x1A40($at)
    ctx->pc = 0x1a2814u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A40u, _value); } while (0);
    ctx->pc = 0x1a2818u;
}
