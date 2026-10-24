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

// Function: caseD_f
// Address: 0x123e58 - 0x123e68
void caseD_f_0x123e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x123e58");
#endif

    ctx->pc = 0x123e58u;

    // 0x123e58: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123e5c: 0x9451000e  lhu         $s1, 0xE($v0)
    ctx->pc = 0x123e5cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x123e60: 0x3632f000  ori         $s2, $s1, 0xF000
    ctx->pc = 0x123e60u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)61440);
    // 0x123e64: 0xa452000e  sh          $s2, 0xE($v0)
    ctx->pc = 0x123e64u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 18));
    ctx->pc = 0x123e68u;
}
