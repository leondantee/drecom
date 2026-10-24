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

// Function: entry_00356a54
// Address: 0x356a54 - 0x356b64
void entry_00356a54_0x356a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00356a54_0x356a54");
#endif

    switch (ctx->pc) {
        case 0x356aa0u: goto label_356aa0;
        case 0x356b38u: goto label_356b38;
        default: break;
    }

    ctx->pc = 0x356a54u;

    // 0x356a54: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x356a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x356a58: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x356A58u;
    {
        const bool branch_taken_0x356a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356a58) {
            ctx->pc = 0x356BA4u;
            return;
        }
    }
    ctx->pc = 0x356A60u;
    // 0x356a60: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x356a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x356a64: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x356a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x356a68: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x356a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x356a6c: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x356a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x356a70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x356a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x356a74: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x356a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x356a78: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x356a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x356a7c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x356a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x356a80: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x356a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x356a84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x356a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x356a88: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x356a88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x356a8c: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x356a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x356a90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x356a90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356a94: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x356a94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x356a98: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x356A98u;
    SET_GPR_U32(ctx, 31, 0x356AA0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x356A98u, 0x356AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356AA0u;
label_356aa0:
    // 0x356aa0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356aa4: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x356aa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x356aa8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x356aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x356aac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356ab0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356ab4: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x356ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x356ab8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356abc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356abcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356ac0: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x356ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x356ac4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356ac8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356acc: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x356accu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x356ad0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356ad4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356ad8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356adc: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x356adcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x356ae0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356ae4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356ae8: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x356ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x356aec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356af0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356af0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356af4: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x356af4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x356af8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356afc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356afcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356b00: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x356b00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x356b04: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356b08: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356b08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356b0c: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x356b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x356b10: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356b14: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356b14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356b18: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x356b18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x356b1c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356b20: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356b20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356b24: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x356b24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x356b28: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356b2c: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x356b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x356b30: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x356B30u;
    SET_GPR_U32(ctx, 31, 0x356B38u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x356B30u, 0x356B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356B38u;
label_356b38:
    // 0x356b38: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356b3c: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x356b3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x356b40: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356b44: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x356b44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x356b48: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x356b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x356b4c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x356b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x356b50: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x356B50u;
    {
        const bool branch_taken_0x356b50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x356b50) {
            ctx->pc = 0x356B64u;
            return;
        }
    }
    ctx->pc = 0x356B58u;
    // 0x356b58: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x356b58u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356b5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x356B5Cu;
    {
        const bool branch_taken_0x356b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356b5c) {
            ctx->pc = 0x356B88u;
            return;
        }
    }
    ctx->pc = 0x356B64u;
}
