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

// Function: entry_001243cc
// Address: 0x1243cc - 0x124408
void entry_001243cc_0x1243cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001243cc_0x1243cc");
#endif

    ctx->pc = 0x1243ccu;

    // 0x1243cc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1243ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1243d0: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x1243d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x1243d4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1243d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1243d8: 0x28440010  slti        $a0, $v0, 0x10
    ctx->pc = 0x1243d8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1243dc: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1243DCu;
    {
        const bool branch_taken_0x1243dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1243dc) {
            ctx->pc = 0x124408u;
            return;
        }
    }
    ctx->pc = 0x1243E4u;
    // 0x1243e4: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1243e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1243e8: 0x90a20012  lbu         $v0, 0x12($a1)
    ctx->pc = 0x1243e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x1243ec: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1243ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1243f0: 0x28810014  slti        $at, $a0, 0x14
    ctx->pc = 0x1243f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1243f4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1243F4u;
    {
        const bool branch_taken_0x1243f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1243f4) {
            ctx->pc = 0x124408u;
            return;
        }
    }
    ctx->pc = 0x1243FCu;
    // 0x1243fc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1243fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124400: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x124400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x124404: 0xa0600fc0  sb          $zero, 0xFC0($v1)
    ctx->pc = 0x124404u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4032), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x124408u;
}
