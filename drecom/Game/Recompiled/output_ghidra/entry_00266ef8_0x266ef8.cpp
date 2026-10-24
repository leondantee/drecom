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

// Function: entry_00266ef8
// Address: 0x266ef8 - 0x266f50
void entry_00266ef8_0x266ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266ef8_0x266ef8");
#endif

    switch (ctx->pc) {
        case 0x266f0cu: goto label_266f0c;
        case 0x266f48u: goto label_266f48;
        default: break;
    }

    ctx->pc = 0x266ef8u;

    // 0x266ef8: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x266ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x266efc: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x266efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x266f00: 0x8e460a68  lw          $a2, 0xA68($s2)
    ctx->pc = 0x266f00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x266f04: 0xc0767a0  jal         func_1D9E80
    ctx->pc = 0x266F04u;
    SET_GPR_U32(ctx, 31, 0x266F0Cu);
    ctx->pc = 0x1D9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E80u, 0x266F04u, 0x266F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F0Cu;
label_266f0c:
    // 0x266f0c: 0xae420a68  sw          $v0, 0xA68($s2)
    ctx->pc = 0x266f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 2));
    // 0x266f10: 0x8e420a68  lw          $v0, 0xA68($s2)
    ctx->pc = 0x266f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x266f14: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x266f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x266f18: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x266f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x266f1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x266f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x266f20: 0xae420a68  sw          $v0, 0xA68($s2)
    ctx->pc = 0x266f20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 2));
    // 0x266f24: 0x8e02133c  lw          $v0, 0x133C($s0)
    ctx->pc = 0x266f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x266f28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x266f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x266f2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x266F2Cu;
    {
        const bool branch_taken_0x266f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266f2c) {
            ctx->pc = 0x266F50u;
            return;
        }
    }
    ctx->pc = 0x266F34u;
    // 0x266f34: 0x8e460a68  lw          $a2, 0xA68($s2)
    ctx->pc = 0x266f34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x266f38: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x266f38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x266f3c: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x266f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x266f40: 0xc0998dc  jal         func_266370
    ctx->pc = 0x266F40u;
    SET_GPR_U32(ctx, 31, 0x266F48u);
    ctx->pc = 0x266370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266370u, 0x266F40u, 0x266F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F48u;
label_266f48:
    // 0x266f48: 0xae420a68  sw          $v0, 0xA68($s2)
    ctx->pc = 0x266f48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 2));
    // 0x266f4c: 0x0  nop
    ctx->pc = 0x266f4cu;
    // NOP
    ctx->pc = 0x266f50u;
}
