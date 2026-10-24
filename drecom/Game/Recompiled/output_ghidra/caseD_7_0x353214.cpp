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

// Function: caseD_7
// Address: 0x353214 - 0x3532c0
void caseD_7_0x353214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x353214");
#endif

    switch (ctx->pc) {
        case 0x353284u: goto label_353284;
        default: break;
    }

    ctx->pc = 0x353214u;

    // 0x353214: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353218: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x35321c: 0x9043002a  lbu         $v1, 0x2A($v0)
    ctx->pc = 0x35321cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x353220: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353224: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x353228: 0xa043002b  sb          $v1, 0x2B($v0)
    ctx->pc = 0x353228u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 3));
    // 0x35322c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35322cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353230: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x353234: 0x90430029  lbu         $v1, 0x29($v0)
    ctx->pc = 0x353234u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
    // 0x353238: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35323c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x35323cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x353240: 0xa043002a  sb          $v1, 0x2A($v0)
    ctx->pc = 0x353240u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x353244: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353248: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x35324c: 0x9042002b  lbu         $v0, 0x2B($v0)
    ctx->pc = 0x35324cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 43)));
    // 0x353250: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x353250u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x353254: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353258: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x35325c: 0x9042002a  lbu         $v0, 0x2A($v0)
    ctx->pc = 0x35325cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x353260: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x353260u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x353264: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353268: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x35326c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35326cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353270: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x353270u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x353274: 0xc44c0030  lwc1        $f12, 0x30($v0)
    ctx->pc = 0x353274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x353278: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x353278u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35327c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x35327Cu;
    SET_GPR_U32(ctx, 31, 0x353284u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x35327Cu, 0x353284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353284u;
label_353284:
    // 0x353284: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x353284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x353288: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35328c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x35328cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x353290: 0xa0430028  sb          $v1, 0x28($v0)
    ctx->pc = 0x353290u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 3));
    // 0x353294: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353298: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x35329c: 0x8442002c  lh          $v0, 0x2C($v0)
    ctx->pc = 0x35329cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x3532a0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3532a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3532a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3532a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3532a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3532a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3532ac: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3532acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3532b0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3532b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3532b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3532b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3532b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3532b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3532bc: 0xa443002e  sh          $v1, 0x2E($v0)
    ctx->pc = 0x3532bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x3532c0u;
}
