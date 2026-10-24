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

// Function: entry_0013faa8
// Address: 0x13faa8 - 0x13faf8
void entry_0013faa8_0x13faa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013faa8_0x13faa8");
#endif

    switch (ctx->pc) {
        case 0x13fab8u: goto label_13fab8;
        case 0x13faf0u: goto label_13faf0;
        default: break;
    }

    ctx->pc = 0x13faa8u;

    // 0x13faa8: 0x27a41570  addiu       $a0, $sp, 0x1570
    ctx->pc = 0x13faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13faac: 0x27a51610  addiu       $a1, $sp, 0x1610
    ctx->pc = 0x13faacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fab0: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13FAB0u;
    SET_GPR_U32(ctx, 31, 0x13FAB8u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13FAB0u, 0x13FAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FAB8u;
label_13fab8:
    // 0x13fab8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x13fab8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fabc: 0x73c08628  paddub      $s0, $fp, $zero
    ctx->pc = 0x13fabcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x13fac0: 0x32080104  andi        $t0, $s0, 0x104
    ctx->pc = 0x13fac0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)260);
    // 0x13fac4: 0x1100000c  beqz        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x13FAC4u;
    {
        const bool branch_taken_0x13fac4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fac4) {
            ctx->pc = 0x13FAF8u;
            return;
        }
    }
    ctx->pc = 0x13FACCu;
    // 0x13facc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13faccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13fad0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13fad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13fad4: 0x27a41610  addiu       $a0, $sp, 0x1610
    ctx->pc = 0x13fad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fad8: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13fad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13fadc: 0x27a21610  addiu       $v0, $sp, 0x1610
    ctx->pc = 0x13fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fae0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x13fae0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fae4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13fae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fae8: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13FAE8u;
    SET_GPR_U32(ctx, 31, 0x13FAF0u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13FAE8u, 0x13FAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FAF0u;
label_13faf0:
    // 0x13faf0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13faf0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13faf4: 0x0  nop
    ctx->pc = 0x13faf4u;
    // NOP
    ctx->pc = 0x13faf8u;
}
