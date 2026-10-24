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

// Function: entry_00225228
// Address: 0x225228 - 0x225274
void entry_00225228_0x225228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225228_0x225228");
#endif

    ctx->pc = 0x225228u;

    // 0x225228: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x225228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22522c: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x22522cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x225230: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x225230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x225234: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x225234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x225238: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x225238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22523c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x22523Cu;
    {
        const bool branch_taken_0x22523c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22523c) {
            ctx->pc = 0x225274u;
            return;
        }
    }
    ctx->pc = 0x225244u;
    // 0x225244: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x225244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225248: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22524c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x22524cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x225250: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x225250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x225254: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225258: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x225258u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x22525c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22525cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225260: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x225260u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x225264: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225268: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x225268u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22526c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22526cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225270: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x225270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x225274u;
}
