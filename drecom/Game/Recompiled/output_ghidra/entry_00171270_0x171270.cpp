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

// Function: entry_00171270
// Address: 0x171270 - 0x1712b8
void entry_00171270_0x171270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171270_0x171270");
#endif

    ctx->pc = 0x171270u;

    // 0x171270: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x171270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x171274: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x171274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x171278: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x171278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17127c: 0x308300a0  andi        $v1, $a0, 0xA0
    ctx->pc = 0x17127cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)160);
    // 0x171280: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x171280u;
    {
        const bool branch_taken_0x171280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x171280) {
            ctx->pc = 0x1712B8u;
            return;
        }
    }
    ctx->pc = 0x171288u;
    // 0x171288: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x171288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17128c: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x17128cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x171290: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x171290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x171294: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x171294u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x171298: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x17129c: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x17129cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1712a0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1712a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1712a4: 0x8ca3007c  lw          $v1, 0x7C($a1)
    ctx->pc = 0x1712a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x1712a8: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x1712a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1712ac: 0x1480005a  bnez        $a0, . + 4 + (0x5A << 2)
    ctx->pc = 0x1712ACu;
    {
        const bool branch_taken_0x1712ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1712ac) {
            ctx->pc = 0x171418u;
            return;
        }
    }
    ctx->pc = 0x1712B4u;
    // 0x1712b4: 0x0  nop
    ctx->pc = 0x1712b4u;
    // NOP
    ctx->pc = 0x1712b8u;
}
