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

// Function: entry_0016de68
// Address: 0x16de68 - 0x16de88
void entry_0016de68_0x16de68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016de68_0x16de68");
#endif

    ctx->pc = 0x16de68u;

    // 0x16de68: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x16de68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x16de6c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16DE6Cu;
    {
        const bool branch_taken_0x16de6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16de6c) {
            ctx->pc = 0x16DE4Cu;
            return;
        }
    }
    ctx->pc = 0x16DE74u;
    // 0x16de74: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x16de74u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16de78: 0x27b00160  addiu       $s0, $sp, 0x160
    ctx->pc = 0x16de78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x16de7c: 0xafb0025c  sw          $s0, 0x25C($sp)
    ctx->pc = 0x16de7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 16));
    // 0x16de80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16DE80u;
    {
        const bool branch_taken_0x16de80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16de80) {
            ctx->pc = 0x16DEA8u;
            return;
        }
    }
    ctx->pc = 0x16DE88u;
}
