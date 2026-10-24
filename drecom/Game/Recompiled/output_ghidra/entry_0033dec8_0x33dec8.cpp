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

// Function: entry_0033dec8
// Address: 0x33dec8 - 0x33def8
void entry_0033dec8_0x33dec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033dec8_0x33dec8");
#endif

    ctx->pc = 0x33dec8u;

    // 0x33dec8: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x33dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x33decc: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x33deccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x33ded0: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x33ded0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    // 0x33ded4: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x33ded4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x33ded8: 0x2c610801  sltiu       $at, $v1, 0x801
    ctx->pc = 0x33ded8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2049) ? 1 : 0);
    // 0x33dedc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x33DEDCu;
    {
        const bool branch_taken_0x33dedc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33dedc) {
            ctx->pc = 0x33DEF8u;
            return;
        }
    }
    ctx->pc = 0x33DEE4u;
    // 0x33dee4: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x33dee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x33dee8: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x33dee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    // 0x33deec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33deecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33def0: 0xa6230052  sh          $v1, 0x52($s1)
    ctx->pc = 0x33def0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x33def4: 0x0  nop
    ctx->pc = 0x33def4u;
    // NOP
    ctx->pc = 0x33def8u;
}
