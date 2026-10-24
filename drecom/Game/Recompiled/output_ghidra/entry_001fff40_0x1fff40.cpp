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

// Function: entry_001fff40
// Address: 0x1fff40 - 0x1fff80
void entry_001fff40_0x1fff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fff40_0x1fff40");
#endif

    ctx->pc = 0x1fff40u;

    // 0x1fff40: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1fff40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fff44: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x1fff44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fff48: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fff48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fff4c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fff4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fff50: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FFF50u;
    {
        const bool branch_taken_0x1fff50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fff50) {
            ctx->pc = 0x1FFF04u;
            return;
        }
    }
    ctx->pc = 0x1FFF58u;
    // 0x1fff58: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1fff58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fff5c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fff5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fff60: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fff60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fff64: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FFF64u;
    {
        const bool branch_taken_0x1fff64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fff64) {
            ctx->pc = 0x1FFF80u;
            return;
        }
    }
    ctx->pc = 0x1FFF6Cu;
    // 0x1fff6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fff70: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1fff70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fff74: 0xac640358  sw          $a0, 0x358($v1)
    ctx->pc = 0x1fff74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 4));
    // 0x1fff78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FFF78u;
    {
        const bool branch_taken_0x1fff78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fff78) {
            ctx->pc = 0x1FFFA0u;
            return;
        }
    }
    ctx->pc = 0x1FFF80u;
}
