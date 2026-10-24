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

// Function: entry_001a5710
// Address: 0x1a5710 - 0x1a57c0
void entry_001a5710_0x1a5710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5710_0x1a5710");
#endif

    switch (ctx->pc) {
        case 0x1a5724u: goto label_1a5724;
        case 0x1a5738u: goto label_1a5738;
        case 0x1a574cu: goto label_1a574c;
        case 0x1a575cu: goto label_1a575c;
        default: break;
    }

    ctx->pc = 0x1a5710u;

    // 0x1a5710: 0x92020312  lbu         $v0, 0x312($s0)
    ctx->pc = 0x1a5710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 786)));
    // 0x1a5714: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a5714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a5718: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x1a5718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a571c: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x1A571Cu;
    SET_GPR_U32(ctx, 31, 0x1A5724u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x1A571Cu, 0x1A5724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5724u;
label_1a5724:
    // 0x1a5724: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x1a5724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x1a5728: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1a5728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a572c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a572cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a5730: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1A5730u;
    SET_GPR_U32(ctx, 31, 0x1A5738u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1A5730u, 0x1A5738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5738u;
label_1a5738:
    // 0x1a5738: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1a5738u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a573c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a573cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a5740: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a5740u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a5744: 0xc040044  jal         func_100110
    ctx->pc = 0x1A5744u;
    SET_GPR_U32(ctx, 31, 0x1A574Cu);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A5744u, 0x1A574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A574Cu;
label_1a574c:
    // 0x1a574c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a574cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a5750: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1a5750u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a5754: 0xc040050  jal         func_100140
    ctx->pc = 0x1A5754u;
    SET_GPR_U32(ctx, 31, 0x1A575Cu);
    ctx->pc = 0x100140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100140u, 0x1A5754u, 0x1A575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A575Cu;
label_1a575c:
    // 0x1a575c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a575cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a5760: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A5760u;
    {
        const bool branch_taken_0x1a5760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5760) {
            ctx->pc = 0x1A57C0u;
            return;
        }
    }
    ctx->pc = 0x1A5768u;
    // 0x1a5768: 0x92030314  lbu         $v1, 0x314($s0)
    ctx->pc = 0x1a5768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x1a576c: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x1a576cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1a5770: 0xa2020314  sb          $v0, 0x314($s0)
    ctx->pc = 0x1a5770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 788), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a5774: 0x8e020300  lw          $v0, 0x300($s0)
    ctx->pc = 0x1a5774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x1a5778: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a577c: 0xac223cf0  sw          $v0, 0x3CF0($at)
    ctx->pc = 0x1a577cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3CF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CF0u, _value); } while (0);
    // 0x1a5780: 0x92020312  lbu         $v0, 0x312($s0)
    ctx->pc = 0x1a5780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 786)));
    // 0x1a5784: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a5784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a5788: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1a5788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a578c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1a578cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a5790: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1a5790u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1a5794: 0x8e020300  lw          $v0, 0x300($s0)
    ctx->pc = 0x1a5794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x1a5798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a579c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a579cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a57a0: 0xac223ce0  sw          $v0, 0x3CE0($at)
    ctx->pc = 0x1a57a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3CE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CE0u, _value); } while (0);
    // 0x1a57a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a57a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a57a8: 0xac203cd0  sw          $zero, 0x3CD0($at)
    ctx->pc = 0x1a57a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D3CD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CD0u, _value); } while (0);
    // 0x1a57ac: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1a57acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a57b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a57b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a57b4: 0xac233cc0  sw          $v1, 0x3CC0($at)
    ctx->pc = 0x1a57b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D3CC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CC0u, _value); } while (0);
    // 0x1a57b8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A57B8u;
    {
        const bool branch_taken_0x1a57b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a57b8) {
            ctx->pc = 0x1A5804u;
            return;
        }
    }
    ctx->pc = 0x1A57C0u;
}
