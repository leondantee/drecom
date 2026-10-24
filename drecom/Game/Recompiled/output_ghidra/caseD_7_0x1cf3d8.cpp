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
// Address: 0x1cf3d8 - 0x1cf4b4
void caseD_7_0x1cf3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1cf3d8");
#endif

    switch (ctx->pc) {
        case 0x1cf3fcu: goto label_1cf3fc;
        case 0x1cf40cu: goto label_1cf40c;
        case 0x1cf424u: goto label_1cf424;
        case 0x1cf434u: goto label_1cf434;
        case 0x1cf4b0u: goto label_1cf4b0;
        default: break;
    }

    ctx->pc = 0x1cf3d8u;

    // 0x1cf3d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf3dc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1cf3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cf3e0: 0x3c058040  lui         $a1, 0x8040
    ctx->pc = 0x1cf3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32832 << 16));
    // 0x1cf3e4: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x1cf3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1cf3e8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1cf3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1cf3ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf3f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cf3f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cf3f4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CF3F4u;
    SET_GPR_U32(ctx, 31, 0x1CF3FCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CF3F4u, 0x1CF3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF3FCu;
label_1cf3fc:
    // 0x1cf3fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cf3fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf400: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf404: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CF404u;
    SET_GPR_U32(ctx, 31, 0x1CF40Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CF404u, 0x1CF40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF40Cu;
label_1cf40c:
    // 0x1cf40c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cf40cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf410: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cf410u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cf414: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf418: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cf418u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cf41c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1CF41Cu;
    SET_GPR_U32(ctx, 31, 0x1CF424u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CF41Cu, 0x1CF424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF424u;
label_1cf424:
    // 0x1cf424: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cf424u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf428: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cf428u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cf42c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CF42Cu;
    SET_GPR_U32(ctx, 31, 0x1CF434u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CF42Cu, 0x1CF434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF434u;
label_1cf434:
    // 0x1cf434: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cf434u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf438: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf43c: 0x90a309e7  lbu         $v1, 0x9E7($a1)
    ctx->pc = 0x1cf43cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x1cf440: 0x106002d5  beqz        $v1, . + 4 + (0x2D5 << 2)
    ctx->pc = 0x1CF440u;
    {
        const bool branch_taken_0x1cf440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf440) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CF448u;
    // 0x1cf448: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf44c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1cf44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cf450: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1cf450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1cf454: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1cf454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1cf458: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CF458u;
    {
        const bool branch_taken_0x1cf458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf458) {
            ctx->pc = 0x1CF51Cu;
            return;
        }
    }
    ctx->pc = 0x1CF460u;
    // 0x1cf460: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cf460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf464: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf468: 0xe4801564  swc1        $f0, 0x1564($a0)
    ctx->pc = 0x1cf468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5476), bits); }
    // 0x1cf46c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf470: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1cf470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf474: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf478: 0xe4801568  swc1        $f0, 0x1568($a0)
    ctx->pc = 0x1cf478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5480), bits); }
    // 0x1cf47c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf480: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cf480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf484: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf488: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1cf488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1cf48c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf490: 0xa4801574  sh          $zero, 0x1574($a0)
    ctx->pc = 0x1cf490u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cf494: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf498: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1cf498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1cf49c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF49Cu;
    {
        const bool branch_taken_0x1cf49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf49c) {
            ctx->pc = 0x1CF4B4u;
            return;
        }
    }
    ctx->pc = 0x1CF4A4u;
    // 0x1cf4a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf4a8: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1CF4A8u;
    SET_GPR_U32(ctx, 31, 0x1CF4B0u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1CF4A8u, 0x1CF4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF4B0u;
label_1cf4b0:
    // 0x1cf4b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cf4b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1cf4b4u;
}
