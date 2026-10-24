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

// Function: entry_001718b0
// Address: 0x1718b0 - 0x1718f8
void entry_001718b0_0x1718b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001718b0_0x1718b0");
#endif

    ctx->pc = 0x1718b0u;

    // 0x1718b0: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1718b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1718b4: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1718b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x1718b8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1718b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1718bc: 0x30a300a0  andi        $v1, $a1, 0xA0
    ctx->pc = 0x1718bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)160);
    // 0x1718c0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1718C0u;
    {
        const bool branch_taken_0x1718c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1718c0) {
            ctx->pc = 0x1718F8u;
            return;
        }
    }
    ctx->pc = 0x1718C8u;
    // 0x1718c8: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x1718c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1718cc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1718ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1718d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1718d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1718d4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1718d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1718d8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1718d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1718dc: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1718dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1718e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1718e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1718e4: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x1718e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x1718e8: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x1718e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x1718ec: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x1718ECu;
    {
        const bool branch_taken_0x1718ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1718ec) {
            ctx->pc = 0x171A18u;
            return;
        }
    }
    ctx->pc = 0x1718F4u;
    // 0x1718f4: 0x0  nop
    ctx->pc = 0x1718f4u;
    // NOP
    ctx->pc = 0x1718f8u;
}
