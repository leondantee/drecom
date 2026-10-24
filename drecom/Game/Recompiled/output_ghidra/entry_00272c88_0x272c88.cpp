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

// Function: entry_00272c88
// Address: 0x272c88 - 0x272cb8
void entry_00272c88_0x272c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00272c88_0x272c88");
#endif

    ctx->pc = 0x272c88u;

    // 0x272c88: 0x8e031bf0  lw          $v1, 0x1BF0($s0)
    ctx->pc = 0x272c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272c8c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x272c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x272c90: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x272C90u;
    {
        const bool branch_taken_0x272c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272c90) {
            ctx->pc = 0x272CB8u;
            return;
        }
    }
    ctx->pc = 0x272C98u;
    // 0x272c98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x272c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x272c9c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x272c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x272ca0: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x272ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
    // 0x272ca4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x272ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x272ca8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x272ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x272cac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x272cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x272cb0: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x272cb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x272cb4: 0x0  nop
    ctx->pc = 0x272cb4u;
    // NOP
    ctx->pc = 0x272cb8u;
}
