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

// Function: entry_002731fc
// Address: 0x2731fc - 0x273228
void entry_002731fc_0x2731fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002731fc_0x2731fc");
#endif

    ctx->pc = 0x2731fcu;

    // 0x2731fc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2731fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x273200: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x273200u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x273204: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x273204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x273208: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x273208u;
    {
        const bool branch_taken_0x273208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273208) {
            ctx->pc = 0x273228u;
            return;
        }
    }
    ctx->pc = 0x273210u;
    // 0x273210: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x273210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x273214: 0x8c31bb4c  lw          $s1, -0x44B4($at)
    ctx->pc = 0x273214u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x273218: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x273218u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27321c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x27321cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x273220: 0xc0b3ef8  jal         func_2CFBE0
    ctx->pc = 0x273220u;
    SET_GPR_U32(ctx, 31, 0x273228u);
    ctx->pc = 0x2CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBE0u, 0x273220u, 0x273228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273228u;
}
