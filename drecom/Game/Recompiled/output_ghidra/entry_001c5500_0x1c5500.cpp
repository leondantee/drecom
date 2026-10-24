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

// Function: entry_001c5500
// Address: 0x1c5500 - 0x1c5558
void entry_001c5500_0x1c5500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5500_0x1c5500");
#endif

    switch (ctx->pc) {
        case 0x1c5510u: goto label_1c5510;
        case 0x1c551cu: goto label_1c551c;
        case 0x1c5530u: goto label_1c5530;
        case 0x1c553cu: goto label_1c553c;
        default: break;
    }

    ctx->pc = 0x1c5500u;

    // 0x1c5500: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c5500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5504: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c5504u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c5508: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C5508u;
    SET_GPR_U32(ctx, 31, 0x1C5510u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C5508u, 0x1C5510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5510u;
label_1c5510:
    // 0x1c5510: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c5510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5514: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C5514u;
    SET_GPR_U32(ctx, 31, 0x1C551Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C5514u, 0x1C551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C551Cu;
label_1c551c:
    // 0x1c551c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c551cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5520: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c5520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5524: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c5524u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c5528: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C5528u;
    SET_GPR_U32(ctx, 31, 0x1C5530u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C5528u, 0x1C5530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5530u;
label_1c5530:
    // 0x1c5530: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c5530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5534: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C5534u;
    SET_GPR_U32(ctx, 31, 0x1C553Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C5534u, 0x1C553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C553Cu;
label_1c553c:
    // 0x1c553c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c553cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5540: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1c5540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1c5544: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5544u;
    {
        const bool branch_taken_0x1c5544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5544) {
            ctx->pc = 0x1C5558u;
            return;
        }
    }
    ctx->pc = 0x1C554Cu;
    // 0x1c554c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c554cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5550: 0xc06d340  jal         func_1B4D00
    ctx->pc = 0x1C5550u;
    SET_GPR_U32(ctx, 31, 0x1C5558u);
    ctx->pc = 0x1B4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D00u, 0x1C5550u, 0x1C5558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5558u;
}
