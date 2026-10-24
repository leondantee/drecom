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

// Function: caseD_1
// Address: 0x3071d0 - 0x307240
void caseD_1_0x3071d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x3071d0");
#endif

    switch (ctx->pc) {
        case 0x3071f0u: goto label_3071f0;
        case 0x3071fcu: goto label_3071fc;
        case 0x30720cu: goto label_30720c;
        case 0x307218u: goto label_307218;
        default: break;
    }

    ctx->pc = 0x3071d0u;

    // 0x3071d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3071d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3071d4: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x3071d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x3071d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3071d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3071dc: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x3071dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x3071e0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3071e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3071e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3071e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3071e8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3071E8u;
    SET_GPR_U32(ctx, 31, 0x3071F0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3071E8u, 0x3071F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3071F0u;
label_3071f0:
    // 0x3071f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3071f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3071f4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3071F4u;
    SET_GPR_U32(ctx, 31, 0x3071FCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3071F4u, 0x3071FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3071FCu;
label_3071fc:
    // 0x3071fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3071fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307200: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x307200u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x307204: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x307204u;
    SET_GPR_U32(ctx, 31, 0x30720Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x307204u, 0x30720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30720Cu;
label_30720c:
    // 0x30720c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30720cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307210: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x307210u;
    SET_GPR_U32(ctx, 31, 0x307218u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x307210u, 0x307218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307218u;
label_307218:
    // 0x307218: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x307218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30721c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30721cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x307220: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x307220u;
    {
        const bool branch_taken_0x307220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x307220) {
            ctx->pc = 0x307390u;
            return;
        }
    }
    ctx->pc = 0x307228u;
    // 0x307228: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x307228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30722c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x30722cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x307230: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x307230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x307234: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x307234u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x307238: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x307238u;
    {
        const bool branch_taken_0x307238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307238) {
            ctx->pc = 0x307390u;
            return;
        }
    }
    ctx->pc = 0x307240u;
}
