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

// Function: ectrl0d_move10
// Address: 0x2f8c40 - 0x2f925c
void ectrl0d_move10_0x2f8c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl0d_move10_0x2f8c40");
#endif

    switch (ctx->pc) {
        case 0x2f8c98u: goto label_2f8c98;
        case 0x2f8ca4u: goto label_2f8ca4;
        case 0x2f8cd4u: goto label_2f8cd4;
        case 0x2f8d6cu: goto label_2f8d6c;
        case 0x2f8e5cu: goto label_2f8e5c;
        case 0x2f8e88u: goto label_2f8e88;
        case 0x2f8f00u: goto label_2f8f00;
        case 0x2f8f68u: goto label_2f8f68;
        case 0x2f8f74u: goto label_2f8f74;
        case 0x2f8fa4u: goto label_2f8fa4;
        case 0x2f903cu: goto label_2f903c;
        case 0x2f912cu: goto label_2f912c;
        case 0x2f9158u: goto label_2f9158;
        case 0x2f91d0u: goto label_2f91d0;
        default: break;
    }

    ctx->pc = 0x2f8c40u;

    // 0x2f8c40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f8c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f8c44: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x2f8c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x2f8c48: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2f8c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2f8c4c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f8c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2f8c50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f8c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f8c54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f8c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f8c58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f8c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f8c5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f8c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f8c60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f8c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f8c64: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x2f8c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x2f8c68: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f8c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f8c6c: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2f8c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f8c70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f8c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8c74: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2F8C74u;
    {
        const bool branch_taken_0x2f8c74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f8c74) {
            ctx->pc = 0x2F8CA4u;
            goto label_2f8ca4;
        }
    }
    ctx->pc = 0x2F8C7Cu;
    // 0x2f8c7c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2f8c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f8c80: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x2f8c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x2f8c84: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f8c84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f8c88: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x2f8c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2f8c8c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2f8c8cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f8c90: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F8C90u;
    SET_GPR_U32(ctx, 31, 0x2F8C98u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F8C90u, 0x2F8C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8C98u;
label_2f8c98:
    // 0x2f8c98: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f8c98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f8c9c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F8C9Cu;
    SET_GPR_U32(ctx, 31, 0x2F8CA4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F8C9Cu, 0x2F8CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8CA4u;
label_2f8ca4:
    // 0x2f8ca4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f8ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f8ca8: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2f8ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f8cac: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2f8cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f8cb0: 0x148300a1  bne         $a0, $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2F8CB0u;
    {
        const bool branch_taken_0x2f8cb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f8cb0) {
            ctx->pc = 0x2F8F38u;
            goto label_2f8f38;
        }
    }
    ctx->pc = 0x2F8CB8u;
    // 0x2f8cb8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2f8cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f8cbc: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2f8cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2f8cc0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f8cc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f8cc4: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x2f8cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2f8cc8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2f8cc8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f8ccc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F8CCCu;
    SET_GPR_U32(ctx, 31, 0x2F8CD4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F8CCCu, 0x2F8CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8CD4u;
label_2f8cd4:
    // 0x2f8cd4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8cd8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8cd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2f8cdc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8ce0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f8ce4: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2f8ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8ce8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f8ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f8cec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8cf0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f8cf4: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2f8cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f8cf8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8cfc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f8d00: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2f8d00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8d04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f8d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8d08: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8d0c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f8d10: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2f8d10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f8d14: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8d18: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8d18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f8d1c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2f8d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8d20: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8d24: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8d24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f8d28: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2f8d28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8d2c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8d30: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f8d34: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2f8d34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8d38: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8d3c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f8d40: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2f8d40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8d44: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8d48: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8d48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f8d4c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2f8d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8d50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8d54: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8d54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f8d58: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2f8d58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8d5c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8d60: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2f8d60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f8d64: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F8D64u;
    SET_GPR_U32(ctx, 31, 0x2F8D6Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F8D64u, 0x2F8D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8D6Cu;
label_2f8d6c:
    // 0x2f8d6c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8d70: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2f8d70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2f8d74: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8d78: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2f8d78u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f8d7c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f8d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f8d80: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f8d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f8d84: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8D84u;
    {
        const bool branch_taken_0x2f8d84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f8d84) {
            ctx->pc = 0x2F8D98u;
            goto label_2f8d98;
        }
    }
    ctx->pc = 0x2F8D8Cu;
    // 0x2f8d8c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2f8d8cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f8d90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F8D90u;
    {
        const bool branch_taken_0x2f8d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8d90) {
            ctx->pc = 0x2F8DB4u;
            goto label_2f8db4;
        }
    }
    ctx->pc = 0x2F8D98u;
label_2f8d98:
    // 0x2f8d98: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8d9c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2f8d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f8da0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8da4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2f8da4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f8da8: 0x24730118  addiu       $s3, $v1, 0x118
    ctx->pc = 0x2f8da8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2f8dac: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x2f8dacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f8db0: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x2f8db0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2f8db4:
    // 0x2f8db4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2f8db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2f8db8: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x2f8db8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2f8dbc: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x2f8dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f8dc0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f8dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f8dc4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f8dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f8dc8: 0x1203005b  beq         $s0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x2F8DC8u;
    {
        const bool branch_taken_0x2f8dc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f8dc8) {
            ctx->pc = 0x2F8F38u;
            goto label_2f8f38;
        }
    }
    ctx->pc = 0x2F8DD0u;
    // 0x2f8dd0: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2f8dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2f8dd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8dd8: 0x0  nop
    ctx->pc = 0x2f8dd8u;
    // NOP
    // 0x2f8ddc: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2f8ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2f8de0: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2f8de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2f8de4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8de8: 0x0  nop
    ctx->pc = 0x2f8de8u;
    // NOP
    // 0x2f8dec: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2f8decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2f8df0: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2f8df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2f8df4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8df8: 0x0  nop
    ctx->pc = 0x2f8df8u;
    // NOP
    // 0x2f8dfc: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2f8dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2f8e00: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f8e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f8e04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8e08: 0x0  nop
    ctx->pc = 0x2f8e08u;
    // NOP
    // 0x2f8e0c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f8e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2f8e10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f8e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f8e14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8e18: 0x0  nop
    ctx->pc = 0x2f8e18u;
    // NOP
    // 0x2f8e1c: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2f8e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2f8e20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f8e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f8e24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8e28: 0x0  nop
    ctx->pc = 0x2f8e28u;
    // NOP
    // 0x2f8e2c: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2f8e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2f8e30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f8e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f8e34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8e38: 0x0  nop
    ctx->pc = 0x2f8e38u;
    // NOP
    // 0x2f8e3c: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x2f8e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x2f8e40: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2f8e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2f8e44: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2f8e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2f8e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8e4c: 0x0  nop
    ctx->pc = 0x2f8e4cu;
    // NOP
    // 0x2f8e50: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2f8e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2f8e54: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F8E54u;
    SET_GPR_U32(ctx, 31, 0x2F8E5Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F8E54u, 0x2F8E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8E5Cu;
label_2f8e5c:
    // 0x2f8e5c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f8e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f8e60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f8e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f8e64: 0x0  nop
    ctx->pc = 0x2f8e64u;
    // NOP
    // 0x2f8e68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f8e68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f8e6c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2f8e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2f8e70: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2f8e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2f8e74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8e78: 0x0  nop
    ctx->pc = 0x2f8e78u;
    // NOP
    // 0x2f8e7c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2f8e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2f8e80: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F8E80u;
    SET_GPR_U32(ctx, 31, 0x2F8E88u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F8E80u, 0x2F8E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8E88u;
label_2f8e88:
    // 0x2f8e88: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f8e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f8e8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f8e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f8e90: 0x0  nop
    ctx->pc = 0x2f8e90u;
    // NOP
    // 0x2f8e94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f8e94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f8e98: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2f8e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2f8e9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f8ea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8ea4: 0x0  nop
    ctx->pc = 0x2f8ea4u;
    // NOP
    // 0x2f8ea8: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x2f8ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x2f8eac: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2f8eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2f8eb0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2f8eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2f8eb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8eb8: 0x0  nop
    ctx->pc = 0x2f8eb8u;
    // NOP
    // 0x2f8ebc: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2f8ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2f8ec0: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2f8ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2f8ec4: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2f8ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2f8ec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8ecc: 0x0  nop
    ctx->pc = 0x2f8eccu;
    // NOP
    // 0x2f8ed0: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2f8ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2f8ed4: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2f8ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2f8ed8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2f8ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2f8edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8ee0: 0x0  nop
    ctx->pc = 0x2f8ee0u;
    // NOP
    // 0x2f8ee4: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2f8ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2f8ee8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f8ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f8eec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8ef0: 0x0  nop
    ctx->pc = 0x2f8ef0u;
    // NOP
    // 0x2f8ef4: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x2f8ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x2f8ef8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F8EF8u;
    SET_GPR_U32(ctx, 31, 0x2F8F00u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F8EF8u, 0x2F8F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8F00u;
label_2f8f00:
    // 0x2f8f00: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2f8f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2f8f04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f8f04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f8f08: 0x0  nop
    ctx->pc = 0x2f8f08u;
    // NOP
    // 0x2f8f0c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f8f0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f8f10: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2f8f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2f8f14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f8f14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8f18: 0x0  nop
    ctx->pc = 0x2f8f18u;
    // NOP
    // 0x2f8f1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8f1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f8f20: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2f8f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2f8f24: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2f8f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2f8f28: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2f8f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2f8f2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f8f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8f30: 0x0  nop
    ctx->pc = 0x2f8f30u;
    // NOP
    // 0x2f8f34: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2f8f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
label_2f8f38:
    // 0x2f8f38: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f8f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f8f3c: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2f8f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f8f40: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2f8f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f8f44: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2F8F44u;
    {
        const bool branch_taken_0x2f8f44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f8f44) {
            ctx->pc = 0x2F8F74u;
            goto label_2f8f74;
        }
    }
    ctx->pc = 0x2F8F4Cu;
    // 0x2f8f4c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2f8f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f8f50: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x2f8f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x2f8f54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f8f54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f8f58: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x2f8f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2f8f5c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2f8f5cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f8f60: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F8F60u;
    SET_GPR_U32(ctx, 31, 0x2F8F68u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F8F60u, 0x2F8F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8F68u;
label_2f8f68:
    // 0x2f8f68: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f8f68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f8f6c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F8F6Cu;
    SET_GPR_U32(ctx, 31, 0x2F8F74u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F8F6Cu, 0x2F8F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8F74u;
label_2f8f74:
    // 0x2f8f74: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f8f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f8f78: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2f8f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f8f7c: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x2f8f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2f8f80: 0x148300a1  bne         $a0, $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2F8F80u;
    {
        const bool branch_taken_0x2f8f80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f8f80) {
            ctx->pc = 0x2F9208u;
            goto label_2f9208;
        }
    }
    ctx->pc = 0x2F8F88u;
    // 0x2f8f88: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2f8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f8f8c: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2f8f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2f8f90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f8f90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f8f94: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x2f8f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2f8f98: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2f8f98u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f8f9c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F8F9Cu;
    SET_GPR_U32(ctx, 31, 0x2F8FA4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F8F9Cu, 0x2F8FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8FA4u;
label_2f8fa4:
    // 0x2f8fa4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8fa8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8fa8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2f8fac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8fb0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f8fb4: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2f8fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8fb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f8fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f8fbc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8fc0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f8fc4: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2f8fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f8fc8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8fcc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8fccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f8fd0: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2f8fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8fd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8fd8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8fdc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f8fe0: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2f8fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f8fe4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8fe8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f8fec: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2f8fecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8ff0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8ff4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f8ff8: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2f8ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8ffc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f9000: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f9000u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f9004: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2f9004u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f9008: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f9008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f900c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f900cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f9010: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2f9010u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f9014: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f9014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f9018: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f9018u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f901c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2f901cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f9020: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f9020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f9024: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f9024u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f9028: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2f9028u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f902c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f902cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f9030: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2f9030u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f9034: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F9034u;
    SET_GPR_U32(ctx, 31, 0x2F903Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F9034u, 0x2F903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F903Cu;
label_2f903c:
    // 0x2f903c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f903cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f9040: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2f9040u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2f9044: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f9044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f9048: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2f9048u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f904c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f904cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f9050: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f9050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f9054: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9054u;
    {
        const bool branch_taken_0x2f9054 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f9054) {
            ctx->pc = 0x2F9068u;
            goto label_2f9068;
        }
    }
    ctx->pc = 0x2F905Cu;
    // 0x2f905c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2f905cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f9060: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F9060u;
    {
        const bool branch_taken_0x2f9060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9060) {
            ctx->pc = 0x2F9084u;
            goto label_2f9084;
        }
    }
    ctx->pc = 0x2F9068u;
label_2f9068:
    // 0x2f9068: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f9068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f906c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2f906cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f9070: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f9070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f9074: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2f9074u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f9078: 0x24750118  addiu       $s5, $v1, 0x118
    ctx->pc = 0x2f9078u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2f907c: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x2f907cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f9080: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x2f9080u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2f9084:
    // 0x2f9084: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2f9084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2f9088: 0x2476a610  addiu       $s6, $v1, -0x59F0
    ctx->pc = 0x2f9088u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2f908c: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x2f908cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f9090: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f9090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f9094: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f9094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f9098: 0x1203005b  beq         $s0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x2F9098u;
    {
        const bool branch_taken_0x2f9098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f9098) {
            ctx->pc = 0x2F9208u;
            goto label_2f9208;
        }
    }
    ctx->pc = 0x2F90A0u;
    // 0x2f90a0: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2f90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2f90a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f90a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f90a8: 0x0  nop
    ctx->pc = 0x2f90a8u;
    // NOP
    // 0x2f90ac: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2f90acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2f90b0: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2f90b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2f90b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f90b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f90b8: 0x0  nop
    ctx->pc = 0x2f90b8u;
    // NOP
    // 0x2f90bc: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2f90bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2f90c0: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2f90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2f90c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f90c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f90c8: 0x0  nop
    ctx->pc = 0x2f90c8u;
    // NOP
    // 0x2f90cc: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2f90ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2f90d0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f90d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f90d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f90d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f90d8: 0x0  nop
    ctx->pc = 0x2f90d8u;
    // NOP
    // 0x2f90dc: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f90dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2f90e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f90e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f90e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f90e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f90e8: 0x0  nop
    ctx->pc = 0x2f90e8u;
    // NOP
    // 0x2f90ec: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2f90ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2f90f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f90f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f90f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f90f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f90f8: 0x0  nop
    ctx->pc = 0x2f90f8u;
    // NOP
    // 0x2f90fc: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2f90fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2f9100: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f9100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f9104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f9104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9108: 0x0  nop
    ctx->pc = 0x2f9108u;
    // NOP
    // 0x2f910c: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x2f910cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x2f9110: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2f9110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2f9114: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2f9114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2f9118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f9118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f911c: 0x0  nop
    ctx->pc = 0x2f911cu;
    // NOP
    // 0x2f9120: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2f9120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2f9124: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F9124u;
    SET_GPR_U32(ctx, 31, 0x2F912Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F9124u, 0x2F912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F912Cu;
label_2f912c:
    // 0x2f912c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f912cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f9130: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f9130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f9134: 0x0  nop
    ctx->pc = 0x2f9134u;
    // NOP
    // 0x2f9138: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f9138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f913c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2f913cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2f9140: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2f9140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2f9144: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f9144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9148: 0x0  nop
    ctx->pc = 0x2f9148u;
    // NOP
    // 0x2f914c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2f914cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2f9150: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F9150u;
    SET_GPR_U32(ctx, 31, 0x2F9158u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F9150u, 0x2F9158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9158u;
label_2f9158:
    // 0x2f9158: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f9158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f915c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f915cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f9160: 0x0  nop
    ctx->pc = 0x2f9160u;
    // NOP
    // 0x2f9164: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f9164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f9168: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2f9168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2f916c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f916cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f9170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f9170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9174: 0x0  nop
    ctx->pc = 0x2f9174u;
    // NOP
    // 0x2f9178: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x2f9178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x2f917c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2f917cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2f9180: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2f9180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2f9184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f9184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9188: 0x0  nop
    ctx->pc = 0x2f9188u;
    // NOP
    // 0x2f918c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2f918cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2f9190: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2f9190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2f9194: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2f9194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2f9198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f9198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f919c: 0x0  nop
    ctx->pc = 0x2f919cu;
    // NOP
    // 0x2f91a0: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2f91a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2f91a4: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2f91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2f91a8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2f91a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2f91ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f91acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f91b0: 0x0  nop
    ctx->pc = 0x2f91b0u;
    // NOP
    // 0x2f91b4: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2f91b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2f91b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f91b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f91bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f91bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f91c0: 0x0  nop
    ctx->pc = 0x2f91c0u;
    // NOP
    // 0x2f91c4: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x2f91c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x2f91c8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F91C8u;
    SET_GPR_U32(ctx, 31, 0x2F91D0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F91C8u, 0x2F91D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F91D0u;
label_2f91d0:
    // 0x2f91d0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2f91d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2f91d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f91d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f91d8: 0x0  nop
    ctx->pc = 0x2f91d8u;
    // NOP
    // 0x2f91dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f91dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f91e0: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2f91e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2f91e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f91e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f91e8: 0x0  nop
    ctx->pc = 0x2f91e8u;
    // NOP
    // 0x2f91ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f91ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f91f0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2f91f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2f91f4: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2f91f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2f91f8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2f91f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2f91fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f91fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9200: 0x0  nop
    ctx->pc = 0x2f9200u;
    // NOP
    // 0x2f9204: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2f9204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
label_2f9208:
    // 0x2f9208: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f9208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f920c: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2f920cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f9210: 0x28630032  slti        $v1, $v1, 0x32
    ctx->pc = 0x2f9210u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2f9214: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9214u;
    {
        const bool branch_taken_0x2f9214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9214) {
            ctx->pc = 0x2F9230u;
            goto label_2f9230;
        }
    }
    ctx->pc = 0x2F921Cu;
    // 0x2f921c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f921cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f9220: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f9220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f9224: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2f9224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2f9228: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f9228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f922c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2f922cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2f9230:
    // 0x2f9230: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x2f9230u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f9234: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2f9234u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f9238: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f9238u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f923c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f923cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f9240: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f9240u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f9244: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f9244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f9248: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f9248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f924c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f924cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9250: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2f9250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f9254: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F925Cu;
}
