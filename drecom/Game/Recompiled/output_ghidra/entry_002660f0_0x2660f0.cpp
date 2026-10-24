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

// Function: entry_002660f0
// Address: 0x2660f0 - 0x26614c
void entry_002660f0_0x2660f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002660f0_0x2660f0");
#endif

    switch (ctx->pc) {
        case 0x2660fcu: goto label_2660fc;
        default: break;
    }

    ctx->pc = 0x2660f0u;

    // 0x2660f0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2660f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2660f4: 0xc095c7c  jal         func_2571F0
    ctx->pc = 0x2660F4u;
    SET_GPR_U32(ctx, 31, 0x2660FCu);
    ctx->pc = 0x2571F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571F0u, 0x2660F4u, 0x2660FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2660FCu;
label_2660fc:
    // 0x2660fc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2660fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x266100: 0x9022e650  lbu         $v0, -0x19B0($at)
    ctx->pc = 0x266100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E650u));
    // 0x266104: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x266104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x266108: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x266108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x26610c: 0xa022e650  sb          $v0, -0x19B0($at)
    ctx->pc = 0x26610cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61E650u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E650u, _value); } while (0);
    // 0x266110: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x266110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x266114: 0x9022e674  lbu         $v0, -0x198C($at)
    ctx->pc = 0x266114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E674u));
    // 0x266118: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x266118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26611c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26611cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x266120: 0xa022e674  sb          $v0, -0x198C($at)
    ctx->pc = 0x266120u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61E674u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E674u, _value); } while (0);
    // 0x266124: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x266124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x266128: 0x9022e650  lbu         $v0, -0x19B0($at)
    ctx->pc = 0x266128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E650u));
    // 0x26612c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26612cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x266130: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x266130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x266134: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x266134u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266138: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x266138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26613c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26613cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266140: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x266140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x266144: 0x3e00008  jr          $ra
    ctx->pc = 0x266144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26614Cu;
}
