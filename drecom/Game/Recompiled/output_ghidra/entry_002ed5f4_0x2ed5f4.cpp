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

// Function: entry_002ed5f4
// Address: 0x2ed5f4 - 0x2ed728
void entry_002ed5f4_0x2ed5f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ed5f4_0x2ed5f4");
#endif

    switch (ctx->pc) {
        case 0x2ed6f8u: goto label_2ed6f8;
        default: break;
    }

    ctx->pc = 0x2ed5f4u;

    // 0x2ed5f4: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x2ed5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x2ed5f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ed5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed5fc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2ed5fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2ed600: 0x32420003  andi        $v0, $s2, 0x3
    ctx->pc = 0x2ed600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x2ed604: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ed604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed608: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ed608u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ed60c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2ed60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ed610: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ed610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ed614: 0x3c023c00  lui         $v0, 0x3C00
    ctx->pc = 0x2ed614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15360 << 16));
    // 0x2ed618: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ed618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ed61c: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2ed61cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2ed620: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x2ed620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x2ed624: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ed624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ed628: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ed628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed62c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ed62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2ed630: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ed630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed634: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2ed634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ed638: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2ed638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2ed63c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ed63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed640: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ed640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ed644: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ed644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ed648: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ed648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ed64c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ed64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ed650: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ed650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ed654: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2ed654u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed658: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2ed658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ed65c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ed65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed660: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ed660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ed664: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ed664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ed668: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ed668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ed66c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ed66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ed670: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ed670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ed674: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2ed674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2ed678: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2ed678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2ed67c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ed67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed680: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ed680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ed684: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ed684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ed688: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ed688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ed68c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ed68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ed690: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ed690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ed694: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2ed694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed698: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ed698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ed69c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ed69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed6a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ed6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ed6a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ed6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ed6a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ed6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ed6ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ed6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ed6b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ed6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ed6b4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2ed6b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2ed6b8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2ed6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ed6bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ed6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ed6c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ed6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed6c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ed6c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ed6c8: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x2ed6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x2ed6cc: 0x3c02000e  lui         $v0, 0xE
    ctx->pc = 0x2ed6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14 << 16));
    // 0x2ed6d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ed6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ed6d4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2ed6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2ed6d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ed6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ed6dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ed6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed6e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ed6e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ed6e4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2ed6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ed6e8: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2ed6e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed6ec: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2ed6ecu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2ed6f0: 0xc0634c8  jal         func_18D320
    ctx->pc = 0x2ED6F0u;
    SET_GPR_U32(ctx, 31, 0x2ED6F8u);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x2ED6F0u, 0x2ED6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED6F8u;
label_2ed6f8:
    // 0x2ed6f8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2ed6f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ed6fc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ed6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ed700: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ed700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ed704: 0x1203004e  beq         $s0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x2ED704u;
    {
        const bool branch_taken_0x2ed704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ed704) {
            ctx->pc = 0x2ED840u;
            return;
        }
    }
    ctx->pc = 0x2ED70Cu;
    // 0x2ed70c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ed70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed710: 0xa20202a8  sb          $v0, 0x2A8($s0)
    ctx->pc = 0x2ed710u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ed714: 0x93a200e8  lbu         $v0, 0xE8($sp)
    ctx->pc = 0x2ed714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2ed718: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ed718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ed71c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ED71Cu;
    {
        const bool branch_taken_0x2ed71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed71c) {
            ctx->pc = 0x2ED728u;
            return;
        }
    }
    ctx->pc = 0x2ED724u;
    // 0x2ed724: 0xa20002aa  sb          $zero, 0x2AA($s0)
    ctx->pc = 0x2ed724u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 682), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2ed728u;
}
