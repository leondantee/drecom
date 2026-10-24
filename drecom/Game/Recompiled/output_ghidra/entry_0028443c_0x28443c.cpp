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

// Function: entry_0028443c
// Address: 0x28443c - 0x284458
void entry_0028443c_0x28443c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028443c_0x28443c");
#endif

    ctx->pc = 0x28443cu;

    // 0x28443c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x28443cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x284440: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x284440u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x284444: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x284444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x284448: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x284448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x28444c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28444cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x284450: 0x8c631390  lw          $v1, 0x1390($v1)
    ctx->pc = 0x284450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x284454: 0xae031334  sw          $v1, 0x1334($s0)
    ctx->pc = 0x284454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4916), GPR_U32(ctx, 3));
    ctx->pc = 0x284458u;
}
