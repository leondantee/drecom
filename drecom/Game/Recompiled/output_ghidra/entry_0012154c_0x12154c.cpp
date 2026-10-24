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

// Function: entry_0012154c
// Address: 0x12154c - 0x1215a4
void entry_0012154c_0x12154c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012154c_0x12154c");
#endif

    switch (ctx->pc) {
        case 0x121570u: goto label_121570;
        default: break;
    }

    ctx->pc = 0x12154cu;

    // 0x12154c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12154cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121550: 0x908411ef  lbu         $a0, 0x11EF($a0)
    ctx->pc = 0x121550u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4591)));
    // 0x121554: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121558: 0xa0a410a8  sb          $a0, 0x10A8($a1)
    ctx->pc = 0x121558u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x12155c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121560: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x121560u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x121564: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x121564u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x121568: 0xc047ff4  jal         func_11FFD0
    ctx->pc = 0x121568u;
    SET_GPR_U32(ctx, 31, 0x121570u);
    ctx->pc = 0x11FFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FFD0u, 0x121568u, 0x121570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121570u;
label_121570:
    // 0x121570: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x121570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121574: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x121574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x121578: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x121578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x12157c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x12157cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x121580: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x121580u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x121584: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121588: 0x84a410a6  lh          $a0, 0x10A6($a1)
    ctx->pc = 0x121588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4262)));
    // 0x12158c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x12158cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x121590: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x121590u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x121594: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x121594u;
    {
        const bool branch_taken_0x121594 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x121594) {
            ctx->pc = 0x1215A4u;
            return;
        }
    }
    ctx->pc = 0x12159Cu;
    // 0x12159c: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x12159cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1215a0: 0xa4c010a6  sh          $zero, 0x10A6($a2)
    ctx->pc = 0x1215a0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4262), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1215a4u;
}
