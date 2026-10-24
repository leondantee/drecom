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

// Function: entry_001fb6f8
// Address: 0x1fb6f8 - 0x1fb720
void entry_001fb6f8_0x1fb6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb6f8_0x1fb6f8");
#endif

    ctx->pc = 0x1fb6f8u;

    // 0x1fb6f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb6fc: 0x90730348  lbu         $s3, 0x348($v1)
    ctx->pc = 0x1fb6fcu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fb700: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x1fb700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1fb704: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fb704u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fb708: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1FB708u;
    {
        const bool branch_taken_0x1fb708 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb708) {
            ctx->pc = 0x1FB6C0u;
            return;
        }
    }
    ctx->pc = 0x1FB710u;
    // 0x1fb710: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fb710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fb714: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb718: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x1fb718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fb71c: 0x0  nop
    ctx->pc = 0x1fb71cu;
    // NOP
    ctx->pc = 0x1fb720u;
}
