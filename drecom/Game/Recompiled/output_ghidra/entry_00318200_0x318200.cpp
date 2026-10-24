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

// Function: entry_00318200
// Address: 0x318200 - 0x31823c
void entry_00318200_0x318200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00318200_0x318200");
#endif

    ctx->pc = 0x318200u;

    // 0x318200: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x318200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318204: 0xacc01294  sw          $zero, 0x1294($a2)
    ctx->pc = 0x318204u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4756), GPR_U32(ctx, 0));
    // 0x318208: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x318208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31820c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31820cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318210: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x318210u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x318214: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x318214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318218: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x318218u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31821c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31821cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318220: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x318220u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x318224: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x318224u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318228: 0xa1000003  sb          $zero, 0x3($t0)
    ctx->pc = 0x318228u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31822c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31822cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318230: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x318230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x318234: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x318234u;
    {
        const bool branch_taken_0x318234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318234) {
            ctx->pc = 0x318364u;
            return;
        }
    }
    ctx->pc = 0x31823Cu;
}
