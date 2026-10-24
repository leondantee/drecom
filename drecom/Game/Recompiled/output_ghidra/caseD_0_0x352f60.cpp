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

// Function: caseD_0
// Address: 0x352f60 - 0x352fe0
void caseD_0_0x352f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x352f60");
#endif

    switch (ctx->pc) {
        case 0x352fd0u: goto label_352fd0;
        default: break;
    }

    ctx->pc = 0x352f60u;

    // 0x352f60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x352f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352f64: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x352f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x352f68: 0x9043002a  lbu         $v1, 0x2A($v0)
    ctx->pc = 0x352f68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x352f6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x352f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352f70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x352f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x352f74: 0xa043002b  sb          $v1, 0x2B($v0)
    ctx->pc = 0x352f74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 3));
    // 0x352f78: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x352f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352f7c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x352f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x352f80: 0x90430029  lbu         $v1, 0x29($v0)
    ctx->pc = 0x352f80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
    // 0x352f84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x352f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352f88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x352f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x352f8c: 0xa043002a  sb          $v1, 0x2A($v0)
    ctx->pc = 0x352f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x352f90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x352f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352f94: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x352f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x352f98: 0x9042002b  lbu         $v0, 0x2B($v0)
    ctx->pc = 0x352f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 43)));
    // 0x352f9c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x352f9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x352fa0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x352fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352fa4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x352fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x352fa8: 0x9042002a  lbu         $v0, 0x2A($v0)
    ctx->pc = 0x352fa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x352fac: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x352facu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x352fb0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x352fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352fb4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x352fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x352fb8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x352fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352fbc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x352fbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x352fc0: 0xc44c0030  lwc1        $f12, 0x30($v0)
    ctx->pc = 0x352fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x352fc4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x352fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x352fc8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x352FC8u;
    SET_GPR_U32(ctx, 31, 0x352FD0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x352FC8u, 0x352FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352FD0u;
label_352fd0:
    // 0x352fd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x352fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x352fd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x352fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352fd8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x352fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x352fdc: 0xa0430028  sb          $v1, 0x28($v0)
    ctx->pc = 0x352fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x352fe0u;
}
