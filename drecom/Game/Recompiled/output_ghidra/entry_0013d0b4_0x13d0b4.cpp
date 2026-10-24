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

// Function: entry_0013d0b4
// Address: 0x13d0b4 - 0x13d0f8
void entry_0013d0b4_0x13d0b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d0b4_0x13d0b4");
#endif

    ctx->pc = 0x13d0b4u;

    // 0x13d0b4: 0x8fb200c8  lw          $s2, 0xC8($sp)
    ctx->pc = 0x13d0b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d0b8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d0bc: 0xac520030  sw          $s2, 0x30($v0)
    ctx->pc = 0x13d0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 18));
    // 0x13d0c0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x13d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d0c4: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x13d0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x13d0c8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x13d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x13d0cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13d0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13d0d0: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x13d0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x13d0d4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d0d8: 0x3057000f  andi        $s7, $v0, 0xF
    ctx->pc = 0x13d0d8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x13d0dc: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D0DCu;
    {
        const bool branch_taken_0x13d0dc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d0dc) {
            ctx->pc = 0x13D0F8u;
            return;
        }
    }
    ctx->pc = 0x13D0E4u;
    // 0x13d0e4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x13d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13d0e8: 0x571823  subu        $v1, $v0, $s7
    ctx->pc = 0x13d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x13d0ec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d0f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d0f4: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x13d0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    ctx->pc = 0x13d0f8u;
}
