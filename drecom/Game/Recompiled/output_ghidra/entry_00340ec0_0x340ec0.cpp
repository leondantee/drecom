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

// Function: entry_00340ec0
// Address: 0x340ec0 - 0x340ec8
void entry_00340ec0_0x340ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340ec0_0x340ec0");
#endif

    ctx->pc = 0x340ec0u;

    // 0x340ec0: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x340ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x340ec4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x340ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x340ec8u;
}
