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

// Function: entry_00157410
// Address: 0x157410 - 0x1574e4
void entry_00157410_0x157410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157410_0x157410");
#endif

    switch (ctx->pc) {
        case 0x157464u: goto label_157464;
        default: break;
    }

    ctx->pc = 0x157410u;

    // 0x157410: 0x92835524  lbu         $v1, 0x5524($s4)
    ctx->pc = 0x157410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 21796)));
    // 0x157414: 0x301e0001  andi        $fp, $zero, 0x1
    ctx->pc = 0x157414u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x157418: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x157418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x15741c: 0x241efffb  addiu       $fp, $zero, -0x5
    ctx->pc = 0x15741cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x157420: 0x7eb024  and         $s6, $v1, $fp
    ctx->pc = 0x157420u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x157424: 0x2c21025  or          $v0, $s6, $v0
    ctx->pc = 0x157424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x157428: 0xa2825524  sb          $v0, 0x5524($s4)
    ctx->pc = 0x157428u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 21796), (uint8_t)GPR_U32(ctx, 2));
    // 0x15742c: 0x92855524  lbu         $a1, 0x5524($s4)
    ctx->pc = 0x15742cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 21796)));
    // 0x157430: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x157430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x157434: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x157434u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x157438: 0x2403ffe7  addiu       $v1, $zero, -0x19
    ctx->pc = 0x157438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x15743c: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x15743cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x157440: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x157440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x157444: 0xa2835524  sb          $v1, 0x5524($s4)
    ctx->pc = 0x157444u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 21796), (uint8_t)GPR_U32(ctx, 3));
    // 0x157448: 0x26825508  addiu       $v0, $s4, 0x5508
    ctx->pc = 0x157448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 21768));
    // 0x15744c: 0xaee20008  sw          $v0, 0x8($s7)
    ctx->pc = 0x15744cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 2));
    // 0x157450: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x157450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x157454: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x157454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x157458: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x157458u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x15745c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x15745Cu;
    SET_GPR_U32(ctx, 31, 0x157464u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x15745Cu, 0x157464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157464u;
label_157464:
    // 0x157464: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x157464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x157468: 0x2446ecd0  addiu       $a2, $v0, -0x1330
    ctx->pc = 0x157468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962384));
    // 0x15746c: 0x269654e0  addiu       $s6, $s4, 0x54E0
    ctx->pc = 0x15746cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 21728));
    // 0x157470: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x157470u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x47ECD0u));
    // 0x157474: 0xdcc40008  ld          $a0, 0x8($a2)
    ctx->pc = 0x157474u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x47ECD8u));
    // 0x157478: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x157478u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x47ECE0u));
    // 0x15747c: 0xdcc20018  ld          $v0, 0x18($a2)
    ctx->pc = 0x15747cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47ECE8u));
    // 0x157480: 0xfec50000  sd          $a1, 0x0($s6)
    ctx->pc = 0x157480u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 5));
    // 0x157484: 0xfec40008  sd          $a0, 0x8($s6)
    ctx->pc = 0x157484u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 4));
    // 0x157488: 0xfec30010  sd          $v1, 0x10($s6)
    ctx->pc = 0x157488u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 16), GPR_U64(ctx, 3));
    // 0x15748c: 0xfec20018  sd          $v0, 0x18($s6)
    ctx->pc = 0x15748cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 24), GPR_U64(ctx, 2));
    // 0x157490: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x157490u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47ECF0u));
    // 0x157494: 0xfec20020  sd          $v0, 0x20($s6)
    ctx->pc = 0x157494u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 32), GPR_U64(ctx, 2));
    // 0x157498: 0x928354fc  lbu         $v1, 0x54FC($s4)
    ctx->pc = 0x157498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 21756)));
    // 0x15749c: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x15749cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1574a0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1574a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1574a4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1574a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1574a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1574a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1574ac: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1574acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1574b0: 0xa28254fc  sb          $v0, 0x54FC($s4)
    ctx->pc = 0x1574b0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 21756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1574b4: 0x929654fc  lbu         $s6, 0x54FC($s4)
    ctx->pc = 0x1574b4u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 21756)));
    // 0x1574b8: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x1574b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1574bc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1574bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1574c0: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x1574c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x1574c4: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x1574c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x1574c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1574c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1574cc: 0xa28254fc  sb          $v0, 0x54FC($s4)
    ctx->pc = 0x1574ccu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 21756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1574d0: 0x268300dc  addiu       $v1, $s4, 0xDC
    ctx->pc = 0x1574d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 220));
    // 0x1574d4: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1574d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1574d8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1574d8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1574dc: 0x100003c0  b           . + 4 + (0x3C0 << 2)
    ctx->pc = 0x1574DCu;
    {
        const bool branch_taken_0x1574dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1574dc) {
            ctx->pc = 0x1583E0u;
            return;
        }
    }
    ctx->pc = 0x1574E4u;
}
