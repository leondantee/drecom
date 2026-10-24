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

// Function: entry_00338424
// Address: 0x338424 - 0x338460
void entry_00338424_0x338424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338424_0x338424");
#endif

    switch (ctx->pc) {
        case 0x338444u: goto label_338444;
        default: break;
    }

    ctx->pc = 0x338424u;

    // 0x338424: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x338424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x338428: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x338428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33842c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x33842cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x338430: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x338430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x338434: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x338434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x338438: 0x244784f0  addiu       $a3, $v0, -0x7B10
    ctx->pc = 0x338438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935792));
    // 0x33843c: 0xc046774  jal         func_119DD0
    ctx->pc = 0x33843Cu;
    SET_GPR_U32(ctx, 31, 0x338444u);
    ctx->pc = 0x119DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119DD0u, 0x33843Cu, 0x338444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338444u;
label_338444:
    // 0x338444: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x338444u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x338448: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x338448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33844c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33844cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x338450: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x338450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x338454: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x338454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x338458: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x338458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33845c: 0x0  nop
    ctx->pc = 0x33845cu;
    // NOP
    ctx->pc = 0x338460u;
}
