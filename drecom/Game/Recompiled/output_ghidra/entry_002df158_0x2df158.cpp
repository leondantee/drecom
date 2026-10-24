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

// Function: entry_002df158
// Address: 0x2df158 - 0x2df1a8
void entry_002df158_0x2df158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002df158_0x2df158");
#endif

    ctx->pc = 0x2df158u;

    // 0x2df158: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df15c: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2df15cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2df160: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2df160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2df164: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2df164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2df168: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DF168u;
    {
        const bool branch_taken_0x2df168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df168) {
            ctx->pc = 0x2DF1A8u;
            return;
        }
    }
    ctx->pc = 0x2DF170u;
    // 0x2df170: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2df170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df174: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df178: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2df178u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df17c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2df17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2df180: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df184: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2df184u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df188: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df18c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2df18cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df190: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df194: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2df194u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df198: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df19c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2df19cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2df1a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2DF1A0u;
    {
        const bool branch_taken_0x2df1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df1a0) {
            ctx->pc = 0x2DF1F0u;
            return;
        }
    }
    ctx->pc = 0x2DF1A8u;
}
