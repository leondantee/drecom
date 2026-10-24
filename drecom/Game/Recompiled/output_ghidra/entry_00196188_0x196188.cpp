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

// Function: entry_00196188
// Address: 0x196188 - 0x1961a8
void entry_00196188_0x196188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196188_0x196188");
#endif

    ctx->pc = 0x196188u;

    // 0x196188: 0x96630034  lhu         $v1, 0x34($s3)
    ctx->pc = 0x196188u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x19618c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19618cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x196190: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x196190u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x196194: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x196194u;
    {
        const bool branch_taken_0x196194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x196194) {
            ctx->pc = 0x196128u;
            return;
        }
    }
    ctx->pc = 0x19619Cu;
    // 0x19619c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x19619cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1961a0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1961A0u;
    {
        const bool branch_taken_0x1961a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1961a0) {
            ctx->pc = 0x1961F8u;
            return;
        }
    }
    ctx->pc = 0x1961A8u;
}
