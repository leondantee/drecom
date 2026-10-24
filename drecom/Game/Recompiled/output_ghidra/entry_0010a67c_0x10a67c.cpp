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

// Function: entry_0010a67c
// Address: 0x10a67c - 0x10a688
void entry_0010a67c_0x10a67c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a67c_0x10a67c");
#endif

    ctx->pc = 0x10a67cu;

    // 0x10a67c: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x10a67cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x10a680: 0xaea04480  sw          $zero, 0x4480($s5)
    ctx->pc = 0x10a680u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x384480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x384480u, _value); } while (0);
    // 0x10a684: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10a684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x10a688u;
}
