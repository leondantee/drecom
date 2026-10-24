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

// Function: entry_0013f568
// Address: 0x13f568 - 0x13f5a8
void entry_0013f568_0x13f568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f568_0x13f568");
#endif

    switch (ctx->pc) {
        case 0x13f578u: goto label_13f578;
        default: break;
    }

    ctx->pc = 0x13f568u;

    // 0x13f568: 0x27a41570  addiu       $a0, $sp, 0x1570
    ctx->pc = 0x13f568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f56c: 0x27a515c0  addiu       $a1, $sp, 0x15C0
    ctx->pc = 0x13f56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f570: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13F570u;
    SET_GPR_U32(ctx, 31, 0x13F578u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13F570u, 0x13F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F578u;
label_13f578:
    // 0x13f578: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13f578u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f57c: 0x32030104  andi        $v1, $s0, 0x104
    ctx->pc = 0x13f57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)260);
    // 0x13f580: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F580u;
    {
        const bool branch_taken_0x13f580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f580) {
            ctx->pc = 0x13F5A8u;
            return;
        }
    }
    ctx->pc = 0x13F588u;
    // 0x13f588: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13f588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13f58c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13f58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13f590: 0x27a415c0  addiu       $a0, $sp, 0x15C0
    ctx->pc = 0x13f590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f594: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13f594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f598: 0x27a615c0  addiu       $a2, $sp, 0x15C0
    ctx->pc = 0x13f598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f59c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13f59cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f5a0: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13F5A0u;
    SET_GPR_U32(ctx, 31, 0x13F5A8u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13F5A0u, 0x13F5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F5A8u;
}
