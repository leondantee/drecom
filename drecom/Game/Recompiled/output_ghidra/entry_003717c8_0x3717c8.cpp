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

// Function: entry_003717c8
// Address: 0x3717c8 - 0x371800
void entry_003717c8_0x3717c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003717c8_0x3717c8");
#endif

    switch (ctx->pc) {
        case 0x3717d8u: goto label_3717d8;
        default: break;
    }

    ctx->pc = 0x3717c8u;

    // 0x3717c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3717c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3717cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3717ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3717d0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3717D0u;
    SET_GPR_U32(ctx, 31, 0x3717D8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3717D0u, 0x3717D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3717D8u;
label_3717d8:
    // 0x3717d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3717d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3717dc: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x3717dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x3717e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3717e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3717e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3717E4u;
    {
        const bool branch_taken_0x3717e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3717e4) {
            ctx->pc = 0x371800u;
            return;
        }
    }
    ctx->pc = 0x3717ECu;
    // 0x3717ec: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3717ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3717f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3717f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3717f4: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x3717f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3717f8: 0xc05cd58  jal         func_173560
    ctx->pc = 0x3717F8u;
    SET_GPR_U32(ctx, 31, 0x371800u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x3717F8u, 0x371800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371800u;
}
