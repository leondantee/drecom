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

// Function: entry_002929f8
// Address: 0x2929f8 - 0x292aa4
void entry_002929f8_0x2929f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002929f8_0x2929f8");
#endif

    switch (ctx->pc) {
        case 0x292a34u: goto label_292a34;
        default: break;
    }

    ctx->pc = 0x2929f8u;

    // 0x2929f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2929f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2929fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2929fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x292a00: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x292a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x292a04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x292a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x292a08: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x292A08u;
    {
        const bool branch_taken_0x292a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292a08) {
            ctx->pc = 0x2929E8u;
            return;
        }
    }
    ctx->pc = 0x292A10u;
    // 0x292a10: 0x8e0365a0  lw          $v1, 0x65A0($s0)
    ctx->pc = 0x292a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x292a14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x292a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x292a18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x292a18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x292a1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x292a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x292a20: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x292a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x292a24: 0x97a40020  lhu         $a0, 0x20($sp)
    ctx->pc = 0x292a24u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292a28: 0x24060081  addiu       $a2, $zero, 0x81
    ctx->pc = 0x292a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x292a2c: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x292A2Cu;
    SET_GPR_U32(ctx, 31, 0x292A34u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x292A2Cu, 0x292A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A34u;
label_292a34:
    // 0x292a34: 0x260465a0  addiu       $a0, $s0, 0x65A0
    ctx->pc = 0x292a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 26016));
    // 0x292a38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x292a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x292a3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x292a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x292a40: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x292a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x292a44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x292a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x292a48: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x292a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x292a4c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x292a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x292a50: 0x8e0465a0  lw          $a0, 0x65A0($s0)
    ctx->pc = 0x292a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x292a54: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x292a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x292a58: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x292a58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x292a5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x292a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x292a60: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x292a60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x292a64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x292a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x292a68: 0x9463fffc  lhu         $v1, -0x4($v1)
    ctx->pc = 0x292a68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x292a6c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x292a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x292a70: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x292a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292a74: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x292a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x292a78: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x292a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x292a7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x292a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x292a80: 0xa4640004  sh          $a0, 0x4($v1)
    ctx->pc = 0x292a80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x292a84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x292a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x292a88: 0x9463fffe  lhu         $v1, -0x2($v1)
    ctx->pc = 0x292a88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x292a8c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x292a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x292a90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x292a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x292a94: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x292a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x292a98: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x292a98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x292a9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x292a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x292aa0: 0xa4640006  sh          $a0, 0x6($v1)
    ctx->pc = 0x292aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x292aa4u;
}
