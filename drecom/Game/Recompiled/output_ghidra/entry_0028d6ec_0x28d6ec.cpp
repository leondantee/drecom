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

// Function: entry_0028d6ec
// Address: 0x28d6ec - 0x28d764
void entry_0028d6ec_0x28d6ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028d6ec_0x28d6ec");
#endif

    switch (ctx->pc) {
        case 0x28d738u: goto label_28d738;
        default: break;
    }

    ctx->pc = 0x28d6ecu;

    // 0x28d6ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28d6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28d6f0: 0x8c26013c  lw          $a2, 0x13C($at)
    ctx->pc = 0x28d6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x28d6f4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x28d6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28d6f8: 0xc3001b  divu        $zero, $a2, $v1
    ctx->pc = 0x28d6f8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x28d6fc: 0x0  nop
    ctx->pc = 0x28d6fcu;
    // NOP
    // 0x28d700: 0x0  nop
    ctx->pc = 0x28d700u;
    // NOP
    // 0x28d704: 0x1810  mfhi        $v1
    ctx->pc = 0x28d704u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x28d708: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x28D708u;
    {
        const bool branch_taken_0x28d708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d708) {
            ctx->pc = 0x28D764u;
            return;
        }
    }
    ctx->pc = 0x28D710u;
    // 0x28d710: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d714: 0x8c2220e8  lw          $v0, 0x20E8($at)
    ctx->pc = 0x28d714u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6220E8u));
    // 0x28d718: 0x24480027  addiu       $t0, $v0, 0x27
    ctx->pc = 0x28d718u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 39));
    // 0x28d71c: 0x3106ffff  andi        $a2, $t0, 0xFFFF
    ctx->pc = 0x28d71cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x28d720: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28d720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28d724: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28d724u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28d728: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28d728u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28d72c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28d72cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28d730: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28D730u;
    SET_GPR_U32(ctx, 31, 0x28D738u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28D730u, 0x28D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D738u;
label_28d738:
    // 0x28d738: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d73c: 0x8c2220e8  lw          $v0, 0x20E8($at)
    ctx->pc = 0x28d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6220E8u));
    // 0x28d740: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x28d740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28d744: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d748: 0xac2320e8  sw          $v1, 0x20E8($at)
    ctx->pc = 0x28d748u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6220E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220E8u, _value); } while (0);
    // 0x28d74c: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x28d74cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x28d750: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D750u;
    {
        const bool branch_taken_0x28d750 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d750) {
            ctx->pc = 0x28D764u;
            return;
        }
    }
    ctx->pc = 0x28D758u;
    // 0x28d758: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x28d758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28d75c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d760: 0xac2720e8  sw          $a3, 0x20E8($at)
    ctx->pc = 0x28d760u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6220E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220E8u, _value); } while (0);
    ctx->pc = 0x28d764u;
}
