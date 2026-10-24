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

// Function: entry_00256568
// Address: 0x256568 - 0x2565b8
void entry_00256568_0x256568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00256568_0x256568");
#endif

    ctx->pc = 0x256568u;

    // 0x256568: 0x8fb000d8  lw          $s0, 0xD8($sp)
    ctx->pc = 0x256568u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x25656c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x25656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x256570: 0xac500034  sw          $s0, 0x34($v0)
    ctx->pc = 0x256570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 16));
    // 0x256574: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x256574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x256578: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x256578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x25657c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25657cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x256580: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256584: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x256584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x256588: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x256588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25658c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x25658cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x256590: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x256590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x256594: 0x3057000f  andi        $s7, $v0, 0xF
    ctx->pc = 0x256594u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x256598: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x256598u;
    {
        const bool branch_taken_0x256598 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x256598) {
            ctx->pc = 0x2565B8u;
            return;
        }
    }
    ctx->pc = 0x2565A0u;
    // 0x2565a0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2565a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2565a4: 0x571823  subu        $v1, $v0, $s7
    ctx->pc = 0x2565a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2565a8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2565a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2565ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2565acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2565b0: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x2565b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x2565b4: 0x0  nop
    ctx->pc = 0x2565b4u;
    // NOP
    ctx->pc = 0x2565b8u;
}
