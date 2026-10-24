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

// Function: entry_001de908
// Address: 0x1de908 - 0x1de934
void entry_001de908_0x1de908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de908_0x1de908");
#endif

    ctx->pc = 0x1de908u;

    // 0x1de908: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x1de908u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de90c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1de90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1de910: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1de910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1de914: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1de914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1de918: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE918u;
    {
        const bool branch_taken_0x1de918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de918) {
            ctx->pc = 0x1DE934u;
            return;
        }
    }
    ctx->pc = 0x1DE920u;
    // 0x1de920: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1de920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x1de924: 0x3442080b  ori         $v0, $v0, 0x80B
    ctx->pc = 0x1de924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2059);
    // 0x1de928: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x1de928u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x1de92c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE92Cu;
    {
        const bool branch_taken_0x1de92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de92c) {
            ctx->pc = 0x1DE940u;
            return;
        }
    }
    ctx->pc = 0x1DE934u;
}
