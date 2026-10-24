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

// Function: entry_0018cb94
// Address: 0x18cb94 - 0x18cba0
void entry_0018cb94_0x18cb94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cb94_0x18cb94");
#endif

    ctx->pc = 0x18cb94u;

    // 0x18cb94: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18cb94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x18cb98: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x18cb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x18cb9c: 0xa6020340  sh          $v0, 0x340($s0)
    ctx->pc = 0x18cb9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 832), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x18cba0u;
}
