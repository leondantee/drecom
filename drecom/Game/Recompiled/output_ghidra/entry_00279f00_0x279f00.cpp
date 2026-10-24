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

// Function: entry_00279f00
// Address: 0x279f00 - 0x279f20
void entry_00279f00_0x279f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00279f00_0x279f00");
#endif

    ctx->pc = 0x279f00u;

    // 0x279f00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x279f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x279f04: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x279F04u;
    {
        const bool branch_taken_0x279f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x279f04) {
            ctx->pc = 0x279F20u;
            return;
        }
    }
    ctx->pc = 0x279F0Cu;
    // 0x279f0c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x279f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x279f10: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x279f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x279f14: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x279f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x279f18: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x279f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x279f1c: 0x0  nop
    ctx->pc = 0x279f1cu;
    // NOP
    ctx->pc = 0x279f20u;
}
