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

// Function: entry_002d50dc
// Address: 0x2d50dc - 0x2d513c
void entry_002d50dc_0x2d50dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d50dc_0x2d50dc");
#endif

    switch (ctx->pc) {
        case 0x2d50ecu: goto label_2d50ec;
        case 0x2d50f8u: goto label_2d50f8;
        case 0x2d5108u: goto label_2d5108;
        case 0x2d5114u: goto label_2d5114;
        default: break;
    }

    ctx->pc = 0x2d50dcu;

    // 0x2d50dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d50dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d50e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d50e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d50e4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D50E4u;
    SET_GPR_U32(ctx, 31, 0x2D50ECu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D50E4u, 0x2D50ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D50ECu;
label_2d50ec:
    // 0x2d50ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d50ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d50f0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D50F0u;
    SET_GPR_U32(ctx, 31, 0x2D50F8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D50F0u, 0x2D50F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D50F8u;
label_2d50f8:
    // 0x2d50f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d50f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d50fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d50fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d5100: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D5100u;
    SET_GPR_U32(ctx, 31, 0x2D5108u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D5100u, 0x2D5108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5108u;
label_2d5108:
    // 0x2d5108: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d5108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d510c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D510Cu;
    SET_GPR_U32(ctx, 31, 0x2D5114u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D510Cu, 0x2D5114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5114u;
label_2d5114:
    // 0x2d5114: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d5114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5118: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d5118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d511c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D511Cu;
    {
        const bool branch_taken_0x2d511c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d511c) {
            ctx->pc = 0x2D5178u;
            return;
        }
    }
    ctx->pc = 0x2D5124u;
    // 0x2d5124: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d5124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5128: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2d5128u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2d512c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d512cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d5130: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2d5130u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d5134: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2D5134u;
    {
        const bool branch_taken_0x2d5134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5134) {
            ctx->pc = 0x2D5178u;
            return;
        }
    }
    ctx->pc = 0x2D513Cu;
}
