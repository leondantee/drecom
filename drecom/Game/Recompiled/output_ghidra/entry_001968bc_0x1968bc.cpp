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

// Function: entry_001968bc
// Address: 0x1968bc - 0x1968f8
void entry_001968bc_0x1968bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001968bc_0x1968bc");
#endif

    switch (ctx->pc) {
        case 0x1968e4u: goto label_1968e4;
        default: break;
    }

    ctx->pc = 0x1968bcu;

    // 0x1968bc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1968bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1968c0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1968c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1968c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1968c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1968c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1968c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1968cc: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1968ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1968d0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1968d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1968d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1968d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1968d8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1968d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1968dc: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1968DCu;
    SET_GPR_U32(ctx, 31, 0x1968E4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1968DCu, 0x1968E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1968E4u;
label_1968e4:
    // 0x1968e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1968e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1968e8: 0x8422d340  lh          $v0, -0x2CC0($at)
    ctx->pc = 0x1968e8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x5CD340u));
    // 0x1968ec: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1968ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1968f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1968f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1968f4: 0xa424d340  sh          $a0, -0x2CC0($at)
    ctx->pc = 0x1968f4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5CD340u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD340u, _value); } while (0);
    ctx->pc = 0x1968f8u;
}
