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

// Function: entry_00127810
// Address: 0x127810 - 0x127840
void entry_00127810_0x127810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127810_0x127810");
#endif

    ctx->pc = 0x127810u;

    // 0x127810: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127814: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127818: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127818u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12781c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x12781cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x127820: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127824: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x127828: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12782c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12782cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x127830: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127834: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127834u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x127838: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12783c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12783cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x127840u;
}
