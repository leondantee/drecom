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

// Function: Plw03_move
// Address: 0x1c41a0 - 0x1c4220
void Plw03_move_0x1c41a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw03_move_0x1c41a0");
#endif

    switch (ctx->pc) {
        case 0x1c41a0u: goto label_1c41a0;
        case 0x1c41a4u: goto label_1c41a4;
        case 0x1c41a8u: goto label_1c41a8;
        case 0x1c41acu: goto label_1c41ac;
        case 0x1c41b0u: goto label_1c41b0;
        case 0x1c41b4u: goto label_1c41b4;
        case 0x1c41b8u: goto label_1c41b8;
        case 0x1c41bcu: goto label_1c41bc;
        case 0x1c41c0u: goto label_1c41c0;
        case 0x1c41c4u: goto label_1c41c4;
        case 0x1c41c8u: goto label_1c41c8;
        case 0x1c41ccu: goto label_1c41cc;
        case 0x1c41d0u: goto label_1c41d0;
        case 0x1c41d4u: goto label_1c41d4;
        case 0x1c41d8u: goto label_1c41d8;
        case 0x1c41dcu: goto label_1c41dc;
        case 0x1c41e0u: goto label_1c41e0;
        case 0x1c41e4u: goto label_1c41e4;
        case 0x1c41e8u: goto label_1c41e8;
        case 0x1c41ecu: goto label_1c41ec;
        case 0x1c41f0u: goto label_1c41f0;
        case 0x1c41f4u: goto label_1c41f4;
        case 0x1c41f8u: goto label_1c41f8;
        case 0x1c41fcu: goto label_1c41fc;
        case 0x1c4200u: goto label_1c4200;
        case 0x1c4204u: goto label_1c4204;
        case 0x1c4208u: goto label_1c4208;
        case 0x1c420cu: goto label_1c420c;
        case 0x1c4210u: goto label_1c4210;
        case 0x1c4214u: goto label_1c4214;
        case 0x1c4218u: goto label_1c4218;
        case 0x1c421cu: goto label_1c421c;
        default: break;
    }

    ctx->pc = 0x1c41a0u;

label_1c41a0:
    // 0x1c41a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c41a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c41a4:
    // 0x1c41a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c41a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_1c41a8:
    // 0x1c41a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c41a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c41ac:
    // 0x1c41ac: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1c41acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_1c41b0:
    // 0x1c41b0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1c41b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1c41b4:
    // 0x1c41b4: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x1c41b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1c41b8:
    // 0x1c41b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c41b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c41bc:
    // 0x1c41bc: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x1c41bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_1c41c0:
    // 0x1c41c0: 0x946202d0  lhu         $v0, 0x2D0($v1)
    ctx->pc = 0x1c41c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 720)));
label_1c41c4:
    // 0x1c41c4: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x1c41c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
label_1c41c8:
    // 0x1c41c8: 0xa46202d0  sh          $v0, 0x2D0($v1)
    ctx->pc = 0x1c41c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 720), (uint16_t)GPR_U32(ctx, 2));
label_1c41cc:
    // 0x1c41cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c41ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c41d0:
    // 0x1c41d0: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x1c41d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_1c41d4:
    // 0x1c41d4: 0x94620460  lhu         $v0, 0x460($v1)
    ctx->pc = 0x1c41d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1120)));
label_1c41d8:
    // 0x1c41d8: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x1c41d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
label_1c41dc:
    // 0x1c41dc: 0xa4620460  sh          $v0, 0x460($v1)
    ctx->pc = 0x1c41dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1120), (uint16_t)GPR_U32(ctx, 2));
label_1c41e0:
    // 0x1c41e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c41e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c41e4:
    // 0x1c41e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c41e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c41e8:
    // 0x1c41e8: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1c41e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1c41ec:
    // 0x1c41ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c41ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c41f0:
    // 0x1c41f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c41f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c41f4:
    // 0x1c41f4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1c41f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1c41f8:
    // 0x1c41f8: 0x24429190  addiu       $v0, $v0, -0x6E70
    ctx->pc = 0x1c41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939024));
label_1c41fc:
    // 0x1c41fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c41fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c4200:
    // 0x1c4200: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c4200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c4204:
    // 0x1c4204: 0x40f809  jalr        $v0
label_1c4208:
    if (ctx->pc == 0x1C4208u) {
        ctx->pc = 0x1C420Cu;
        goto label_1c420c;
    }
    ctx->pc = 0x1C4204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C420Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4204u, 0x1C420Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C420Cu;
label_1c420c:
    // 0x1c420c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c420cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c4210:
    // 0x1c4210: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c4214:
    // 0x1c4214: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c4214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c4218:
    // 0x1c4218: 0x3e00008  jr          $ra
label_1c421c:
    if (ctx->pc == 0x1C421Cu) {
        ctx->pc = 0x1C4220u;
        goto label_fallthrough_0x1c4218;
    }
    ctx->pc = 0x1C4218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c4218:
    ctx->pc = 0x1C4220u;
}
