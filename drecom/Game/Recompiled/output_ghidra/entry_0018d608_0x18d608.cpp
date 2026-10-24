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

// Function: entry_0018d608
// Address: 0x18d608 - 0x18d620
void entry_0018d608_0x18d608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d608_0x18d608");
#endif

    ctx->pc = 0x18d608u;

    // 0x18d608: 0x8e030b18  lw          $v1, 0xB18($s0)
    ctx->pc = 0x18d608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2840)));
    // 0x18d60c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D60Cu;
    {
        const bool branch_taken_0x18d60c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d60c) {
            ctx->pc = 0x18D620u;
            return;
        }
    }
    ctx->pc = 0x18D614u;
    // 0x18d614: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x18d614u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d618: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18D618u;
    {
        const bool branch_taken_0x18d618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d618) {
            ctx->pc = 0x18D650u;
            return;
        }
    }
    ctx->pc = 0x18D620u;
}
