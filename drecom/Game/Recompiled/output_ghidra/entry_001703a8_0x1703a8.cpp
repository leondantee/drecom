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

// Function: entry_001703a8
// Address: 0x1703a8 - 0x1703f0
void entry_001703a8_0x1703a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001703a8_0x1703a8");
#endif

    ctx->pc = 0x1703a8u;

    // 0x1703a8: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1703a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1703ac: 0x90440012  lbu         $a0, 0x12($v0)
    ctx->pc = 0x1703acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1703b0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1703b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1703b4: 0x30a600a0  andi        $a2, $a1, 0xA0
    ctx->pc = 0x1703b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)160);
    // 0x1703b8: 0x14c0000d  bnez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1703B8u;
    {
        const bool branch_taken_0x1703b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1703b8) {
            ctx->pc = 0x1703F0u;
            return;
        }
    }
    ctx->pc = 0x1703C0u;
    // 0x1703c0: 0x3207ffff  andi        $a3, $s0, 0xFFFF
    ctx->pc = 0x1703c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1703c4: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x1703c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1703c8: 0x474021  addu        $t0, $v0, $a3
    ctx->pc = 0x1703c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1703cc: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x1703ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1703d0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1703d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1703d4: 0x2475bd00  addiu       $s5, $v1, -0x4300
    ctx->pc = 0x1703d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1703d8: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x1703d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1703dc: 0x8c77007c  lw          $s7, 0x7C($v1)
    ctx->pc = 0x1703dcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x1703e0: 0x32e30002  andi        $v1, $s7, 0x2
    ctx->pc = 0x1703e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
    // 0x1703e4: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1703E4u;
    {
        const bool branch_taken_0x1703e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1703e4) {
            ctx->pc = 0x170508u;
            return;
        }
    }
    ctx->pc = 0x1703ECu;
    // 0x1703ec: 0x0  nop
    ctx->pc = 0x1703ecu;
    // NOP
    ctx->pc = 0x1703f0u;
}
