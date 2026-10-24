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

// Function: entry_0036bf44
// Address: 0x36bf44 - 0x36bff0
void entry_0036bf44_0x36bf44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036bf44_0x36bf44");
#endif

    switch (ctx->pc) {
        case 0x36bf68u: goto label_36bf68;
        case 0x36bf84u: goto label_36bf84;
        case 0x36bfa0u: goto label_36bfa0;
        default: break;
    }

    ctx->pc = 0x36bf44u;

    // 0x36bf44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36bf48: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x36bf48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x36bf4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36bf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36bf50: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x36bf50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x36bf54: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x36BF54u;
    {
        const bool branch_taken_0x36bf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bf54) {
            ctx->pc = 0x36BFF0u;
            return;
        }
    }
    ctx->pc = 0x36BF5Cu;
    // 0x36bf5c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x36bf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36bf60: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36BF60u;
    SET_GPR_U32(ctx, 31, 0x36BF68u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36BF60u, 0x36BF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BF68u;
label_36bf68:
    // 0x36bf68: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x36bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x36bf6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36bf6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36bf70: 0x0  nop
    ctx->pc = 0x36bf70u;
    // NOP
    // 0x36bf74: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x36bf74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36bf78: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x36bf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36bf7c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36BF7Cu;
    SET_GPR_U32(ctx, 31, 0x36BF84u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36BF7Cu, 0x36BF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BF84u;
label_36bf84:
    // 0x36bf84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36bf88: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36bf8c: 0x244404b0  addiu       $a0, $v0, 0x4B0
    ctx->pc = 0x36bf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x36bf90: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36bf94: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x36bf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x36bf98: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x36BF98u;
    SET_GPR_U32(ctx, 31, 0x36BFA0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x36BF98u, 0x36BFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BFA0u;
label_36bfa0:
    // 0x36bfa0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x36bfa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36bfa4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x36bfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36bfa8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36bfac: 0x8c421348  lw          $v0, 0x1348($v0)
    ctx->pc = 0x36bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4936)));
    // 0x36bfb0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36bfb4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36bfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x36bfb8: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x36bfbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36bfc0: 0x8c421390  lw          $v0, 0x1390($v0)
    ctx->pc = 0x36bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x36bfc4: 0xa444000e  sh          $a0, 0xE($v0)
    ctx->pc = 0x36bfc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x36bfc8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36bfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36bfcc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36bfd0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36bfd4: 0x8c641348  lw          $a0, 0x1348($v1)
    ctx->pc = 0x36bfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4936)));
    // 0x36bfd8: 0x244504b0  addiu       $a1, $v0, 0x4B0
    ctx->pc = 0x36bfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x36bfdc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x36bfdcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36bfe0: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x36bfe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36bfe4: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x36bfe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36bfe8: 0xc0df26c  jal         func_37C9B0
    ctx->pc = 0x36BFE8u;
    SET_GPR_U32(ctx, 31, 0x36BFF0u);
    ctx->pc = 0x37C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C9B0u, 0x36BFE8u, 0x36BFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BFF0u;
}
