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

// Function: R608_init
// Address: 0x321b60 - 0x3227f4
void R608_init_0x321b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R608_init_0x321b60");
#endif

    switch (ctx->pc) {
        case 0x321b98u: goto label_321b98;
        case 0x321bbcu: goto label_321bbc;
        case 0x321c50u: goto label_321c50;
        case 0x321d20u: goto label_321d20;
        case 0x321d2cu: goto label_321d2c;
        case 0x321d50u: goto label_321d50;
        case 0x321d64u: goto label_321d64;
        case 0x321d70u: goto label_321d70;
        case 0x321d9cu: goto label_321d9c;
        case 0x321dc0u: goto label_321dc0;
        case 0x321de4u: goto label_321de4;
        case 0x321e18u: goto label_321e18;
        case 0x321eb0u: goto label_321eb0;
        case 0x321f2cu: goto label_321f2c;
        case 0x321fa0u: goto label_321fa0;
        case 0x321facu: goto label_321fac;
        case 0x321fd0u: goto label_321fd0;
        case 0x321fe4u: goto label_321fe4;
        case 0x321ff0u: goto label_321ff0;
        case 0x322054u: goto label_322054;
        case 0x3220e8u: goto label_3220e8;
        case 0x322168u: goto label_322168;
        case 0x32218cu: goto label_32218c;
        case 0x322198u: goto label_322198;
        case 0x3221e8u: goto label_3221e8;
        case 0x32220cu: goto label_32220c;
        case 0x3222a0u: goto label_3222a0;
        case 0x322374u: goto label_322374;
        case 0x322380u: goto label_322380;
        case 0x3223a4u: goto label_3223a4;
        case 0x3223b8u: goto label_3223b8;
        case 0x3223c4u: goto label_3223c4;
        case 0x3223ecu: goto label_3223ec;
        case 0x322410u: goto label_322410;
        case 0x322434u: goto label_322434;
        case 0x322468u: goto label_322468;
        case 0x322500u: goto label_322500;
        case 0x322580u: goto label_322580;
        case 0x3225f4u: goto label_3225f4;
        case 0x322600u: goto label_322600;
        case 0x322624u: goto label_322624;
        case 0x322638u: goto label_322638;
        case 0x322644u: goto label_322644;
        case 0x3226a4u: goto label_3226a4;
        case 0x322738u: goto label_322738;
        case 0x3227c0u: goto label_3227c0;
        default: break;
    }

    ctx->pc = 0x321b60u;

    // 0x321b60: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x321b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x321b64: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x321b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x321b68: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x321b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x321b6c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x321b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x321b70: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x321b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x321b74: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x321b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x321b78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x321b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x321b7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x321b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x321b80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x321b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x321b84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x321b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x321b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x321b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x321b8c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x321b8cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321b90: 0x1000016f  b           . + 4 + (0x16F << 2)
    ctx->pc = 0x321B90u;
    {
        const bool branch_taken_0x321b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321b90) {
            ctx->pc = 0x322150u;
            goto label_322150;
        }
    }
    ctx->pc = 0x321B98u;
label_321b98:
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
            goto label_321c7c;
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
            goto label_321c98;
        }
    }
    ctx->pc = 0x321C7Cu;
