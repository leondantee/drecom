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

// Function: entry_00171868
// Address: 0x171868 - 0x1718b0
void entry_00171868_0x171868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171868_0x171868");
#endif

    ctx->pc = 0x171868u;

    // 0x171868: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x171868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x17186c: 0x90a30012  lbu         $v1, 0x12($a1)
    ctx->pc = 0x17186cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x171870: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x171870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x171874: 0x308300a0  andi        $v1, $a0, 0xA0
    ctx->pc = 0x171874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)160);
    // 0x171878: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x171878u;
    {
        const bool branch_taken_0x171878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x171878) {
            ctx->pc = 0x1718B0u;
            return;
        }
    }
    ctx->pc = 0x171880u;
    // 0x171880: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x171880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171884: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x171884u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x171888: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x171888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17188c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x17188cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x171890: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x171894: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x171894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x171898: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x171898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17189c: 0x8ca3007c  lw          $v1, 0x7C($a1)
    ctx->pc = 0x17189cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x1718a0: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x1718a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1718a4: 0x1480005c  bnez        $a0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1718A4u;
    {
        const bool branch_taken_0x1718a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1718a4) {
            ctx->pc = 0x171A18u;
            return;
        }
    }
    ctx->pc = 0x1718ACu;
    // 0x1718ac: 0x0  nop
    ctx->pc = 0x1718acu;
    // NOP
    ctx->pc = 0x1718b0u;
}
