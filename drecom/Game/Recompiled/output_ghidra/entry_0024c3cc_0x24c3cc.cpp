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

// Function: entry_0024c3cc
// Address: 0x24c3cc - 0x24c42c
void entry_0024c3cc_0x24c3cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024c3cc_0x24c3cc");
#endif

    switch (ctx->pc) {
        case 0x24c3e4u: goto label_24c3e4;
        default: break;
    }

    ctx->pc = 0x24c3ccu;

    // 0x24c3cc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x24c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24c3d0: 0x26050490  addiu       $a1, $s0, 0x490
    ctx->pc = 0x24c3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x24c3d4: 0x26060480  addiu       $a2, $s0, 0x480
    ctx->pc = 0x24c3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x24c3d8: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x24c3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x24c3dc: 0xc059e1c  jal         func_167870
    ctx->pc = 0x24C3DCu;
    SET_GPR_U32(ctx, 31, 0x24C3E4u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x24C3DCu, 0x24C3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C3E4u;
label_24c3e4:
    // 0x24c3e4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x24c3e4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24c3e8: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x24C3E8u;
    {
        const bool branch_taken_0x24c3e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c3e8) {
            ctx->pc = 0x24C42Cu;
            return;
        }
    }
    ctx->pc = 0x24C3F0u;
    // 0x24c3f0: 0x26030480  addiu       $v1, $s0, 0x480
    ctx->pc = 0x24c3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x24c3f4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x24c3f4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24c3f8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c3fc: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x24c3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24c400: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x24c400u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x24c404: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c408: 0xac6000d4  sw          $zero, 0xD4($v1)
    ctx->pc = 0x24c408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 0));
    // 0x24c40c: 0x8e030b18  lw          $v1, 0xB18($s0)
    ctx->pc = 0x24c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2840)));
    // 0x24c410: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24c410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24c414: 0xae030b18  sw          $v1, 0xB18($s0)
    ctx->pc = 0x24c414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2840), GPR_U32(ctx, 3));
    // 0x24c418: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24c418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24c41c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c420: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x24c420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x24c424: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x24C424u;
    {
        const bool branch_taken_0x24c424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c424) {
            ctx->pc = 0x24C488u;
            return;
        }
    }
    ctx->pc = 0x24C42Cu;
}
