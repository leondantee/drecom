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

// Function: entry_00234c1c
// Address: 0x234c1c - 0x234c70
void entry_00234c1c_0x234c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00234c1c_0x234c1c");
#endif

    switch (ctx->pc) {
        case 0x234c4cu: goto label_234c4c;
        default: break;
    }

    ctx->pc = 0x234c1cu;

    // 0x234c1c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234c20: 0x844211f2  lh          $v0, 0x11F2($v0)
    ctx->pc = 0x234c20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x234c24: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x234c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x234c28: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x234c28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x234c2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x234c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234c30: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x234c30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x234c34: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x234c34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x234c38: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x234c38u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x234c3c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x234c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234c40: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x234c40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x234c44: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x234C44u;
    SET_GPR_U32(ctx, 31, 0x234C4Cu);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x234C44u, 0x234C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C4Cu;
label_234c4c:
    // 0x234c4c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234c50: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x234c50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x234c54: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x234c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x234c58: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x234c58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x234c5c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x234C5Cu;
    {
        const bool branch_taken_0x234c5c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x234c5c) {
            ctx->pc = 0x234C70u;
            return;
        }
    }
    ctx->pc = 0x234C64u;
    // 0x234c64: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234c68: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x234c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x234c6c: 0xa440005e  sh          $zero, 0x5E($v0)
    ctx->pc = 0x234c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 94), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x234c70u;
}
