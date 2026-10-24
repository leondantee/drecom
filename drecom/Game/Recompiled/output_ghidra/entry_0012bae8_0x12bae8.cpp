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

// Function: entry_0012bae8
// Address: 0x12bae8 - 0x12bb48
void entry_0012bae8_0x12bae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bae8_0x12bae8");
#endif

    ctx->pc = 0x12bae8u;

    // 0x12bae8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12baec: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x12baecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12baf0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12baf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12baf4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12baf8: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x12BAF8u;
    {
        const bool branch_taken_0x12baf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x12baf8) {
            ctx->pc = 0x12BB48u;
            return;
        }
    }
    ctx->pc = 0x12BB00u;
    // 0x12bb00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bb04: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12bb04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12bb08: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12BB08u;
    {
        const bool branch_taken_0x12bb08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bb08) {
            ctx->pc = 0x12BB48u;
            return;
        }
    }
    ctx->pc = 0x12BB10u;
    // 0x12bb10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12bb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bb14: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bb18: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12bb18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12bb1c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x12bb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12bb20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bb24: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12bb24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12bb28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bb2c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12bb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12bb30: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bb34: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12bb34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12bb38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bb3c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12bb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12bb40: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12BB40u;
    {
        const bool branch_taken_0x12bb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bb40) {
            ctx->pc = 0x12BB48u;
            return;
        }
    }
    ctx->pc = 0x12BB48u;
}
