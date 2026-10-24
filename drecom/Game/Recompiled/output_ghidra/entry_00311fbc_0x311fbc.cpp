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

// Function: entry_00311fbc
// Address: 0x311fbc - 0x312040
void entry_00311fbc_0x311fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00311fbc_0x311fbc");
#endif

    switch (ctx->pc) {
        case 0x31203cu: goto label_31203c;
        default: break;
    }

    ctx->pc = 0x311fbcu;

    // 0x311fbc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x311fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x311fc0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x311fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x311fc4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x311fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x311fc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x311fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x311fcc: 0x34423400  ori         $v0, $v0, 0x3400
    ctx->pc = 0x311fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13312);
    // 0x311fd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x311fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x311fd4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x311fd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x311fd8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x311fd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x311fdc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x311fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x311fe0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x311fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x311fe4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x311fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x311fe8: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x311fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x311fec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311ff0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x311ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x311ff4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x311ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x311ff8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x311ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x311ffc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x311ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x312000: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x312000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x312004: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x312004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x312008: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x312008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31200c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31200cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x312010: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x312010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x312014: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x312014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x312018: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x312018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31201c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31201cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x312020: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x312020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x312024: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x312024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x312028: 0x453825  or          $a3, $v0, $a1
    ctx->pc = 0x312028u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x31202c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31202cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x312030: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x312030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x312034: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x312034u;
    SET_GPR_U32(ctx, 31, 0x31203Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x312034u, 0x31203Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31203Cu;
label_31203c:
    // 0x31203c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x31203cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x312040u;
}
