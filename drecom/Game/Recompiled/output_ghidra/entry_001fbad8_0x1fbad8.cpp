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

// Function: entry_001fbad8
// Address: 0x1fbad8 - 0x1fbb18
void entry_001fbad8_0x1fbad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbad8_0x1fbad8");
#endif

    ctx->pc = 0x1fbad8u;

    // 0x1fbad8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbadc: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fbadcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fbae0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fbae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fbae4: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fbae4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fbae8: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1FBAE8u;
    {
        const bool branch_taken_0x1fbae8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbae8) {
            ctx->pc = 0x1FBAA0u;
            return;
        }
    }
    ctx->pc = 0x1FBAF0u;
    // 0x1fbaf0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbaf4: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fbaf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fbaf8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fbaf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fbafc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBAFCu;
    {
        const bool branch_taken_0x1fbafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbafc) {
            ctx->pc = 0x1FBB18u;
            return;
        }
    }
    ctx->pc = 0x1FBB04u;
    // 0x1fbb04: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fbb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fbb08: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbb0c: 0xac640358  sw          $a0, 0x358($v1)
    ctx->pc = 0x1fbb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 4));
    // 0x1fbb10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FBB10u;
    {
        const bool branch_taken_0x1fbb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbb10) {
            ctx->pc = 0x1FBB38u;
            return;
        }
    }
    ctx->pc = 0x1FBB18u;
}
