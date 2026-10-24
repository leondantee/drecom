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

// Function: entry_00356ba4
// Address: 0x356ba4 - 0x356c84
void entry_00356ba4_0x356ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00356ba4_0x356ba4");
#endif

    switch (ctx->pc) {
        case 0x356bbcu: goto label_356bbc;
        case 0x356c58u: goto label_356c58;
        default: break;
    }

    ctx->pc = 0x356ba4u;

    // 0x356ba4: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x356ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x356ba8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x356ba8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356bac: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x356bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x356bb0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x356bb0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356bb4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x356BB4u;
    SET_GPR_U32(ctx, 31, 0x356BBCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x356BB4u, 0x356BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356BBCu;
label_356bbc:
    // 0x356bbc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356bc0: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x356bc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x356bc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x356bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x356bc8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356bcc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356bccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356bd0: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x356bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x356bd4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356bd8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356bdc: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x356bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x356be0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356be4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356be4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356be8: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x356be8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x356bec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356bf0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356bf4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356bf8: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x356bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x356bfc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356c00: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356c00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356c04: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x356c04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x356c08: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356c0c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356c10: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x356c10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x356c14: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356c18: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356c18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356c1c: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x356c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x356c20: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356c24: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356c24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356c28: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x356c28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x356c2c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356c30: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x356c30u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x356c34: 0xa080013e  sb          $zero, 0x13E($a0)
    ctx->pc = 0x356c34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x356c38: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356c3c: 0x8c26a618  lw          $a2, -0x59E8($at)
    ctx->pc = 0x356c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x53A618u));
    // 0x356c40: 0xa0c0013f  sb          $zero, 0x13F($a2)
    ctx->pc = 0x356c40u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x356c44: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356c48: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356c48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356c4c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x356c4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x356c50: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x356C50u;
    SET_GPR_U32(ctx, 31, 0x356C58u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x356C50u, 0x356C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356C58u;
label_356c58:
    // 0x356c58: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356c5c: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x356c5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x356c60: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356c64: 0x8c25a610  lw          $a1, -0x59F0($at)
    ctx->pc = 0x356c64u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x53A610u));
    // 0x356c68: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x356c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x356c6c: 0x34830011  ori         $v1, $a0, 0x11
    ctx->pc = 0x356c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    // 0x356c70: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x356C70u;
    {
        const bool branch_taken_0x356c70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x356c70) {
            ctx->pc = 0x356C84u;
            return;
        }
    }
    ctx->pc = 0x356C78u;
    // 0x356c78: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x356c78u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356c7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x356C7Cu;
    {
        const bool branch_taken_0x356c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356c7c) {
            ctx->pc = 0x356CA8u;
            return;
        }
    }
    ctx->pc = 0x356C84u;
}
