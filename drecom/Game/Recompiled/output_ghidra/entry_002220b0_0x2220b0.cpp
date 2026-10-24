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

// Function: entry_002220b0
// Address: 0x2220b0 - 0x2220e8
void entry_002220b0_0x2220b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002220b0_0x2220b0");
#endif

    switch (ctx->pc) {
        case 0x2220d4u: goto label_2220d4;
        default: break;
    }

    ctx->pc = 0x2220b0u;

    // 0x2220b0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2220b0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2220b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2220b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2220b8: 0x8c221a50  lw          $v0, 0x1A50($at)
    ctx->pc = 0x2220b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x2220bc: 0x30570010  andi        $s7, $v0, 0x10
    ctx->pc = 0x2220bcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2220c0: 0x16e00009  bnez        $s7, . + 4 + (0x9 << 2)
    ctx->pc = 0x2220C0u;
    {
        const bool branch_taken_0x2220c0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2220c0) {
            ctx->pc = 0x2220E8u;
            return;
        }
    }
    ctx->pc = 0x2220C8u;
    // 0x2220c8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2220c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2220cc: 0xc07e5f0  jal         func_1F97C0
    ctx->pc = 0x2220CCu;
    SET_GPR_U32(ctx, 31, 0x2220D4u);
    ctx->pc = 0x1F97C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F97C0u, 0x2220CCu, 0x2220D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2220D4u;
label_2220d4:
    // 0x2220d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2220d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2220d8: 0x8c371a50  lw          $s7, 0x1A50($at)
    ctx->pc = 0x2220d8u;
    SET_GPR_S32(ctx, 23, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x2220dc: 0x36e20010  ori         $v0, $s7, 0x10
    ctx->pc = 0x2220dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
    // 0x2220e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2220e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2220e4: 0xac221a50  sw          $v0, 0x1A50($at)
    ctx->pc = 0x2220e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A50u, _value); } while (0);
    ctx->pc = 0x2220e8u;
}
