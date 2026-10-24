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

// Function: entry_0028eddc
// Address: 0x28eddc - 0x28ee50
void entry_0028eddc_0x28eddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028eddc_0x28eddc");
#endif

    switch (ctx->pc) {
        case 0x28edecu: goto label_28edec;
        case 0x28ee04u: goto label_28ee04;
        default: break;
    }

    ctx->pc = 0x28eddcu;

    // 0x28eddc: 0x260565a0  addiu       $a1, $s0, 0x65A0
    ctx->pc = 0x28eddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 26016));
    // 0x28ede0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x28ede0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28ede4: 0xc068b9c  jal         func_1A2E70
    ctx->pc = 0x28EDE4u;
    SET_GPR_U32(ctx, 31, 0x28EDECu);
    ctx->pc = 0x1A2E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2E70u, 0x28EDE4u, 0x28EDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EDECu;
label_28edec:
    // 0x28edec: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x28edecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x28edf0: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x28edf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x28edf4: 0x8c25c9d0  lw          $a1, -0x3630($at)
    ctx->pc = 0x28edf4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x62C9D0u));
    // 0x28edf8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28edf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28edfc: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x28EDFCu;
    SET_GPR_U32(ctx, 31, 0x28EE04u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x28EDFCu, 0x28EE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EE04u;
label_28ee04:
    // 0x28ee04: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x28ee04u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ee08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28ee0c: 0x12420010  beq         $s2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28EE0Cu;
    {
        const bool branch_taken_0x28ee0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ee0c) {
            ctx->pc = 0x28EE50u;
            return;
        }
    }
    ctx->pc = 0x28EE14u;
    // 0x28ee14: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x28ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28ee18: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x28ee18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x28ee1c: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x28ee1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x28ee20: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x28ee20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x28ee24: 0x8c23c9d0  lw          $v1, -0x3630($at)
    ctx->pc = 0x28ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x62C9D0u));
    // 0x28ee28: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28ee2c: 0x24422838  addiu       $v0, $v0, 0x2838
    ctx->pc = 0x28ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10296));
    // 0x28ee30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28ee30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622838u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622838u, _value); } while (0);
    // 0x28ee34: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ee34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ee38: 0x8c222848  lw          $v0, 0x2848($at)
    ctx->pc = 0x28ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622848u));
    // 0x28ee3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28ee40: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ee40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ee44: 0xac222848  sw          $v0, 0x2848($at)
    ctx->pc = 0x28ee44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622848u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622848u, _value); } while (0);
    // 0x28ee48: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x28EE48u;
    {
        const bool branch_taken_0x28ee48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ee48) {
            ctx->pc = 0x28F03Cu;
            return;
        }
    }
    ctx->pc = 0x28EE50u;
}
