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

// Function: entry_00250034
// Address: 0x250034 - 0x2501d4
void entry_00250034_0x250034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00250034_0x250034");
#endif

    switch (ctx->pc) {
        case 0x250118u: goto label_250118;
        case 0x25013cu: goto label_25013c;
        case 0x250178u: goto label_250178;
        case 0x250184u: goto label_250184;
        case 0x2501c0u: goto label_2501c0;
        case 0x2501ccu: goto label_2501cc;
        default: break;
    }

    ctx->pc = 0x250034u;

    // 0x250034: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250038: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x250038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x25003c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x25003cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250040: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250044: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250048: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x25004c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25004cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250050: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250054: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x250054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250058: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25005c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x25005cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x250060: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250064: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250068: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x25006c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x25006cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250070: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250074: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250078: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x250078u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x25007c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x25007cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250080: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x250080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x250084: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250088: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x25008c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x25008cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250090: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250094: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250098: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25009c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x25009cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2500a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2500a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2500a4: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x2500a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2500a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2500a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2500ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2500acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2500b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2500b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2500b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2500b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2500b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2500b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2500bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2500bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2500c0: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x2500c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2500c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2500c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2500c8: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2500c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2500cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2500ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2500d0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2500d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2500d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2500d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2500d8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2500d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2500dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2500dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2500e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2500e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2500e4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2500e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2500e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2500e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2500ec: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2500ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2500f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2500f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2500f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2500f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2500f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2500f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2500fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2500fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250100: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250104: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250108: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x250108u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x25010c: 0x24040704  addiu       $a0, $zero, 0x704
    ctx->pc = 0x25010cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1796));
    // 0x250110: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x250110u;
    SET_GPR_U32(ctx, 31, 0x250118u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x250110u, 0x250118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250118u;
label_250118:
    // 0x250118: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x250118u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25011c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x25011cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250120: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x250120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x250124: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x250124u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250128: 0x26020310  addiu       $v0, $s0, 0x310
    ctx->pc = 0x250128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x25012c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x25012cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x250130: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x250130u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x250134: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x250134u;
    SET_GPR_U32(ctx, 31, 0x25013Cu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x250134u, 0x25013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25013Cu;
label_25013c:
    // 0x25013c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x25013cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250140: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x250140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250144: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250148: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x250148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x25014c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x25014cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250150: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250154: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250158: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x25015c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25015cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250160: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x250160u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250164: 0x24041603  addiu       $a0, $zero, 0x1603
    ctx->pc = 0x250164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5635));
    // 0x250168: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x250168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x25016c: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x25016cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x250170: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x250170u;
    SET_GPR_U32(ctx, 31, 0x250178u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x250170u, 0x250178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250178u;
label_250178:
    // 0x250178: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x250178u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25017c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x25017Cu;
    SET_GPR_U32(ctx, 31, 0x250184u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x25017Cu, 0x250184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250184u;
label_250184:
    // 0x250184: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x250184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250188: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x250188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25018c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x25018cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250190: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x250190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x250194: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250198: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x25019c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x25019cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2501a0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2501a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2501a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2501a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2501a8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2501a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2501ac: 0x24042805  addiu       $a0, $zero, 0x2805
    ctx->pc = 0x2501acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10245));
    // 0x2501b0: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x2501b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x2501b4: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x2501b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x2501b8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2501B8u;
    SET_GPR_U32(ctx, 31, 0x2501C0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2501B8u, 0x2501C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2501C0u;
label_2501c0:
    // 0x2501c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2501c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2501c4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2501C4u;
    SET_GPR_U32(ctx, 31, 0x2501CCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2501C4u, 0x2501CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2501CCu;
label_2501cc:
    // 0x2501cc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2501CCu;
    {
        const bool branch_taken_0x2501cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2501cc) {
            ctx->pc = 0x250380u;
            return;
        }
    }
    ctx->pc = 0x2501D4u;
}
