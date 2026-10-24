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

// Function: entry_0030df64
// Address: 0x30df64 - 0x30e02c
void entry_0030df64_0x30df64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030df64_0x30df64");
#endif

    switch (ctx->pc) {
        case 0x30df9cu: goto label_30df9c;
        case 0x30dfacu: goto label_30dfac;
        case 0x30dfb8u: goto label_30dfb8;
        case 0x30dfc8u: goto label_30dfc8;
        case 0x30dfd4u: goto label_30dfd4;
        default: break;
    }

    ctx->pc = 0x30df64u;

    // 0x30df64: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x30df64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x30df68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30df68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30df6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30df6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30df70: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30df70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30df74: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x30df74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x30df78: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x30df78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30df7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30df80: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30df80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30df84: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x30df84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30df88: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30df88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30df8c: 0x24460330  addiu       $a2, $v0, 0x330
    ctx->pc = 0x30df8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 816));
    // 0x30df90: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x30df90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30df94: 0xc086488  jal         func_219220
    ctx->pc = 0x30DF94u;
    SET_GPR_U32(ctx, 31, 0x30DF9Cu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x30DF94u, 0x30DF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DF9Cu;
label_30df9c:
    // 0x30df9c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30df9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dfa0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30dfa0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30dfa4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30DFA4u;
    SET_GPR_U32(ctx, 31, 0x30DFACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30DFA4u, 0x30DFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DFACu;
label_30dfac:
    // 0x30dfac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dfb0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30DFB0u;
    SET_GPR_U32(ctx, 31, 0x30DFB8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30DFB0u, 0x30DFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DFB8u;
label_30dfb8:
    // 0x30dfb8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dfbc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30dfbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30dfc0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30DFC0u;
    SET_GPR_U32(ctx, 31, 0x30DFC8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30DFC0u, 0x30DFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DFC8u;
label_30dfc8:
    // 0x30dfc8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30dfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dfcc: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30DFCCu;
    SET_GPR_U32(ctx, 31, 0x30DFD4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30DFCCu, 0x30DFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DFD4u;
label_30dfd4:
    // 0x30dfd4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dfd8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30dfd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30dfdc: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30DFDCu;
    {
        const bool branch_taken_0x30dfdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dfdc) {
            ctx->pc = 0x30E02Cu;
            return;
        }
    }
    ctx->pc = 0x30DFE4u;
    // 0x30dfe4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30dfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dfe8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dfec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30dfecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30dff0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30dff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dff4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30dff8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30dff8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30dffc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e000: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30e000u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30e004: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e008: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30e008u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30e00c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e010: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30e010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30e014: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x30e014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e018: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30e018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30e01c: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x30e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x30e020: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30e020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30e024: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30e024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30e028: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30e028u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    ctx->pc = 0x30e02cu;
}
