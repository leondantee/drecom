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

// Function: entry_0012f058
// Address: 0x12f058 - 0x12f128
void entry_0012f058_0x12f058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f058_0x12f058");
#endif

    switch (ctx->pc) {
        case 0x12f070u: goto label_12f070;
        case 0x12f09cu: goto label_12f09c;
        case 0x12f0b4u: goto label_12f0b4;
        case 0x12f0c0u: goto label_12f0c0;
        case 0x12f0d0u: goto label_12f0d0;
        case 0x12f0dcu: goto label_12f0dc;
        default: break;
    }

    ctx->pc = 0x12f058u;

    // 0x12f058: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12f058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f05c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12f05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12f060: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12f060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x12f064: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x12f064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x12f068: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x12F068u;
    SET_GPR_U32(ctx, 31, 0x12F070u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x12F068u, 0x12F070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F070u;
label_12f070:
    // 0x12f070: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12f070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f074: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x12f074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x12f078: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x12f078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x12f07c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12f07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12f080: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x12f080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12f084: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12f084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f088: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12f088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f08c: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x12f08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12f090: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x12f090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12f094: 0xc058f50  jal         func_163D40
    ctx->pc = 0x12F094u;
    SET_GPR_U32(ctx, 31, 0x12F09Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12F094u, 0x12F09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F09Cu;
label_12f09c:
    // 0x12f09c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f0a0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12f0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x12f0a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12f0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f0a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12f0a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f0ac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12F0ACu;
    SET_GPR_U32(ctx, 31, 0x12F0B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12F0ACu, 0x12F0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F0B4u;
label_12f0b4:
    // 0x12f0b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12f0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f0b8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12F0B8u;
    SET_GPR_U32(ctx, 31, 0x12F0C0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12F0B8u, 0x12F0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F0C0u;
label_12f0c0:
    // 0x12f0c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12f0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f0c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12f0c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f0c8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12F0C8u;
    SET_GPR_U32(ctx, 31, 0x12F0D0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12F0C8u, 0x12F0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F0D0u;
label_12f0d0:
    // 0x12f0d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12f0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f0d4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12F0D4u;
    SET_GPR_U32(ctx, 31, 0x12F0DCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12F0D4u, 0x12F0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F0DCu;
label_12f0dc:
    // 0x12f0dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12f0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f0e0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12f0e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12f0e4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x12F0E4u;
    {
        const bool branch_taken_0x12f0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f0e4) {
            ctx->pc = 0x12F128u;
            return;
        }
    }
    ctx->pc = 0x12F0ECu;
    // 0x12f0ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12f0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f0f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f0f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12f0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12f0f8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12f0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12f0fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f100: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12f100u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12f104: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12f104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f108: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12f108u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f10c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12f10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f110: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12f110u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f114: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12f114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f118: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12f118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12f11c: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12f11cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x12f120: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12F120u;
    {
        const bool branch_taken_0x12f120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f120) {
            ctx->pc = 0x12F128u;
            return;
        }
    }
    ctx->pc = 0x12F128u;
}
