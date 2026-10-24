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

// Function: entry_00179260
// Address: 0x179260 - 0x179278
void entry_00179260_0x179260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179260_0x179260");
#endif

    ctx->pc = 0x179260u;

    // 0x179260: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x179260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x179264: 0x90420011  lbu         $v0, 0x11($v0)
    ctx->pc = 0x179264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x179268: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x179268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17926c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x17926cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x179270: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x179270u;
    {
        const bool branch_taken_0x179270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179270) {
            ctx->pc = 0x17911Cu;
            return;
        }
    }
    ctx->pc = 0x179278u;
}
