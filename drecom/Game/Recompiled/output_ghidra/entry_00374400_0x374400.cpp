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

// Function: entry_00374400
// Address: 0x374400 - 0x374454
void entry_00374400_0x374400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00374400_0x374400");
#endif

    switch (ctx->pc) {
        case 0x37444cu: goto label_37444c;
        default: break;
    }

    ctx->pc = 0x374400u;

    // 0x374400: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x374400u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x374404: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x374404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x374408: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x374408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x37440c: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x37440Cu;
    {
        const bool branch_taken_0x37440c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37440c) {
            ctx->pc = 0x374480u;
            return;
        }
    }
    ctx->pc = 0x374414u;
    // 0x374414: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x374414u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x374418: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x374418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x37441c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x37441cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x374420: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x374420u;
    {
        const bool branch_taken_0x374420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x374420) {
            ctx->pc = 0x374454u;
            return;
        }
    }
    ctx->pc = 0x374428u;
    // 0x374428: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x374428u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x37442c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x37442cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x374430: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x374430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x374434: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x374434u;
    {
        const bool branch_taken_0x374434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x374434) {
            ctx->pc = 0x374468u;
            return;
        }
    }
    ctx->pc = 0x37443Cu;
    // 0x37443c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x37443cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x374440: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x374440u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x374444: 0xc067634  jal         func_19D8D0
    ctx->pc = 0x374444u;
    SET_GPR_U32(ctx, 31, 0x37444Cu);
    ctx->pc = 0x19D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D8D0u, 0x374444u, 0x37444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37444Cu;
label_37444c:
    // 0x37444c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x37444Cu;
    {
        const bool branch_taken_0x37444c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37444c) {
            ctx->pc = 0x374468u;
            return;
        }
    }
    ctx->pc = 0x374454u;
}