label_321c7c:
    // 0x321c7c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321c80: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x321c80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x321c84: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321c88: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x321c88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x321c8c: 0x245e0118  addiu       $fp, $v0, 0x118
    ctx->pc = 0x321c8cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x321c90: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x321c90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x321c94: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x321c94u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_321c98:
    // 0x321c98: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x321c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x321c9c: 0x2442a610  addiu       $v0, $v0, -0x59F0
    ctx->pc = 0x321c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x321ca0: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x321ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x321ca4: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x321ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x321ca8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x321ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x321cac: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x321cacu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321cb0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x321cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x321cb4: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x321cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x321cb8: 0x1202002f  beq         $s0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x321CB8u;
    {
        const bool branch_taken_0x321cb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x321cb8) {
            ctx->pc = 0x321D78u;
            goto label_321d78;
        }
    }
    ctx->pc = 0x321CC0u;
    // 0x321cc0: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x321cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x321cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321cc8: 0x0  nop
    ctx->pc = 0x321cc8u;
    // NOP
    // 0x321ccc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x321cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x321cd0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x321cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x321cd4: 0xa2050139  sb          $a1, 0x139($s0)
    ctx->pc = 0x321cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 5));
    // 0x321cd8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x321cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x321cdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321ce0: 0x0  nop
    ctx->pc = 0x321ce0u;
    // NOP
    // 0x321ce4: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x321ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x321ce8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x321ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x321cec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321cf0: 0x0  nop
    ctx->pc = 0x321cf0u;
    // NOP
    // 0x321cf4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x321cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x321cf8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x321cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x321cfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x321cfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321d00: 0x0  nop
    ctx->pc = 0x321d00u;
    // NOP
    // 0x321d04: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x321d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x321d08: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x321d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x321d0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321d0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321d10: 0x0  nop
    ctx->pc = 0x321d10u;
    // NOP
    // 0x321d14: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x321d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x321d18: 0xc067648  jal         func_19D920
    ctx->pc = 0x321D18u;
    SET_GPR_U32(ctx, 31, 0x321D20u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x321D18u, 0x321D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D20u;
label_321d20:
    // 0x321d20: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x321d20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x321d24: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x321D24u;
    SET_GPR_U32(ctx, 31, 0x321D2Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x321D24u, 0x321D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D2Cu;
label_321d2c:
    // 0x321d2c: 0x3c053fd3  lui         $a1, 0x3FD3
    ctx->pc = 0x321d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16339 << 16));
    // 0x321d30: 0x34a43333  ori         $a0, $a1, 0x3333
    ctx->pc = 0x321d30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13107);
    // 0x321d34: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x321d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x321d38: 0x3c043333  lui         $a0, 0x3333
    ctx->pc = 0x321d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13107 << 16));
    // 0x321d3c: 0x34843333  ori         $a0, $a0, 0x3333
    ctx->pc = 0x321d3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
    // 0x321d40: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x321d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x321d44: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x321d44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321d48: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x321D48u;
    SET_GPR_U32(ctx, 31, 0x321D50u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x321D48u, 0x321D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D50u;
label_321d50:
    // 0x321d50: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x321d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x321d54: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x321d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x321d58: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x321d58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321d5c: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x321D5Cu;
    SET_GPR_U32(ctx, 31, 0x321D64u);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x321D5Cu, 0x321D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D64u;
label_321d64:
    // 0x321d64: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x321d64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321d68: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x321D68u;
    SET_GPR_U32(ctx, 31, 0x321D70u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x321D68u, 0x321D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D70u;
label_321d70:
    // 0x321d70: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x321d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x321d74: 0x0  nop
    ctx->pc = 0x321d74u;
    // NOP
label_321d78:
    // 0x321d78: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x321d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x321d7c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x321d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x321d80: 0x24429eb0  addiu       $v0, $v0, -0x6150
    ctx->pc = 0x321d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942384));
    // 0x321d84: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x321d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321d88: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x321d88u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x321d8c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x321d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x321d90: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x321d90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x321d94: 0xc06765c  jal         func_19D970
    ctx->pc = 0x321D94u;
    SET_GPR_U32(ctx, 31, 0x321D9Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x321D94u, 0x321D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D9Cu;
label_321d9c:
    // 0x321d9c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x321d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x321da0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x321da0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x321da4: 0x0  nop
    ctx->pc = 0x321da4u;
    // NOP
    // 0x321da8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x321da8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x321dac: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x321dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321db0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x321db0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x321db4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x321db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x321db8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x321DB8u;
    SET_GPR_U32(ctx, 31, 0x321DC0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x321DB8u, 0x321DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321DC0u;
label_321dc0:
    // 0x321dc0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x321dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x321dc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x321dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x321dc8: 0x0  nop
    ctx->pc = 0x321dc8u;
    // NOP
    // 0x321dcc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x321dccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x321dd0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x321dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321dd4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x321dd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x321dd8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x321dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x321ddc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x321DDCu;
    SET_GPR_U32(ctx, 31, 0x321DE4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x321DDCu, 0x321DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321DE4u;
label_321de4:
    // 0x321de4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x321de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x321de8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x321de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x321dec: 0x0  nop
    ctx->pc = 0x321decu;
    // NOP
    // 0x321df0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x321df0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x321df4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x321df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321df8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x321df8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x321dfc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x321dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x321e00: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x321e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x321e04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x321e04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321e08: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x321e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x321e0c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x321e0cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321e10: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x321E10u;
    SET_GPR_U32(ctx, 31, 0x321E18u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x321E10u, 0x321E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321E18u;
label_321e18:
    // 0x321e18: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321e1c: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x321e1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x321e20: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321e24: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321e24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321e28: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x321e28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x321e2c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321e30: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321e30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321e34: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x321e34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x321e38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x321e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x321e3c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321e40: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321e40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321e44: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x321e44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x321e48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x321e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x321e4c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321e50: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x321e50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x321e54: 0xa082011b  sb          $v0, 0x11B($a0)
    ctx->pc = 0x321e54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 283), (uint8_t)GPR_U32(ctx, 2));
    // 0x321e58: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321e5c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321e60: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x321e60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x321e64: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321e68: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x321e68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x321e6c: 0xa060013b  sb          $zero, 0x13B($v1)
    ctx->pc = 0x321e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x321e70: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321e74: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321e74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321e78: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x321e78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x321e7c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321e80: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321e80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321e84: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x321e84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x321e88: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321e8c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321e90: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x321e90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x321e94: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321e98: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x321e98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x321e9c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x321e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x321ea0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321ea4: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x321ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x321ea8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x321EA8u;
    SET_GPR_U32(ctx, 31, 0x321EB0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x321EA8u, 0x321EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321EB0u;
label_321eb0:
    // 0x321eb0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321eb4: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x321eb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x321eb8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321ebc: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x321ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x321ec0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x321ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x321ec4: 0x34570011  ori         $s7, $v0, 0x11
    ctx->pc = 0x321ec4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x321ec8: 0x14770004  bne         $v1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x321EC8u;
    {
        const bool branch_taken_0x321ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        if (branch_taken_0x321ec8) {
            ctx->pc = 0x321EDCu;
            goto label_321edc;
        }
    }
    ctx->pc = 0x321ED0u;
    // 0x321ed0: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x321ed0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321ed4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x321ED4u;
    {
        const bool branch_taken_0x321ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321ed4) {
            ctx->pc = 0x321F00u;
            goto label_321f00;
        }
    }
    ctx->pc = 0x321EDCu;
label_321edc:
    // 0x321edc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321ee0: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x321ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x321ee4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321ee8: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x321ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x321eec: 0x24420118  addiu       $v0, $v0, 0x118
    ctx->pc = 0x321eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x321ef0: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x321ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x321ef4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x321ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x321ef8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x321ef8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x321efc: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x321efcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_321f00:
    // 0x321f00: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x321f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x321f04: 0x2442a610  addiu       $v0, $v0, -0x59F0
    ctx->pc = 0x321f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x321f08: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x321f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x321f0c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x321f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x321f10: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x321f10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x321f14: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x321f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x321f18: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x321f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x321f1c: 0x12020036  beq         $s0, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x321F1Cu;
    {
        const bool branch_taken_0x321f1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x321f1c) {
            ctx->pc = 0x321FF8u;
            goto label_321ff8;
        }
    }
    ctx->pc = 0x321F24u;
    // 0x321f24: 0xc06765c  jal         func_19D970
    ctx->pc = 0x321F24u;
    SET_GPR_U32(ctx, 31, 0x321F2Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x321F24u, 0x321F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321F2Cu;
label_321f2c:
    // 0x321f2c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x321f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x321f30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x321f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x321f34: 0x0  nop
    ctx->pc = 0x321f34u;
    // NOP
    // 0x321f38: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x321f38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x321f3c: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x321f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x321f40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321f44: 0x0  nop
    ctx->pc = 0x321f44u;
    // NOP
    // 0x321f48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x321f48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x321f4c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x321f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x321f50: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x321f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x321f54: 0xa2020139  sb          $v0, 0x139($s0)
    ctx->pc = 0x321f54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 2));
    // 0x321f58: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x321f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x321f5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321f60: 0x0  nop
    ctx->pc = 0x321f60u;
    // NOP
    // 0x321f64: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x321f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x321f68: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x321f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x321f6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321f70: 0x0  nop
    ctx->pc = 0x321f70u;
    // NOP
    // 0x321f74: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x321f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x321f78: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x321f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x321f7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321f80: 0x0  nop
    ctx->pc = 0x321f80u;
    // NOP
    // 0x321f84: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x321f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x321f88: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x321f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x321f8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321f90: 0x0  nop
    ctx->pc = 0x321f90u;
    // NOP
    // 0x321f94: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x321f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x321f98: 0xc067648  jal         func_19D920
    ctx->pc = 0x321F98u;
    SET_GPR_U32(ctx, 31, 0x321FA0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x321F98u, 0x321FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321FA0u;
label_321fa0:
    // 0x321fa0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x321fa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x321fa4: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x321FA4u;
    SET_GPR_U32(ctx, 31, 0x321FACu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x321FA4u, 0x321FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321FACu;
label_321fac:
    // 0x321fac: 0x3c033fd3  lui         $v1, 0x3FD3
    ctx->pc = 0x321facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16339 << 16));
    // 0x321fb0: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x321fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x321fb4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x321fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x321fb8: 0x3c033333  lui         $v1, 0x3333
    ctx->pc = 0x321fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13107 << 16));
    // 0x321fbc: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x321fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x321fc0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x321fc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x321fc4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x321fc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321fc8: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x321FC8u;
    SET_GPR_U32(ctx, 31, 0x321FD0u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x321FC8u, 0x321FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321FD0u;
label_321fd0:
    // 0x321fd0: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x321fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x321fd4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x321fd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x321fd8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x321fd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321fdc: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x321FDCu;
    SET_GPR_U32(ctx, 31, 0x321FE4u);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x321FDCu, 0x321FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321FE4u;
label_321fe4:
    // 0x321fe4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x321fe4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321fe8: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x321FE8u;
    SET_GPR_U32(ctx, 31, 0x321FF0u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x321FE8u, 0x321FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321FF0u;
label_321ff0:
    // 0x321ff0: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x321ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x321ff4: 0x0  nop
    ctx->pc = 0x321ff4u;
    // NOP
label_321ff8:
    // 0x321ff8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x321ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x321ffc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x321ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x322000: 0x24429eb0  addiu       $v0, $v0, -0x6150
    ctx->pc = 0x322000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942384));
    // 0x322004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x322004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x322008: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x322008u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32200c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x32200cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x322010: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x322010u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x322014: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x322014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x322018: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x322018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x32201c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32201cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322020: 0x0  nop
    ctx->pc = 0x322020u;
    // NOP
    // 0x322024: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x322024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x322028: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x322028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x32202c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x32202cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x322030: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x322030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322034: 0x0  nop
    ctx->pc = 0x322034u;
    // NOP
    // 0x322038: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x322038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x32203c: 0x24041719  addiu       $a0, $zero, 0x1719
    ctx->pc = 0x32203cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5913));
    // 0x322040: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x322040u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322044: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x322044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x322048: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x322048u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32204c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x32204Cu;
    SET_GPR_U32(ctx, 31, 0x322054u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x32204Cu, 0x322054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322054u;
label_322054:
    // 0x322054: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322058: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x322058u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x32205c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32205cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x322060: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322064: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322064u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322068: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x322068u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x32206c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32206cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322070: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322070u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322074: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x322074u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x322078: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x32207c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x32207cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322080: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x322080u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x322084: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322088: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322088u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x32208c: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x32208cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x322090: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322094: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322094u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322098: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x322098u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x32209c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32209cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3220a0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3220a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3220a4: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x3220a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x3220a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3220a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3220ac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3220acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3220b0: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x3220b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x3220b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3220b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3220b8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3220b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3220bc: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x3220bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x3220c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3220c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3220c4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3220c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3220c8: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x3220c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x3220cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3220ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3220d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3220d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3220d4: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x3220d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x3220d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3220d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3220dc: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x3220dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x3220e0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3220E0u;
    SET_GPR_U32(ctx, 31, 0x3220E8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3220E0u, 0x3220E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3220E8u;
label_3220e8:
    // 0x3220e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3220e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3220ec: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x3220ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x3220f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3220f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3220f4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x3220f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x3220f8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x3220f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x3220fc: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x3220fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x322100: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x322100u;
    {
        const bool branch_taken_0x322100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x322100) {
            ctx->pc = 0x322114u;
            goto label_322114;
        }
    }
    ctx->pc = 0x322108u;
    // 0x322108: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x322108u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32210c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x32210Cu;
    {
        const bool branch_taken_0x32210c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32210c) {
            ctx->pc = 0x322138u;
            goto label_322138;
        }
    }
    ctx->pc = 0x322114u;
