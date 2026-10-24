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

// Function: entry_0012aa24
// Address: 0x12aa24 - 0x12aa68
void entry_0012aa24_0x12aa24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012aa24_0x12aa24");
#endif

    ctx->pc = 0x12aa24u;

    // 0x12aa24: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12aa28: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12aa28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12aa2c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12aa2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12aa30: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x12aa30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x12aa34: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12aa38: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x12AA38u;
    {
        const bool branch_taken_0x12aa38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12aa38) {
            ctx->pc = 0x12AAE0u;
            return;
        }
    }
    ctx->pc = 0x12AA40u;
    // 0x12aa40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12aa44: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12AA44u;
    {
        const bool branch_taken_0x12aa44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12aa44) {
            ctx->pc = 0x12AAB8u;
            return;
        }
    }
    ctx->pc = 0x12AA4Cu;
    // 0x12aa4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12aa50: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x12AA50u;
    {
        const bool branch_taken_0x12aa50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12aa50) {
            ctx->pc = 0x12AA90u;
            return;
        }
    }
    ctx->pc = 0x12AA58u;
    // 0x12aa58: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AA58u;
    {
        const bool branch_taken_0x12aa58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aa58) {
            ctx->pc = 0x12AA68u;
            return;
        }
    }
    ctx->pc = 0x12AA60u;
    // 0x12aa60: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12AA60u;
    {
        const bool branch_taken_0x12aa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aa60) {
            ctx->pc = 0x12AA68u;
            return;
        }
    }
    ctx->pc = 0x12AA68u;
}
