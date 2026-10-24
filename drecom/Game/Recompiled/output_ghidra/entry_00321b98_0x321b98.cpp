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

// Function: entry_00321b98
// Address: 0x321b98 - 0x321c7c
void entry_00321b98_0x321b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321b98_0x321b98");
#endif

    switch (ctx->pc) {
        case 0x321bbcu: goto label_321bbc;
        case 0x321c50u: goto label_321c50;
        default: break;
    }

    ctx->pc = 0x321b98u;

    // 0x321b98: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x321b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x321b9c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x321b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x321ba0: 0x24429eb0  addiu       $v0, $v0, -0x6150
    ctx->pc = 0x321ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942384));
    // 0x321ba4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x321ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321ba8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x321ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x321bac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x321bacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321bb0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x321bb0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321bb4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x321BB4u;
    SET_GPR_U32(ctx, 31, 0x321BBCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x321BB4u, 0x321BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321BBCu;
label_321bbc:
    // 0x321bbc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321bc0: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x321bc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x321bc4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321bc8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321bcc: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x321bccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x321bd0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321bd4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321bd8: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x321bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x321bdc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321be0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321be0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321be4: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x321be4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x321be8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x321be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x321bec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321bf0: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x321bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x321bf4: 0xa082011b  sb          $v0, 0x11B($a0)
    ctx->pc = 0x321bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 283), (uint8_t)GPR_U32(ctx, 2));
    // 0x321bf8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321bfc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321c00: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x321c00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x321c04: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321c08: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x321c08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x321c0c: 0xa060013b  sb          $zero, 0x13B($v1)
    ctx->pc = 0x321c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x321c10: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321c14: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321c14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321c18: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x321c18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x321c1c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321c20: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321c20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321c24: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x321c24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x321c28: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321c2c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321c30: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x321c30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x321c34: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321c38: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321c38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321c3c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x321c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x321c40: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321c44: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x321c44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x321c48: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x321C48u;
    SET_GPR_U32(ctx, 31, 0x321C50u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x321C48u, 0x321C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321C50u;
label_321c50:
    // 0x321c50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321c54: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x321c54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x321c58: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321c5c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x321c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x321c60: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x321c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x321c64: 0x34560011  ori         $s6, $v0, 0x11
    ctx->pc = 0x321c64u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x321c68: 0x14760004  bne         $v1, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x321C68u;
    {
        const bool branch_taken_0x321c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x321c68) {
            ctx->pc = 0x321C7Cu;
            return;
        }
    }
    ctx->pc = 0x321C70u;
    // 0x321c70: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x321c70u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321c74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x321C74u;
    {
        const bool branch_taken_0x321c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321c74) {
            ctx->pc = 0x321C98u;
            return;
        }
    }
    ctx->pc = 0x321C7Cu;
}
