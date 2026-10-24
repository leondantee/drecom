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

// Function: entry_001ccf90
// Address: 0x1ccf90 - 0x1cd028
void entry_001ccf90_0x1ccf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccf90_0x1ccf90");
#endif

    switch (ctx->pc) {
        case 0x1ccfd0u: goto label_1ccfd0;
        case 0x1ccfdcu: goto label_1ccfdc;
        case 0x1cd008u: goto label_1cd008;
        default: break;
    }

    ctx->pc = 0x1ccf90u;

    // 0x1ccf90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccf94: 0x906209db  lbu         $v0, 0x9DB($v1)
    ctx->pc = 0x1ccf94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1ccf98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ccf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ccf9c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1ccf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1ccfa0: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x1CCFA0u;
    {
        const bool branch_taken_0x1ccfa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccfa0) {
            ctx->pc = 0x1CD16Cu;
            return;
        }
    }
    ctx->pc = 0x1CCFA8u;
    // 0x1ccfa8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1ccfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ccfac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ccfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccfb0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1ccfb0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ccfb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ccfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ccfb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ccfb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ccfbc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1ccfbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ccfc0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ccfc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ccfc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ccfc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccfc8: 0xc0561d4  jal         func_158750
    ctx->pc = 0x1CCFC8u;
    SET_GPR_U32(ctx, 31, 0x1CCFD0u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1CCFC8u, 0x1CCFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFD0u;
label_1ccfd0:
    // 0x1ccfd0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ccfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ccfd4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CCFD4u;
    SET_GPR_U32(ctx, 31, 0x1CCFDCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CCFD4u, 0x1CCFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFDCu;
label_1ccfdc:
    // 0x1ccfdc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccfe0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ccfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccfe4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1ccfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1ccfe8: 0x244203c0  addiu       $v0, $v0, 0x3C0
    ctx->pc = 0x1ccfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x1ccfec: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1ccfecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ccff0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1ccff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ccff4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1ccff4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ccff8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ccff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ccffc: 0x24679208  addiu       $a3, $v1, -0x6DF8
    ctx->pc = 0x1ccffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939144));
    // 0x1cd000: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x1CD000u;
    SET_GPR_U32(ctx, 31, 0x1CD008u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1CD000u, 0x1CD008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD008u;
label_1cd008:
    // 0x1cd008: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD008u;
    {
        const bool branch_taken_0x1cd008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd008) {
            ctx->pc = 0x1CD028u;
            return;
        }
    }
    ctx->pc = 0x1CD010u;
    // 0x1cd010: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1cd010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cd014: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd018: 0xa4461278  sh          $a2, 0x1278($v0)
    ctx->pc = 0x1cd018u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 6));
    // 0x1cd01c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1cd01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd020: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cd020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cd024: 0xac251a68  sw          $a1, 0x1A68($at)
    ctx->pc = 0x1cd024u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
    ctx->pc = 0x1cd028u;
}
