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

// Function: entry_0024baec
// Address: 0x24baec - 0x24bb38
void entry_0024baec_0x24baec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024baec_0x24baec");
#endif

    switch (ctx->pc) {
        case 0x24bb34u: goto label_24bb34;
        default: break;
    }

    ctx->pc = 0x24baecu;

    // 0x24baec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x24baecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x24baf0: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x24baf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x24baf4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x24BAF4u;
    {
        const bool branch_taken_0x24baf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24baf4) {
            ctx->pc = 0x24BB40u;
            return;
        }
    }
    ctx->pc = 0x24BAFCu;
    // 0x24bafc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x24bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24bb00: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24bb04: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24bb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bb08: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24bb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24bb0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24bb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24bb10: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24bb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24bb14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24bb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24bb18: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24bb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24bb1c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x24bb1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bb20: 0x3404a507  ori         $a0, $zero, 0xA507
    ctx->pc = 0x24bb20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42247);
    // 0x24bb24: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24bb24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24bb28: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x24bb28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x24bb2c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24BB2Cu;
    SET_GPR_U32(ctx, 31, 0x24BB34u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24BB2Cu, 0x24BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BB34u;
label_24bb34:
    // 0x24bb34: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24bb34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x24bb38u;
}
