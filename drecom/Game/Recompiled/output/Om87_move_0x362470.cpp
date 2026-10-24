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

// Function: Om87_move
// Address: 0x362470 - 0x3624c8
void Om87_move_0x362470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om87_move_0x362470");
#endif

    switch (ctx->pc) {
        case 0x362470u: goto label_362470;
        case 0x362474u: goto label_362474;
        case 0x362478u: goto label_362478;
        case 0x36247cu: goto label_36247c;
        case 0x362480u: goto label_362480;
        case 0x362484u: goto label_362484;
        case 0x362488u: goto label_362488;
        case 0x36248cu: goto label_36248c;
        case 0x362490u: goto label_362490;
        case 0x362494u: goto label_362494;
        case 0x362498u: goto label_362498;
        case 0x36249cu: goto label_36249c;
        case 0x3624a0u: goto label_3624a0;
        case 0x3624a4u: goto label_3624a4;
        case 0x3624a8u: goto label_3624a8;
        case 0x3624acu: goto label_3624ac;
        case 0x3624b0u: goto label_3624b0;
        case 0x3624b4u: goto label_3624b4;
        case 0x3624b8u: goto label_3624b8;
        case 0x3624bcu: goto label_3624bc;
        case 0x3624c0u: goto label_3624c0;
        case 0x3624c4u: goto label_3624c4;
        default: break;
    }

    ctx->pc = 0x362470u;

label_362470:
    // 0x362470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x362470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_362474:
    // 0x362474: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x362474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_362478:
    // 0x362478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x362478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36247c:
    // 0x36247c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x36247cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_362480:
    // 0x362480: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x362480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_362484:
    // 0x362484: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x362484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_362488:
    // 0x362488: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x362488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36248c:
    // 0x36248c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36248cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_362490:
    // 0x362490: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x362490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_362494:
    // 0x362494: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x362494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_362498:
    // 0x362498: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x362498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36249c:
    // 0x36249c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36249cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3624a0:
    // 0x3624a0: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x3624a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
label_3624a4:
    // 0x3624a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3624a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3624a8:
    // 0x3624a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3624a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3624ac:
    // 0x3624ac: 0x40f809  jalr        $v0
label_3624b0:
    if (ctx->pc == 0x3624B0u) {
        ctx->pc = 0x3624B4u;
        goto label_3624b4;
    }
    ctx->pc = 0x3624ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3624B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3624ACu, 0x3624B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3624B4u;
label_3624b4:
    // 0x3624b4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3624b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3624b8:
    // 0x3624b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3624b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3624bc:
    // 0x3624bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3624bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3624c0:
    // 0x3624c0: 0x3e00008  jr          $ra
label_3624c4:
    if (ctx->pc == 0x3624C4u) {
        ctx->pc = 0x3624C8u;
        goto label_fallthrough_0x3624c0;
    }
    ctx->pc = 0x3624C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3624C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3624c0:
    ctx->pc = 0x3624C8u;
}
