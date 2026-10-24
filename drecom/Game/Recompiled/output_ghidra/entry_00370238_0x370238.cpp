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

// Function: entry_00370238
// Address: 0x370238 - 0x37027c
void entry_00370238_0x370238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00370238_0x370238");
#endif

    switch (ctx->pc) {
        case 0x370248u: goto label_370248;
        case 0x370254u: goto label_370254;
        case 0x370260u: goto label_370260;
        case 0x370270u: goto label_370270;
        default: break;
    }

    ctx->pc = 0x370238u;

    // 0x370238: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37023c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37023cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370240: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x370240u;
    SET_GPR_U32(ctx, 31, 0x370248u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x370240u, 0x370248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370248u;
label_370248:
    // 0x370248: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37024c: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x37024Cu;
    SET_GPR_U32(ctx, 31, 0x370254u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x37024Cu, 0x370254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370254u;
label_370254:
    // 0x370254: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370258: 0xc0dd008  jal         func_374020
    ctx->pc = 0x370258u;
    SET_GPR_U32(ctx, 31, 0x370260u);
    ctx->pc = 0x374020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374020u, 0x370258u, 0x370260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370260u;
label_370260:
    // 0x370260: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370264: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x370264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370268: 0xc0dc6bc  jal         func_371AF0
    ctx->pc = 0x370268u;
    SET_GPR_U32(ctx, 31, 0x370270u);
    ctx->pc = 0x371AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371AF0u, 0x370268u, 0x370270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370270u;
label_370270:
    // 0x370270: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370274: 0xc0dd150  jal         func_374540
    ctx->pc = 0x370274u;
    SET_GPR_U32(ctx, 31, 0x37027Cu);
    ctx->pc = 0x374540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374540u, 0x370274u, 0x37027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37027Cu;
}
