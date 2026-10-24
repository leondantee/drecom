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

// Function: entry_001712b8
// Address: 0x1712b8 - 0x171300
void entry_001712b8_0x1712b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001712b8_0x1712b8");
#endif

    ctx->pc = 0x1712b8u;

    // 0x1712b8: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1712b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1712bc: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1712bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x1712c0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1712c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1712c4: 0x30a300a0  andi        $v1, $a1, 0xA0
    ctx->pc = 0x1712c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)160);
    // 0x1712c8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1712C8u;
    {
        const bool branch_taken_0x1712c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1712c8) {
            ctx->pc = 0x171300u;
            return;
        }
    }
    ctx->pc = 0x1712D0u;
    // 0x1712d0: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x1712d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1712d4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1712d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1712d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1712d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1712dc: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1712dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1712e0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1712e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1712e4: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x1712e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1712e8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1712e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1712ec: 0x8c63007c  lw          $v1, 0x7C($v1)
    ctx->pc = 0x1712ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x1712f0: 0x30650002  andi        $a1, $v1, 0x2
    ctx->pc = 0x1712f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1712f4: 0x14a00048  bnez        $a1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1712F4u;
    {
        const bool branch_taken_0x1712f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1712f4) {
            ctx->pc = 0x171418u;
            return;
        }
    }
    ctx->pc = 0x1712FCu;
    // 0x1712fc: 0x0  nop
    ctx->pc = 0x1712fcu;
    // NOP
    ctx->pc = 0x171300u;
}
