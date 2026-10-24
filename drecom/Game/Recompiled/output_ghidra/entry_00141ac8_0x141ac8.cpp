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

// Function: entry_00141ac8
// Address: 0x141ac8 - 0x141b00
void entry_00141ac8_0x141ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141ac8_0x141ac8");
#endif

    switch (ctx->pc) {
        case 0x141ad4u: goto label_141ad4;
        default: break;
    }

    ctx->pc = 0x141ac8u;

    // 0x141ac8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x141ac8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141acc: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x141ACCu;
    SET_GPR_U32(ctx, 31, 0x141AD4u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x141ACCu, 0x141AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141AD4u;
label_141ad4:
    // 0x141ad4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x141AD4u;
    {
        const bool branch_taken_0x141ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141ad4) {
            ctx->pc = 0x141B10u;
            return;
        }
    }
    ctx->pc = 0x141ADCu;
    // 0x141adc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x141adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x141ae0: 0x8c2391a0  lw          $v1, -0x6E60($at)
    ctx->pc = 0x141ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E91A0u));
    // 0x141ae4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141ae8: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x141ae8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x141aec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141af0: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x141af0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x141af4: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x141af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x141af8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x141af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x141afc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x141afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    ctx->pc = 0x141b00u;
}
