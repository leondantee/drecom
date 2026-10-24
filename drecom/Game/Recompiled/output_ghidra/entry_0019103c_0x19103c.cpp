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

// Function: entry_0019103c
// Address: 0x19103c - 0x19109c
void entry_0019103c_0x19103c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019103c_0x19103c");
#endif

    switch (ctx->pc) {
        case 0x191094u: goto label_191094;
        default: break;
    }

    ctx->pc = 0x19103cu;

    // 0x19103c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x19103cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x191040: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x191040u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x191044: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x191044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x191048: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x191048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19104c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x19104cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x191050: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x191050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x191054: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x191054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x191058: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x191058u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x19105c: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x19105cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x191060: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x191060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x191064: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x191064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x191068: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x191068u;
    {
        const bool branch_taken_0x191068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191068) {
            ctx->pc = 0x19109Cu;
            return;
        }
    }
    ctx->pc = 0x191070u;
    // 0x191070: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x191070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x191074: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x191074u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x191078: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x191078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19107c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x19107cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x191080: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x191080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x191084: 0x8c242580  lw          $a0, 0x2580($at)
    ctx->pc = 0x191084u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x532580u));
    // 0x191088: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x191088u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x19108c: 0xc06af4c  jal         func_1ABD30
    ctx->pc = 0x19108Cu;
    SET_GPR_U32(ctx, 31, 0x191094u);
    ctx->pc = 0x1ABD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABD30u, 0x19108Cu, 0x191094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191094u;
label_191094:
    // 0x191094: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x191094u;
    {
        const bool branch_taken_0x191094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191094) {
            ctx->pc = 0x1910C0u;
            return;
        }
    }
    ctx->pc = 0x19109Cu;
}
