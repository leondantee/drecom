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

// Function: entry_001969c8
// Address: 0x1969c8 - 0x196a2c
void entry_001969c8_0x1969c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001969c8_0x1969c8");
#endif

    switch (ctx->pc) {
        case 0x1969d8u: goto label_1969d8;
        case 0x196a10u: goto label_196a10;
        default: break;
    }

    ctx->pc = 0x1969c8u;

    // 0x1969c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1969c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1969cc: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1969ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1969d0: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x1969D0u;
    SET_GPR_U32(ctx, 31, 0x1969D8u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x1969D0u, 0x1969D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1969D8u;
label_1969d8:
    // 0x1969d8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1969D8u;
    {
        const bool branch_taken_0x1969d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1969d8) {
            ctx->pc = 0x196A80u;
            return;
        }
    }
    ctx->pc = 0x1969E0u;
    // 0x1969e0: 0x3c053dcc  lui         $a1, 0x3DCC
    ctx->pc = 0x1969e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15820 << 16));
    // 0x1969e4: 0x34a4cccd  ori         $a0, $a1, 0xCCCD
    ctx->pc = 0x1969e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x1969e8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1969e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1969ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1969ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1969f0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1969f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1969f4: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1969f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1969f8: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x1969f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1969fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1969fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196a00: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x196a00u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196a04: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x196a04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196a08: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196A08u;
    SET_GPR_U32(ctx, 31, 0x196A10u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196A08u, 0x196A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A10u;
label_196a10:
    // 0x196a10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x196a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x196a14: 0x8425d340  lh          $a1, -0x2CC0($at)
    ctx->pc = 0x196a14u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x5CD340u));
    // 0x196a18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x196a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x196a1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x196a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x196a20: 0xa425d340  sh          $a1, -0x2CC0($at)
    ctx->pc = 0x196a20u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5CD340u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD340u, _value); } while (0);
    // 0x196a24: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x196A24u;
    {
        const bool branch_taken_0x196a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196a24) {
            ctx->pc = 0x196A80u;
            return;
        }
    }
    ctx->pc = 0x196A2Cu;
}
