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

// Function: entry_00225a48
// Address: 0x225a48 - 0x225a94
void entry_00225a48_0x225a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225a48_0x225a48");
#endif

    ctx->pc = 0x225a48u;

    // 0x225a48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x225a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x225a4c: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x225a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x225a50: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x225a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x225a54: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x225a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x225a58: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x225a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x225a5c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x225A5Cu;
    {
        const bool branch_taken_0x225a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x225a5c) {
            ctx->pc = 0x225A94u;
            return;
        }
    }
    ctx->pc = 0x225A64u;
    // 0x225a64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x225a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225a68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225a6c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x225a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x225a70: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x225a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x225a74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225a78: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x225a78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x225a7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225a80: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x225a80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x225a84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225a88: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x225a88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x225a8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225a90: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x225a90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x225a94u;
}
