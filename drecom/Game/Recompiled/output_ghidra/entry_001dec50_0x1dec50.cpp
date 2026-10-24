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

// Function: entry_001dec50
// Address: 0x1dec50 - 0x1dec88
void entry_001dec50_0x1dec50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dec50_0x1dec50");
#endif

    ctx->pc = 0x1dec50u;

    // 0x1dec50: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1dec50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1dec54: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x1dec54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1dec58: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dec58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dec5c: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x1dec5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x1dec60: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1DEC60u;
    {
        const bool branch_taken_0x1dec60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dec60) {
            ctx->pc = 0x1DED48u;
            return;
        }
    }
    ctx->pc = 0x1DEC68u;
    // 0x1dec68: 0x93a300b8  lbu         $v1, 0xB8($sp)
    ctx->pc = 0x1dec68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dec6c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1dec6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dec70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dec70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dec74: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1dec74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1dec78: 0x8c700018  lw          $s0, 0x18($v1)
    ctx->pc = 0x1dec78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1dec7c: 0x8e910010  lw          $s1, 0x10($s4)
    ctx->pc = 0x1dec7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1dec80: 0x0  nop
    ctx->pc = 0x1dec80u;
    // NOP
    // 0x1dec84: 0x0  nop
    ctx->pc = 0x1dec84u;
    // NOP
    ctx->pc = 0x1dec88u;
}