label_322114:
    // 0x322114: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322118: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x322118u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x32211c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32211cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322120: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x322120u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x322124: 0x24420118  addiu       $v0, $v0, 0x118
    ctx->pc = 0x322124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x322128: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x322128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x32212c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x32212cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x322130: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x322130u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322134: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x322134u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_322138:
    // 0x322138: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x322138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x32213c: 0x2442a610  addiu       $v0, $v0, -0x59F0
    ctx->pc = 0x32213cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x322140: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x322140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x322144: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x322144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x322148: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x322148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32214c: 0x0  nop
    ctx->pc = 0x32214cu;
    // NOP
label_322150:
    // 0x322150: 0x2e220013  sltiu       $v0, $s1, 0x13
    ctx->pc = 0x322150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x322154: 0x1440fe90  bnez        $v0, . + 4 + (-0x170 << 2)
    ctx->pc = 0x322154u;
    {
        const bool branch_taken_0x322154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x322154) {
            ctx->pc = 0x321B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321b98;
        }
    }
    ctx->pc = 0x32215Cu;
    // 0x32215c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x32215cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322160: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x322160u;
    {
        const bool branch_taken_0x322160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322160) {
            ctx->pc = 0x3221D0u;
            goto label_3221d0;
        }
    }
    ctx->pc = 0x322168u;
