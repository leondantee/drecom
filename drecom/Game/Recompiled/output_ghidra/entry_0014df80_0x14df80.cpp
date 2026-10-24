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

// Function: entry_0014df80
// Address: 0x14df80 - 0x14e04c
void entry_0014df80_0x14df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014df80_0x14df80");
#endif

    switch (ctx->pc) {
        case 0x14dfc8u: goto label_14dfc8;
        case 0x14dfecu: goto label_14dfec;
        case 0x14e024u: goto label_14e024;
        default: break;
    }

    ctx->pc = 0x14df80u;

    // 0x14df80: 0x920213a7  lbu         $v0, 0x13A7($s0)
    ctx->pc = 0x14df80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5031)));
    // 0x14df84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14df84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14df88: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x14DF88u;
    {
        const bool branch_taken_0x14df88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14df88) {
            ctx->pc = 0x14E04Cu;
            return;
        }
    }
    ctx->pc = 0x14DF90u;
    // 0x14df90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14df90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14df94: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14df94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14df98: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x14df98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x14df9c: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x14DF9Cu;
    {
        const bool branch_taken_0x14df9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14df9c) {
            ctx->pc = 0x14E108u;
            return;
        }
    }
    ctx->pc = 0x14DFA4u;
    // 0x14dfa4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14dfa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14dfa8: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14dfac: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x14dfacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x14dfb0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14dfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14dfb4: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x14dfb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x14dfb8: 0x920213a7  lbu         $v0, 0x13A7($s0)
    ctx->pc = 0x14dfb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5031)));
    // 0x14dfbc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14dfbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14dfc0: 0xc055600  jal         func_155800
    ctx->pc = 0x14DFC0u;
    SET_GPR_U32(ctx, 31, 0x14DFC8u);
    ctx->pc = 0x155800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155800u, 0x14DFC0u, 0x14DFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DFC8u;
label_14dfc8:
    // 0x14dfc8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x14dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x14dfcc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x14dfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x14dfd0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14dfd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14dfd4: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x14dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x14dfd8: 0x24040308  addiu       $a0, $zero, 0x308
    ctx->pc = 0x14dfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 776));
    // 0x14dfdc: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x14dfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x14dfe0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14dfe0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14dfe4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x14DFE4u;
    SET_GPR_U32(ctx, 31, 0x14DFECu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x14DFE4u, 0x14DFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DFECu;
label_14dfec:
    // 0x14dfec: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x14dfecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x14dff0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x14dff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x14dff4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14dff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14dff8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x14dff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x14dffc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14dffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14e000: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14e000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14e004: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14e004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14e008: 0x34440212  ori         $a0, $v0, 0x212
    ctx->pc = 0x14e008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)530);
    // 0x14e00c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14e00cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14e010: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14e010u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14e014: 0x8e070130  lw          $a3, 0x130($s0)
    ctx->pc = 0x14e014u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x14e018: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x14e018u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14e01c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x14E01Cu;
    SET_GPR_U32(ctx, 31, 0x14E024u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x14E01Cu, 0x14E024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E024u;
label_14e024:
    // 0x14e024: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14e024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14e028: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x14e028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x14e02c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14e02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14e030: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x14e030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x14e034: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x14e034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14e038: 0xa60213c0  sh          $v0, 0x13C0($s0)
    ctx->pc = 0x14e038u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5056), (uint16_t)GPR_U32(ctx, 2));
    // 0x14e03c: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x14e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x14e040: 0xa60313c2  sh          $v1, 0x13C2($s0)
    ctx->pc = 0x14e040u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5058), (uint16_t)GPR_U32(ctx, 3));
    // 0x14e044: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x14E044u;
    {
        const bool branch_taken_0x14e044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e044) {
            ctx->pc = 0x14E108u;
            return;
        }
    }
    ctx->pc = 0x14E04Cu;
}
