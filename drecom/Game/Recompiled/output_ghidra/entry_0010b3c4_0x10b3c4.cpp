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

// Function: entry_0010b3c4
// Address: 0x10b3c4 - 0x10b3d0
void entry_0010b3c4_0x10b3c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b3c4_0x10b3c4");
#endif

    ctx->pc = 0x10b3c4u;

    // 0x10b3c4: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x10b3c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x10b3c8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10b3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10b3cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10b3ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10b3d0u;
}
