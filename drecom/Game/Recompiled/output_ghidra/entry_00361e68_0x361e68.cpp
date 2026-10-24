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

// Function: entry_00361e68
// Address: 0x361e68 - 0x361e88
void entry_00361e68_0x361e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00361e68_0x361e68");
#endif

    ctx->pc = 0x361e68u;

    // 0x361e68: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x361e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x361e6c: 0x9022e653  lbu         $v0, -0x19AD($at)
    ctx->pc = 0x361e6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E653u));
    // 0x361e70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361e74: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x361e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x361e78: 0x1440ff84  bnez        $v0, . + 4 + (-0x7C << 2)
    ctx->pc = 0x361E78u;
    {
        const bool branch_taken_0x361e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x361e78) {
            ctx->pc = 0x361C8Cu;
            return;
        }
    }
    ctx->pc = 0x361E80u;
    // 0x361e80: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x361e80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x361e84: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x361e84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->pc = 0x361e88u;
}
