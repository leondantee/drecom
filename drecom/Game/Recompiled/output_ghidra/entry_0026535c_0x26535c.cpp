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

// Function: entry_0026535c
// Address: 0x26535c - 0x2653f0
void entry_0026535c_0x26535c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026535c_0x26535c");
#endif

    switch (ctx->pc) {
        case 0x2653a8u: goto label_2653a8;
        case 0x2653d0u: goto label_2653d0;
        case 0x2653ecu: goto label_2653ec;
        default: break;
    }

    ctx->pc = 0x26535cu;

label_26535c:
    // 0x26535c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x26535cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_265360:
    // 0x265360: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x265360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_265364:
    // 0x265364: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x265364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_265368:
    // 0x265368: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
label_26536c:
    if (ctx->pc == 0x26536Cu) {
        ctx->pc = 0x265370u;
        goto label_265370;
    }
    ctx->pc = 0x265368u;
    {
        const bool branch_taken_0x265368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265368) {
            ctx->pc = 0x265478u;
            return;
        }
    }
    ctx->pc = 0x265370u;
label_265370:
    // 0x265370: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x265370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_265374:
    // 0x265374: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x265374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
label_265378:
    // 0x265378: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x265378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_26537c:
    // 0x26537c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26537cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_265380:
    // 0x265380: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
label_265384:
    if (ctx->pc == 0x265384u) {
        ctx->pc = 0x265388u;
        goto label_265388;
    }
    ctx->pc = 0x265380u;
    {
        const bool branch_taken_0x265380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265380) {
            ctx->pc = 0x26545Cu;
            return;
        }
    }
    ctx->pc = 0x265388u;
label_265388:
    // 0x265388: 0x8e031338  lw          $v1, 0x1338($s0)
    ctx->pc = 0x265388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
label_26538c:
    // 0x26538c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x26538cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_265390:
    // 0x265390: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
label_265394:
    if (ctx->pc == 0x265394u) {
        ctx->pc = 0x265398u;
        goto label_265398;
    }
    ctx->pc = 0x265390u;
    {
        const bool branch_taken_0x265390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265390) {
            ctx->pc = 0x265478u;
            return;
        }
    }
    ctx->pc = 0x265398u;
label_265398:
    // 0x265398: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x265398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
label_26539c:
    // 0x26539c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x26539cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_2653a0:
    // 0x2653a0: 0xc040c9e  jal         func_103278
label_2653a4:
    if (ctx->pc == 0x2653A4u) {
        ctx->pc = 0x2653A8u;
        goto label_2653a8;
    }
    ctx->pc = 0x2653A0u;
    SET_GPR_U32(ctx, 31, 0x2653A8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2653A8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2653A8u) { return; }
    ctx->pc = 0x2653A8u;
label_2653a8:
    // 0x2653a8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2653a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2653ac:
    // 0x2653ac: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x2653acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
label_2653b0:
    // 0x2653b0: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x2653b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_2653b4:
    // 0x2653b4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2653b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2653b8:
    // 0x2653b8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2653b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2653bc:
    // 0x2653bc: 0x2442b8a0  addiu       $v0, $v0, -0x4760
    ctx->pc = 0x2653bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949024));
label_2653c0:
    // 0x2653c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2653c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2653c4:
    // 0x2653c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2653c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2653c8:
    // 0x2653c8: 0x40f809  jalr        $v0
label_2653cc:
    if (ctx->pc == 0x2653CCu) {
        ctx->pc = 0x2653D0u;
        goto label_2653d0;
    }
    ctx->pc = 0x2653C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2653D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2653C8u, 0x2653D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2653D0u;
label_2653d0:
    // 0x2653d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2653d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2653d4:
    // 0x2653d4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2653d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2653d8:
    // 0x2653d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2653dc:
    if (ctx->pc == 0x2653DCu) {
        ctx->pc = 0x2653E0u;
        goto label_2653e0;
    }
    ctx->pc = 0x2653D8u;
    {
        const bool branch_taken_0x2653d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2653d8) {
            ctx->pc = 0x2653F0u;
            return;
        }
    }
    ctx->pc = 0x2653E0u;
label_2653e0:
    // 0x2653e0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2653e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2653e4:
    // 0x2653e4: 0xc097a68  jal         func_25E9A0
label_2653e8:
    if (ctx->pc == 0x2653E8u) {
        ctx->pc = 0x2653ECu;
        goto label_2653ec;
    }
    ctx->pc = 0x2653E4u;
    SET_GPR_U32(ctx, 31, 0x2653ECu);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x2653E4u, 0x2653ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2653ECu;
label_2653ec:
    // 0x2653ec: 0x0  nop
    ctx->pc = 0x2653ecu;
    // NOP
    ctx->pc = 0x2653f0u;
}
