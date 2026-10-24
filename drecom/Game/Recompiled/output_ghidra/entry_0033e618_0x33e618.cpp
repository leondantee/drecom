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

// Function: entry_0033e618
// Address: 0x33e618 - 0x33e680
void entry_0033e618_0x33e618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033e618_0x33e618");
#endif

    ctx->pc = 0x33e618u;

    // 0x33e618: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x33e618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e61c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e620: 0x2421804  sllv        $v1, $v0, $s2
    ctx->pc = 0x33e620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x33e624: 0x8c821348  lw          $v0, 0x1348($a0)
    ctx->pc = 0x33e624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4936)));
    // 0x33e628: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33e628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33e62c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x33E62Cu;
    {
        const bool branch_taken_0x33e62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e62c) {
            ctx->pc = 0x33E680u;
            return;
        }
    }
    ctx->pc = 0x33E634u;
    // 0x33e634: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x33e634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x33e638: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x33e638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33e63c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x33e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33e640: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e644: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33e644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33e648: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e64c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33e650: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e654: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x33e654u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x33e658: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x33e658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e65c: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x33e65cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x33e660: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x33e660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33e664: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e668: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33e668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33e66c: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x33e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x33e670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e674: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x33e674u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x33e678: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x33E678u;
    {
        const bool branch_taken_0x33e678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e678) {
            ctx->pc = 0x33E9F0u;
            return;
        }
    }
    ctx->pc = 0x33E680u;
}
