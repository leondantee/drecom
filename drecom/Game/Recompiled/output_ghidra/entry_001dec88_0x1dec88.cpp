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

// Function: entry_001dec88
// Address: 0x1dec88 - 0x1deccc
void entry_001dec88_0x1dec88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dec88_0x1dec88");
#endif

    ctx->pc = 0x1dec88u;

    // 0x1dec88: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1dec88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1dec8c: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x1dec8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1dec90: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dec90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dec94: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1dec94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1dec98: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DEC98u;
    {
        const bool branch_taken_0x1dec98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dec98) {
            ctx->pc = 0x1DECECu;
            return;
        }
    }
    ctx->pc = 0x1DECA0u;
    // 0x1deca0: 0x93a300b8  lbu         $v1, 0xB8($sp)
    ctx->pc = 0x1deca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1deca4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1deca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1deca8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DECA8u;
    {
        const bool branch_taken_0x1deca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1deca8) {
            ctx->pc = 0x1DECCCu;
            return;
        }
    }
    ctx->pc = 0x1DECB0u;
    // 0x1decb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1decb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1decb4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1decb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1decb8: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x1decb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x1decbc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1decbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1decc0: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x1decc0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x1decc4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1DECC4u;
    {
        const bool branch_taken_0x1decc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1decc4) {
            ctx->pc = 0x1DED38u;
            return;
        }
    }
    ctx->pc = 0x1DECCCu;
}
