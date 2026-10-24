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

// Function: entry_002773ac
// Address: 0x2773ac - 0x27740c
void entry_002773ac_0x2773ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002773ac_0x2773ac");
#endif

    switch (ctx->pc) {
        case 0x2773b4u: goto label_2773b4;
        case 0x2773c4u: goto label_2773c4;
        default: break;
    }

    ctx->pc = 0x2773acu;

    // 0x2773ac: 0xc09dd10  jal         func_277440
    ctx->pc = 0x2773ACu;
    SET_GPR_U32(ctx, 31, 0x2773B4u);
    ctx->pc = 0x277440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277440u, 0x2773ACu, 0x2773B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2773B4u;
label_2773b4:
    // 0x2773b4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2773b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2773b8: 0x2444d330  addiu       $a0, $v0, -0x2CD0
    ctx->pc = 0x2773b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955824));
    // 0x2773bc: 0xc0a1048  jal         func_284120
    ctx->pc = 0x2773BCu;
    SET_GPR_U32(ctx, 31, 0x2773C4u);
    ctx->pc = 0x284120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284120u, 0x2773BCu, 0x2773C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2773C4u;
label_2773c4:
    // 0x2773c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2773c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2773c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2773c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2773cc: 0xa022d411  sb          $v0, -0x2BEF($at)
    ctx->pc = 0x2773ccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD411u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD411u, _value); } while (0);
    // 0x2773d0: 0x24020091  addiu       $v0, $zero, 0x91
    ctx->pc = 0x2773d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x2773d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2773d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2773d8: 0xa022d413  sb          $v0, -0x2BED($at)
    ctx->pc = 0x2773d8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD413u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD413u, _value); } while (0);
    // 0x2773dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2773dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2773e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2773e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2773e4: 0xa422d418  sh          $v0, -0x2BE8($at)
    ctx->pc = 0x2773e4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD418u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD418u, _value); } while (0);
    // 0x2773e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2773e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2773ec: 0xa420d41a  sh          $zero, -0x2BE6($at)
    ctx->pc = 0x2773ecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD41Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD41Au, _value); } while (0);
    // 0x2773f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2773f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2773f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2773f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2773f8: 0xa422d41c  sh          $v0, -0x2BE4($at)
    ctx->pc = 0x2773f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD41Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD41Cu, _value); } while (0);
    // 0x2773fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2773fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277400: 0xa420d41e  sh          $zero, -0x2BE2($at)
    ctx->pc = 0x277400u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD41Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD41Eu, _value); } while (0);
    // 0x277404: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x277404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x277408: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x277408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    ctx->pc = 0x27740cu;
}
