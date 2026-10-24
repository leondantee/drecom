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

// Function: Sat_flg
// Address: 0x19cb80 - 0x19cc5c
void Sat_flg_0x19cb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sat_flg_0x19cb80");
#endif

    ctx->pc = 0x19cb80u;

    // 0x19cb80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19cb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19cb84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19cb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19cb88: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x19cb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x19cb8c: 0x8fb00018  lw          $s0, 0x18($sp)
    ctx->pc = 0x19cb8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19cb90: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x19cb90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19cb94: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x19CB94u;
    {
        const bool branch_taken_0x19cb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cb94) {
            ctx->pc = 0x19CBF4u;
            goto label_19cbf4;
        }
    }
    ctx->pc = 0x19CB9Cu;
    // 0x19cb9c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x19cb9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19cba0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19cba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19cba4: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x19cba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x19cba8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19cbac: 0x622806  srlv        $a1, $v0, $v1
    ctx->pc = 0x19cbacu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x19cbb0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x19cbb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19cbb4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19cbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19cbb8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19cbbc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x19cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x19cbc0: 0x24427440  addiu       $v0, $v0, 0x7440
    ctx->pc = 0x19cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29760));
    // 0x19cbc4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x19cbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19cbc8: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x19cbc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19cbcc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19cbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19cbd0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x19cbd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x19cbd4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19cbd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19cbdc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19cbe0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19cbe4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x19cbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x19cbe8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19cbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x19cbec: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19CBECu;
    {
        const bool branch_taken_0x19cbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cbec) {
            ctx->pc = 0x19CC48u;
            goto label_19cc48;
        }
    }
    ctx->pc = 0x19CBF4u;
label_19cbf4:
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
label_19cc48:
    // 0x19cc48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cc4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cc4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cc50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19cc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19cc54: 0x3e00008  jr          $ra
    ctx->pc = 0x19CC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CC5Cu;
}
