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

// Function: entry_00370378
// Address: 0x370378 - 0x3703fc
void entry_00370378_0x370378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00370378_0x370378");
#endif

    switch (ctx->pc) {
        case 0x370388u: goto label_370388;
        case 0x370394u: goto label_370394;
        case 0x3703a0u: goto label_3703a0;
        case 0x3703acu: goto label_3703ac;
        case 0x3703f4u: goto label_3703f4;
        default: break;
    }

    ctx->pc = 0x370378u;

    // 0x370378: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37037c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37037cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370380: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x370380u;
    SET_GPR_U32(ctx, 31, 0x370388u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x370380u, 0x370388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370388u;
label_370388:
    // 0x370388: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37038c: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x37038Cu;
    SET_GPR_U32(ctx, 31, 0x370394u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x37038Cu, 0x370394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370394u;
label_370394:
    // 0x370394: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370398: 0xc0dd008  jal         func_374020
    ctx->pc = 0x370398u;
    SET_GPR_U32(ctx, 31, 0x3703A0u);
    ctx->pc = 0x374020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374020u, 0x370398u, 0x3703A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3703A0u;
label_3703a0:
    // 0x3703a0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3703a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3703a4: 0xc0dd150  jal         func_374540
    ctx->pc = 0x3703A4u;
    SET_GPR_U32(ctx, 31, 0x3703ACu);
    ctx->pc = 0x374540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374540u, 0x3703A4u, 0x3703ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3703ACu;
label_3703ac:
    // 0x3703ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3703acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3703b0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3703b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3703b4: 0x106000f4  beqz        $v1, . + 4 + (0xF4 << 2)
    ctx->pc = 0x3703B4u;
    {
        const bool branch_taken_0x3703b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3703b4) {
            ctx->pc = 0x370788u;
            return;
        }
    }
    ctx->pc = 0x3703BCu;
    // 0x3703bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3703bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3703c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3703c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3703c4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x3703c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3703c8: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x3703c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x3703cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3703ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3703d0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x3703d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3703d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3703d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3703d8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3703d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3703dc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3703dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3703e0: 0x24061e05  addiu       $a2, $zero, 0x1E05
    ctx->pc = 0x3703e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7685));
    // 0x3703e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3703e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3703e8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3703e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3703ec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3703ECu;
    SET_GPR_U32(ctx, 31, 0x3703F4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3703ECu, 0x3703F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3703F4u;
label_3703f4:
    // 0x3703f4: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x3703F4u;
    {
        const bool branch_taken_0x3703f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3703f4) {
            ctx->pc = 0x370788u;
            return;
        }
    }
    ctx->pc = 0x3703FCu;
}
