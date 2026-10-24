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

// Function: sub_00389230
// Address: 0x389230 - 0x389240
void sub_00389230_0x389230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389230_0x389230");
#endif

    switch (ctx->pc) {
        case 0x389238u: goto label_389238;
        default: break;
    }

    ctx->pc = 0x389230u;

    // 0x389230: 0x20001f  ddivu       $zero, $at, $zero
    ctx->pc = 0x389230u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x389230 raw=0x0020001F");
    // 0x389234: 0x1f0021  addu        $zero, $zero, $ra
    ctx->pc = 0x389234u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 31)));
label_389238:
    // 0x389238: 0x0  nop
    ctx->pc = 0x389238u;
    // NOP
    // 0x38923c: 0x0  nop
    ctx->pc = 0x38923cu;
    // NOP
    ctx->pc = 0x389240u;
}
