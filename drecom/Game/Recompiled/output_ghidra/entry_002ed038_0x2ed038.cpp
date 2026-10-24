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

// Function: entry_002ed038
// Address: 0x2ed038 - 0x2ed124
void entry_002ed038_0x2ed038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ed038_0x2ed038");
#endif

    switch (ctx->pc) {
        case 0x2ed05cu: goto label_2ed05c;
        case 0x2ed0f8u: goto label_2ed0f8;
        default: break;
    }

    ctx->pc = 0x2ed038u;

    // 0x2ed038: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ed038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ed03c: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2ED03Cu;
    {
        const bool branch_taken_0x2ed03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed03c) {
            ctx->pc = 0x2ED154u;
            return;
        }
    }
    ctx->pc = 0x2ED044u;
    // 0x2ed044: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2ed044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2ed048: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ed048u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ed04c: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x2ed04cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ed050: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2ed050u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ed054: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2ED054u;
    SET_GPR_U32(ctx, 31, 0x2ED05Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2ED054u, 0x2ED05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED05Cu;
label_2ed05c:
    // 0x2ed05c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed060: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed060u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ed064: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ed064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ed068: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed06c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed06cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed070: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2ed070u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ed074: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ed074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ed078: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed07c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed07cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed080: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2ed080u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ed084: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed088: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed088u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed08c: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ed08cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed090: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ed090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed094: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed098: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed098u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed09c: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2ed09cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ed0a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed0a4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed0a8: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ed0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed0ac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed0b0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed0b4: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2ed0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed0b8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed0bc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed0c0: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ed0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed0c4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed0c8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed0cc: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ed0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed0d0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed0d4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed0d8: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ed0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed0dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed0e0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed0e4: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ed0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed0e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed0ec: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ed0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed0f0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2ED0F0u;
    SET_GPR_U32(ctx, 31, 0x2ED0F8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2ED0F0u, 0x2ED0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED0F8u;
label_2ed0f8:
    // 0x2ed0f8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed0fc: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ed0fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ed100: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed104: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ed104u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ed108: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ed108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ed10c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ed10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ed110: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED110u;
    {
        const bool branch_taken_0x2ed110 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ed110) {
            ctx->pc = 0x2ED124u;
            return;
        }
    }
    ctx->pc = 0x2ED118u;
    // 0x2ed118: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2ed118u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ed11c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED11Cu;
    {
        const bool branch_taken_0x2ed11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed11c) {
            ctx->pc = 0x2ED140u;
            return;
        }
    }
    ctx->pc = 0x2ED124u;
}
