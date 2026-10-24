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

// Function: caseD_d
// Address: 0x2212ac - 0x2212fc
void caseD_d_0x2212ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x2212ac");
#endif

    switch (ctx->pc) {
        case 0x2212acu: goto label_2212ac;
        case 0x2212b0u: goto label_2212b0;
        case 0x2212b4u: goto label_2212b4;
        case 0x2212b8u: goto label_2212b8;
        case 0x2212bcu: goto label_2212bc;
        case 0x2212c0u: goto label_2212c0;
        case 0x2212c4u: goto label_2212c4;
        case 0x2212c8u: goto label_2212c8;
        case 0x2212ccu: goto label_2212cc;
        case 0x2212d0u: goto label_2212d0;
        case 0x2212d4u: goto label_2212d4;
        case 0x2212d8u: goto label_2212d8;
        case 0x2212dcu: goto label_2212dc;
        case 0x2212e0u: goto label_2212e0;
        case 0x2212e4u: goto label_2212e4;
        case 0x2212e8u: goto label_2212e8;
        case 0x2212ecu: goto label_2212ec;
        case 0x2212f0u: goto label_2212f0;
        case 0x2212f4u: goto label_2212f4;
        case 0x2212f8u: goto label_2212f8;
        default: break;
    }

    ctx->pc = 0x2212acu;

label_2212ac:
    // 0x2212ac: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2212acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2212b0:
    // 0x2212b0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2212b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2212b4:
    // 0x2212b4: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x2212b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2212b8:
    // 0x2212b8: 0x30650400  andi        $a1, $v1, 0x400
    ctx->pc = 0x2212b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_2212bc:
    // 0x2212bc: 0x14a0002c  bnez        $a1, . + 4 + (0x2C << 2)
label_2212c0:
    if (ctx->pc == 0x2212C0u) {
        ctx->pc = 0x2212C4u;
        goto label_2212c4;
    }
    ctx->pc = 0x2212BCu;
    {
        const bool branch_taken_0x2212bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2212bc) {
            ctx->pc = 0x221370u;
            return;
        }
    }
    ctx->pc = 0x2212C4u;
label_2212c4:
    // 0x2212c4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2212c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2212c8:
    // 0x2212c8: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x2212c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
label_2212cc:
    // 0x2212cc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2212ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2212d0:
    // 0x2212d0: 0x2085fff6  addi        $a1, $a0, -0xA
    ctx->pc = 0x2212d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4294967286, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2212d4:
    // 0x2212d4: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x2212d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2212d8:
    // 0x2212d8: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
label_2212dc:
    if (ctx->pc == 0x2212DCu) {
        ctx->pc = 0x2212E0u;
        goto label_2212e0;
    }
    ctx->pc = 0x2212D8u;
    {
        const bool branch_taken_0x2212d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2212d8) {
            ctx->pc = 0x221370u;
            return;
        }
    }
    ctx->pc = 0x2212E0u;
label_2212e0:
    // 0x2212e0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2212e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2212e4:
    // 0x2212e4: 0x24631110  addiu       $v1, $v1, 0x1110
    ctx->pc = 0x2212e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4368));
label_2212e8:
    // 0x2212e8: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x2212e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2212ec:
    // 0x2212ec: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x2212ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2212f0:
    // 0x2212f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2212f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2212f4:
    // 0x2212f4: 0x600008  jr          $v1
label_2212f8:
    if (ctx->pc == 0x2212F8u) {
        ctx->pc = 0x2212FCu;
        goto label_fallthrough_0x2212f4;
    }
    ctx->pc = 0x2212F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2212F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2212f4:
    ctx->pc = 0x2212FCu;
}
