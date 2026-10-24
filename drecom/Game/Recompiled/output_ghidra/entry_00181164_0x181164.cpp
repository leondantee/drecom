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

// Function: entry_00181164
// Address: 0x181164 - 0x181228
void entry_00181164_0x181164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181164_0x181164");
#endif

    switch (ctx->pc) {
        case 0x1811dcu: goto label_1811dc;
        default: break;
    }

    ctx->pc = 0x181164u;

    // 0x181164: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181168: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181168u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x18116c: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x18116cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181170: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181170u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181174: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x181174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181178: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18117c: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x18117cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181180: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181184: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x181184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181188: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x181188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18118c: 0x8cc30158  lw          $v1, 0x158($a2)
    ctx->pc = 0x18118cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 344)));
    // 0x181190: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x181190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x181194: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x181194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x181198: 0x14660023  bne         $v1, $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x181198u;
    {
        const bool branch_taken_0x181198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x181198) {
            ctx->pc = 0x181228u;
            return;
        }
    }
    ctx->pc = 0x1811A0u;
    // 0x1811a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1811a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1811a4: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1811a4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1811a8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1811a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1811ac: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1811acu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1811b0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1811b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1811b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1811b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1811b8: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1811b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1811bc: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1811bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x1811c0: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x1811c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x1811c4: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1811c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1811c8: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x1811c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1811cc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1811ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1811d0: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1811d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1811d4: 0xc05ec8c  jal         func_17B230
    ctx->pc = 0x1811D4u;
    SET_GPR_U32(ctx, 31, 0x1811DCu);
    ctx->pc = 0x17B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B230u, 0x1811D4u, 0x1811DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1811DCu;
label_1811dc:
    // 0x1811dc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1811dcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1811e0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1811e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1811e4: 0x8427f138  lh          $a3, -0xEC8($at)
    ctx->pc = 0x1811e4u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x47F138u));
    // 0x1811e8: 0x7343c  dsll32      $a2, $a3, 16
    ctx->pc = 0x1811e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
    // 0x1811ec: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1811ecu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1811f0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1811f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1811f4: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x1811f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1811f8: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x1811f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x1811fc: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1811fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181200: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x181200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181204: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181208: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x181208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x18120c: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x18120cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x181210: 0x26030190  addiu       $v1, $s0, 0x190
    ctx->pc = 0x181210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x181214: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x181214u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x181218: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x181218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18121c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18121cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181220: 0x0  nop
    ctx->pc = 0x181220u;
    // NOP
    // 0x181224: 0xe600019c  swc1        $f0, 0x19C($s0)
    ctx->pc = 0x181224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 412), bits); }
    ctx->pc = 0x181228u;
}
