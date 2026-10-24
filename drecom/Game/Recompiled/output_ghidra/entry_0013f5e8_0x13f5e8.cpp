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

// Function: entry_0013f5e8
// Address: 0x13f5e8 - 0x13f630
void entry_0013f5e8_0x13f5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f5e8_0x13f5e8");
#endif

    switch (ctx->pc) {
        case 0x13f5fcu: goto label_13f5fc;
        case 0x13f62cu: goto label_13f62c;
        default: break;
    }

    ctx->pc = 0x13f5e8u;

    // 0x13f5e8: 0x27a81570  addiu       $t0, $sp, 0x1570
    ctx->pc = 0x13f5e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f5ec: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x13f5ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x13f5f0: 0x27a515c0  addiu       $a1, $sp, 0x15C0
    ctx->pc = 0x13f5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f5f4: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13F5F4u;
    SET_GPR_U32(ctx, 31, 0x13F5FCu);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13F5F4u, 0x13F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F5FCu;
label_13f5fc:
    // 0x13f5fc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13f5fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f600: 0x32050041  andi        $a1, $s0, 0x41
    ctx->pc = 0x13f600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65);
    // 0x13f604: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x13F604u;
    {
        const bool branch_taken_0x13f604 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f604) {
            ctx->pc = 0x13F630u;
            return;
        }
    }
    ctx->pc = 0x13F60Cu;
    // 0x13f60c: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x13f60cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x13f610: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x13f610u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13f614: 0x27a415c0  addiu       $a0, $sp, 0x15C0
    ctx->pc = 0x13f614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f618: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13f618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f61c: 0x27a615c0  addiu       $a2, $sp, 0x15C0
    ctx->pc = 0x13f61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f620: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13f620u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13f624: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13F624u;
    SET_GPR_U32(ctx, 31, 0x13F62Cu);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13F624u, 0x13F62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F62Cu;
label_13f62c:
    // 0x13f62c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x13f62cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x13f630u;
}
