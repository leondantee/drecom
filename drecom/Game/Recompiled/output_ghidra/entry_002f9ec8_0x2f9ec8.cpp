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

// Function: entry_002f9ec8
// Address: 0x2f9ec8 - 0x2f9f34
void entry_002f9ec8_0x2f9ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f9ec8_0x2f9ec8");
#endif

    switch (ctx->pc) {
        case 0x2f9f28u: goto label_2f9f28;
        default: break;
    }

    ctx->pc = 0x2f9ec8u;

    // 0x2f9ec8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f9ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9ecc: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2f9eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f9ed0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2f9ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2f9ed4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f9ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f9ed8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2f9ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f9edc: 0x34488500  ori         $t0, $v0, 0x8500
    ctx->pc = 0x2f9edcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34048);
    // 0x2f9ee0: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x2f9ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2f9ee4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f9ee4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f9ee8: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x2f9ee8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f9eec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f9eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f9ef0: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x2f9ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f9ef4: 0x246201c0  addiu       $v0, $v1, 0x1C0
    ctx->pc = 0x2f9ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x2f9ef8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2f9ef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9efc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2f9efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2f9f00: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f9f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9f04: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f9f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f9f08: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x2f9f08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9f0c: 0x853824  and         $a3, $a0, $a1
    ctx->pc = 0x2f9f0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x2f9f10: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2f9f10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2f9f14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f9f14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f9f18: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f9f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f9f1c: 0x24468ff0  addiu       $a2, $v0, -0x7010
    ctx->pc = 0x2f9f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938608));
    // 0x2f9f20: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F9F20u;
    SET_GPR_U32(ctx, 31, 0x2F9F28u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F9F20u, 0x2F9F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9F28u;
label_2f9f28:
    // 0x2f9f28: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f9f28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9f2c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F9F2Cu;
    SET_GPR_U32(ctx, 31, 0x2F9F34u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F9F2Cu, 0x2F9F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9F34u;
}
