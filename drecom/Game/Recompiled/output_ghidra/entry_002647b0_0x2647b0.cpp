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

// Function: entry_002647b0
// Address: 0x2647b0 - 0x264800
void entry_002647b0_0x2647b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002647b0_0x2647b0");
#endif

    ctx->pc = 0x2647b0u;

    // 0x2647b0: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2647b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2647b4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2647b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2647b8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x2647b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2647bc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2647bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2647c0: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x2647c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x2647c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2647c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2647c8: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x2647c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2647cc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2647ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2647d0: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x2647d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2647d4: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2647D4u;
    {
        const bool branch_taken_0x2647d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2647d4) {
            ctx->pc = 0x264784u;
            return;
        }
    }
    ctx->pc = 0x2647DCu;
    // 0x2647dc: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2647dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2647e0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2647e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2647e4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x2647e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2647e8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2647e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2647ec: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x2647ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x2647f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2647f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2647f4: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x2647f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2647f8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2647f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2647fc: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x2647fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    ctx->pc = 0x264800u;
}
