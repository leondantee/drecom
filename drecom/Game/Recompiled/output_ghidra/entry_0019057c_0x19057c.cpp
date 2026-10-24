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

// Function: entry_0019057c
// Address: 0x19057c - 0x1905e8
void entry_0019057c_0x19057c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019057c_0x19057c");
#endif

    switch (ctx->pc) {
        case 0x1905e0u: goto label_1905e0;
        default: break;
    }

    ctx->pc = 0x19057cu;

    // 0x19057c: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x19057cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x190580: 0x26a20004  addiu       $v0, $s5, 0x4
    ctx->pc = 0x190580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x190584: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x190584u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x190588: 0x2662fff0  addiu       $v0, $s3, -0x10
    ctx->pc = 0x190588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x19058c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x19058cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x190590: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x190590u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x190594: 0x3c105000  lui         $s0, 0x5000
    ctx->pc = 0x190594u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20480 << 16));
    // 0x190598: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x190598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x19059c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x19059cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1905a0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1905a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1905a4: 0x94500118  lhu         $s0, 0x118($v0)
    ctx->pc = 0x1905a4u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x1905a8: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1905a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1905ac: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1905acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1905b0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1905B0u;
    {
        const bool branch_taken_0x1905b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1905b0) {
            ctx->pc = 0x1905E8u;
            return;
        }
    }
    ctx->pc = 0x1905B8u;
    // 0x1905b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1905b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1905bc: 0x8c30013c  lw          $s0, 0x13C($at)
    ctx->pc = 0x1905bcu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1905c0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1905c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1905c4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1905c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1905c8: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1905c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1905cc: 0x8c302580  lw          $s0, 0x2580($at)
    ctx->pc = 0x1905ccu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x532580u));
    // 0x1905d0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1905d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1905d4: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1905d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1905d8: 0xc06af4c  jal         func_1ABD30
    ctx->pc = 0x1905D8u;
    SET_GPR_U32(ctx, 31, 0x1905E0u);
    ctx->pc = 0x1ABD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABD30u, 0x1905D8u, 0x1905E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1905E0u;
label_1905e0:
    // 0x1905e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1905E0u;
    {
        const bool branch_taken_0x1905e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1905e0) {
            ctx->pc = 0x190610u;
            return;
        }
    }
    ctx->pc = 0x1905E8u;
}
