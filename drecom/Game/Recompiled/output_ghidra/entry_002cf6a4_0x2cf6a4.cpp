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

// Function: entry_002cf6a4
// Address: 0x2cf6a4 - 0x2cf6f0
void entry_002cf6a4_0x2cf6a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cf6a4_0x2cf6a4");
#endif

    ctx->pc = 0x2cf6a4u;

    // 0x2cf6a4: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf6a8: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2cf6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf6ac: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2cf6acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf6b0: 0x8ca401c4  lw          $a0, 0x1C4($a1)
    ctx->pc = 0x2cf6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 452)));
    // 0x2cf6b4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2cf6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2cf6b8: 0xaca301c4  sw          $v1, 0x1C4($a1)
    ctx->pc = 0x2cf6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 452), GPR_U32(ctx, 3));
    // 0x2cf6bc: 0x1c600082  bgtz        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x2CF6BCu;
    {
        const bool branch_taken_0x2cf6bc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2cf6bc) {
            ctx->pc = 0x2CF8C8u;
            return;
        }
    }
    ctx->pc = 0x2CF6C4u;
    // 0x2cf6c4: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2cf6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cf6c8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf6cc: 0x2465134c  addiu       $a1, $v1, 0x134C
    ctx->pc = 0x2cf6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf6d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2cf6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cf6d4: 0xac6401c4  sw          $a0, 0x1C4($v1)
    ctx->pc = 0x2cf6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 452), GPR_U32(ctx, 4));
    // 0x2cf6d8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf6dc: 0x2483134c  addiu       $v1, $a0, 0x134C
    ctx->pc = 0x2cf6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
    // 0x2cf6e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cf6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf6e4: 0xac8001c8  sw          $zero, 0x1C8($a0)
    ctx->pc = 0x2cf6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 0));
    // 0x2cf6e8: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2CF6E8u;
    {
        const bool branch_taken_0x2cf6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf6e8) {
            ctx->pc = 0x2CF8C8u;
            return;
        }
    }
    ctx->pc = 0x2CF6F0u;
}
