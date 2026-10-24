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

// Function: entry_003190cc
// Address: 0x3190cc - 0x31910c
void entry_003190cc_0x3190cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003190cc_0x3190cc");
#endif

    ctx->pc = 0x3190ccu;

    // 0x3190cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3190ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3190d0: 0xac601294  sw          $zero, 0x1294($v1)
    ctx->pc = 0x3190d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4756), GPR_U32(ctx, 0));
    // 0x3190d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3190d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3190d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3190d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3190dc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3190dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3190e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3190e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3190e4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3190e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3190e8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3190e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3190ec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3190ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3190f0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3190f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3190f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3190f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3190f8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3190f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3190fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3190fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x319100: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x319100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x319104: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x319104u;
    {
        const bool branch_taken_0x319104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319104) {
            ctx->pc = 0x3191D0u;
            return;
        }
    }
    ctx->pc = 0x31910Cu;
}
