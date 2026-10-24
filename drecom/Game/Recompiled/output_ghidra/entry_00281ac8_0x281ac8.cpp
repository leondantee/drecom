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

// Function: entry_00281ac8
// Address: 0x281ac8 - 0x281ba8
void entry_00281ac8_0x281ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00281ac8_0x281ac8");
#endif

    switch (ctx->pc) {
        case 0x281aecu: goto label_281aec;
        case 0x281b7cu: goto label_281b7c;
        default: break;
    }

    ctx->pc = 0x281ac8u;

    // 0x281ac8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x281ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x281acc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x281accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x281ad0: 0x24423700  addiu       $v0, $v0, 0x3700
    ctx->pc = 0x281ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14080));
    // 0x281ad4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x281ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281ad8: 0x24042109  addiu       $a0, $zero, 0x2109
    ctx->pc = 0x281ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8457));
    // 0x281adc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x281adcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281ae0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x281ae0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281ae4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x281AE4u;
    SET_GPR_U32(ctx, 31, 0x281AECu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x281AE4u, 0x281AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281AECu;
label_281aec:
    // 0x281aec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281af0: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x281af0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x281af4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281af8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281af8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281afc: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x281afcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x281b00: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b04: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281b04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281b08: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x281b08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x281b0c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b10: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281b10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281b14: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x281b14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x281b18: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b1c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281b20: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x281b20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x281b24: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b28: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281b28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281b2c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x281b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x281b30: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b34: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281b34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281b38: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x281b38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x281b3c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b40: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281b40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281b44: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x281b44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x281b48: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b4c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281b50: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x281b50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x281b54: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b58: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281b58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281b5c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x281b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x281b60: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b64: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281b64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281b68: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x281b68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x281b6c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b70: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x281b70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x281b74: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x281B74u;
    SET_GPR_U32(ctx, 31, 0x281B7Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x281B74u, 0x281B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B7Cu;
label_281b7c:
    // 0x281b7c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b80: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x281b80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x281b84: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b88: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x281b88u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x281b8c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x281b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x281b90: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x281b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x281b94: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x281B94u;
    {
        const bool branch_taken_0x281b94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x281b94) {
            ctx->pc = 0x281BA8u;
            return;
        }
    }
    ctx->pc = 0x281B9Cu;
    // 0x281b9c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x281b9cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281ba0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x281BA0u;
    {
        const bool branch_taken_0x281ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281ba0) {
            ctx->pc = 0x281BC8u;
            return;
        }
    }
    ctx->pc = 0x281BA8u;
}
