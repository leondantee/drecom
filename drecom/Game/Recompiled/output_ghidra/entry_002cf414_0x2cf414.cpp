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

// Function: entry_002cf414
// Address: 0x2cf414 - 0x2cf45c
void entry_002cf414_0x2cf414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cf414_0x2cf414");
#endif

    ctx->pc = 0x2cf414u;

    // 0x2cf414: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf418: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2cf418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf41c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2cf41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf420: 0x8c6301c8  lw          $v1, 0x1C8($v1)
    ctx->pc = 0x2cf420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
    // 0x2cf424: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2CF424u;
    {
        const bool branch_taken_0x2cf424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf424) {
            ctx->pc = 0x2CF45Cu;
            return;
        }
    }
    ctx->pc = 0x2CF42Cu;
    // 0x2cf42c: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf430: 0x2483134c  addiu       $v1, $a0, 0x134C
    ctx->pc = 0x2cf430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
    // 0x2cf434: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2cf434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf438: 0x8c6301cc  lw          $v1, 0x1CC($v1)
    ctx->pc = 0x2cf438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
    // 0x2cf43c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cf43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf440: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CF440u;
    {
        const bool branch_taken_0x2cf440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2cf440) {
            ctx->pc = 0x2CF45Cu;
            return;
        }
    }
    ctx->pc = 0x2CF448u;
    // 0x2cf448: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2cf448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cf44c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf450: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2cf450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf454: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2cf454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf458: 0xaca401c8  sw          $a0, 0x1C8($a1)
    ctx->pc = 0x2cf458u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 456), GPR_U32(ctx, 4));
    ctx->pc = 0x2cf45cu;
}
