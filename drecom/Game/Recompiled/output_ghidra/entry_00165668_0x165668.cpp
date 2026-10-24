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

// Function: entry_00165668
// Address: 0x165668 - 0x1656e8
void entry_00165668_0x165668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165668_0x165668");
#endif

    switch (ctx->pc) {
        case 0x1656e0u: goto label_1656e0;
        default: break;
    }

    ctx->pc = 0x165668u;

    // 0x165668: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x165668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x16566c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x16566cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x165670: 0x3c025c00  lui         $v0, 0x5C00
    ctx->pc = 0x165670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23552 << 16));
    // 0x165674: 0x34421a06  ori         $v0, $v0, 0x1A06
    ctx->pc = 0x165674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6662);
    // 0x165678: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x165678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x16567c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x16567cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x165680: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x165680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x165684: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x165684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x165688: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x165688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x16568c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16568cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x165690: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x165690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x165694: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x165694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x165698: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x165698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16569c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16569cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1656a0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1656a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1656a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1656a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1656a8: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x1656a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1656ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1656acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1656b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1656b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1656b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1656b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1656b8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1656b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1656bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1656bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1656c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1656c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1656c4: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x1656c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1656c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1656c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1656cc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1656ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1656d0: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1656d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1656d4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1656d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1656d8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1656D8u;
    SET_GPR_U32(ctx, 31, 0x1656E0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1656D8u, 0x1656E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1656E0u;
label_1656e0:
    // 0x1656e0: 0x2631001c  addiu       $s1, $s1, 0x1C
    ctx->pc = 0x1656e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1656e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1656e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1656e8u;
}
