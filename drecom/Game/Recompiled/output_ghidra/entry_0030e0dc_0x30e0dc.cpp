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

// Function: entry_0030e0dc
// Address: 0x30e0dc - 0x30e160
void entry_0030e0dc_0x30e0dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030e0dc_0x30e0dc");
#endif

    switch (ctx->pc) {
        case 0x30e13cu: goto label_30e13c;
        default: break;
    }

    ctx->pc = 0x30e0dcu;

    // 0x30e0dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e0e0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30e0e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x30e0e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30e0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30e0e8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x30e0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x30e0ec: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30E0ECu;
    {
        const bool branch_taken_0x30e0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e0ec) {
            ctx->pc = 0x30E160u;
            return;
        }
    }
    ctx->pc = 0x30E0F4u;
    // 0x30e0f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e0f8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x30e0f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x30e0fc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30E0FCu;
    {
        const bool branch_taken_0x30e0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e0fc) {
            ctx->pc = 0x30E160u;
            return;
        }
    }
    ctx->pc = 0x30E104u;
    // 0x30e104: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30e104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30e108: 0x24429980  addiu       $v0, $v0, -0x6680
    ctx->pc = 0x30e108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941056));
    // 0x30e10c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x30e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30e110: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30e110u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399980u));
    // 0x30e114: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30e114u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30e118: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e11c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30e120: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e124: 0x24450840  addiu       $a1, $v0, 0x840
    ctx->pc = 0x30e124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x30e128: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x30e128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30e12c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x30e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x30e130: 0x24478d50  addiu       $a3, $v0, -0x72B0
    ctx->pc = 0x30e130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937936));
    // 0x30e134: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x30E134u;
    SET_GPR_U32(ctx, 31, 0x30E13Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x30E134u, 0x30E13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E13Cu;
label_30e13c:
    // 0x30e13c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x30e13cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30e140: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30E140u;
    {
        const bool branch_taken_0x30e140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e140) {
            ctx->pc = 0x30E160u;
            return;
        }
    }
    ctx->pc = 0x30E148u;
    // 0x30e148: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30e148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e14c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e150: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x30e150u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x30e154: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30e154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e158: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e15c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x30e15cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x30e160u;
}
