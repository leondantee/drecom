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

// Function: entry_00119088
// Address: 0x119088 - 0x1190a0
void entry_00119088_0x119088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119088_0x119088");
#endif

    ctx->pc = 0x119088u;

    // 0x119088: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x119088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x11908c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x11908cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x119090: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119090u;
    {
        const bool branch_taken_0x119090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119090) {
            ctx->pc = 0x1190A0u;
            return;
        }
    }
    ctx->pc = 0x119098u;
    // 0x119098: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x119098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x11909c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x11909cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x1190a0u;
}
