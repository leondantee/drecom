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

// Function: entry_003390a8
// Address: 0x3390a8 - 0x3390f8
void entry_003390a8_0x3390a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003390a8_0x3390a8");
#endif

    ctx->pc = 0x3390a8u;

    // 0x3390a8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3390a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3390ac: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3390acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3390b0: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x3390b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x3390b4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3390b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3390b8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3390b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3390bc: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x3390bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x3390c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3390c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3390c4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3390c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3390c8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3390c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3390cc: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x3390ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x3390d0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3390d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3390d4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3390d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3390d8: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x3390d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x3390dc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3390dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3390e0: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x3390e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x3390e4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3390E4u;
    {
        const bool branch_taken_0x3390e4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3390e4) {
            ctx->pc = 0x3390F8u;
            return;
        }
    }
    ctx->pc = 0x3390ECu;
    // 0x3390ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3390ECu;
    {
        const bool branch_taken_0x3390ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3390ec) {
            ctx->pc = 0x3390F8u;
            return;
        }
    }
    ctx->pc = 0x3390F4u;
    // 0x3390f4: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x3390f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    ctx->pc = 0x3390f8u;
}
