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

// Function: entry_00303a20
// Address: 0x303a20 - 0x303adc
void entry_00303a20_0x303a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00303a20_0x303a20");
#endif

    switch (ctx->pc) {
        case 0x303abcu: goto label_303abc;
        default: break;
    }

    ctx->pc = 0x303a20u;

    // 0x303a20: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303a24: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x303a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x303a28: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x303a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x303a2c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x303a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x303a30: 0x106000d3  beqz        $v1, . + 4 + (0xD3 << 2)
    ctx->pc = 0x303A30u;
    {
        const bool branch_taken_0x303a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303a30) {
            ctx->pc = 0x303D80u;
            return;
        }
    }
    ctx->pc = 0x303A38u;
    // 0x303a38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303a3c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x303a3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x303a40: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x303a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x303a44: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x303a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x303a48: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x303A48u;
    {
        const bool branch_taken_0x303a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303a48) {
            ctx->pc = 0x303C18u;
            return;
        }
    }
    ctx->pc = 0x303A50u;
    // 0x303a50: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x303a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x303a54: 0x24429500  addiu       $v0, $v0, -0x6B00
    ctx->pc = 0x303a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939904));
    // 0x303a58: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x303a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x303a5c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x303a5cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399500u));
    // 0x303a60: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x303a60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x303a64: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x303a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x303a68: 0x24429510  addiu       $v0, $v0, -0x6AF0
    ctx->pc = 0x303a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939920));
    // 0x303a6c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x303a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x303a70: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x303a70u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399510u));
    // 0x303a74: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x303a74u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x303a78: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x303a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303a7c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x303a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x303a80: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x303a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x303a84: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x303a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x303a88: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x303a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x303a8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x303a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x303a90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x303a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x303a94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x303a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x303a98: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x303a98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x303a9c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x303a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303aa0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x303aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x303aa4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x303aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x303aa8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x303aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x303aac: 0x24470300  addiu       $a3, $v0, 0x300
    ctx->pc = 0x303aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x303ab0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x303ab0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x303ab4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x303AB4u;
    SET_GPR_U32(ctx, 31, 0x303ABCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x303AB4u, 0x303ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303ABCu;
label_303abc:
    // 0x303abc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x303abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303ac0: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x303ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x303ac4: 0x2403ffe1  addiu       $v1, $zero, -0x1F
    ctx->pc = 0x303ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
    // 0x303ac8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x303ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x303acc: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x303accu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x303ad0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x303ad0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x303ad4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x303AD4u;
    {
        const bool branch_taken_0x303ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303ad4) {
            ctx->pc = 0x303BF8u;
            return;
        }
    }
    ctx->pc = 0x303ADCu;
}
