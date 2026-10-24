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

// Function: entry_0019cbf4
// Address: 0x19cbf4 - 0x19cc48
void entry_0019cbf4_0x19cbf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cbf4_0x19cbf4");
#endif

    ctx->pc = 0x19cbf4u;

    // 0x19cbf4: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x19cbf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19cbf8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19cbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19cbfc: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x19cbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x19cc00: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19cc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19cc04: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x19cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x19cc08: 0x402827  not         $a1, $v0
    ctx->pc = 0x19cc08u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x19cc0c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x19cc0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19cc10: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19cc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19cc14: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19cc18: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x19cc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x19cc1c: 0x24427440  addiu       $v0, $v0, 0x7440
    ctx->pc = 0x19cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29760));
    // 0x19cc20: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x19cc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19cc24: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x19cc24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19cc28: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19cc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19cc2c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x19cc2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x19cc30: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19cc30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19cc34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19cc38: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19cc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19cc3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19cc40: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x19cc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x19cc44: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19cc44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x19cc48u;
}