label_322168:
    // 0x322168: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x322168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32216c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32216cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x322170: 0x24429fe0  addiu       $v0, $v0, -0x6020
    ctx->pc = 0x322170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942688));
    // 0x322174: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x322174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x322178: 0x24042600  addiu       $a0, $zero, 0x2600
    ctx->pc = 0x322178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9728));
    // 0x32217c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x32217cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322180: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x322180u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322184: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x322184u;
    SET_GPR_U32(ctx, 31, 0x32218Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x322184u, 0x32218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32218Cu;
label_32218c:
    // 0x32218c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32218cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x322190: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x322190u;
    SET_GPR_U32(ctx, 31, 0x322198u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x322190u, 0x322198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322198u;
label_322198:
    // 0x322198: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x322198u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32219c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x32219cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x3221a0: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x3221a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x3221a4: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3221A4u;
    {
        const bool branch_taken_0x3221a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3221a4) {
            ctx->pc = 0x3221C8u;
            goto label_3221c8;
        }
    }
    ctx->pc = 0x3221ACu;
    // 0x3221ac: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3221acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x3221b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3221b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3221b4: 0x0  nop
    ctx->pc = 0x3221b4u;
    // NOP
    // 0x3221b8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3221b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x3221bc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3221bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3221c0: 0xa2020139  sb          $v0, 0x139($s0)
    ctx->pc = 0x3221c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 2));
    // 0x3221c4: 0x0  nop
    ctx->pc = 0x3221c4u;
    // NOP
