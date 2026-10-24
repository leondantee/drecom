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

// Function: entry_002923a8
// Address: 0x2923a8 - 0x292410
void entry_002923a8_0x2923a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002923a8_0x2923a8");
#endif

    switch (ctx->pc) {
        case 0x2923b4u: goto label_2923b4;
        case 0x2923ccu: goto label_2923cc;
        default: break;
    }

    ctx->pc = 0x2923a8u;

    // 0x2923a8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2923a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2923ac: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x2923ACu;
    SET_GPR_U32(ctx, 31, 0x2923B4u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x2923ACu, 0x2923B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2923B4u;
label_2923b4:
    // 0x2923b4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2923b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2923b8: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2923B8u;
    {
        const bool branch_taken_0x2923b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2923b8) {
            ctx->pc = 0x292390u;
            return;
        }
    }
    ctx->pc = 0x2923C0u;
    // 0x2923c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2923c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2923c4: 0xc067f2c  jal         func_19FCB0
    ctx->pc = 0x2923C4u;
    SET_GPR_U32(ctx, 31, 0x2923CCu);
    ctx->pc = 0x19FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FCB0u, 0x2923C4u, 0x2923CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2923CCu;
label_2923cc:
    // 0x2923cc: 0x92026609  lbu         $v0, 0x6609($s0)
    ctx->pc = 0x2923ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26121)));
    // 0x2923d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2923d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2923d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2923d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2923d8: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2923D8u;
    {
        const bool branch_taken_0x2923d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2923d8) {
            ctx->pc = 0x29243Cu;
            return;
        }
    }
    ctx->pc = 0x2923E0u;
    // 0x2923e0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2923e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2923e4: 0x9022efb8  lbu         $v0, -0x1048($at)
    ctx->pc = 0x2923e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EEFB8u));
    // 0x2923e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2923e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2923ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2923ECu;
    {
        const bool branch_taken_0x2923ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2923ec) {
            ctx->pc = 0x292410u;
            return;
        }
    }
    ctx->pc = 0x2923F4u;
    // 0x2923f4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2923f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2923f8: 0xa020efb9  sb          $zero, -0x1047($at)
    ctx->pc = 0x2923f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEFB9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEFB9u, _value); } while (0);
    // 0x2923fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2923fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x292400: 0x9022efb8  lbu         $v0, -0x1048($at)
    ctx->pc = 0x292400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EEFB8u));
    // 0x292404: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x292404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x292408: 0xc051004  jal         func_144010
    ctx->pc = 0x292408u;
    SET_GPR_U32(ctx, 31, 0x292410u);
    ctx->pc = 0x144010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144010u, 0x292408u, 0x292410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292410u;
}
