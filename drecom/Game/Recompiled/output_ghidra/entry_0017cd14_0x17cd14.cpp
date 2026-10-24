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

// Function: entry_0017cd14
// Address: 0x17cd14 - 0x17cd54
void entry_0017cd14_0x17cd14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cd14_0x17cd14");
#endif

    ctx->pc = 0x17cd14u;

    // 0x17cd14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17cd14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17cd18: 0x942200cc  lhu         $v0, 0xCC($at)
    ctx->pc = 0x17cd18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x17cd1c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x17cd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17cd20: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x17cd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x17cd24: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x17CD24u;
    {
        const bool branch_taken_0x17cd24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cd24) {
            ctx->pc = 0x17CD54u;
            return;
        }
    }
    ctx->pc = 0x17CD2Cu;
    // 0x17cd2c: 0x938380a0  lbu         $v1, -0x7F60($gp)
    ctx->pc = 0x17cd2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17cd30: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x17cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17cd34: 0xa38280a0  sb          $v0, -0x7F60($gp)
    ctx->pc = 0x17cd34u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934688), (uint8_t)GPR_U32(ctx, 2));
    // 0x17cd38: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17cd38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17cd3c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17cd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17cd40: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17cd44: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17CD44u;
    {
        const bool branch_taken_0x17cd44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17cd44) {
            ctx->pc = 0x17CD54u;
            return;
        }
    }
    ctx->pc = 0x17CD4Cu;
    // 0x17cd4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17cd50: 0xa38280a0  sb          $v0, -0x7F60($gp)
    ctx->pc = 0x17cd50u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934688), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x17cd54u;
}
