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

// Function: entry_00176f28
// Address: 0x176f28 - 0x176f38
void entry_00176f28_0x176f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176f28_0x176f28");
#endif

    ctx->pc = 0x176f28u;

    // 0x176f28: 0x2603fffc  addiu       $v1, $s0, -0x4
    ctx->pc = 0x176f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x176f2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x176f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x176f30: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x176f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x176f34: 0x0  nop
    ctx->pc = 0x176f34u;
    // NOP
    ctx->pc = 0x176f38u;
}
