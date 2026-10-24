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

// Function: entry_00158958
// Address: 0x158958 - 0x158970
void entry_00158958_0x158958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158958_0x158958");
#endif

    ctx->pc = 0x158958u;

    // 0x158958: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15895c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15895cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158960: 0xac23f848  sw          $v1, -0x7B8($at)
    ctx->pc = 0x158960u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EF848u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF848u, _value); } while (0);
    // 0x158964: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x158964u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x158968: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x158968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15896c: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x15896cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x158970u;
}
