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

// Function: caseD_3
// Address: 0x353050 - 0x3530fc
void caseD_3_0x353050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x353050");
#endif

    switch (ctx->pc) {
        case 0x3530c0u: goto label_3530c0;
        default: break;
    }

    ctx->pc = 0x353050u;

    // 0x353050: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353054: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x353058: 0x9043002a  lbu         $v1, 0x2A($v0)
    ctx->pc = 0x353058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x35305c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35305cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353060: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x353064: 0xa043002b  sb          $v1, 0x2B($v0)
    ctx->pc = 0x353064u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 3));
    // 0x353068: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35306c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x35306cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x353070: 0x90430029  lbu         $v1, 0x29($v0)
    ctx->pc = 0x353070u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
    // 0x353074: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353078: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x35307c: 0xa043002a  sb          $v1, 0x2A($v0)
    ctx->pc = 0x35307cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x353080: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353084: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x353088: 0x9042002b  lbu         $v0, 0x2B($v0)
    ctx->pc = 0x353088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 43)));
    // 0x35308c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x35308cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x353090: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353094: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x353098: 0x9042002a  lbu         $v0, 0x2A($v0)
    ctx->pc = 0x353098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x35309c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x35309cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3530a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3530a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3530a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3530a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3530a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3530a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3530ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3530acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3530b0: 0xc44c0030  lwc1        $f12, 0x30($v0)
    ctx->pc = 0x3530b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3530b4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3530b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3530b8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x3530B8u;
    SET_GPR_U32(ctx, 31, 0x3530C0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x3530B8u, 0x3530C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3530C0u;
label_3530c0:
    // 0x3530c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3530c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3530c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3530c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3530c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3530c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3530cc: 0xa0430028  sb          $v1, 0x28($v0)
    ctx->pc = 0x3530ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 3));
    // 0x3530d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3530d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3530d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3530d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3530d8: 0x8442002c  lh          $v0, 0x2C($v0)
    ctx->pc = 0x3530d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x3530dc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3530dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3530e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3530e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3530e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3530e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3530e8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3530e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3530ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3530ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3530f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3530f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3530f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3530f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3530f8: 0xa443002e  sh          $v1, 0x2E($v0)
    ctx->pc = 0x3530f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x3530fcu;
}