label_3221c8:
    // 0x3221c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3221c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3221cc: 0x0  nop
    ctx->pc = 0x3221ccu;
    // NOP
label_3221d0:
    // 0x3221d0: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x3221d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3221d4: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x3221D4u;
    {
        const bool branch_taken_0x3221d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3221d4) {
            ctx->pc = 0x322168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322168;
        }
    }
    ctx->pc = 0x3221DCu;
    // 0x3221dc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x3221dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3221e0: 0x1000016f  b           . + 4 + (0x16F << 2)
    ctx->pc = 0x3221E0u;
    {
        const bool branch_taken_0x3221e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3221e0) {
            ctx->pc = 0x3227A0u;
            goto label_3227a0;
        }
    }
    ctx->pc = 0x3221E8u;
label_3221e8:
    // 0x3221e8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x3221e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x3221ec: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3221ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3221f0: 0x2442a010  addiu       $v0, $v0, -0x5FF0
    ctx->pc = 0x3221f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942736));
    // 0x3221f4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x3221f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3221f8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3221f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3221fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3221fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322200: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x322200u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322204: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x322204u;
    SET_GPR_U32(ctx, 31, 0x32220Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x322204u, 0x32220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32220Cu;
label_32220c:
    // 0x32220c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32220cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322210: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x322210u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x322214: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322218: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322218u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x32221c: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x32221cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x322220: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322224: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322224u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322228: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x322228u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x32222c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32222cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322230: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322230u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322234: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x322234u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x322238: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x322238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32223c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32223cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322240: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322240u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322244: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x322244u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x322248: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x32224c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x32224cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322250: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x322250u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x322254: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322258: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322258u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x32225c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x32225cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x322260: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322264: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322264u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322268: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x322268u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x32226c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32226cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322270: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322270u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322274: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x322274u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x322278: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x32227c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x32227cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322280: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x322280u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x322284: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322288: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322288u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x32228c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x32228cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x322290: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322294: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x322294u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x322298: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x322298u;
    SET_GPR_U32(ctx, 31, 0x3222A0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x322298u, 0x3222A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3222A0u;
label_3222a0:
    // 0x3222a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3222a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3222a4: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x3222a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x3222a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3222a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3222ac: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x3222acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x3222b0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x3222b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x3222b4: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x3222b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x3222b8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3222B8u;
    {
        const bool branch_taken_0x3222b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3222b8) {
            ctx->pc = 0x3222CCu;
            goto label_3222cc;
        }
    }
    ctx->pc = 0x3222C0u;
    // 0x3222c0: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x3222c0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3222c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3222C4u;
    {
        const bool branch_taken_0x3222c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3222c4) {
            ctx->pc = 0x3222F0u;
            goto label_3222f0;
        }
    }
    ctx->pc = 0x3222CCu;
