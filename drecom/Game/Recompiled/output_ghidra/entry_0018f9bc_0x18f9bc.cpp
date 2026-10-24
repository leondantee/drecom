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

// Function: entry_0018f9bc
// Address: 0x18f9bc - 0x18fa20
void entry_0018f9bc_0x18f9bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f9bc_0x18f9bc");
#endif

    switch (ctx->pc) {
        case 0x18fa18u: goto label_18fa18;
        default: break;
    }

    ctx->pc = 0x18f9bcu;

    // 0x18f9bc: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x18f9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x18f9c0: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x18f9c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x18f9c4: 0x2643fff0  addiu       $v1, $s2, -0x10
    ctx->pc = 0x18f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x18f9c8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x18f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18f9cc: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x18f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x18f9d0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x18f9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x18f9d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18f9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18f9d8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x18f9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x18f9dc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f9e0: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x18f9e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x18f9e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18f9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18f9e8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x18f9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x18f9ec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18F9ECu;
    {
        const bool branch_taken_0x18f9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f9ec) {
            ctx->pc = 0x18FA20u;
            return;
        }
    }
    ctx->pc = 0x18F9F4u;
    // 0x18f9f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18f9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18f9f8: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x18f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x18f9fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18f9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18fa00: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x18fa00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18fa04: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x18fa04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x18fa08: 0x8c242580  lw          $a0, 0x2580($at)
    ctx->pc = 0x18fa08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x532580u));
    // 0x18fa0c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x18fa0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x18fa10: 0xc06af4c  jal         func_1ABD30
    ctx->pc = 0x18FA10u;
    SET_GPR_U32(ctx, 31, 0x18FA18u);
    ctx->pc = 0x1ABD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABD30u, 0x18FA10u, 0x18FA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FA18u;
label_18fa18:
    // 0x18fa18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18FA18u;
    {
        const bool branch_taken_0x18fa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fa18) {
            ctx->pc = 0x18FA44u;
            return;
        }
    }
    ctx->pc = 0x18FA20u;
}
