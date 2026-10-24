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

// Function: entry_003794d4
// Address: 0x3794d4 - 0x379514
void entry_003794d4_0x3794d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003794d4_0x3794d4");
#endif

    switch (ctx->pc) {
        case 0x3794fcu: goto label_3794fc;
        default: break;
    }

    ctx->pc = 0x3794d4u;

    // 0x3794d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3794d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3794d8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3794d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3794dc: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3794dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3794e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3794e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3794e4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3794e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3794e8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3794e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3794ec: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x3794ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3794f0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3794f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3794f4: 0xc0d8608  jal         func_361820
    ctx->pc = 0x3794F4u;
    SET_GPR_U32(ctx, 31, 0x3794FCu);
    ctx->pc = 0x361820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361820u, 0x3794F4u, 0x3794FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3794FCu;
label_3794fc:
    // 0x3794fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3794fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x379500: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x379500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x379504: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x379504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x379508: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x379508u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x37950c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x37950Cu;
    {
        const bool branch_taken_0x37950c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37950c) {
            ctx->pc = 0x379588u;
            return;
        }
    }
    ctx->pc = 0x379514u;
}
