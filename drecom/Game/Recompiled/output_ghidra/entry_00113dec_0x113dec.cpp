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

// Function: entry_00113dec
// Address: 0x113dec - 0x113df8
void entry_00113dec_0x113dec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113dec_0x113dec");
#endif

    ctx->pc = 0x113decu;

    // 0x113dec: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x113decu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x113df0: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x113df0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x113df4: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x113df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    ctx->pc = 0x113df8u;
}
