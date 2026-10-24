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

// Function: entry_00170360
// Address: 0x170360 - 0x1703a8
void entry_00170360_0x170360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170360_0x170360");
#endif

    ctx->pc = 0x170360u;

    // 0x170360: 0x8fa60188  lw          $a2, 0x188($sp)
    ctx->pc = 0x170360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170364: 0x90c30012  lbu         $v1, 0x12($a2)
    ctx->pc = 0x170364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x170368: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x170368u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17036c: 0x32a300a0  andi        $v1, $s5, 0xA0
    ctx->pc = 0x17036cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)160);
    // 0x170370: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x170370u;
    {
        const bool branch_taken_0x170370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x170370) {
            ctx->pc = 0x1703A8u;
            return;
        }
    }
    ctx->pc = 0x170378u;
    // 0x170378: 0x3217ffff  andi        $s7, $s0, 0xFFFF
    ctx->pc = 0x170378u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17037c: 0x17a840  sll         $s5, $s7, 1
    ctx->pc = 0x17037cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x170380: 0x2b7b821  addu        $s7, $s5, $s7
    ctx->pc = 0x170380u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
    // 0x170384: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x170384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x170388: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x170388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x17038c: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x17038cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x170390: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x170390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x170394: 0x8cc7007c  lw          $a3, 0x7C($a2)
    ctx->pc = 0x170394u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x170398: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x170398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x17039c: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x17039Cu;
    {
        const bool branch_taken_0x17039c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17039c) {
            ctx->pc = 0x170508u;
            return;
        }
    }
    ctx->pc = 0x1703A4u;
    // 0x1703a4: 0x0  nop
    ctx->pc = 0x1703a4u;
    // NOP
    ctx->pc = 0x1703a8u;
}
