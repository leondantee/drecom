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

// Function: entry_00320a78
// Address: 0x320a78 - 0x320a9c
void entry_00320a78_0x320a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320a78_0x320a78");
#endif

    ctx->pc = 0x320a78u;

    // 0x320a78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320a7c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x320a7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x320a80: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320a84: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x320a84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x320a88: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x320A88u;
    {
        const bool branch_taken_0x320a88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x320a88) {
            ctx->pc = 0x320A3Cu;
            return;
        }
    }
    ctx->pc = 0x320A90u;
    // 0x320a90: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x320a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320a94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320a98: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x320a98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x320a9cu;
}
