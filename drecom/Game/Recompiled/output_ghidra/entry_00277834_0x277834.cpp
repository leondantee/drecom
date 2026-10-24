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

// Function: entry_00277834
// Address: 0x277834 - 0x277848
void entry_00277834_0x277834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00277834_0x277834");
#endif

    ctx->pc = 0x277834u;

    // 0x277834: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277838: 0x8c30f9e4  lw          $s0, -0x61C($at)
    ctx->pc = 0x277838u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x27783c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x27783cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x277840: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x277840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x277844: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x277844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x277848u;
}
