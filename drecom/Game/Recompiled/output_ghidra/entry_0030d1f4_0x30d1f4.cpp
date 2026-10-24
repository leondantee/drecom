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

// Function: entry_0030d1f4
// Address: 0x30d1f4 - 0x30d248
void entry_0030d1f4_0x30d1f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030d1f4_0x30d1f4");
#endif

    switch (ctx->pc) {
        case 0x30d214u: goto label_30d214;
        case 0x30d220u: goto label_30d220;
        case 0x30d230u: goto label_30d230;
        case 0x30d23cu: goto label_30d23c;
        default: break;
    }

    ctx->pc = 0x30d1f4u;

    // 0x30d1f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d1f8: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x30d1f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x30d1fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30d200: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x30d200u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x30d204: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d208: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30d208u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30d20c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30D20Cu;
    SET_GPR_U32(ctx, 31, 0x30D214u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30D20Cu, 0x30D214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D214u;
label_30d214:
    // 0x30d214: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d218: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30D218u;
    SET_GPR_U32(ctx, 31, 0x30D220u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30D218u, 0x30D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D220u;
label_30d220:
    // 0x30d220: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d224: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30d224u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30d228: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30D228u;
    SET_GPR_U32(ctx, 31, 0x30D230u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30D228u, 0x30D230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D230u;
label_30d230:
    // 0x30d230: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d234: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30D234u;
    SET_GPR_U32(ctx, 31, 0x30D23Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30D234u, 0x30D23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D23Cu;
label_30d23c:
    // 0x30d23c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d240: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x30D240u;
    {
        const bool branch_taken_0x30d240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d240) {
            ctx->pc = 0x30D358u;
            return;
        }
    }
    ctx->pc = 0x30D248u;
}
