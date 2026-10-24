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

// Function: entry_002fde14
// Address: 0x2fde14 - 0x2fdf2c
void entry_002fde14_0x2fde14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fde14_0x2fde14");
#endif

    switch (ctx->pc) {
        case 0x2fde6cu: goto label_2fde6c;
        case 0x2fdf00u: goto label_2fdf00;
        default: break;
    }

    ctx->pc = 0x2fde14u;

    // 0x2fde14: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x2fde14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2fde18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fde18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fde1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2fde1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fde20: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2fde20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2fde24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fde24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fde28: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fde28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fde2c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2fde2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2fde30: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2fde30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2fde34: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2fde34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fde38: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2fde38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2fde3c: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x2fde3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x2fde40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fde40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fde44: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fde44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fde48: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fde48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fde4c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fde4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fde50: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fde50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fde54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fde54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fde58: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2fde58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fde5c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fde5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fde60: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x2fde60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2fde64: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FDE64u;
    SET_GPR_U32(ctx, 31, 0x2FDE6Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FDE64u, 0x2FDE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDE6Cu;
label_2fde6c:
    // 0x2fde6c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fde6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fde70: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2fde70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2fde74: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fde74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fde78: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fde78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fde7c: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2fde7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fde80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fde80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fde84: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fde84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fde88: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fde88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fde8c: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2fde8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fde90: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fde90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fde94: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fde94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fde98: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2fde98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fde9c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fde9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdea0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fdea0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdea4: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2fdea4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fdea8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdeac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fdeacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdeb0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2fdeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fdeb4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdeb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdeb8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fdeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdebc: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2fdebcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fdec0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdec4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fdec4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdec8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2fdec8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fdecc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fded0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fded0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fded4: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2fded4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fded8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fded8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdedc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fdedcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdee0: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2fdee0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fdee4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdee8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fdee8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdeec: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2fdeecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fdef0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdef4: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2fdef4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdef8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FDEF8u;
    SET_GPR_U32(ctx, 31, 0x2FDF00u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FDEF8u, 0x2FDF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDF00u;
label_2fdf00:
    // 0x2fdf00: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdf00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdf04: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2fdf04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2fdf08: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdf08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdf0c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2fdf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2fdf10: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fdf10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fdf14: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fdf14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fdf18: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDF18u;
    {
        const bool branch_taken_0x2fdf18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fdf18) {
            ctx->pc = 0x2FDF2Cu;
            return;
        }
    }
    ctx->pc = 0x2FDF20u;
    // 0x2fdf20: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2fdf20u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fdf24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FDF24u;
    {
        const bool branch_taken_0x2fdf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdf24) {
            ctx->pc = 0x2FDF48u;
            return;
        }
    }
    ctx->pc = 0x2FDF2Cu;
}
