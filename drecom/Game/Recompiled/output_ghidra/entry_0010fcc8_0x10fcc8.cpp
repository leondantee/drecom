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

// Function: entry_0010fcc8
// Address: 0x10fcc8 - 0x10fcd0
void entry_0010fcc8_0x10fcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fcc8_0x10fcc8");
#endif

    ctx->pc = 0x10fcc8u;

    // 0x10fcc8: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x10fcc8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x10fccc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10fcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10fcd0u;
}
