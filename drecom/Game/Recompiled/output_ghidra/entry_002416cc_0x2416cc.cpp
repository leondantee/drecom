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

// Function: entry_002416cc
// Address: 0x2416cc - 0x241700
void entry_002416cc_0x2416cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002416cc_0x2416cc");
#endif

    ctx->pc = 0x2416ccu;

    // 0x2416cc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2416ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2416d0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2416d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2416d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2416d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2416d8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2416d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2416dc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2416dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2416e0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2416e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2416e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2416e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2416e8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2416e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2416ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2416ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2416f0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2416f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2416f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2416f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2416f8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2416F8u;
    {
        const bool branch_taken_0x2416f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2416f8) {
            ctx->pc = 0x2417C0u;
            return;
        }
    }
    ctx->pc = 0x241700u;
}
