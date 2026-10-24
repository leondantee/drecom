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

// Function: entry_002cb160
// Address: 0x2cb160 - 0x2cb1f8
void entry_002cb160_0x2cb160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cb160_0x2cb160");
#endif

    switch (ctx->pc) {
        case 0x2cb178u: goto label_2cb178;
        case 0x2cb198u: goto label_2cb198;
        case 0x2cb1a8u: goto label_2cb1a8;
        case 0x2cb1b4u: goto label_2cb1b4;
        case 0x2cb1f0u: goto label_2cb1f0;
        default: break;
    }

    ctx->pc = 0x2cb160u;

    // 0x2cb160: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb164: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x2cb164u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb168: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb16c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cb16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cb170: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CB170u;
    SET_GPR_U32(ctx, 31, 0x2CB178u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CB170u, 0x2CB178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB178u;
label_2cb178:
    // 0x2cb178: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb17c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb180: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb184: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cb184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cb188: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2cb188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2cb18c: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2cb18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2cb190: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CB190u;
    SET_GPR_U32(ctx, 31, 0x2CB198u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CB190u, 0x2CB198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB198u;
label_2cb198:
    // 0x2cb198: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb19c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cb19cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cb1a0: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CB1A0u;
    SET_GPR_U32(ctx, 31, 0x2CB1A8u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CB1A0u, 0x2CB1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB1A8u;
label_2cb1a8:
    // 0x2cb1a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb1ac: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CB1ACu;
    SET_GPR_U32(ctx, 31, 0x2CB1B4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CB1ACu, 0x2CB1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB1B4u;
label_2cb1b4:
    // 0x2cb1b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb1b8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2cb1b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2cb1bc: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x2CB1BCu;
    {
        const bool branch_taken_0x2cb1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb1bc) {
            ctx->pc = 0x2CB384u;
            return;
        }
    }
    ctx->pc = 0x2CB1C4u;
    // 0x2cb1c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2cb1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cb1c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb1cc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cb1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cb1d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb1d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb1d8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cb1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cb1dc: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2cb1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2cb1e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cb1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb1e4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cb1e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cb1e8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CB1E8u;
    SET_GPR_U32(ctx, 31, 0x2CB1F0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CB1E8u, 0x2CB1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB1F0u;
label_2cb1f0:
    // 0x2cb1f0: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2CB1F0u;
    {
        const bool branch_taken_0x2cb1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb1f0) {
            ctx->pc = 0x2CB384u;
            return;
        }
    }
    ctx->pc = 0x2CB1F8u;
}
