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

// Function: Wing_trans
// Address: 0x150560 - 0x150620
void Wing_trans_0x150560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Wing_trans_0x150560");
#endif

    switch (ctx->pc) {
        case 0x1505acu: goto label_1505ac;
        default: break;
    }

    ctx->pc = 0x150560u;

    // 0x150560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x150560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x150564: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x150564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x150568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x150568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15056c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15056cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x150570: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x150570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x150574: 0x2471dbc0  addiu       $s1, $v1, -0x2440
    ctx->pc = 0x150574u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x150578: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x150578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x15057c: 0x2470c960  addiu       $s0, $v1, -0x36A0
    ctx->pc = 0x15057cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953312));
    // 0x150580: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x150580u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EC968u));
    // 0x150584: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x150584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x150588: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x150588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15058c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x15058cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x150590: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x150590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x150594: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x150594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x150598: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x150598u;
    {
        const bool branch_taken_0x150598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150598) {
            ctx->pc = 0x1505C0u;
            goto label_1505c0;
        }
    }
    ctx->pc = 0x1505A0u;
    // 0x1505a0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1505a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1505a4: 0xc095df0  jal         func_2577C0
    ctx->pc = 0x1505A4u;
    SET_GPR_U32(ctx, 31, 0x1505ACu);
    ctx->pc = 0x2577C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2577C0u, 0x1505A4u, 0x1505ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1505ACu;
label_1505ac:
    // 0x1505ac: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1505acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1505b0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1505b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1505b4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1505b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1505b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1505B8u;
    {
        const bool branch_taken_0x1505b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1505b8) {
            ctx->pc = 0x150608u;
            goto label_150608;
        }
    }
    ctx->pc = 0x1505C0u;
label_1505c0:
    // 0x1505c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1505c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1505c4: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1505c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1505c8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1505c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1505cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1505ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1505d0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1505d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1505d4: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x1505d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1505d8: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x1505d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x1505dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1505dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1505e0: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1505e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1505e4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1505e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1505e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1505e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1505ec: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1505ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1505f0: 0x8c630138  lw          $v1, 0x138($v1)
    ctx->pc = 0x1505f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x1505f4: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x1505f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
    // 0x1505f8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1505f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1505fc: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x1505fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x150600: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x150600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x150604: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x150604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_150608:
    // 0x150608: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x150608u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15060c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15060cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150610: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x150610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150614: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x150614u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x150618: 0x3e00008  jr          $ra
    ctx->pc = 0x150618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150620u;
}
