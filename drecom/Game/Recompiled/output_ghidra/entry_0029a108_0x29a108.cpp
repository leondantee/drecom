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

// Function: entry_0029a108
// Address: 0x29a108 - 0x29a11c
void entry_0029a108_0x29a108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a108_0x29a108");
#endif

    ctx->pc = 0x29a108u;

    // 0x29a108: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29a108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29a10c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x29a10cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29a110: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x29a110u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29a114: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x29A114u;
    {
        const bool branch_taken_0x29a114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a114) {
            ctx->pc = 0x29A488u;
            return;
        }
    }
    ctx->pc = 0x29A11Cu;
}
