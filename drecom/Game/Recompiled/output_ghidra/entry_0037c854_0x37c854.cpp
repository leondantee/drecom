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

// Function: entry_0037c854
// Address: 0x37c854 - 0x37c89c
void entry_0037c854_0x37c854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037c854_0x37c854");
#endif

    switch (ctx->pc) {
        case 0x37c860u: goto label_37c860;
        case 0x37c86cu: goto label_37c86c;
        default: break;
    }

    ctx->pc = 0x37c854u;

    // 0x37c854: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x37c854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37c858: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x37C858u;
    SET_GPR_U32(ctx, 31, 0x37C860u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x37C858u, 0x37C860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C860u;
label_37c860:
    // 0x37c860: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x37c860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c864: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x37C864u;
    SET_GPR_U32(ctx, 31, 0x37C86Cu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x37C864u, 0x37C86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C86Cu;
label_37c86c:
    // 0x37c86c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x37c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x37c870: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37c870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37c874: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37c874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x37c878: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x37c878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x37c87c: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x37c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x37c880: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x37c880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x37c884: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x37c884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x37c888: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37c888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c88c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x37c88cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37c890: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x37c890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x37c894: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x37c894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37c898: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x37c898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x37c89cu;
}
