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

// Function: entry_00295c54
// Address: 0x295c54 - 0x295c98
void entry_00295c54_0x295c54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00295c54_0x295c54");
#endif

    ctx->pc = 0x295c54u;

    // 0x295c54: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x295c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x295c58: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x295c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x295c5c: 0x108300e9  beq         $a0, $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x295C5Cu;
    {
        const bool branch_taken_0x295c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x295c5c) {
            ctx->pc = 0x296004u;
            return;
        }
    }
    ctx->pc = 0x295C64u;
    // 0x295c64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x295c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x295c68: 0x108300ab  beq         $a0, $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x295C68u;
    {
        const bool branch_taken_0x295c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x295c68) {
            ctx->pc = 0x295F18u;
            return;
        }
    }
    ctx->pc = 0x295C70u;
    // 0x295c70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x295c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295c74: 0x1083006d  beq         $a0, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x295C74u;
    {
        const bool branch_taken_0x295c74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x295c74) {
            ctx->pc = 0x295E2Cu;
            return;
        }
    }
    ctx->pc = 0x295C7Cu;
    // 0x295c7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295c80: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x295C80u;
    {
        const bool branch_taken_0x295c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x295c80) {
            ctx->pc = 0x295D3Cu;
            return;
        }
    }
    ctx->pc = 0x295C88u;
    // 0x295c88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x295C88u;
    {
        const bool branch_taken_0x295c88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x295c88) {
            ctx->pc = 0x295C98u;
            return;
        }
    }
    ctx->pc = 0x295C90u;
    // 0x295c90: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x295C90u;
    {
        const bool branch_taken_0x295c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295c90) {
            ctx->pc = 0x296004u;
            return;
        }
    }
    ctx->pc = 0x295C98u;
}
