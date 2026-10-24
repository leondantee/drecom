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

// Function: entry_0027914c
// Address: 0x27914c - 0x2791c0
void entry_0027914c_0x27914c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027914c_0x27914c");
#endif

    switch (ctx->pc) {
        case 0x279154u: goto label_279154;
        case 0x279164u: goto label_279164;
        default: break;
    }

    ctx->pc = 0x27914cu;

    // 0x27914c: 0xc09e4b4  jal         func_2792D0
    ctx->pc = 0x27914Cu;
    SET_GPR_U32(ctx, 31, 0x279154u);
    ctx->pc = 0x2792D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2792D0u, 0x27914Cu, 0x279154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279154u;
label_279154:
    // 0x279154: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x279154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x279158: 0x2444e960  addiu       $a0, $v0, -0x16A0
    ctx->pc = 0x279158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961504));
    // 0x27915c: 0xc0a1048  jal         func_284120
    ctx->pc = 0x27915Cu;
    SET_GPR_U32(ctx, 31, 0x279164u);
    ctx->pc = 0x284120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284120u, 0x27915Cu, 0x279164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279164u;
label_279164:
    // 0x279164: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x279164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x279168: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x279168u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27916c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x27916cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x279170: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x279170u;
    {
        const bool branch_taken_0x279170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x279170) {
            ctx->pc = 0x2791C0u;
            return;
        }
    }
    ctx->pc = 0x279178u;
    // 0x279178: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x279178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27917c: 0x24639370  addiu       $v1, $v1, -0x6C90
    ctx->pc = 0x27917cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939504));
    // 0x279180: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x279180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x279184: 0xac23d69c  sw          $v1, -0x2964($at)
    ctx->pc = 0x279184u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD69Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD69Cu, _value); } while (0);
    // 0x279188: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x279188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27918c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27918cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x279190: 0xac23d698  sw          $v1, -0x2968($at)
    ctx->pc = 0x279190u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD698u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD698u, _value); } while (0);
    // 0x279194: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x279194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x279198: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x279198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27919c: 0xa023d691  sb          $v1, -0x296F($at)
    ctx->pc = 0x27919cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD691u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD691u, _value); } while (0);
    // 0x2791a0: 0x24030091  addiu       $v1, $zero, 0x91
    ctx->pc = 0x2791a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x2791a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2791a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2791a8: 0xa023d693  sb          $v1, -0x296D($at)
    ctx->pc = 0x2791a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD693u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD693u, _value); } while (0);
    // 0x2791ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2791acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2791b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2791b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2791b4: 0xa023d551  sb          $v1, -0x2AAF($at)
    ctx->pc = 0x2791b4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD551u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD551u, _value); } while (0);
    // 0x2791b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2791B8u;
    {
        const bool branch_taken_0x2791b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2791b8) {
            ctx->pc = 0x2791CCu;
            return;
        }
    }
    ctx->pc = 0x2791C0u;
}