label_3222cc:
    // 0x3222cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3222ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3222d0: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x3222d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x3222d4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3222d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3222d8: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x3222d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x3222dc: 0x24420118  addiu       $v0, $v0, 0x118
    ctx->pc = 0x3222dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x3222e0: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x3222e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x3222e4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3222e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3222e8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3222e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3222ec: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x3222ecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3222f0:
    // 0x3222f0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x3222f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x3222f4: 0x2442a610  addiu       $v0, $v0, -0x59F0
    ctx->pc = 0x3222f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x3222f8: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x3222f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x3222fc: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x3222fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x322300: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x322300u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322304: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x322304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x322308: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x322308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x32230c: 0x1202002e  beq         $s0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x32230Cu;
    {
        const bool branch_taken_0x32230c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x32230c) {
            ctx->pc = 0x3223C8u;
            goto label_3223c8;
        }
    }
    ctx->pc = 0x322314u;
    // 0x322314: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x322314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x322318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x322318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32231c: 0x0  nop
    ctx->pc = 0x32231cu;
    // NOP
    // 0x322320: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x322320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x322324: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x322324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x322328: 0xa2020139  sb          $v0, 0x139($s0)
    ctx->pc = 0x322328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 2));
    // 0x32232c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x32232cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x322330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x322330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322334: 0x0  nop
    ctx->pc = 0x322334u;
    // NOP
    // 0x322338: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x322338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x32233c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x32233cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x322340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x322340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322344: 0x0  nop
    ctx->pc = 0x322344u;
    // NOP
    // 0x322348: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x322348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x32234c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x32234cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x322350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x322350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322354: 0x0  nop
    ctx->pc = 0x322354u;
    // NOP
    // 0x322358: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x322358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x32235c: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x32235cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x322360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x322360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322364: 0x0  nop
    ctx->pc = 0x322364u;
    // NOP
    // 0x322368: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x322368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x32236c: 0xc067648  jal         func_19D920
    ctx->pc = 0x32236Cu;
    SET_GPR_U32(ctx, 31, 0x322374u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x32236Cu, 0x322374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322374u;
label_322374:
    // 0x322374: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x322374u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x322378: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x322378u;
    SET_GPR_U32(ctx, 31, 0x322380u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x322378u, 0x322380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322380u;
label_322380:
    // 0x322380: 0x3c033fd3  lui         $v1, 0x3FD3
    ctx->pc = 0x322380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16339 << 16));
    // 0x322384: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x322384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x322388: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x322388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32238c: 0x3c033333  lui         $v1, 0x3333
    ctx->pc = 0x32238cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13107 << 16));
    // 0x322390: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x322390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x322394: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x322394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x322398: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x322398u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32239c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x32239Cu;
    SET_GPR_U32(ctx, 31, 0x3223A4u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x32239Cu, 0x3223A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3223A4u;
label_3223a4:
    // 0x3223a4: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x3223a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x3223a8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3223a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3223ac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3223acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3223b0: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x3223B0u;
    SET_GPR_U32(ctx, 31, 0x3223B8u);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x3223B0u, 0x3223B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3223B8u;
label_3223b8:
    // 0x3223b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3223b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3223bc: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x3223BCu;
    SET_GPR_U32(ctx, 31, 0x3223C4u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x3223BCu, 0x3223C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3223C4u;
label_3223c4:
    // 0x3223c4: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x3223c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
label_3223c8:
    // 0x3223c8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x3223c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x3223cc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3223ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3223d0: 0x2442a010  addiu       $v0, $v0, -0x5FF0
    ctx->pc = 0x3223d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942736));
    // 0x3223d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3223d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3223d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3223d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3223dc: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x3223dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3223e0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3223e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3223e4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3223E4u;
    SET_GPR_U32(ctx, 31, 0x3223ECu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3223E4u, 0x3223ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3223ECu;
label_3223ec:
    // 0x3223ec: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x3223ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x3223f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3223f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3223f4: 0x0  nop
    ctx->pc = 0x3223f4u;
    // NOP
    // 0x3223f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3223f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3223fc: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x3223fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x322400: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x322400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x322404: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x322404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x322408: 0xc06765c  jal         func_19D970
    ctx->pc = 0x322408u;
    SET_GPR_U32(ctx, 31, 0x322410u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x322408u, 0x322410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322410u;
label_322410:
    // 0x322410: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x322410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x322414: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x322414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x322418: 0x0  nop
    ctx->pc = 0x322418u;
    // NOP
    // 0x32241c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32241cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x322420: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x322420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x322424: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x322424u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x322428: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x322428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x32242c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x32242Cu;
    SET_GPR_U32(ctx, 31, 0x322434u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x32242Cu, 0x322434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322434u;
label_322434:
    // 0x322434: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x322434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x322438: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x322438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32243c: 0x0  nop
    ctx->pc = 0x32243cu;
    // NOP
    // 0x322440: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x322440u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x322444: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x322444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x322448: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x322448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x32244c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x32244cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x322450: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x322450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x322454: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x322454u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322458: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x322458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x32245c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x32245cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322460: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x322460u;
    SET_GPR_U32(ctx, 31, 0x322468u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x322460u, 0x322468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322468u;
label_322468:
    // 0x322468: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x32246c: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x32246cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x322470: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322474: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322474u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322478: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x322478u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x32247c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32247cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322480: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322480u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322484: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x322484u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x322488: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x322488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32248c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32248cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322490: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322490u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322494: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x322494u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x322498: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x322498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32249c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32249cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3224a0: 0x8c26a618  lw          $a2, -0x59E8($at)
    ctx->pc = 0x3224a0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x53A618u));
    // 0x3224a4: 0xa0c2011b  sb          $v0, 0x11B($a2)
    ctx->pc = 0x3224a4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 283), (uint8_t)GPR_U32(ctx, 2));
    // 0x3224a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3224a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3224ac: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x3224acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x3224b0: 0xa080011c  sb          $zero, 0x11C($a0)
    ctx->pc = 0x3224b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x3224b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3224b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3224b8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3224b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3224bc: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x3224bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x3224c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3224c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3224c4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3224c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3224c8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x3224c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x3224cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3224ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3224d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3224d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3224d4: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x3224d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x3224d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3224d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3224dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3224dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3224e0: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x3224e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x3224e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3224e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3224e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3224e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3224ec: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x3224ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x3224f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3224f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3224f4: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x3224f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x3224f8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3224F8u;
    SET_GPR_U32(ctx, 31, 0x322500u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3224F8u, 0x322500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322500u;
label_322500:
    // 0x322500: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322504: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x322504u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x322508: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x32250c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x32250cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x322510: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x322510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x322514: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x322514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x322518: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x322518u;
    {
        const bool branch_taken_0x322518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x322518) {
            ctx->pc = 0x32252Cu;
            goto label_32252c;
        }
    }
    ctx->pc = 0x322520u;
    // 0x322520: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x322520u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322524: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x322524u;
    {
        const bool branch_taken_0x322524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322524) {
            ctx->pc = 0x322550u;
            goto label_322550;
        }
    }
    ctx->pc = 0x32252Cu;
