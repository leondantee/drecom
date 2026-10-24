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

// Function: entry_0014cd70
// Address: 0x14cd70 - 0x14ce00
void entry_0014cd70_0x14cd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cd70_0x14cd70");
#endif

    switch (ctx->pc) {
        case 0x14cd94u: goto label_14cd94;
        case 0x14cdacu: goto label_14cdac;
        case 0x14cdc0u: goto label_14cdc0;
        case 0x14cdd4u: goto label_14cdd4;
        case 0x14cde0u: goto label_14cde0;
        default: break;
    }

    ctx->pc = 0x14cd70u;

    // 0x14cd70: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cd74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cd78: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x14cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x14cd7c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14cd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14cd80: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14cd80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14cd84: 0xc48c11f8  lwc1        $f12, 0x11F8($a0)
    ctx->pc = 0x14cd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14cd88: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x14cd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14cd8c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x14CD8Cu;
    SET_GPR_U32(ctx, 31, 0x14CD94u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x14CD8Cu, 0x14CD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD94u;
label_14cd94:
    // 0x14cd94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cd98: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14cd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x14cd9c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cda0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14cda0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14cda4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14CDA4u;
    SET_GPR_U32(ctx, 31, 0x14CDACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14CDA4u, 0x14CDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDACu;
label_14cdac:
    // 0x14cdac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cdb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cdb4: 0xc44c11f8  lwc1        $f12, 0x11F8($v0)
    ctx->pc = 0x14cdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14cdb8: 0xc05cd58  jal         func_173560
    ctx->pc = 0x14CDB8u;
    SET_GPR_U32(ctx, 31, 0x14CDC0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x14CDB8u, 0x14CDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDC0u;
label_14cdc0:
    // 0x14cdc0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14cdc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14cdc4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cdc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14cdc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14cdcc: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14CDCCu;
    SET_GPR_U32(ctx, 31, 0x14CDD4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14CDCCu, 0x14CDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDD4u;
label_14cdd4:
    // 0x14cdd4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14cdd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14cdd8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14CDD8u;
    SET_GPR_U32(ctx, 31, 0x14CDE0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14CDD8u, 0x14CDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDE0u;
label_14cde0:
    // 0x14cde0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cde4: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x14cde4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x14cde8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14cde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14cdec: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x14cdecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x14cdf0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CDF0u;
    {
        const bool branch_taken_0x14cdf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cdf0) {
            ctx->pc = 0x14CE00u;
            return;
        }
    }
    ctx->pc = 0x14CDF8u;
    // 0x14cdf8: 0xc05776c  jal         func_15DDB0
    ctx->pc = 0x14CDF8u;
    SET_GPR_U32(ctx, 31, 0x14CE00u);
    ctx->pc = 0x15DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DDB0u, 0x14CDF8u, 0x14CE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE00u;
}
