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

// Function: entry_0035c97c
// Address: 0x35c97c - 0x35c9d8
void entry_0035c97c_0x35c97c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035c97c_0x35c97c");
#endif

    ctx->pc = 0x35c97cu;

    // 0x35c97c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x35c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x35c980: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x35c980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x35c984: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x35c984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x35c988: 0x8e0202a8  lw          $v0, 0x2A8($s0)
    ctx->pc = 0x35c988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x35c98c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x35c98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x35c990: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x35C990u;
    {
        const bool branch_taken_0x35c990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c990) {
            ctx->pc = 0x35C9D8u;
            return;
        }
    }
    ctx->pc = 0x35C998u;
    // 0x35c998: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x35c998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x35c99c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x35c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x35c9a0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x35c9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x35c9a4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35c9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35c9a8: 0xae0202a8  sw          $v0, 0x2A8($s0)
    ctx->pc = 0x35c9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
    // 0x35c9ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35c9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35c9b0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x35c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x35c9b4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x35c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x35c9b8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35c9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35c9bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35c9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35c9c0: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x35c9c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x35c9c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35c9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c9c8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x35c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x35c9cc: 0x2445e180  addiu       $a1, $v0, -0x1E80
    ctx->pc = 0x35c9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959488));
    // 0x35c9d0: 0xc067478  jal         func_19D1E0
    ctx->pc = 0x35C9D0u;
    SET_GPR_U32(ctx, 31, 0x35C9D8u);
    ctx->pc = 0x19D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1E0u, 0x35C9D0u, 0x35C9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C9D8u;
}
