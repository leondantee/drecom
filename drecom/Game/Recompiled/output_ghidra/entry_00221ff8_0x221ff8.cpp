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

// Function: entry_00221ff8
// Address: 0x221ff8 - 0x222044
void entry_00221ff8_0x221ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00221ff8_0x221ff8");
#endif

    switch (ctx->pc) {
        case 0x222018u: goto label_222018;
        default: break;
    }

    ctx->pc = 0x221ff8u;

    // 0x221ff8: 0x27a500dc  addiu       $a1, $sp, 0xDC
    ctx->pc = 0x221ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x221ffc: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x221ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222000: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x222000u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x222004: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x222004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x222008: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x222008u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22200c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22200cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x222010: 0xc05d328  jal         func_174CA0
    ctx->pc = 0x222010u;
    SET_GPR_U32(ctx, 31, 0x222018u);
    ctx->pc = 0x174CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174CA0u, 0x222010u, 0x222018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222018u;
label_222018:
    // 0x222018: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x222018u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22201c: 0x8fb700e8  lw          $s7, 0xE8($sp)
    ctx->pc = 0x22201cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222020: 0x26e21330  addiu       $v0, $s7, 0x1330
    ctx->pc = 0x222020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4912));
    // 0x222024: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x222024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x222028: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x222028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x22202c: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x22202cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x222030: 0xacc00064  sw          $zero, 0x64($a2)
    ctx->pc = 0x222030u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 0));
    // 0x222034: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x222034u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x222038: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x222038u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22203c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x22203Cu;
    {
        const bool branch_taken_0x22203c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22203c) {
            ctx->pc = 0x2220A8u;
            return;
        }
    }
    ctx->pc = 0x222044u;
}
