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

// Function: Pl_em_dam_em0a_catch
// Address: 0x36a0a0 - 0x36a0fc
void Pl_em_dam_em0a_catch_0x36a0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_em_dam_em0a_catch_0x36a0a0");
#endif

    switch (ctx->pc) {
        case 0x36a0a0u: goto label_36a0a0;
        case 0x36a0a4u: goto label_36a0a4;
        case 0x36a0a8u: goto label_36a0a8;
        case 0x36a0acu: goto label_36a0ac;
        case 0x36a0b0u: goto label_36a0b0;
        case 0x36a0b4u: goto label_36a0b4;
        case 0x36a0b8u: goto label_36a0b8;
        case 0x36a0bcu: goto label_36a0bc;
        case 0x36a0c0u: goto label_36a0c0;
        case 0x36a0c4u: goto label_36a0c4;
        case 0x36a0c8u: goto label_36a0c8;
        case 0x36a0ccu: goto label_36a0cc;
        case 0x36a0d0u: goto label_36a0d0;
        case 0x36a0d4u: goto label_36a0d4;
        case 0x36a0d8u: goto label_36a0d8;
        case 0x36a0dcu: goto label_36a0dc;
        case 0x36a0e0u: goto label_36a0e0;
        case 0x36a0e4u: goto label_36a0e4;
        case 0x36a0e8u: goto label_36a0e8;
        case 0x36a0ecu: goto label_36a0ec;
        case 0x36a0f0u: goto label_36a0f0;
        case 0x36a0f4u: goto label_36a0f4;
        case 0x36a0f8u: goto label_36a0f8;
        default: break;
    }

    ctx->pc = 0x36a0a0u;

label_36a0a0:
    // 0x36a0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36a0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36a0a4:
    // 0x36a0a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36a0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_36a0a8:
    // 0x36a0a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36a0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_36a0ac:
    // 0x36a0ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x36a0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_36a0b0:
    // 0x36a0b0: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x36a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_36a0b4:
    // 0x36a0b4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x36a0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_36a0b8:
    // 0x36a0b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x36a0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_36a0bc:
    // 0x36a0bc: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x36a0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 2));
label_36a0c0:
    // 0x36a0c0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36a0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36a0c4:
    // 0x36a0c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36a0c8:
    // 0x36a0c8: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x36a0c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_36a0cc:
    // 0x36a0cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36a0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36a0d0:
    // 0x36a0d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36a0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36a0d4:
    // 0x36a0d4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_36a0d8:
    // 0x36a0d8: 0x2442b060  addiu       $v0, $v0, -0x4FA0
    ctx->pc = 0x36a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946912));
label_36a0dc:
    // 0x36a0dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36a0e0:
    // 0x36a0e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36a0e4:
    // 0x36a0e4: 0x40f809  jalr        $v0
label_36a0e8:
    if (ctx->pc == 0x36A0E8u) {
        ctx->pc = 0x36A0ECu;
        goto label_36a0ec;
    }
    ctx->pc = 0x36A0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36A0ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A0E4u, 0x36A0ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36A0ECu;
label_36a0ec:
    // 0x36a0ec: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36a0ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36a0f0:
    // 0x36a0f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36a0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36a0f4:
    // 0x36a0f4: 0x3e00008  jr          $ra
label_36a0f8:
    if (ctx->pc == 0x36A0F8u) {
        ctx->pc = 0x36A0FCu;
        goto label_fallthrough_0x36a0f4;
    }
    ctx->pc = 0x36A0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36a0f4:
    ctx->pc = 0x36A0FCu;
}
