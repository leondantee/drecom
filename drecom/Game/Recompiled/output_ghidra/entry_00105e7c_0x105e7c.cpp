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

// Function: entry_00105e7c
// Address: 0x105e7c - 0x105e98
void entry_00105e7c_0x105e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105e7c_0x105e7c");
#endif

    ctx->pc = 0x105e7cu;

    // 0x105e7c: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x105e7cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x105e80: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x105e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x105e84: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x105e84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x105e88: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x105e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x105e8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x105e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105e94: 0x0  nop
    ctx->pc = 0x105e94u;
    // NOP
    ctx->pc = 0x105e98u;
}
