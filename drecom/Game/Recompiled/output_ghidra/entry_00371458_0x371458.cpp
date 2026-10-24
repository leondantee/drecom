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

// Function: entry_00371458
// Address: 0x371458 - 0x3714cc
void entry_00371458_0x371458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371458_0x371458");
#endif

    switch (ctx->pc) {
        case 0x371474u: goto label_371474;
        case 0x3714a4u: goto label_3714a4;
        case 0x3714c4u: goto label_3714c4;
        default: break;
    }

    ctx->pc = 0x371458u;

    // 0x371458: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x371458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37145c: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x37145cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x371460: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x371460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x371464: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x371464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x371468: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x371468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x37146c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x37146Cu;
    SET_GPR_U32(ctx, 31, 0x371474u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x37146Cu, 0x371474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371474u;
label_371474:
    // 0x371474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x371474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371478: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x371478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37147c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x37147cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x371480: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x371480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371484: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x371484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x371488: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x371488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x37148c: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x37148cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x371490: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x371490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371494: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x371494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x371498: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x371498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x37149c: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x37149Cu;
    SET_GPR_U32(ctx, 31, 0x3714A4u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x37149Cu, 0x3714A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3714A4u;
label_3714a4:
    // 0x3714a4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3714a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3714a8: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x3714a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x3714ac: 0x24120140  addiu       $s2, $zero, 0x140
    ctx->pc = 0x3714acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x3714b0: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x3714b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x3714b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3714b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3714b8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3714b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3714bc: 0xc0576a4  jal         func_15DA90
    ctx->pc = 0x3714BCu;
    SET_GPR_U32(ctx, 31, 0x3714C4u);
    ctx->pc = 0x15DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DA90u, 0x3714BCu, 0x3714C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3714C4u;
label_3714c4:
    // 0x3714c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3714c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3714c8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x3714c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x3714ccu;
}