label_32252c:
    // 0x32252c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32252cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322530: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x322530u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x322534: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322538: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x322538u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x32253c: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x32253cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x322540: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x322540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x322544: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x322544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x322548: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x322548u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32254c: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x32254cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_322550:
    // 0x322550: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x322550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x322554: 0x2442a610  addiu       $v0, $v0, -0x59F0
    ctx->pc = 0x322554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x322558: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x322558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x32255c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x32255cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x322560: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x322560u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322564: 0x73c08628  paddub      $s0, $fp, $zero
    ctx->pc = 0x322564u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x322568: 0x3c120800  lui         $s2, 0x800
    ctx->pc = 0x322568u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)2048 << 16));
    // 0x32256c: 0x36420011  ori         $v0, $s2, 0x11
    ctx->pc = 0x32256cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)17);
    // 0x322570: 0x12020035  beq         $s0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x322570u;
    {
        const bool branch_taken_0x322570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x322570) {
            ctx->pc = 0x322648u;
            goto label_322648;
        }
    }
    ctx->pc = 0x322578u;
    // 0x322578: 0xc06765c  jal         func_19D970
    ctx->pc = 0x322578u;
    SET_GPR_U32(ctx, 31, 0x322580u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x322578u, 0x322580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322580u;
label_322580:
    // 0x322580: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x322580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x322584: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x322584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x322588: 0x0  nop
    ctx->pc = 0x322588u;
    // NOP
    // 0x32258c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32258cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x322590: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x322590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x322594: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x322594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322598: 0x0  nop
    ctx->pc = 0x322598u;
    // NOP
    // 0x32259c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32259cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3225a0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3225a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x3225a4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3225a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3225a8: 0xa2020139  sb          $v0, 0x139($s0)
    ctx->pc = 0x3225a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 2));
    // 0x3225ac: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x3225acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x3225b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3225b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3225b4: 0x0  nop
    ctx->pc = 0x3225b4u;
    // NOP
    // 0x3225b8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3225b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x3225bc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x3225bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x3225c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3225c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3225c4: 0x0  nop
    ctx->pc = 0x3225c4u;
    // NOP
    // 0x3225c8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x3225c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x3225cc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x3225ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x3225d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3225d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3225d4: 0x0  nop
    ctx->pc = 0x3225d4u;
    // NOP
    // 0x3225d8: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x3225d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x3225dc: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x3225dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x3225e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3225e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3225e4: 0x0  nop
    ctx->pc = 0x3225e4u;
    // NOP
    // 0x3225e8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x3225e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x3225ec: 0xc067648  jal         func_19D920
    ctx->pc = 0x3225ECu;
    SET_GPR_U32(ctx, 31, 0x3225F4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3225ECu, 0x3225F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3225F4u;
label_3225f4:
    // 0x3225f4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3225f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3225f8: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x3225F8u;
    SET_GPR_U32(ctx, 31, 0x322600u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x3225F8u, 0x322600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322600u;
label_322600:
    // 0x322600: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x322600u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x322604: 0x3c023fd3  lui         $v0, 0x3FD3
    ctx->pc = 0x322604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16339 << 16));
    // 0x322608: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x322608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x32260c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32260cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x322610: 0x3c023333  lui         $v0, 0x3333
    ctx->pc = 0x322610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13107 << 16));
    // 0x322614: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x322614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x322618: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x322618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32261c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x32261Cu;
    SET_GPR_U32(ctx, 31, 0x322624u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x32261Cu, 0x322624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322624u;
label_322624:
    // 0x322624: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x322624u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x322628: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x322628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x32262c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x32262cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x322630: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x322630u;
    SET_GPR_U32(ctx, 31, 0x322638u);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x322630u, 0x322638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322638u;
label_322638:
    // 0x322638: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x322638u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32263c: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x32263Cu;
    SET_GPR_U32(ctx, 31, 0x322644u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x32263Cu, 0x322644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322644u;
label_322644:
    // 0x322644: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x322644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
label_322648:
    // 0x322648: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x322648u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32264c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32264cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x322650: 0x2443a010  addiu       $v1, $v0, -0x5FF0
    ctx->pc = 0x322650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942736));
    // 0x322654: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x322654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x322658: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x322658u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32265c: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x32265cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x322660: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x322660u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x322664: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x322664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x322668: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x322668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x32266c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32266cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322670: 0x0  nop
    ctx->pc = 0x322670u;
    // NOP
    // 0x322674: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x322674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x322678: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x322678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x32267c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x32267cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x322680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x322680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322684: 0x0  nop
    ctx->pc = 0x322684u;
    // NOP
    // 0x322688: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x322688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x32268c: 0x24041719  addiu       $a0, $zero, 0x1719
    ctx->pc = 0x32268cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5913));
    // 0x322690: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x322690u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322694: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x322694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x322698: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x322698u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32269c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x32269Cu;
    SET_GPR_U32(ctx, 31, 0x3226A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x32269Cu, 0x3226A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3226A4u;
label_3226a4:
    // 0x3226a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3226a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3226a8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x3226a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x3226ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3226acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3226b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3226b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3226b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3226b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3226b8: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x3226b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x3226bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3226bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3226c0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3226c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3226c4: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x3226c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x3226c8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3226c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3226cc: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x3226ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x3226d0: 0xa080011a  sb          $zero, 0x11A($a0)
    ctx->pc = 0x3226d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x3226d4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3226d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3226d8: 0x8c26a618  lw          $a2, -0x59E8($at)
    ctx->pc = 0x3226d8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x53A618u));
    // 0x3226dc: 0xa0c0011b  sb          $zero, 0x11B($a2)
    ctx->pc = 0x3226dcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x3226e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3226e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3226e4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3226e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3226e8: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x3226e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x3226ec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3226ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3226f0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3226f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3226f4: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x3226f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x3226f8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3226f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3226fc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3226fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322700: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x322700u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x322704: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322708: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x322708u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x32270c: 0xa060013d  sb          $zero, 0x13D($v1)
    ctx->pc = 0x32270cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x322710: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322714: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322714u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322718: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x322718u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x32271c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32271cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322720: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x322720u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x322724: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x322724u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x322728: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x32272c: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x32272cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x322730: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x322730u;
    SET_GPR_U32(ctx, 31, 0x322738u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x322730u, 0x322738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322738u;
label_322738:
    // 0x322738: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x32273c: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x32273cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x322740: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322744: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x322744u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x322748: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x322748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x32274c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x32274cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x322750: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x322750u;
    {
        const bool branch_taken_0x322750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x322750) {
            ctx->pc = 0x322764u;
            goto label_322764;
        }
    }
    ctx->pc = 0x322758u;
    // 0x322758: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x322758u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32275c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x32275Cu;
    {
        const bool branch_taken_0x32275c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32275c) {
            ctx->pc = 0x322788u;
            goto label_322788;
        }
    }
    ctx->pc = 0x322764u;
