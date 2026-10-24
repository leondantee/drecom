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

// Function: entry_003715e8
// Address: 0x3715e8 - 0x371620
void entry_003715e8_0x3715e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003715e8_0x3715e8");
#endif

    switch (ctx->pc) {
        case 0x3715f8u: goto label_3715f8;
        default: break;
    }

    ctx->pc = 0x3715e8u;

    // 0x3715e8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3715e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3715ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3715ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3715f0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3715F0u;
    SET_GPR_U32(ctx, 31, 0x3715F8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3715F0u, 0x3715F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3715F8u;
label_3715f8:
    // 0x3715f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3715f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3715fc: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x3715fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x371600: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x371600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x371604: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x371604u;
    {
        const bool branch_taken_0x371604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x371604) {
            ctx->pc = 0x371620u;
            return;
        }
    }
    ctx->pc = 0x37160Cu;
    // 0x37160c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x37160cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371610: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x371610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371614: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x371614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x371618: 0xc05cd58  jal         func_173560
    ctx->pc = 0x371618u;
    SET_GPR_U32(ctx, 31, 0x371620u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x371618u, 0x371620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371620u;
}
