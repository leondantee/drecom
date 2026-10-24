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

// Function: entry_0037019c
// Address: 0x37019c - 0x370200
void entry_0037019c_0x37019c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037019c_0x37019c");
#endif

    switch (ctx->pc) {
        case 0x3701acu: goto label_3701ac;
        case 0x3701b8u: goto label_3701b8;
        case 0x3701c4u: goto label_3701c4;
        case 0x3701d4u: goto label_3701d4;
        case 0x3701e0u: goto label_3701e0;
        default: break;
    }

    ctx->pc = 0x37019cu;

    // 0x37019c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x37019cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3701a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3701a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3701a4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3701A4u;
    SET_GPR_U32(ctx, 31, 0x3701ACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3701A4u, 0x3701ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3701ACu;
label_3701ac:
    // 0x3701ac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3701acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3701b0: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x3701B0u;
    SET_GPR_U32(ctx, 31, 0x3701B8u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x3701B0u, 0x3701B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3701B8u;
label_3701b8:
    // 0x3701b8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3701b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3701bc: 0xc0dd008  jal         func_374020
    ctx->pc = 0x3701BCu;
    SET_GPR_U32(ctx, 31, 0x3701C4u);
    ctx->pc = 0x374020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374020u, 0x3701BCu, 0x3701C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3701C4u;
label_3701c4:
    // 0x3701c4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3701c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3701c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3701c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3701cc: 0xc0dc6bc  jal         func_371AF0
    ctx->pc = 0x3701CCu;
    SET_GPR_U32(ctx, 31, 0x3701D4u);
    ctx->pc = 0x371AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371AF0u, 0x3701CCu, 0x3701D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3701D4u;
label_3701d4:
    // 0x3701d4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3701d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3701d8: 0xc0dd150  jal         func_374540
    ctx->pc = 0x3701D8u;
    SET_GPR_U32(ctx, 31, 0x3701E0u);
    ctx->pc = 0x374540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374540u, 0x3701D8u, 0x3701E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3701E0u;
label_3701e0:
    // 0x3701e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3701e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3701e4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x3701e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x3701e8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3701E8u;
    {
        const bool branch_taken_0x3701e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3701e8) {
            ctx->pc = 0x370200u;
            return;
        }
    }
    ctx->pc = 0x3701F0u;
    // 0x3701f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3701f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3701f4: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x3701f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x3701f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3701f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3701fc: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x3701fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x370200u;
}
