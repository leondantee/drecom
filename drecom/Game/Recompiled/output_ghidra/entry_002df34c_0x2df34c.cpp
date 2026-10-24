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

// Function: entry_002df34c
// Address: 0x2df34c - 0x2df39c
void entry_002df34c_0x2df34c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002df34c_0x2df34c");
#endif

    ctx->pc = 0x2df34cu;

    // 0x2df34c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df350: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2df350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2df354: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DF354u;
    {
        const bool branch_taken_0x2df354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df354) {
            ctx->pc = 0x2DF39Cu;
            return;
        }
    }
    ctx->pc = 0x2DF35Cu;
    // 0x2df35c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df360: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x2df360u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df364: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2df364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df368: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df36c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2df36cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df370: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2df370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2df374: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df378: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2df378u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df37c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df380: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2df380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df384: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df388: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2df388u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df38c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df390: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2df390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2df394: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2DF394u;
    {
        const bool branch_taken_0x2df394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df394) {
            ctx->pc = 0x2DF39Cu;
            return;
        }
    }
    ctx->pc = 0x2DF39Cu;
}
