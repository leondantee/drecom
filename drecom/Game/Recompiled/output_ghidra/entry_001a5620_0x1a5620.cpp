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

// Function: entry_001a5620
// Address: 0x1a5620 - 0x1a56cc
void entry_001a5620_0x1a5620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5620_0x1a5620");
#endif

    switch (ctx->pc) {
        case 0x1a5638u: goto label_1a5638;
        case 0x1a564cu: goto label_1a564c;
        case 0x1a565cu: goto label_1a565c;
        case 0x1a566cu: goto label_1a566c;
        default: break;
    }

    ctx->pc = 0x1a5620u;

    // 0x1a5620: 0xa2000314  sb          $zero, 0x314($s0)
    ctx->pc = 0x1a5620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 788), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a5624: 0x92020311  lbu         $v0, 0x311($s0)
    ctx->pc = 0x1a5624u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 785)));
    // 0x1a5628: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1a5628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a562c: 0x62200  sll         $a0, $a2, 8
    ctx->pc = 0x1a562cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1a5630: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x1A5630u;
    SET_GPR_U32(ctx, 31, 0x1A5638u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x1A5630u, 0x1A5638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5638u;
label_1a5638:
    // 0x1a5638: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x1a5638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x1a563c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1a563cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a5640: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a5640u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a5644: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1A5644u;
    SET_GPR_U32(ctx, 31, 0x1A564Cu);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1A5644u, 0x1A564Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A564Cu;
label_1a564c:
    // 0x1a564c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1a564cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a5650: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1a5650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a5654: 0xc040044  jal         func_100110
    ctx->pc = 0x1A5654u;
    SET_GPR_U32(ctx, 31, 0x1A565Cu);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A5654u, 0x1A565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A565Cu;
label_1a565c:
    // 0x1a565c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a565cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a5660: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1a5660u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a5664: 0xc040050  jal         func_100140
    ctx->pc = 0x1A5664u;
    SET_GPR_U32(ctx, 31, 0x1A566Cu);
    ctx->pc = 0x100140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100140u, 0x1A5664u, 0x1A566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A566Cu;
label_1a566c:
    // 0x1a566c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A566Cu;
    {
        const bool branch_taken_0x1a566c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a566c) {
            ctx->pc = 0x1A56CCu;
            return;
        }
    }
    ctx->pc = 0x1A5674u;
    // 0x1a5674: 0x92030314  lbu         $v1, 0x314($s0)
    ctx->pc = 0x1a5674u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x1a5678: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a5678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a567c: 0xa2030314  sb          $v1, 0x314($s0)
    ctx->pc = 0x1a567cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 788), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a5680: 0x8e0202fc  lw          $v0, 0x2FC($s0)
    ctx->pc = 0x1a5680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 764)));
    // 0x1a5684: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5688: 0xac223cf8  sw          $v0, 0x3CF8($at)
    ctx->pc = 0x1a5688u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3CF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CF8u, _value); } while (0);
    // 0x1a568c: 0x92020311  lbu         $v0, 0x311($s0)
    ctx->pc = 0x1a568cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 785)));
    // 0x1a5690: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a5690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a5694: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x1a5694u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a5698: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1a5698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a569c: 0x418c3  sra         $v1, $a0, 3
    ctx->pc = 0x1a569cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
    // 0x1a56a0: 0x8e0202fc  lw          $v0, 0x2FC($s0)
    ctx->pc = 0x1a56a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 764)));
    // 0x1a56a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a56a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a56a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a56a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a56ac: 0xac223ce8  sw          $v0, 0x3CE8($at)
    ctx->pc = 0x1a56acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3CE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CE8u, _value); } while (0);
    // 0x1a56b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a56b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a56b4: 0xac203cd8  sw          $zero, 0x3CD8($at)
    ctx->pc = 0x1a56b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D3CD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CD8u, _value); } while (0);
    // 0x1a56b8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1a56b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a56bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a56bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a56c0: 0xac223cc8  sw          $v0, 0x3CC8($at)
    ctx->pc = 0x1a56c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3CC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CC8u, _value); } while (0);
    // 0x1a56c4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A56C4u;
    {
        const bool branch_taken_0x1a56c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a56c4) {
            ctx->pc = 0x1A5710u;
            return;
        }
    }
    ctx->pc = 0x1A56CCu;
}
