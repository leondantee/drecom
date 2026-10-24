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

// Function: entry_0013f5a8
// Address: 0x13f5a8 - 0x13f5e8
void entry_0013f5a8_0x13f5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f5a8_0x13f5a8");
#endif

    switch (ctx->pc) {
        case 0x13f5b8u: goto label_13f5b8;
        default: break;
    }

    ctx->pc = 0x13f5a8u;

    // 0x13f5a8: 0x27a41570  addiu       $a0, $sp, 0x1570
    ctx->pc = 0x13f5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f5ac: 0x27a515c0  addiu       $a1, $sp, 0x15C0
    ctx->pc = 0x13f5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f5b0: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13F5B0u;
    SET_GPR_U32(ctx, 31, 0x13F5B8u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13F5B0u, 0x13F5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F5B8u;
label_13f5b8:
    // 0x13f5b8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13f5b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f5bc: 0x32080208  andi        $t0, $s0, 0x208
    ctx->pc = 0x13f5bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)520);
    // 0x13f5c0: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F5C0u;
    {
        const bool branch_taken_0x13f5c0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f5c0) {
            ctx->pc = 0x13F5E8u;
            return;
        }
    }
    ctx->pc = 0x13F5C8u;
    // 0x13f5c8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x13f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x13f5cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13f5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13f5d0: 0x27a415c0  addiu       $a0, $sp, 0x15C0
    ctx->pc = 0x13f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f5d4: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13f5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f5d8: 0x27a615c0  addiu       $a2, $sp, 0x15C0
    ctx->pc = 0x13f5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f5dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13f5dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f5e0: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13F5E0u;
    SET_GPR_U32(ctx, 31, 0x13F5E8u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13F5E0u, 0x13F5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F5E8u;
}
