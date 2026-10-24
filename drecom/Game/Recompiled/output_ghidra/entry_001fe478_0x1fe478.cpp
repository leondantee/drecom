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

// Function: entry_001fe478
// Address: 0x1fe478 - 0x1fe4a0
void entry_001fe478_0x1fe478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe478_0x1fe478");
#endif

    ctx->pc = 0x1fe478u;

    // 0x1fe478: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe47c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fe47cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fe480: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe484: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fe484u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fe488: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FE488u;
    {
        const bool branch_taken_0x1fe488 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe488) {
            ctx->pc = 0x1FE43Cu;
            return;
        }
    }
    ctx->pc = 0x1FE490u;
    // 0x1fe490: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1fe490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe494: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe498: 0xa0700abc  sb          $s0, 0xABC($v1)
    ctx->pc = 0x1fe498u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 16));
    // 0x1fe49c: 0x0  nop
    ctx->pc = 0x1fe49cu;
    // NOP
    ctx->pc = 0x1fe4a0u;
}
