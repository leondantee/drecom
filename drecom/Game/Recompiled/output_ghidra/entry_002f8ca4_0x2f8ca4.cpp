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

// Function: entry_002f8ca4
// Address: 0x2f8ca4 - 0x2f8d98
void entry_002f8ca4_0x2f8ca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f8ca4_0x2f8ca4");
#endif

    switch (ctx->pc) {
        case 0x2f8cd4u: goto label_2f8cd4;
        case 0x2f8d6cu: goto label_2f8d6c;
        default: break;
    }

    ctx->pc = 0x2f8ca4u;

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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x2F8D98u;
}
