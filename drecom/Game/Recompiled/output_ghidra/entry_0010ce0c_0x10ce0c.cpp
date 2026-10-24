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

// Function: entry_0010ce0c
// Address: 0x10ce0c - 0x10ce20
void entry_0010ce0c_0x10ce0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ce0c_0x10ce0c");
#endif

    ctx->pc = 0x10ce0cu;

    // 0x10ce0c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10ce10: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10ce10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10ce14: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x10ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x10ce18: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10ce18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10ce1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10ce1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10ce20u;
}
