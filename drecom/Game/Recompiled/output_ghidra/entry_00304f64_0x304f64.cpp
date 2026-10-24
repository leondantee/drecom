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

// Function: entry_00304f64
// Address: 0x304f64 - 0x304fe8
void entry_00304f64_0x304f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00304f64_0x304f64");
#endif

    switch (ctx->pc) {
        case 0x304fe0u: goto label_304fe0;
        default: break;
    }

    ctx->pc = 0x304f64u;

    // 0x304f64: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304f68: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x304f68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x304f6c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x304F6Cu;
    {
        const bool branch_taken_0x304f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304f6c) {
            ctx->pc = 0x304FE8u;
            return;
        }
    }
    ctx->pc = 0x304F74u;
    // 0x304f74: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x304f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x304f78: 0x244295a0  addiu       $v0, $v0, -0x6A60
    ctx->pc = 0x304f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940064));
    // 0x304f7c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x304f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x304f80: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x304f80u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3995A0u));
    // 0x304f84: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x304f84u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x304f88: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x304f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x304f8c: 0x244295b0  addiu       $v0, $v0, -0x6A50
    ctx->pc = 0x304f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940080));
    // 0x304f90: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x304f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x304f94: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x304f94u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3995B0u));
    // 0x304f98: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x304f98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x304f9c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304fa0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x304fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x304fa4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x304fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x304fa8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x304fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x304fac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x304facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x304fb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x304fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x304fb4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x304fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x304fb8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x304fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x304fbc: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x304fbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x304fc0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304fc4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x304fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x304fc8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x304fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x304fcc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x304fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x304fd0: 0x24470300  addiu       $a3, $v0, 0x300
    ctx->pc = 0x304fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x304fd4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x304fd4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304fd8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x304FD8u;
    SET_GPR_U32(ctx, 31, 0x304FE0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x304FD8u, 0x304FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304FE0u;
label_304fe0:
    // 0x304fe0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304fe4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x304fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x304fe8u;
}
