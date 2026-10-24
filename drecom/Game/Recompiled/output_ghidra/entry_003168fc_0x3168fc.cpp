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

// Function: entry_003168fc
// Address: 0x3168fc - 0x316970
void entry_003168fc_0x3168fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003168fc_0x3168fc");
#endif

    switch (ctx->pc) {
        case 0x316968u: goto label_316968;
        default: break;
    }

    ctx->pc = 0x3168fcu;

    // 0x3168fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3168fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316900: 0x8c83128c  lw          $v1, 0x128C($a0)
    ctx->pc = 0x316900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x316904: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x316904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x316908: 0xac83128c  sw          $v1, 0x128C($a0)
    ctx->pc = 0x316908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4748), GPR_U32(ctx, 3));
    // 0x31690c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31690cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316910: 0x8c63128c  lw          $v1, 0x128C($v1)
    ctx->pc = 0x316910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x316914: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x316914u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x316918: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x316918u;
    {
        const bool branch_taken_0x316918 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x316918) {
            ctx->pc = 0x316970u;
            return;
        }
    }
    ctx->pc = 0x316920u;
    // 0x316920: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x316920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x316924: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x316924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x316928: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x316928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31692c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31692cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x316930: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x316930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x316934: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x316934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x316938: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x316938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31693c: 0x34440417  ori         $a0, $v0, 0x417
    ctx->pc = 0x31693cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1047);
    // 0x316940: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316944: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x316944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x316948: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x316948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x31694c: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x31694cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x316950: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x316950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316954: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x316954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x316958: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x316958u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31695c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x31695cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x316960: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x316960u;
    SET_GPR_U32(ctx, 31, 0x316968u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x316960u, 0x316968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316968u;
label_316968:
    // 0x316968: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31696c: 0xac60128c  sw          $zero, 0x128C($v1)
    ctx->pc = 0x31696cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 0));
    ctx->pc = 0x316970u;
}
