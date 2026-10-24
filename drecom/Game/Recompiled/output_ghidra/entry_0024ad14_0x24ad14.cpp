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

// Function: entry_0024ad14
// Address: 0x24ad14 - 0x24ad60
void entry_0024ad14_0x24ad14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024ad14_0x24ad14");
#endif

    ctx->pc = 0x24ad14u;

    // 0x24ad14: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ad18: 0x9063001d  lbu         $v1, 0x1D($v1)
    ctx->pc = 0x24ad18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 29)));
    // 0x24ad1c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x24ad1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x24ad20: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x24ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24ad24: 0x10830206  beq         $a0, $v1, . + 4 + (0x206 << 2)
    ctx->pc = 0x24AD24u;
    {
        const bool branch_taken_0x24ad24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24ad24) {
            ctx->pc = 0x24B540u;
            return;
        }
    }
    ctx->pc = 0x24AD2Cu;
    // 0x24ad2c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24ad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24ad30: 0x108301e2  beq         $a0, $v1, . + 4 + (0x1E2 << 2)
    ctx->pc = 0x24AD30u;
    {
        const bool branch_taken_0x24ad30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24ad30) {
            ctx->pc = 0x24B4BCu;
            return;
        }
    }
    ctx->pc = 0x24AD38u;
    // 0x24ad38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24ad38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24ad3c: 0x1083012b  beq         $a0, $v1, . + 4 + (0x12B << 2)
    ctx->pc = 0x24AD3Cu;
    {
        const bool branch_taken_0x24ad3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24ad3c) {
            ctx->pc = 0x24B1ECu;
            return;
        }
    }
    ctx->pc = 0x24AD44u;
    // 0x24ad44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ad48: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x24AD48u;
    {
        const bool branch_taken_0x24ad48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24ad48) {
            ctx->pc = 0x24AE34u;
            return;
        }
    }
    ctx->pc = 0x24AD50u;
    // 0x24ad50: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24AD50u;
    {
        const bool branch_taken_0x24ad50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ad50) {
            ctx->pc = 0x24AD60u;
            return;
        }
    }
    ctx->pc = 0x24AD58u;
    // 0x24ad58: 0x10000206  b           . + 4 + (0x206 << 2)
    ctx->pc = 0x24AD58u;
    {
        const bool branch_taken_0x24ad58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ad58) {
            ctx->pc = 0x24B574u;
            return;
        }
    }
    ctx->pc = 0x24AD60u;
}
