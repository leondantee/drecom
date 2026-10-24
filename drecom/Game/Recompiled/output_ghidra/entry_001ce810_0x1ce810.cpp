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

// Function: entry_001ce810
// Address: 0x1ce810 - 0x1ce878
void entry_001ce810_0x1ce810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce810_0x1ce810");
#endif

    ctx->pc = 0x1ce810u;

    // 0x1ce810: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce814: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce818: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ce818u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce81c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ce81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ce820: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce824: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ce824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce828: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce82c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ce82cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce830: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce834: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ce834u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce838: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce83c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ce83cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ce840: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce844: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce848: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1ce848u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce84c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce850: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ce850u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce854: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1ce854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ce858: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce85c: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1ce85cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ce860: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce864: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1ce864u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ce868: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce86c: 0xa080156c  sb          $zero, 0x156C($a0)
    ctx->pc = 0x1ce86cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce870: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CE870u;
    {
        const bool branch_taken_0x1ce870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce870) {
            ctx->pc = 0x1CE8A8u;
            return;
        }
    }
    ctx->pc = 0x1CE878u;
}
