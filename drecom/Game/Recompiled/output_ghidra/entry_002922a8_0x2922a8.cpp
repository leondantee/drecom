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

// Function: entry_002922a8
// Address: 0x2922a8 - 0x2922e0
void entry_002922a8_0x2922a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002922a8_0x2922a8");
#endif

    switch (ctx->pc) {
        case 0x2922b0u: goto label_2922b0;
        case 0x2922bcu: goto label_2922bc;
        case 0x2922c8u: goto label_2922c8;
        default: break;
    }

    ctx->pc = 0x2922a8u;

    // 0x2922a8: 0xc062aa0  jal         func_18AA80
    ctx->pc = 0x2922A8u;
    SET_GPR_U32(ctx, 31, 0x2922B0u);
    ctx->pc = 0x18AA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AA80u, 0x2922A8u, 0x2922B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2922B0u;
label_2922b0:
    // 0x2922b0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2922b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2922b4: 0xc062b40  jal         func_18AD00
    ctx->pc = 0x2922B4u;
    SET_GPR_U32(ctx, 31, 0x2922BCu);
    ctx->pc = 0x18AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD00u, 0x2922B4u, 0x2922BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2922BCu;
label_2922bc:
    // 0x2922bc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2922bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2922c0: 0xc067f2c  jal         func_19FCB0
    ctx->pc = 0x2922C0u;
    SET_GPR_U32(ctx, 31, 0x2922C8u);
    ctx->pc = 0x19FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FCB0u, 0x2922C0u, 0x2922C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2922C8u;
label_2922c8:
    // 0x2922c8: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x2922c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x2922cc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2922ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2922d0: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x2922d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x2922d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2922d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2922d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2922d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2922dc: 0xac22008c  sw          $v0, 0x8C($at)
    ctx->pc = 0x2922dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D008Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D008Cu, _value); } while (0);
    ctx->pc = 0x2922e0u;
}
