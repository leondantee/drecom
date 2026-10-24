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

// Function: R503_init
// Address: 0x3574d0 - 0x357524
void R503_init_0x3574d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R503_init_0x3574d0");
#endif

    switch (ctx->pc) {
        case 0x357500u: goto label_357500;
        case 0x357514u: goto label_357514;
        default: break;
    }

    ctx->pc = 0x3574d0u;

    // 0x3574d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3574d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3574d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3574d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x3574d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3574d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3574dc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3574dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3574e0: 0xa0224f11  sb          $v0, 0x4F11($at)
    ctx->pc = 0x3574e0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F4F11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F11u, _value); } while (0);
    // 0x3574e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3574e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3574e8: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x3574e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x3574ec: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x3574ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x3574f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3574f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3574f4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x3574f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x3574f8: 0xc06ba60  jal         func_1AE980
    ctx->pc = 0x3574F8u;
    SET_GPR_U32(ctx, 31, 0x357500u);
    ctx->pc = 0x1AE980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE980u, 0x3574F8u, 0x357500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357500u;
label_357500:
    // 0x357500: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x357500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x357504: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x357504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x357508: 0x24457540  addiu       $a1, $v0, 0x7540
    ctx->pc = 0x357508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30016));
    // 0x35750c: 0xc0848cc  jal         func_212330
    ctx->pc = 0x35750Cu;
    SET_GPR_U32(ctx, 31, 0x357514u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x35750Cu, 0x357514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357514u;
label_357514:
    // 0x357514: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x357514u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357518: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x357518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35751c: 0x3e00008  jr          $ra
    ctx->pc = 0x35751Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35751Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357524u;
}
