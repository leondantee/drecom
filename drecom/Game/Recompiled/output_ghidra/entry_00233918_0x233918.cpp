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

// Function: entry_00233918
// Address: 0x233918 - 0x23394c
void entry_00233918_0x233918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00233918_0x233918");
#endif

    switch (ctx->pc) {
        case 0x233948u: goto label_233948;
        default: break;
    }

    ctx->pc = 0x233918u;

    // 0x233918: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23391c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x23391cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x233920: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x233920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x233924: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x233924u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x233928: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x233928u;
    {
        const bool branch_taken_0x233928 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x233928) {
            ctx->pc = 0x23394Cu;
            return;
        }
    }
    ctx->pc = 0x233930u;
    // 0x233930: 0x24111770  addiu       $s1, $zero, 0x1770
    ctx->pc = 0x233930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x233934: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x233934u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x233938: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x233938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23393c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23393cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x233940: 0xc0576a4  jal         func_15DA90
    ctx->pc = 0x233940u;
    SET_GPR_U32(ctx, 31, 0x233948u);
    ctx->pc = 0x15DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DA90u, 0x233940u, 0x233948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233948u;
label_233948:
    // 0x233948: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x233948u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x23394cu;
}
