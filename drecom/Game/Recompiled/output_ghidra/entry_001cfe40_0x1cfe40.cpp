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

// Function: entry_001cfe40
// Address: 0x1cfe40 - 0x1cfef8
void entry_001cfe40_0x1cfe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfe40_0x1cfe40");
#endif

    switch (ctx->pc) {
        case 0x1cfe50u: goto label_1cfe50;
        case 0x1cfe68u: goto label_1cfe68;
        case 0x1cfe78u: goto label_1cfe78;
        case 0x1cfef4u: goto label_1cfef4;
        default: break;
    }

    ctx->pc = 0x1cfe40u;

    // 0x1cfe40: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cfe40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfe44: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1cfe44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cfe48: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CFE48u;
    SET_GPR_U32(ctx, 31, 0x1CFE50u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CFE48u, 0x1CFE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE50u;
label_1cfe50:
    // 0x1cfe50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cfe50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cfe54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cfe54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfe58: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cfe58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cfe5c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cfe5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cfe60: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1CFE60u;
    SET_GPR_U32(ctx, 31, 0x1CFE68u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CFE60u, 0x1CFE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE68u;
label_1cfe68:
    // 0x1cfe68: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cfe68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cfe6c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cfe6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cfe70: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CFE70u;
    SET_GPR_U32(ctx, 31, 0x1CFE78u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CFE70u, 0x1CFE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE78u;
label_1cfe78:
    // 0x1cfe78: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cfe78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cfe7c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cfe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfe80: 0x90a309e7  lbu         $v1, 0x9E7($a1)
    ctx->pc = 0x1cfe80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x1cfe84: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1CFE84u;
    {
        const bool branch_taken_0x1cfe84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfe84) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CFE8Cu;
    // 0x1cfe8c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cfe8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfe90: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x1cfe90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cfe94: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1cfe94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1cfe98: 0xc32824  and         $a1, $a2, $v1
    ctx->pc = 0x1cfe98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1cfe9c: 0x10a00030  beqz        $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CFE9Cu;
    {
        const bool branch_taken_0x1cfe9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfe9c) {
            ctx->pc = 0x1CFF60u;
            return;
        }
    }
    ctx->pc = 0x1CFEA4u;
    // 0x1cfea4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfea4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfea8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfeac: 0xe4801564  swc1        $f0, 0x1564($a0)
    ctx->pc = 0x1cfeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5476), bits); }
    // 0x1cfeb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfeb4: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1cfeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfeb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfebc: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cfebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1cfec0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfec4: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cfec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfec8: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cfec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfecc: 0xe4c01570  swc1        $f0, 0x1570($a2)
    ctx->pc = 0x1cfeccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 5488), bits); }
    // 0x1cfed0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cfed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfed4: 0xa4a01574  sh          $zero, 0x1574($a1)
    ctx->pc = 0x1cfed4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cfed8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfedc: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1cfedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
    // 0x1cfee0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CFEE0u;
    {
        const bool branch_taken_0x1cfee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfee0) {
            ctx->pc = 0x1CFEF8u;
            return;
        }
    }
    ctx->pc = 0x1CFEE8u;
    // 0x1cfee8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfeec: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1CFEECu;
    SET_GPR_U32(ctx, 31, 0x1CFEF4u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1CFEECu, 0x1CFEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFEF4u;
label_1cfef4:
    // 0x1cfef4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cfef4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1cfef8u;
}
