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
// Address: 0x1c77c0 - 0x1c78a4
void caseD_7_0x1c77c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1c77c0");
#endif

    switch (ctx->pc) {
        case 0x1c77e4u: goto label_1c77e4;
        case 0x1c77f8u: goto label_1c77f8;
        case 0x1c7814u: goto label_1c7814;
        case 0x1c7824u: goto label_1c7824;
        case 0x1c78a0u: goto label_1c78a0;
        default: break;
    }

    ctx->pc = 0x1c77c0u;

    // 0x1c77c0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c77c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c77c4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c77c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c77c8: 0x3c028040  lui         $v0, 0x8040
    ctx->pc = 0x1c77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32832 << 16));
    // 0x1c77cc: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x1c77ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c77d0: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1c77d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1c77d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c77d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c77d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c77d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c77dc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C77DCu;
    SET_GPR_U32(ctx, 31, 0x1C77E4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C77DCu, 0x1C77E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77E4u;
label_1c77e4:
    // 0x1c77e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c77e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c77e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c77e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c77ec: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1c77ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1c77f0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C77F0u;
    SET_GPR_U32(ctx, 31, 0x1C77F8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C77F0u, 0x1C77F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77F8u;
label_1c77f8:
    // 0x1c77f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c77f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c77fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c77fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c7800: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7804: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1c7804u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1c7808: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c7808u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c780c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C780Cu;
    SET_GPR_U32(ctx, 31, 0x1C7814u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C780Cu, 0x1C7814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7814u;
label_1c7814:
    // 0x1c7814: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1c7814u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7818: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c7818u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c781c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C781Cu;
    SET_GPR_U32(ctx, 31, 0x1C7824u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C781Cu, 0x1C7824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7824u;
label_1c7824:
    // 0x1c7824: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1c7824u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7828: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c7828u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c782c: 0x90e809e7  lbu         $t0, 0x9E7($a3)
    ctx->pc = 0x1c782cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2535)));
    // 0x1c7830: 0x110002cc  beqz        $t0, . + 4 + (0x2CC << 2)
    ctx->pc = 0x1C7830u;
    {
        const bool branch_taken_0x1c7830 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7830) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C7838u;
    // 0x1c7838: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c783c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1c783cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c7840: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1c7840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x1c7844: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c7844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1c7848: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1C7848u;
    {
        const bool branch_taken_0x1c7848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7848) {
            ctx->pc = 0x1C790Cu;
            return;
        }
    }
    ctx->pc = 0x1C7850u;
    // 0x1c7850: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7850u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7854: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7858: 0xe4801564  swc1        $f0, 0x1564($a0)
    ctx->pc = 0x1c7858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5476), bits); }
    // 0x1c785c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c785cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7860: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1c7860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7864: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7868: 0xe4801568  swc1        $f0, 0x1568($a0)
    ctx->pc = 0x1c7868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5480), bits); }
    // 0x1c786c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c786cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7870: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1c7870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7874: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7878: 0xe4801570  swc1        $f0, 0x1570($a0)
    ctx->pc = 0x1c7878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5488), bits); }
    // 0x1c787c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c787cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7880: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1c7880u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c7884: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7888: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c7888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c788c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C788Cu;
    {
        const bool branch_taken_0x1c788c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c788c) {
            ctx->pc = 0x1C78A4u;
            return;
        }
    }
    ctx->pc = 0x1C7894u;
    // 0x1c7894: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7898: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1C7898u;
    SET_GPR_U32(ctx, 31, 0x1C78A0u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1C7898u, 0x1C78A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78A0u;
label_1c78a0:
    // 0x1c78a0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1c78a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1c78a4u;
}
