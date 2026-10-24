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

// Function: entry_0013f748
// Address: 0x13f748 - 0x13f790
void entry_0013f748_0x13f748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f748_0x13f748");
#endif

    switch (ctx->pc) {
        case 0x13f75cu: goto label_13f75c;
        case 0x13f78cu: goto label_13f78c;
        default: break;
    }

    ctx->pc = 0x13f748u;

    // 0x13f748: 0x27a41570  addiu       $a0, $sp, 0x1570
    ctx->pc = 0x13f748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f74c: 0x27b21610  addiu       $s2, $sp, 0x1610
    ctx->pc = 0x13f74cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f750: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x13f750u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x13f754: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13F754u;
    SET_GPR_U32(ctx, 31, 0x13F75Cu);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13F754u, 0x13F75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F75Cu;
label_13f75c:
    // 0x13f75c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13f75cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f760: 0x32050104  andi        $a1, $s0, 0x104
    ctx->pc = 0x13f760u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)260);
    // 0x13f764: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x13F764u;
    {
        const bool branch_taken_0x13f764 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f764) {
            ctx->pc = 0x13F790u;
            return;
        }
    }
    ctx->pc = 0x13F76Cu;
    // 0x13f76c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x13f76cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x13f770: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x13f770u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13f774: 0x27a41610  addiu       $a0, $sp, 0x1610
    ctx->pc = 0x13f774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f778: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13f778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f77c: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13f77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f780: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13f780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f784: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13F784u;
    SET_GPR_U32(ctx, 31, 0x13F78Cu);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13F784u, 0x13F78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F78Cu;
label_13f78c:
    // 0x13f78c: 0x0  nop
    ctx->pc = 0x13f78cu;
    // NOP
    ctx->pc = 0x13f790u;
}
