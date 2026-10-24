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

// Function: entry_003385e0
// Address: 0x3385e0 - 0x3385f8
void entry_003385e0_0x3385e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003385e0_0x3385e0");
#endif

    ctx->pc = 0x3385e0u;

    // 0x3385e0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3385e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3385e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3385e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3385e8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3385e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3385ec: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3385ECu;
    {
        const bool branch_taken_0x3385ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3385ec) {
            ctx->pc = 0x3385B0u;
            return;
        }
    }
    ctx->pc = 0x3385F4u;
    // 0x3385f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3385f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x3385f8u;
}
