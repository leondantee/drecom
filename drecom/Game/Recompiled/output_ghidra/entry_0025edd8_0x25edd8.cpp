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

// Function: entry_0025edd8
// Address: 0x25edd8 - 0x25ee10
void entry_0025edd8_0x25edd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025edd8_0x25edd8");
#endif

    switch (ctx->pc) {
        case 0x25ee0cu: goto label_25ee0c;
        default: break;
    }

    ctx->pc = 0x25edd8u;

    // 0x25edd8: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25edd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25eddc: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x25eddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x25ede0: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25ede0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x25ede4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ede8: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x25ede8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x25edec: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x25edecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x25edf0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25edf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25edf4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x25edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x25edf8: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x25edf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25edfc: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x25edfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x25ee00: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x25ee00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x25ee04: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25EE04u;
    SET_GPR_U32(ctx, 31, 0x25EE0Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25EE04u, 0x25EE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE0Cu;
label_25ee0c:
    // 0x25ee0c: 0x0  nop
    ctx->pc = 0x25ee0cu;
    // NOP
    ctx->pc = 0x25ee10u;
}
