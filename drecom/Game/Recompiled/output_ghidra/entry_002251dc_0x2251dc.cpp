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

// Function: entry_002251dc
// Address: 0x2251dc - 0x225228
void entry_002251dc_0x2251dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002251dc_0x2251dc");
#endif

    ctx->pc = 0x2251dcu;

    // 0x2251dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2251dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2251e0: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x2251e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x2251e4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2251e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2251e8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2251e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2251ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2251ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2251f0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2251F0u;
    {
        const bool branch_taken_0x2251f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2251f0) {
            ctx->pc = 0x225228u;
            return;
        }
    }
    ctx->pc = 0x2251F8u;
    // 0x2251f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2251f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2251fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2251fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225200: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x225200u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x225204: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x225204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x225208: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22520c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x22520cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x225210: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225214: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x225214u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x225218: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22521c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x22521cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x225220: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225224: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x225224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x225228u;
}
