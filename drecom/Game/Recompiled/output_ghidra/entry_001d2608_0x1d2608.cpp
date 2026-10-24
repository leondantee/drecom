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

// Function: entry_001d2608
// Address: 0x1d2608 - 0x1d2618
void entry_001d2608_0x1d2608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2608_0x1d2608");
#endif

    ctx->pc = 0x1d2608u;

    // 0x1d2608: 0x260301f0  addiu       $v1, $s0, 0x1F0
    ctx->pc = 0x1d2608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x1d260c: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x1d260cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2610: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d2610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2614: 0xfc640130  sd          $a0, 0x130($v1)
    ctx->pc = 0x1d2614u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 304), GPR_U64(ctx, 4));
    ctx->pc = 0x1d2618u;
}
