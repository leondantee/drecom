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

// Function: entry_00265ce0
// Address: 0x265ce0 - 0x265d30
void entry_00265ce0_0x265ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265ce0_0x265ce0");
#endif

    ctx->pc = 0x265ce0u;

    // 0x265ce0: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x265ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x265ce4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x265ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x265ce8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x265ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x265cec: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x265cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x265cf0: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x265cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x265cf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x265cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x265cf8: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x265cf8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x265cfc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x265cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x265d00: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x265d00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x265d04: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x265D04u;
    {
        const bool branch_taken_0x265d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265d04) {
            ctx->pc = 0x265CB4u;
            return;
        }
    }
    ctx->pc = 0x265D0Cu;
    // 0x265d0c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x265d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x265d10: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x265d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x265d14: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x265d14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x265d18: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x265d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x265d1c: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x265d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x265d20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x265d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x265d24: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x265d24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x265d28: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x265d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x265d2c: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x265d2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    ctx->pc = 0x265d30u;
}
