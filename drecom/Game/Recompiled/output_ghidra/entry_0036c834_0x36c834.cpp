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

// Function: entry_0036c834
// Address: 0x36c834 - 0x36c8e0
void entry_0036c834_0x36c834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036c834_0x36c834");
#endif

    switch (ctx->pc) {
        case 0x36c858u: goto label_36c858;
        case 0x36c874u: goto label_36c874;
        case 0x36c890u: goto label_36c890;
        default: break;
    }

    ctx->pc = 0x36c834u;

    // 0x36c834: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36c834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c838: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x36c838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x36c83c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36c83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36c840: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x36c840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x36c844: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x36C844u;
    {
        const bool branch_taken_0x36c844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c844) {
            ctx->pc = 0x36C8E0u;
            return;
        }
    }
    ctx->pc = 0x36C84Cu;
    // 0x36c84c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x36c84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36c850: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36C850u;
    SET_GPR_U32(ctx, 31, 0x36C858u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36C850u, 0x36C858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C858u;
label_36c858:
    // 0x36c858: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x36c858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x36c85c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36c85cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36c860: 0x0  nop
    ctx->pc = 0x36c860u;
    // NOP
    // 0x36c864: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x36c864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36c868: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x36c868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36c86c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36C86Cu;
    SET_GPR_U32(ctx, 31, 0x36C874u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36C86Cu, 0x36C874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C874u;
label_36c874:
    // 0x36c874: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36c874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c878: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36c878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36c87c: 0x244404b0  addiu       $a0, $v0, 0x4B0
    ctx->pc = 0x36c87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x36c880: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36c880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36c884: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x36c884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x36c888: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x36C888u;
    SET_GPR_U32(ctx, 31, 0x36C890u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x36C888u, 0x36C890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C890u;
label_36c890:
    // 0x36c890: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x36c890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36c894: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36c894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c898: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36c898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c89c: 0x8c421348  lw          $v0, 0x1348($v0)
    ctx->pc = 0x36c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4936)));
    // 0x36c8a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36c8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36c8a4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x36c8a8: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x36c8ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36c8b0: 0x8c421390  lw          $v0, 0x1390($v0)
    ctx->pc = 0x36c8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x36c8b4: 0xa444000e  sh          $a0, 0xE($v0)
    ctx->pc = 0x36c8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x36c8b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c8bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c8c0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36c8c4: 0x8c641348  lw          $a0, 0x1348($v1)
    ctx->pc = 0x36c8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4936)));
    // 0x36c8c8: 0x244504b0  addiu       $a1, $v0, 0x4B0
    ctx->pc = 0x36c8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x36c8cc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x36c8ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36c8d0: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x36c8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36c8d4: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x36c8d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36c8d8: 0xc0df26c  jal         func_37C9B0
    ctx->pc = 0x36C8D8u;
    SET_GPR_U32(ctx, 31, 0x36C8E0u);
    ctx->pc = 0x37C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C9B0u, 0x36C8D8u, 0x36C8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C8E0u;
}
