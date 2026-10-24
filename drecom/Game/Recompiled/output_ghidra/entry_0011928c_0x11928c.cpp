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

// Function: entry_0011928c
// Address: 0x11928c - 0x1192a0
void entry_0011928c_0x11928c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011928c_0x11928c");
#endif

    ctx->pc = 0x11928cu;

    // 0x11928c: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x11928cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x119290: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x119290u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x119294: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x119294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x119298: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x119298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x11929c: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x11929cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1192a0u;
}
