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

// Function: entry_00302cec
// Address: 0x302cec - 0x302d40
void entry_00302cec_0x302cec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00302cec_0x302cec");
#endif

    switch (ctx->pc) {
        case 0x302d0cu: goto label_302d0c;
        case 0x302d18u: goto label_302d18;
        case 0x302d28u: goto label_302d28;
        case 0x302d34u: goto label_302d34;
        default: break;
    }

    ctx->pc = 0x302cecu;

    // 0x302cec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302cf0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x302cf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x302cf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x302cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x302cf8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x302cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x302cfc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x302d00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x302d04: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x302D04u;
    SET_GPR_U32(ctx, 31, 0x302D0Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x302D04u, 0x302D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302D0Cu;
label_302d0c:
    // 0x302d0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d10: 0xc05cd10  jal         func_173440
    ctx->pc = 0x302D10u;
    SET_GPR_U32(ctx, 31, 0x302D18u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x302D10u, 0x302D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302D18u;
label_302d18:
    // 0x302d18: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x302d1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x302d20: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x302D20u;
    SET_GPR_U32(ctx, 31, 0x302D28u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x302D20u, 0x302D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302D28u;
label_302d28:
    // 0x302d28: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d2c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x302D2Cu;
    SET_GPR_U32(ctx, 31, 0x302D34u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x302D2Cu, 0x302D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302D34u;
label_302d34:
    // 0x302d34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d38: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x302D38u;
    {
        const bool branch_taken_0x302d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302d38) {
            ctx->pc = 0x303048u;
            return;
        }
    }
    ctx->pc = 0x302D40u;
}
