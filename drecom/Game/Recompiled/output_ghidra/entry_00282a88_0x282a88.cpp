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

// Function: entry_00282a88
// Address: 0x282a88 - 0x282a9c
void entry_00282a88_0x282a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00282a88_0x282a88");
#endif

    ctx->pc = 0x282a88u;

    // 0x282a88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282a8c: 0xac20dc3c  sw          $zero, -0x23C4($at)
    ctx->pc = 0x282a8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CDC3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CDC3Cu, _value); } while (0);
    // 0x282a90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x282a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x282a94: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x282a98: 0xac221b90  sw          $v0, 0x1B90($at)
    ctx->pc = 0x282a98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B90u, _value); } while (0);
    ctx->pc = 0x282a9cu;
}
