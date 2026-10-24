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

// Function: caseD_9
// Address: 0x1cc6a4 - 0x1cc6ec
void caseD_9_0x1cc6a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1cc6a4");
#endif

    ctx->pc = 0x1cc6a4u;

    // 0x1cc6a4: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x1cc6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1cc6a8: 0x30650800  andi        $a1, $v1, 0x800
    ctx->pc = 0x1cc6a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x1cc6ac: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CC6ACu;
    {
        const bool branch_taken_0x1cc6ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc6ac) {
            ctx->pc = 0x1CC6ECu;
            return;
        }
    }
    ctx->pc = 0x1CC6B4u;
    // 0x1cc6b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cc6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc6b8: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1cc6b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc6bc: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x1cc6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1cc6c0: 0x24080021  addiu       $t0, $zero, 0x21
    ctx->pc = 0x1cc6c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1cc6c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc6c8: 0xa0680001  sb          $t0, 0x1($v1)
    ctx->pc = 0x1cc6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x1cc6cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc6d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cc6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cc6d4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc6d8: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1cc6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cc6dc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc6e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cc6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1cc6e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1CC6E4u;
    {
        const bool branch_taken_0x1cc6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc6e4) {
            ctx->pc = 0x1CC714u;
            return;
        }
    }
    ctx->pc = 0x1CC6ECu;
}
