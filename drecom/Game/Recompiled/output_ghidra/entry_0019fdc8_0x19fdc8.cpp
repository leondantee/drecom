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

// Function: entry_0019fdc8
// Address: 0x19fdc8 - 0x19fdf4
void entry_0019fdc8_0x19fdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fdc8_0x19fdc8");
#endif

    switch (ctx->pc) {
        case 0x19fdd8u: goto label_19fdd8;
        default: break;
    }

    ctx->pc = 0x19fdc8u;

    // 0x19fdc8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x19fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19fdcc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x19fdccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19fdd0: 0xc0568c4  jal         func_15A310
    ctx->pc = 0x19FDD0u;
    SET_GPR_U32(ctx, 31, 0x19FDD8u);
    ctx->pc = 0x15A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A310u, 0x19FDD0u, 0x19FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FDD8u;
label_19fdd8:
    // 0x19fdd8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19FDD8u;
    {
        const bool branch_taken_0x19fdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fdd8) {
            ctx->pc = 0x19FE28u;
            return;
        }
    }
    ctx->pc = 0x19FDE0u;
    // 0x19fde0: 0x82030082  lb          $v1, 0x82($s0)
    ctx->pc = 0x19fde0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 130)));
    // 0x19fde4: 0x38e3c  dsll32      $s1, $v1, 24
    ctx->pc = 0x19fde4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 24));
    // 0x19fde8: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x19fde8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
    // 0x19fdec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19FDECu;
    {
        const bool branch_taken_0x19fdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fdec) {
            ctx->pc = 0x19FE40u;
            return;
        }
    }
    ctx->pc = 0x19FDF4u;
}