label_322764:
    // 0x322764: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x322764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322768: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x322768u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x32276c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x32276cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x322770: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x322770u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x322774: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x322774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x322778: 0xafa400d8  sw          $a0, 0xD8($sp)
    ctx->pc = 0x322778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 4));
    // 0x32277c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x32277cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x322780: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x322780u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322784: 0x3077ffff  andi        $s7, $v1, 0xFFFF
    ctx->pc = 0x322784u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_322788:
    // 0x322788: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x322788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x32278c: 0x2442a610  addiu       $v0, $v0, -0x59F0
    ctx->pc = 0x32278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x322790: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x322790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x322794: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x322794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x322798: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x322798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32279c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x32279cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3227a0:
    // 0x3227a0: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x3227a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3227a4: 0x1440fe90  bnez        $v0, . + 4 + (-0x170 << 2)
    ctx->pc = 0x3227A4u;
    {
        const bool branch_taken_0x3227a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3227a4) {
            ctx->pc = 0x3221E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3221e8;
        }
    }
    ctx->pc = 0x3227ACu;
    // 0x3227ac: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3227acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3227b0: 0x24539ea0  addiu       $s3, $v0, -0x6160
    ctx->pc = 0x3227b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942368));
    // 0x3227b4: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x3227b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x3227b8: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x3227B8u;
    SET_GPR_U32(ctx, 31, 0x3227C0u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x3227B8u, 0x3227C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3227C0u;
label_3227c0:
    // 0x3227c0: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x3227c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3227c4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3227c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3227c8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3227c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3227cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3227ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3227d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3227d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3227d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3227d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3227d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3227d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3227dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3227dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3227e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3227e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3227e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3227e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3227e8: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x3227e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3227ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3227ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3227ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3227F4u;
}
