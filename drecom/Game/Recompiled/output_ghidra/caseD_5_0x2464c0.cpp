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

// Function: caseD_5
// Address: 0x2464c0 - 0x246508
void caseD_5_0x2464c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x2464c0");
#endif

    switch (ctx->pc) {
        case 0x2464d4u: goto label_2464d4;
        case 0x2464e0u: goto label_2464e0;
        default: break;
    }

    ctx->pc = 0x2464c0u;

    // 0x2464c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2464c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2464c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2464c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2464c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2464c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2464cc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2464CCu;
    SET_GPR_U32(ctx, 31, 0x2464D4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2464CCu, 0x2464D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464D4u;
label_2464d4:
    // 0x2464d4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2464d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2464d8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2464D8u;
    SET_GPR_U32(ctx, 31, 0x2464E0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2464D8u, 0x2464E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464E0u;
label_2464e0:
    // 0x2464e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2464e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2464e4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2464e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2464e8: 0x90a309db  lbu         $v1, 0x9DB($a1)
    ctx->pc = 0x2464e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2523)));
    // 0x2464ec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2464ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2464f0: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x2464f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x2464f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2464F4u;
    {
        const bool branch_taken_0x2464f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2464f4) {
            ctx->pc = 0x246508u;
            return;
        }
    }
    ctx->pc = 0x2464FCu;
    // 0x2464fc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2464fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x246500: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x246500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x246504: 0xa023dbc2  sb          $v1, -0x243E($at)
    ctx->pc = 0x246504u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EDBC2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC2u, _value); } while (0);
    ctx->pc = 0x246508u;
}
