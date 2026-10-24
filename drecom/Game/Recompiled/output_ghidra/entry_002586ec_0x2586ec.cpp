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

// Function: entry_002586ec
// Address: 0x2586ec - 0x25873c
void entry_002586ec_0x2586ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002586ec_0x2586ec");
#endif

    switch (ctx->pc) {
        case 0x258704u: goto label_258704;
        default: break;
    }

    ctx->pc = 0x2586ecu;

label_2586ec:
    // 0x2586ec: 0x93a20048  lbu         $v0, 0x48($sp)
    ctx->pc = 0x2586ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2586f0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x2586f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2586f4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2586f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2586f8: 0x97a50040  lhu         $a1, 0x40($sp)
    ctx->pc = 0x2586f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2586fc: 0xc0961d0  jal         func_258740
    ctx->pc = 0x2586FCu;
    SET_GPR_U32(ctx, 31, 0x258704u);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x2586FCu, 0x258704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258704u;
label_258704:
    // 0x258704: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x258704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x258708: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x258708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25870c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x25870cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x258710: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x258710u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x258714: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x258714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x258718: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x258718u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25871c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x25871Cu;
    {
        const bool branch_taken_0x25871c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25871c) {
            ctx->pc = 0x2586ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2586ec;
        }
    }
    ctx->pc = 0x258724u;
    // 0x258724: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x258724u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258728: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x258728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25872c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25872cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258730: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x258730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x258734: 0x3e00008  jr          $ra
    ctx->pc = 0x258734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25873Cu;
}
