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

// Function: entry_002a0798
// Address: 0x2a0798 - 0x2a0820
void entry_002a0798_0x2a0798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a0798_0x2a0798");
#endif

    switch (ctx->pc) {
        case 0x2a07a0u: goto label_2a07a0;
        case 0x2a07c4u: goto label_2a07c4;
        default: break;
    }

    ctx->pc = 0x2a0798u;

    // 0x2a0798: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A0798u;
    SET_GPR_U32(ctx, 31, 0x2A07A0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A0798u, 0x2A07A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A07A0u;
label_2a07a0:
    // 0x2a07a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a07a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a07a4: 0x3044003f  andi        $a0, $v0, 0x3F
    ctx->pc = 0x2a07a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2a07a8: 0x2485003c  addiu       $a1, $a0, 0x3C
    ctx->pc = 0x2a07a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
    // 0x2a07ac: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x2a07acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2a07b0: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x2a07b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a07b4: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x2a07b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x2a07b8: 0xa5060046  sh          $a2, 0x46($t0)
    ctx->pc = 0x2a07b8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 70), (uint16_t)GPR_U32(ctx, 6));
    // 0x2a07bc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A07BCu;
    SET_GPR_U32(ctx, 31, 0x2A07C4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A07BCu, 0x2A07C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A07C4u;
label_2a07c4:
    // 0x2a07c4: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2a07c4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a07c8: 0x312a00ff  andi        $t2, $t1, 0xFF
    ctx->pc = 0x2a07c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2a07cc: 0x31420003  andi        $v0, $t2, 0x3
    ctx->pc = 0x2a07ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x2a07d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a07d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a07d4: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A07D4u;
    {
        const bool branch_taken_0x2a07d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a07d4) {
            ctx->pc = 0x2A0820u;
            return;
        }
    }
    ctx->pc = 0x2A07DCu;
    // 0x2a07dc: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a07dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a07e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a07e4: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2a07e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2a07e8: 0x34850001  ori         $a1, $a0, 0x1
    ctx->pc = 0x2a07e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x2a07ec: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x2a07ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x2a07f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a07f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a07f4: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x2a07f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a07f8: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x2a07f8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a07fc: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x2a07fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a0800: 0x8fa90168  lw          $t1, 0x168($sp)
    ctx->pc = 0x2a0800u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0804: 0xa1280001  sb          $t0, 0x1($t1)
    ctx->pc = 0x2a0804u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x2a0808: 0x8faa0168  lw          $t2, 0x168($sp)
    ctx->pc = 0x2a0808u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a080c: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x2a080cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a0810: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0814: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2a0814u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a0818: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a081c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a081cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2a0820u;
}
