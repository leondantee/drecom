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

// Function: entry_00339b18
// Address: 0x339b18 - 0x339b68
void entry_00339b18_0x339b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00339b18_0x339b18");
#endif

    ctx->pc = 0x339b18u;

    // 0x339b18: 0x3c043300  lui         $a0, 0x3300
    ctx->pc = 0x339b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13056 << 16));
    // 0x339b1c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339b20: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339b20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339b24: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339b28: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339b2c: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339b30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339b34: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x339b34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x339b38: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339b3c: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339b40: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x339b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x339b44: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339b48: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x339b48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339b4c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x339b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x339b50: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x339b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x339b54: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x339B54u;
    {
        const bool branch_taken_0x339b54 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x339b54) {
            ctx->pc = 0x339B68u;
            return;
        }
    }
    ctx->pc = 0x339B5Cu;
    // 0x339b5c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x339B5Cu;
    {
        const bool branch_taken_0x339b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339b5c) {
            ctx->pc = 0x339B68u;
            return;
        }
    }
    ctx->pc = 0x339B64u;
    // 0x339b64: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x339b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    ctx->pc = 0x339b68u;
}
