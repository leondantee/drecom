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

// Function: entry_00320978
// Address: 0x320978 - 0x3209a4
void entry_00320978_0x320978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320978_0x320978");
#endif

    ctx->pc = 0x320978u;

    // 0x320978: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32097c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x32097cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x320980: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320984: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x320984u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x320988: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x320988u;
    {
        const bool branch_taken_0x320988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x320988) {
            ctx->pc = 0x320940u;
            return;
        }
    }
    ctx->pc = 0x320990u;
    // 0x320990: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x320990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320994: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320998: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x320998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x32099c: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x32099Cu;
    {
        const bool branch_taken_0x32099c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32099c) {
            ctx->pc = 0x320DC0u;
            return;
        }
    }
    ctx->pc = 0x3209A4u;
}
