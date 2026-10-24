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

// Function: entry_0036cbf4
// Address: 0x36cbf4 - 0x36cc50
void entry_0036cbf4_0x36cbf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036cbf4_0x36cbf4");
#endif

    ctx->pc = 0x36cbf4u;

    // 0x36cbf4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36cbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36cbf8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x36cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x36cbfc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36cbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36cc00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36cc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36cc04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36cc08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36cc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36cc0c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x36cc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x36cc10: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36cc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36cc14: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x36cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x36cc18: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36cc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36cc1c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36cc20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36cc24: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x36cc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x36cc28: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x36cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x36cc2c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x36cc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x36cc30: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36cc30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36cc34: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x36cc34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x36cc38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36cc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36cc3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x36cc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x36cc40: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x36cc40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36cc44: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x36cc44u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36cc48: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x36CC48u;
    {
        const bool branch_taken_0x36cc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36cc48) {
            ctx->pc = 0x36CD38u;
            return;
        }
    }
    ctx->pc = 0x36CC50u;
}
