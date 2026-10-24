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

// Function: entry_00271924
// Address: 0x271924 - 0x271950
void entry_00271924_0x271924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271924_0x271924");
#endif

    ctx->pc = 0x271924u;

    // 0x271924: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x271924u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x271928: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x271928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27192c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27192cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x271930: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x271930u;
    {
        const bool branch_taken_0x271930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271930) {
            ctx->pc = 0x271950u;
            return;
        }
    }
    ctx->pc = 0x271938u;
    // 0x271938: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x271938u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x27193c: 0x3042f7ff  andi        $v0, $v0, 0xF7FF
    ctx->pc = 0x27193cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63487);
    // 0x271940: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x271940u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x271944: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x271944u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x271948: 0x3042fbff  andi        $v0, $v0, 0xFBFF
    ctx->pc = 0x271948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64511);
    // 0x27194c: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x27194cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x271950u;
}
