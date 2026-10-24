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

// Function: entry_0025a468
// Address: 0x25a468 - 0x25a4b8
void entry_0025a468_0x25a468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a468_0x25a468");
#endif

    ctx->pc = 0x25a468u;

    // 0x25a468: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x25a468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x25a46c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25a46cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a470: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25a470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a474: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x25a474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x25a478: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25a478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a47c: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x25a47cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a480: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x25a480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x25a484: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25a484u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a488: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25a488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a48c: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x25a48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x25a490: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25A490u;
    {
        const bool branch_taken_0x25a490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a490) {
            ctx->pc = 0x25A4B8u;
            return;
        }
    }
    ctx->pc = 0x25A498u;
    // 0x25a498: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x25a498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a49c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x25a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x25a4a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25a4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a4a4: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x25a4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x25a4a8: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x25a4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25a4ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a4b0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x25a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x25a4b4: 0xac641924  sw          $a0, 0x1924($v1)
    ctx->pc = 0x25a4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6436), GPR_U32(ctx, 4));
    ctx->pc = 0x25a4b8u;
}
