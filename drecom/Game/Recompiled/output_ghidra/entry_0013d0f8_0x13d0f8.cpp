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

// Function: entry_0013d0f8
// Address: 0x13d0f8 - 0x13d144
void entry_0013d0f8_0x13d0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d0f8_0x13d0f8");
#endif

    ctx->pc = 0x13d0f8u;

    // 0x13d0f8: 0x8fb300c8  lw          $s3, 0xC8($sp)
    ctx->pc = 0x13d0f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d0fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d100: 0xac530034  sw          $s3, 0x34($v0)
    ctx->pc = 0x13d100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 19));
    // 0x13d104: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x13d104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d108: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x13d108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x13d10c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x13d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13d110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13d110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d114: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x13d114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x13d118: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x13d118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13d11c: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x13d11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x13d120: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13d120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d124: 0x305e000f  andi        $fp, $v0, 0xF
    ctx->pc = 0x13d124u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x13d128: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D128u;
    {
        const bool branch_taken_0x13d128 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d128) {
            ctx->pc = 0x13D144u;
            return;
        }
    }
    ctx->pc = 0x13D130u;
    // 0x13d130: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x13d130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13d134: 0x5e1823  subu        $v1, $v0, $fp
    ctx->pc = 0x13d134u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x13d138: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13d138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d13c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d140: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x13d140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    ctx->pc = 0x13d144u;
}
