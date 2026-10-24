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

// Function: entry_001350c0
// Address: 0x1350c0 - 0x1350ec
void entry_001350c0_0x1350c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001350c0_0x1350c0");
#endif

    ctx->pc = 0x1350c0u;

    // 0x1350c0: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1350c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1350c4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1350c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1350c8: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1350c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x1350cc: 0x9603007e  lhu         $v1, 0x7E($s0)
    ctx->pc = 0x1350ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 126)));
    // 0x1350d0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1350D0u;
    {
        const bool branch_taken_0x1350d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1350d0) {
            ctx->pc = 0x1350ECu;
            return;
        }
    }
    ctx->pc = 0x1350D8u;
    // 0x1350d8: 0x9603007e  lhu         $v1, 0x7E($s0)
    ctx->pc = 0x1350d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 126)));
    // 0x1350dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1350dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1350e0: 0xa603007e  sh          $v1, 0x7E($s0)
    ctx->pc = 0x1350e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 3));
    // 0x1350e4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1350E4u;
    {
        const bool branch_taken_0x1350e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1350e4) {
            ctx->pc = 0x135150u;
            return;
        }
    }
    ctx->pc = 0x1350ECu;
}
