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

// Function: entry_00211a2c
// Address: 0x211a2c - 0x211a68
void entry_00211a2c_0x211a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00211a2c_0x211a2c");
#endif

    ctx->pc = 0x211a2cu;

    // 0x211a2c: 0x960710a4  lhu         $a3, 0x10A4($s0)
    ctx->pc = 0x211a2cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4260)));
    // 0x211a30: 0x30e9ffff  andi        $t1, $a3, 0xFFFF
    ctx->pc = 0x211a30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x211a34: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x211a34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x211a38: 0xa5840  sll         $t3, $t2, 1
    ctx->pc = 0x211a38u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x211a3c: 0x960a10a4  lhu         $t2, 0x10A4($s0)
    ctx->pc = 0x211a3cu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4260)));
    // 0x211a40: 0x3143ffff  andi        $v1, $t2, 0xFFFF
    ctx->pc = 0x211a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x211a44: 0x34880  sll         $t1, $v1, 2
    ctx->pc = 0x211a44u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x211a48: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x211a48u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
    // 0x211a4c: 0x25439500  addiu       $v1, $t2, -0x6B00
    ctx->pc = 0x211a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294939904));
    // 0x211a50: 0x692821  addu        $a1, $v1, $t1
    ctx->pc = 0x211a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x211a54: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x211a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211a58: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x211a58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x211a5c: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x211a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x211a60: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x211A60u;
    {
        const bool branch_taken_0x211a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211a60) {
            ctx->pc = 0x211AA0u;
            return;
        }
    }
    ctx->pc = 0x211A68u;
}
