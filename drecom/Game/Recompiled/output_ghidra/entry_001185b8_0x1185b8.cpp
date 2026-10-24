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

// Function: entry_001185b8
// Address: 0x1185b8 - 0x1185c8
void entry_001185b8_0x1185b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001185b8_0x1185b8");
#endif

    ctx->pc = 0x1185b8u;

    // 0x1185b8: 0x244c4928  addiu       $t4, $v0, 0x4928
    ctx->pc = 0x1185b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 18728));
    // 0x1185bc: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x1185bcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1185c0: 0xb10c0  sll         $v0, $t3, 3
    ctx->pc = 0x1185c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x1185c4: 0x0  nop
    ctx->pc = 0x1185c4u;
    // NOP
    ctx->pc = 0x1185c8u;
}
