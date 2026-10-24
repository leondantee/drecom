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

// Function: entry_00191a1c
// Address: 0x191a1c - 0x191a7c
void entry_00191a1c_0x191a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191a1c_0x191a1c");
#endif

    switch (ctx->pc) {
        case 0x191a74u: goto label_191a74;
        default: break;
    }

    ctx->pc = 0x191a1cu;

    // 0x191a1c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x191a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x191a20: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x191a20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x191a24: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x191a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x191a28: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x191a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x191a2c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x191a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x191a30: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x191a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x191a34: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x191a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x191a38: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x191a38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x191a3c: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x191a3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x191a40: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x191a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x191a44: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x191a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x191a48: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x191A48u;
    {
        const bool branch_taken_0x191a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191a48) {
            ctx->pc = 0x191A7Cu;
            return;
        }
    }
    ctx->pc = 0x191A50u;
    // 0x191a50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x191a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x191a54: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x191a54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x191a58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x191a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x191a5c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x191a5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x191a60: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x191a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x191a64: 0x8c242580  lw          $a0, 0x2580($at)
    ctx->pc = 0x191a64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x532580u));
    // 0x191a68: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x191a68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x191a6c: 0xc06af4c  jal         func_1ABD30
    ctx->pc = 0x191A6Cu;
    SET_GPR_U32(ctx, 31, 0x191A74u);
    ctx->pc = 0x1ABD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABD30u, 0x191A6Cu, 0x191A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191A74u;
label_191a74:
    // 0x191a74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x191A74u;
    {
        const bool branch_taken_0x191a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191a74) {
            ctx->pc = 0x191AA0u;
            return;
        }
    }
    ctx->pc = 0x191A7Cu;
}
