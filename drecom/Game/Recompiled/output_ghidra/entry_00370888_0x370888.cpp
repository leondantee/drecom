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

// Function: entry_00370888
// Address: 0x370888 - 0x37090c
void entry_00370888_0x370888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00370888_0x370888");
#endif

    switch (ctx->pc) {
        case 0x370898u: goto label_370898;
        case 0x3708a4u: goto label_3708a4;
        case 0x3708b0u: goto label_3708b0;
        case 0x3708bcu: goto label_3708bc;
        case 0x370904u: goto label_370904;
        default: break;
    }

    ctx->pc = 0x370888u;

    // 0x370888: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37088c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37088cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370890: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x370890u;
    SET_GPR_U32(ctx, 31, 0x370898u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x370890u, 0x370898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370898u;
label_370898:
    // 0x370898: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37089c: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x37089Cu;
    SET_GPR_U32(ctx, 31, 0x3708A4u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x37089Cu, 0x3708A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3708A4u;
label_3708a4:
    // 0x3708a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3708a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3708a8: 0xc0dd008  jal         func_374020
    ctx->pc = 0x3708A8u;
    SET_GPR_U32(ctx, 31, 0x3708B0u);
    ctx->pc = 0x374020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374020u, 0x3708A8u, 0x3708B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3708B0u;
label_3708b0:
    // 0x3708b0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3708b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3708b4: 0xc0dd150  jal         func_374540
    ctx->pc = 0x3708B4u;
    SET_GPR_U32(ctx, 31, 0x3708BCu);
    ctx->pc = 0x374540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374540u, 0x3708B4u, 0x3708BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3708BCu;
label_3708bc:
    // 0x3708bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3708bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3708c0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3708c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3708c4: 0x106000e6  beqz        $v1, . + 4 + (0xE6 << 2)
    ctx->pc = 0x3708C4u;
    {
        const bool branch_taken_0x3708c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3708c4) {
            ctx->pc = 0x370C60u;
            return;
        }
    }
    ctx->pc = 0x3708CCu;
    // 0x3708cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3708ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3708d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3708d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3708d4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x3708d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3708d8: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x3708d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x3708dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3708dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3708e0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x3708e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3708e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3708e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3708e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3708e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3708ec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3708ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3708f0: 0x24061e08  addiu       $a2, $zero, 0x1E08
    ctx->pc = 0x3708f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7688));
    // 0x3708f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3708f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3708f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3708f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3708fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3708FCu;
    SET_GPR_U32(ctx, 31, 0x370904u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3708FCu, 0x370904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370904u;
label_370904:
    // 0x370904: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x370904u;
    {
        const bool branch_taken_0x370904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370904) {
            ctx->pc = 0x370C60u;
            return;
        }
    }
    ctx->pc = 0x37090Cu;
}
