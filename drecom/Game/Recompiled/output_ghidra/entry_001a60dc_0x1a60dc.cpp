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

// Function: entry_001a60dc
// Address: 0x1a60dc - 0x1a623c
void entry_001a60dc_0x1a60dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a60dc_0x1a60dc");
#endif

    switch (ctx->pc) {
        case 0x1a6120u: goto label_1a6120;
        case 0x1a6130u: goto label_1a6130;
        case 0x1a6144u: goto label_1a6144;
        case 0x1a6154u: goto label_1a6154;
        case 0x1a6160u: goto label_1a6160;
        case 0x1a61acu: goto label_1a61ac;
        case 0x1a61bcu: goto label_1a61bc;
        case 0x1a61d0u: goto label_1a61d0;
        case 0x1a61e0u: goto label_1a61e0;
        case 0x1a61ecu: goto label_1a61ec;
        case 0x1a6228u: goto label_1a6228;
        default: break;
    }

    ctx->pc = 0x1a60dcu;

    // 0x1a60dc: 0x92230314  lbu         $v1, 0x314($s1)
    ctx->pc = 0x1a60dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 788)));
    // 0x1a60e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a60e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a60e4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1a60e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1a60e8: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x1A60E8u;
    {
        const bool branch_taken_0x1a60e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a60e8) {
            ctx->pc = 0x1A623Cu;
            return;
        }
    }
    ctx->pc = 0x1A60F0u;
    // 0x1a60f0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a60f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a60f4: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x1a60f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x1a60f8: 0x3c025c00  lui         $v0, 0x5C00
    ctx->pc = 0x1a60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23552 << 16));
    // 0x1a60fc: 0x34421a06  ori         $v0, $v0, 0x1A06
    ctx->pc = 0x1a60fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6662);
    // 0x1a6100: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1a6100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1a6104: 0x3c02ff40  lui         $v0, 0xFF40
    ctx->pc = 0x1a6104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65344 << 16));
    // 0x1a6108: 0x34434040  ori         $v1, $v0, 0x4040
    ctx->pc = 0x1a6108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x1a610c: 0x260200e4  addiu       $v0, $s0, 0xE4
    ctx->pc = 0x1a610cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 228));
    // 0x1a6110: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a6110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a6114: 0x8e240300  lw          $a0, 0x300($s1)
    ctx->pc = 0x1a6114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
    // 0x1a6118: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x1A6118u;
    SET_GPR_U32(ctx, 31, 0x1A6120u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x1A6118u, 0x1A6120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6120u;
label_1a6120:
    // 0x1a6120: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1a6120u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6124: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1a6124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a6128: 0xc040044  jal         func_100110
    ctx->pc = 0x1A6128u;
    SET_GPR_U32(ctx, 31, 0x1A6130u);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A6128u, 0x1A6130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6130u;
label_1a6130:
    // 0x1a6130: 0x3c034070  lui         $v1, 0x4070
    ctx->pc = 0x1a6130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16496 << 16));
    // 0x1a6134: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1a6134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a6138: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a6138u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a613c: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1A613Cu;
    SET_GPR_U32(ctx, 31, 0x1A6144u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1A613Cu, 0x1A6144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6144u;
label_1a6144:
    // 0x1a6144: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1a6144u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a6148: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a6148u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a614c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1A614Cu;
    SET_GPR_U32(ctx, 31, 0x1A6154u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1A614Cu, 0x1A6154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6154u;
label_1a6154:
    // 0x1a6154: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a6154u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6158: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x1A6158u;
    SET_GPR_U32(ctx, 31, 0x1A6160u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x1A6158u, 0x1A6160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6160u;
label_1a6160:
    // 0x1a6160: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x1a6160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1a6164: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a6164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a6168: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a6168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a616c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a616cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a6170: 0x34438140  ori         $v1, $v0, 0x8140
    ctx->pc = 0x1a6170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33088);
    // 0x1a6174: 0x260200e8  addiu       $v0, $s0, 0xE8
    ctx->pc = 0x1a6174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
    // 0x1a6178: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a6178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a617c: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x1a617cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a6180: 0x260200ec  addiu       $v0, $s0, 0xEC
    ctx->pc = 0x1a6180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 236));
    // 0x1a6184: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a6184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a6188: 0x92220312  lbu         $v0, 0x312($s1)
    ctx->pc = 0x1a6188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 786)));
    // 0x1a618c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a618cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a6190: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x1a6190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a6194: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1a6194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a6198: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1a6198u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1a619c: 0x8e220300  lw          $v0, 0x300($s1)
    ctx->pc = 0x1a619cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
    // 0x1a61a0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a61a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a61a4: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x1A61A4u;
    SET_GPR_U32(ctx, 31, 0x1A61ACu);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x1A61A4u, 0x1A61ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A61ACu;
label_1a61ac:
    // 0x1a61ac: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1a61acu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a61b0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1a61b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a61b4: 0xc040044  jal         func_100110
    ctx->pc = 0x1A61B4u;
    SET_GPR_U32(ctx, 31, 0x1A61BCu);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A61B4u, 0x1A61BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A61BCu;
label_1a61bc:
    // 0x1a61bc: 0x3c034070  lui         $v1, 0x4070
    ctx->pc = 0x1a61bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16496 << 16));
    // 0x1a61c0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1a61c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a61c4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a61c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a61c8: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1A61C8u;
    SET_GPR_U32(ctx, 31, 0x1A61D0u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1A61C8u, 0x1A61D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A61D0u;
label_1a61d0:
    // 0x1a61d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a61d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a61d4: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1a61d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a61d8: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1A61D8u;
    SET_GPR_U32(ctx, 31, 0x1A61E0u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1A61D8u, 0x1A61E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A61E0u;
label_1a61e0:
    // 0x1a61e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a61e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a61e4: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x1A61E4u;
    SET_GPR_U32(ctx, 31, 0x1A61ECu);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x1A61E4u, 0x1A61ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A61ECu;
label_1a61ec:
    // 0x1a61ec: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x1a61ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1a61f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a61f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a61f4: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a61f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a61f8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a61f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a61fc: 0x34438280  ori         $v1, $v0, 0x8280
    ctx->pc = 0x1a61fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33408);
    // 0x1a6200: 0x260200f0  addiu       $v0, $s0, 0xF0
    ctx->pc = 0x1a6200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x1a6204: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a6204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a6208: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x1a6208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a620c: 0x260200f4  addiu       $v0, $s0, 0xF4
    ctx->pc = 0x1a620cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 244));
    // 0x1a6210: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a6210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a6214: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a6214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a6218: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a6218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a621c: 0x260500dc  addiu       $a1, $s0, 0xDC
    ctx->pc = 0x1a621cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
    // 0x1a6220: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A6220u;
    SET_GPR_U32(ctx, 31, 0x1A6228u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A6220u, 0x1A6228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6228u;
label_1a6228:
    // 0x1a6228: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a6228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a622c: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a622cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a6230: 0x26050184  addiu       $a1, $s0, 0x184
    ctx->pc = 0x1a6230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 388));
    // 0x1a6234: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A6234u;
    SET_GPR_U32(ctx, 31, 0x1A623Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A6234u, 0x1A623Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A623Cu;
}
