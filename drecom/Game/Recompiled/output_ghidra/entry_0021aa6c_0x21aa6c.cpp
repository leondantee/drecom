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

// Function: entry_0021aa6c
// Address: 0x21aa6c - 0x21ab48
void entry_0021aa6c_0x21aa6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021aa6c_0x21aa6c");
#endif

    switch (ctx->pc) {
        case 0x21aa84u: goto label_21aa84;
        case 0x21ab1cu: goto label_21ab1c;
        default: break;
    }

    ctx->pc = 0x21aa6cu;

    // 0x21aa6c: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x21aa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x21aa70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21aa70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21aa74: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x21aa74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21aa78: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21aa78u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21aa7c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21AA7Cu;
    SET_GPR_U32(ctx, 31, 0x21AA84u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21AA7Cu, 0x21AA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AA84u;
label_21aa84:
    // 0x21aa84: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aa84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aa88: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21aa88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21aa8c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aa8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aa90: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21aa94: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x21aa94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x21aa98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21aa9c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aa9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aaa0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21aaa4: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x21aaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x21aaa8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aaa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aaac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21aab0: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21aab0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21aab4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21aab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21aab8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aabc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21aac0: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x21aac0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x21aac4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aac8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21aacc: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21aaccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21aad0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aad4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21aad8: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21aad8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21aadc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aae0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21aae4: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21aae4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21aae8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aaec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21aaf0: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21aaf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21aaf4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aaf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aaf8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21aafc: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21aafcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21ab00: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21ab00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21ab04: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21ab08: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21ab08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21ab0c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21ab0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21ab10: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21ab10u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21ab14: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21AB14u;
    SET_GPR_U32(ctx, 31, 0x21AB1Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21AB14u, 0x21AB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AB1Cu;
label_21ab1c:
    // 0x21ab1c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21ab1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21ab20: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21ab20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21ab24: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21ab24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21ab28: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x21ab28u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x21ab2c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21ab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21ab30: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21ab30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21ab34: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AB34u;
    {
        const bool branch_taken_0x21ab34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21ab34) {
            ctx->pc = 0x21AB48u;
            return;
        }
    }
    ctx->pc = 0x21AB3Cu;
    // 0x21ab3c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x21ab3cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21ab40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21AB40u;
    {
        const bool branch_taken_0x21ab40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ab40) {
            ctx->pc = 0x21AB64u;
            return;
        }
    }
    ctx->pc = 0x21AB48u;
}
