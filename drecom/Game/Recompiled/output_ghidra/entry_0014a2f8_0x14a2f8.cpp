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

// Function: entry_0014a2f8
// Address: 0x14a2f8 - 0x14a340
void entry_0014a2f8_0x14a2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a2f8_0x14a2f8");
#endif

    switch (ctx->pc) {
        case 0x14a304u: goto label_14a304;
        case 0x14a324u: goto label_14a324;
        default: break;
    }

    ctx->pc = 0x14a2f8u;

    // 0x14a2f8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14a2f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14a2fc: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14A2FCu;
    SET_GPR_U32(ctx, 31, 0x14A304u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14A2FCu, 0x14A304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A304u;
label_14a304:
    // 0x14a304: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a308: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x14a308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x14a30c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14a30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14a310: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x14a310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x14a314: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x14A314u;
    {
        const bool branch_taken_0x14a314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a314) {
            ctx->pc = 0x14A340u;
            return;
        }
    }
    ctx->pc = 0x14A31Cu;
    // 0x14a31c: 0xc0585dc  jal         func_161770
    ctx->pc = 0x14A31Cu;
    SET_GPR_U32(ctx, 31, 0x14A324u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x14A31Cu, 0x14A324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A324u;
label_14a324:
    // 0x14a324: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A324u;
    {
        const bool branch_taken_0x14a324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a324) {
            ctx->pc = 0x14A340u;
            return;
        }
    }
    ctx->pc = 0x14A32Cu;
    // 0x14a32c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a330: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a334: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14a334u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x14a338: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14A338u;
    {
        const bool branch_taken_0x14a338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a338) {
            ctx->pc = 0x14A38Cu;
            return;
        }
    }
    ctx->pc = 0x14A340u;
}
