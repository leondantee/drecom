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

// Function: entry_003714cc
// Address: 0x3714cc - 0x371504
void entry_003714cc_0x3714cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003714cc_0x3714cc");
#endif

    switch (ctx->pc) {
        case 0x3714dcu: goto label_3714dc;
        default: break;
    }

    ctx->pc = 0x3714ccu;

    // 0x3714cc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3714ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3714d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3714d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3714d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3714D4u;
    SET_GPR_U32(ctx, 31, 0x3714DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3714D4u, 0x3714DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3714DCu;
label_3714dc:
    // 0x3714dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3714dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3714e0: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x3714e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x3714e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3714e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3714e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3714E8u;
    {
        const bool branch_taken_0x3714e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3714e8) {
            ctx->pc = 0x371504u;
            return;
        }
    }
    ctx->pc = 0x3714F0u;
    // 0x3714f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3714f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3714f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3714f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3714f8: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x3714f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3714fc: 0xc05cd58  jal         func_173560
    ctx->pc = 0x3714FCu;
    SET_GPR_U32(ctx, 31, 0x371504u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x3714FCu, 0x371504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371504u;
}
