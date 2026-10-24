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

// Function: entry_001e9e00
// Address: 0x1e9e00 - 0x1e9e38
void entry_001e9e00_0x1e9e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9e00_0x1e9e00");
#endif

    switch (ctx->pc) {
        case 0x1e9e24u: goto label_1e9e24;
        default: break;
    }

    ctx->pc = 0x1e9e00u;

    // 0x1e9e00: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1e9e00u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9e04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e9e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e9e08: 0x8c221a50  lw          $v0, 0x1A50($at)
    ctx->pc = 0x1e9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x1e9e0c: 0x30550010  andi        $s5, $v0, 0x10
    ctx->pc = 0x1e9e0cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1e9e10: 0x16a00009  bnez        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E9E10u;
    {
        const bool branch_taken_0x1e9e10 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9e10) {
            ctx->pc = 0x1E9E38u;
            return;
        }
    }
    ctx->pc = 0x1E9E18u;
    // 0x1e9e18: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1e9e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9e1c: 0xc07e5f0  jal         func_1F97C0
    ctx->pc = 0x1E9E1Cu;
    SET_GPR_U32(ctx, 31, 0x1E9E24u);
    ctx->pc = 0x1F97C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F97C0u, 0x1E9E1Cu, 0x1E9E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9E24u;
label_1e9e24:
    // 0x1e9e24: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e9e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e9e28: 0x8c231a50  lw          $v1, 0x1A50($at)
    ctx->pc = 0x1e9e28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x1e9e2c: 0x34620010  ori         $v0, $v1, 0x10
    ctx->pc = 0x1e9e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1e9e30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e9e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e9e34: 0xac221a50  sw          $v0, 0x1A50($at)
    ctx->pc = 0x1e9e34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A50u, _value); } while (0);
    ctx->pc = 0x1e9e38u;
}
