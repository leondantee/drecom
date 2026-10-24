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

// Function: entry_001cd428
// Address: 0x1cd428 - 0x1cd490
void entry_001cd428_0x1cd428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd428_0x1cd428");
#endif

    ctx->pc = 0x1cd428u;

    // 0x1cd428: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cd428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd42c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd430: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1cd430u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cd434: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cd434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd438: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd43c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1cd43cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd440: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd444: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1cd444u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd448: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd44c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cd44cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd450: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd454: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cd454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1cd458: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cd458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd45c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd460: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1cd460u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cd464: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd468: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cd468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd46c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cd46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd470: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd474: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x1cd474u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cd478: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd47c: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1cd47cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cd480: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd484: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1cd484u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd488: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CD488u;
    {
        const bool branch_taken_0x1cd488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd488) {
            ctx->pc = 0x1CD4C0u;
            return;
        }
    }
    ctx->pc = 0x1CD490u;
}
