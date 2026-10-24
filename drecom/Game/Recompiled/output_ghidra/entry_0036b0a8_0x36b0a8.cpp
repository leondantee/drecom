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

// Function: entry_0036b0a8
// Address: 0x36b0a8 - 0x36b200
void entry_0036b0a8_0x36b0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036b0a8_0x36b0a8");
#endif

    switch (ctx->pc) {
        case 0x36b0c4u: goto label_36b0c4;
        case 0x36b0e0u: goto label_36b0e0;
        case 0x36b0fcu: goto label_36b0fc;
        case 0x36b118u: goto label_36b118;
        case 0x36b12cu: goto label_36b12c;
        case 0x36b140u: goto label_36b140;
        case 0x36b154u: goto label_36b154;
        case 0x36b168u: goto label_36b168;
        default: break;
    }

    ctx->pc = 0x36b0a8u;

    // 0x36b0a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b0ac: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x36b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x36b0b0: 0x24520510  addiu       $s2, $v0, 0x510
    ctx->pc = 0x36b0b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x36b0b4: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x36b0b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x36b0b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b0bc: 0xc0963b8  jal         func_258EE0
    ctx->pc = 0x36B0BCu;
    SET_GPR_U32(ctx, 31, 0x36B0C4u);
    ctx->pc = 0x258EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258EE0u, 0x36B0BCu, 0x36B0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B0C4u;
label_36b0c4:
    // 0x36b0c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b0c8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x36b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x36b0cc: 0x24520240  addiu       $s2, $v0, 0x240
    ctx->pc = 0x36b0ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x36b0d0: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x36b0d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x36b0d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b0d8: 0xc0963b8  jal         func_258EE0
    ctx->pc = 0x36B0D8u;
    SET_GPR_U32(ctx, 31, 0x36B0E0u);
    ctx->pc = 0x258EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258EE0u, 0x36B0D8u, 0x36B0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B0E0u;
label_36b0e0:
    // 0x36b0e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b0e4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x36b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x36b0e8: 0x24520360  addiu       $s2, $v0, 0x360
    ctx->pc = 0x36b0e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x36b0ec: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x36b0ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x36b0f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b0f4: 0xc0963b8  jal         func_258EE0
    ctx->pc = 0x36B0F4u;
    SET_GPR_U32(ctx, 31, 0x36B0FCu);
    ctx->pc = 0x258EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258EE0u, 0x36B0F4u, 0x36B0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B0FCu;
label_36b0fc:
    // 0x36b0fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b100: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x36b100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x36b104: 0x24520120  addiu       $s2, $v0, 0x120
    ctx->pc = 0x36b104u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36b108: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x36b108u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x36b10c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b110: 0xc0963b8  jal         func_258EE0
    ctx->pc = 0x36B110u;
    SET_GPR_U32(ctx, 31, 0x36B118u);
    ctx->pc = 0x258EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258EE0u, 0x36B110u, 0x36B118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B118u;
label_36b118:
    // 0x36b118: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36b118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b11c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x36b11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36b120: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x36b120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x36b124: 0xc096450  jal         func_259140
    ctx->pc = 0x36B124u;
    SET_GPR_U32(ctx, 31, 0x36B12Cu);
    ctx->pc = 0x259140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259140u, 0x36B124u, 0x36B12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B12Cu;
label_36b12c:
    // 0x36b12c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b130: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x36b130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36b134: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x36b134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x36b138: 0xc096450  jal         func_259140
    ctx->pc = 0x36B138u;
    SET_GPR_U32(ctx, 31, 0x36B140u);
    ctx->pc = 0x259140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259140u, 0x36B138u, 0x36B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B140u;
label_36b140:
    // 0x36b140: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36b140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b144: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x36b144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36b148: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x36b148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x36b14c: 0xc096450  jal         func_259140
    ctx->pc = 0x36B14Cu;
    SET_GPR_U32(ctx, 31, 0x36B154u);
    ctx->pc = 0x259140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259140u, 0x36B14Cu, 0x36B154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B154u;
label_36b154:
    // 0x36b154: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36b154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b158: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x36b158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36b15c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x36b15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36b160: 0xc096450  jal         func_259140
    ctx->pc = 0x36B160u;
    SET_GPR_U32(ctx, 31, 0x36B168u);
    ctx->pc = 0x259140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259140u, 0x36B160u, 0x36B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B168u;
label_36b168:
    // 0x36b168: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36b168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b16c: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x36b16cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x36b170: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x36b170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x36b174: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36b174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36b178: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x36B178u;
    {
        const bool branch_taken_0x36b178 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x36b178) {
            ctx->pc = 0x36B200u;
            return;
        }
    }
    ctx->pc = 0x36B180u;
    // 0x36b180: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36b180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b184: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x36b184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x36b188: 0x24720510  addiu       $s2, $v1, 0x510
    ctx->pc = 0x36b188u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
    // 0x36b18c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x36b18cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36b190: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36b190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b194: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x36b194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x36b198: 0x24720240  addiu       $s2, $v1, 0x240
    ctx->pc = 0x36b198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x36b19c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x36b19cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36b1a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b1a4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x36b1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x36b1a8: 0x24720360  addiu       $s2, $v1, 0x360
    ctx->pc = 0x36b1a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 864));
    // 0x36b1ac: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x36b1acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36b1b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b1b4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x36b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x36b1b8: 0x24720120  addiu       $s2, $v1, 0x120
    ctx->pc = 0x36b1b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x36b1bc: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x36b1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36b1c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b1c4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x36b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x36b1c8: 0x24720ea0  addiu       $s2, $v1, 0xEA0
    ctx->pc = 0x36b1c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3744));
    // 0x36b1cc: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x36b1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36b1d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36b1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b1d4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x36b1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x36b1d8: 0x24720f30  addiu       $s2, $v1, 0xF30
    ctx->pc = 0x36b1d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3888));
    // 0x36b1dc: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x36b1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36b1e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b1e4: 0x8c730058  lw          $s3, 0x58($v1)
    ctx->pc = 0x36b1e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x36b1e8: 0x26720fc0  addiu       $s2, $s3, 0xFC0
    ctx->pc = 0x36b1e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4032));
    // 0x36b1ec: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x36b1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36b1f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36b1f4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x36b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x36b1f8: 0x24720480  addiu       $s2, $v1, 0x480
    ctx->pc = 0x36b1f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x36b1fc: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x36b1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x36b200u;
}
