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

// Function: entry_00170554
// Address: 0x170554 - 0x170574
void entry_00170554_0x170554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170554_0x170554");
#endif

    ctx->pc = 0x170554u;

    // 0x170554: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x170554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x170558: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x170558u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17055c: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17055Cu;
    {
        const bool branch_taken_0x17055c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x17055c) {
            ctx->pc = 0x170574u;
            return;
        }
    }
    ctx->pc = 0x170564u;
    // 0x170564: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x170564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x170568: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x170568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x17056c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17056Cu;
    {
        const bool branch_taken_0x17056c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17056c) {
            ctx->pc = 0x170578u;
            return;
        }
    }
    ctx->pc = 0x170574u;
}
