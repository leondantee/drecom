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

// Function: Main_draw_clear
// Address: 0x1660c0 - 0x166138
void Main_draw_clear_0x1660c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Main_draw_clear_0x1660c0");
#endif

    switch (ctx->pc) {
        case 0x1660f4u: goto label_1660f4;
        case 0x166104u: goto label_166104;
        case 0x166114u: goto label_166114;
        case 0x16611cu: goto label_16611c;
        case 0x166124u: goto label_166124;
        default: break;
    }

    ctx->pc = 0x1660c0u;

    // 0x1660c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1660c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1660c4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1660c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1660c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1660c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1660cc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1660ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1660d0: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x1660d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1660d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1660d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1660d8: 0x8c22fdfc  lw          $v0, -0x204($at)
    ctx->pc = 0x1660d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CFDFCu));
    // 0x1660dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1660dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1660e0: 0xac22fe08  sw          $v0, -0x1F8($at)
    ctx->pc = 0x1660e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFE08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFE08u, _value); } while (0);
    // 0x1660e4: 0x26041594  addiu       $a0, $s0, 0x1594
    ctx->pc = 0x1660e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5524));
    // 0x1660e8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1660e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1660ec: 0xc05dbbc  jal         func_176EF0
    ctx->pc = 0x1660ECu;
    SET_GPR_U32(ctx, 31, 0x1660F4u);
    ctx->pc = 0x176EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176EF0u, 0x1660ECu, 0x1660F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1660F4u;
label_1660f4:
    // 0x1660f4: 0x260419b4  addiu       $a0, $s0, 0x19B4
    ctx->pc = 0x1660f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6580));
    // 0x1660f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1660f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1660fc: 0xc05dbbc  jal         func_176EF0
    ctx->pc = 0x1660FCu;
    SET_GPR_U32(ctx, 31, 0x166104u);
    ctx->pc = 0x176EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176EF0u, 0x1660FCu, 0x166104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166104u;
label_166104:
    // 0x166104: 0x26041994  addiu       $a0, $s0, 0x1994
    ctx->pc = 0x166104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6548));
    // 0x166108: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x166108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16610c: 0xc05dbbc  jal         func_176EF0
    ctx->pc = 0x16610Cu;
    SET_GPR_U32(ctx, 31, 0x166114u);
    ctx->pc = 0x176EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176EF0u, 0x16610Cu, 0x166114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166114u;
label_166114:
    // 0x166114: 0xc059c3c  jal         func_1670F0
    ctx->pc = 0x166114u;
    SET_GPR_U32(ctx, 31, 0x16611Cu);
    ctx->pc = 0x1670F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1670F0u, 0x166114u, 0x16611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16611Cu;
label_16611c:
    // 0x16611c: 0xc06afc8  jal         func_1ABF20
    ctx->pc = 0x16611Cu;
    SET_GPR_U32(ctx, 31, 0x166124u);
    ctx->pc = 0x1ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABF20u, 0x16611Cu, 0x166124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166124u;
label_166124:
    // 0x166124: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x166124u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166128: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16612c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x16612cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x166130: 0x3e00008  jr          $ra
    ctx->pc = 0x166130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166138u;
}
