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

// Function: entry_001550c0
// Address: 0x1550c0 - 0x15510c
void entry_001550c0_0x1550c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001550c0_0x1550c0");
#endif

    ctx->pc = 0x1550c0u;

    // 0x1550c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1550c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1550c4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1550c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1550c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1550c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1550cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1550ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1550d0: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1550D0u;
    {
        const bool branch_taken_0x1550d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1550d0) {
            ctx->pc = 0x155204u;
            return;
        }
    }
    ctx->pc = 0x1550D8u;
    // 0x1550d8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1550d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1550dc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1550dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1550e0: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x1550e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x1550e4: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x1550e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x1550e8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1550e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1550ec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1550ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1550f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1550f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1550f4: 0xa4641250  sh          $a0, 0x1250($v1)
    ctx->pc = 0x1550f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4688), (uint16_t)GPR_U32(ctx, 4));
    // 0x1550f8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1550f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1550fc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1550fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155100: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x155100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x155104: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x155104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155108: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x155108u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x15510cu;
}
