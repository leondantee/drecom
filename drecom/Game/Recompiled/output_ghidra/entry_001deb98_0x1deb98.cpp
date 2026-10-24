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

// Function: entry_001deb98
// Address: 0x1deb98 - 0x1debb0
void entry_001deb98_0x1deb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001deb98_0x1deb98");
#endif

    ctx->pc = 0x1deb98u;

    // 0x1deb98: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1deb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1deb9c: 0xfee30020  sd          $v1, 0x20($s7)
    ctx->pc = 0x1deb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 32), GPR_U64(ctx, 3));
    // 0x1deba0: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x1deba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x1deba4: 0xaee30028  sw          $v1, 0x28($s7)
    ctx->pc = 0x1deba4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 40), GPR_U32(ctx, 3));
    // 0x1deba8: 0xaee0002c  sw          $zero, 0x2C($s7)
    ctx->pc = 0x1deba8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 44), GPR_U32(ctx, 0));
    // 0x1debac: 0x0  nop
    ctx->pc = 0x1debacu;
    // NOP
    ctx->pc = 0x1debb0u;
}
