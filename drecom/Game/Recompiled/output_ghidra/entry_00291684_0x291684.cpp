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

// Function: entry_00291684
// Address: 0x291684 - 0x291690
void entry_00291684_0x291684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291684_0x291684");
#endif

    ctx->pc = 0x291684u;

    // 0x291684: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291688: 0xac202a58  sw          $zero, 0x2A58($at)
    ctx->pc = 0x291688u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622A58u, _value); } while (0);
    // 0x29168c: 0x0  nop
    ctx->pc = 0x29168cu;
    // NOP
    ctx->pc = 0x291690u;
}
