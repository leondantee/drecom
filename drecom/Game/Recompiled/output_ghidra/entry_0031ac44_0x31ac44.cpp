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

// Function: entry_0031ac44
// Address: 0x31ac44 - 0x31ac74
void entry_0031ac44_0x31ac44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031ac44_0x31ac44");
#endif

    ctx->pc = 0x31ac44u;

    // 0x31ac44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x31ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ac48: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x31ac48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x31ac4c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31ac4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31ac50: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x31ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31ac54: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31AC54u;
    {
        const bool branch_taken_0x31ac54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31ac54) {
            ctx->pc = 0x31AC74u;
            return;
        }
    }
    ctx->pc = 0x31AC5Cu;
    // 0x31ac5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x31ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ac60: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x31ac60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x31ac64: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31ac64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31ac68: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x31ac68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31ac6c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31AC6Cu;
    {
        const bool branch_taken_0x31ac6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31ac6c) {
            ctx->pc = 0x31AC8Cu;
            return;
        }
    }
    ctx->pc = 0x31AC74u;
}
