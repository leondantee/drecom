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

// Function: entry_001cfa6c
// Address: 0x1cfa6c - 0x1cfb1c
void entry_001cfa6c_0x1cfa6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfa6c_0x1cfa6c");
#endif

    switch (ctx->pc) {
        case 0x1cfa78u: goto label_1cfa78;
        case 0x1cfa90u: goto label_1cfa90;
        case 0x1cfa9cu: goto label_1cfa9c;
        case 0x1cfb18u: goto label_1cfb18;
        default: break;
    }

    ctx->pc = 0x1cfa6cu;

    // 0x1cfa6c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfa70: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CFA70u;
    SET_GPR_U32(ctx, 31, 0x1CFA78u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CFA70u, 0x1CFA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA78u;
label_1cfa78:
    // 0x1cfa78: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cfa78u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cfa7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cfa7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cfa80: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfa80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfa84: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cfa84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cfa88: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1CFA88u;
    SET_GPR_U32(ctx, 31, 0x1CFA90u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CFA88u, 0x1CFA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA90u;
label_1cfa90:
    // 0x1cfa90: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cfa90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cfa94: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CFA94u;
    SET_GPR_U32(ctx, 31, 0x1CFA9Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CFA94u, 0x1CFA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA9Cu;
label_1cfa9c:
    // 0x1cfa9c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cfa9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cfaa0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfaa4: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x1cfaa4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1cfaa8: 0x1080013b  beqz        $a0, . + 4 + (0x13B << 2)
    ctx->pc = 0x1CFAA8u;
    {
        const bool branch_taken_0x1cfaa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfaa8) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CFAB0u;
    // 0x1cfab0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfab4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1cfab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cfab8: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1cfab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1cfabc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1cfabcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1cfac0: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CFAC0u;
    {
        const bool branch_taken_0x1cfac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfac0) {
            ctx->pc = 0x1CFB84u;
            return;
        }
    }
    ctx->pc = 0x1CFAC8u;
    // 0x1cfac8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfac8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfacc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfad0: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1cfad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1cfad4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfad8: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x1cfad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfadc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cfadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfae0: 0xe4a01568  swc1        $f0, 0x1568($a1)
    ctx->pc = 0x1cfae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 5480), bits); }
    // 0x1cfae4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfae8: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cfae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfaec: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cfaecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfaf0: 0xe4a01570  swc1        $f0, 0x1570($a1)
    ctx->pc = 0x1cfaf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 5488), bits); }
    // 0x1cfaf4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfaf8: 0xa4801574  sh          $zero, 0x1574($a0)
    ctx->pc = 0x1cfaf8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cfafc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfb00: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1cfb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1cfb04: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CFB04u;
    {
        const bool branch_taken_0x1cfb04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfb04) {
            ctx->pc = 0x1CFB1Cu;
            return;
        }
    }
    ctx->pc = 0x1CFB0Cu;
    // 0x1cfb0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfb10: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1CFB10u;
    SET_GPR_U32(ctx, 31, 0x1CFB18u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1CFB10u, 0x1CFB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFB18u;
label_1cfb18:
    // 0x1cfb18: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cfb18u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1cfb1cu;
}
