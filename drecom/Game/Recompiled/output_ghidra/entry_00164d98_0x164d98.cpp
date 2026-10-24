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

// Function: entry_00164d98
// Address: 0x164d98 - 0x164e0c
void entry_00164d98_0x164d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164d98_0x164d98");
#endif

    switch (ctx->pc) {
        case 0x164de0u: goto label_164de0;
        default: break;
    }

    ctx->pc = 0x164d98u;

    // 0x164d98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164d9c: 0x8c22fde0  lw          $v0, -0x220($at)
    ctx->pc = 0x164d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CFDE0u));
    // 0x164da0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164da4: 0xac225450  sw          $v0, 0x5450($at)
    ctx->pc = 0x164da4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5450u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5450u, _value); } while (0);
    // 0x164da8: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x164da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x164dac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164db0: 0xac22fde0  sw          $v0, -0x220($at)
    ctx->pc = 0x164db0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFDE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFDE0u, _value); } while (0);
    // 0x164db4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164db8: 0x8c231a44  lw          $v1, 0x1A44($at)
    ctx->pc = 0x164db8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A44u));
    // 0x164dbc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x164dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x164dc0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x164dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x164dc4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164dc8: 0xac221a44  sw          $v0, 0x1A44($at)
    ctx->pc = 0x164dc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A44u, _value); } while (0);
    // 0x164dcc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164dd0: 0xac205458  sw          $zero, 0x5458($at)
    ctx->pc = 0x164dd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F5458u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5458u, _value); } while (0);
    // 0x164dd4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x164dd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x164dd8: 0xc067524  jal         func_19D490
    ctx->pc = 0x164DD8u;
    SET_GPR_U32(ctx, 31, 0x164DE0u);
    ctx->pc = 0x19D490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D490u, 0x164DD8u, 0x164DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164DE0u;
label_164de0:
    // 0x164de0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164de4: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x164DE4u;
    {
        const bool branch_taken_0x164de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x164de4) {
            ctx->pc = 0x164E0Cu;
            return;
        }
    }
    ctx->pc = 0x164DECu;
    // 0x164dec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164df0: 0x8c225458  lw          $v0, 0x5458($at)
    ctx->pc = 0x164df0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F5458u));
    // 0x164df4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x164df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x164df8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164dfc: 0xac225458  sw          $v0, 0x5458($at)
    ctx->pc = 0x164dfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5458u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5458u, _value); } while (0);
    // 0x164e00: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x164e00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x164e04: 0xc0674ec  jal         func_19D3B0
    ctx->pc = 0x164E04u;
    SET_GPR_U32(ctx, 31, 0x164E0Cu);
    ctx->pc = 0x19D3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D3B0u, 0x164E04u, 0x164E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164E0Cu;
}
