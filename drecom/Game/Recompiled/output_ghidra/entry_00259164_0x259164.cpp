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

// Function: entry_00259164
// Address: 0x259164 - 0x259188
void entry_00259164_0x259164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00259164_0x259164");
#endif

    switch (ctx->pc) {
        case 0x25917cu: goto label_25917c;
        default: break;
    }

    ctx->pc = 0x259164u;

    // 0x259164: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x259164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x259168: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x259168u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25916c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x25916cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x259170: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x259170u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x259174: 0xc09646c  jal         func_2591B0
    ctx->pc = 0x259174u;
    SET_GPR_U32(ctx, 31, 0x25917Cu);
    ctx->pc = 0x2591B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2591B0u, 0x259174u, 0x25917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25917Cu;
label_25917c:
    // 0x25917c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x25917cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x259180: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x259180u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x259184: 0x0  nop
    ctx->pc = 0x259184u;
    // NOP
    ctx->pc = 0x259188u;
}
