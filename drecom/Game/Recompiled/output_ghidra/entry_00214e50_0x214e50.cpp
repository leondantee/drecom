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

// Function: entry_00214e50
// Address: 0x214e50 - 0x214ed8
void entry_00214e50_0x214e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214e50_0x214e50");
#endif

    switch (ctx->pc) {
        case 0x214e58u: goto label_214e58;
        case 0x214e6cu: goto label_214e6c;
        case 0x214e7cu: goto label_214e7c;
        case 0x214e8cu: goto label_214e8c;
        default: break;
    }

    ctx->pc = 0x214e50u;

label_214e50:
    // 0x214e50: 0xc084b8c  jal         func_212E30
    ctx->pc = 0x214E50u;
    SET_GPR_U32(ctx, 31, 0x214E58u);
    ctx->pc = 0x214E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E50u;
    // 0x214e54: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212E30u;
    {
        ctx->pc = 0x214E58u;
        ps2_stubs::sceSifGetReg(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x214E58u) { return; }
    ctx->pc = 0x214E58u;
label_214e58:
    // 0x214e58: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x214e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x214e5c: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x214E5Cu;
    {
        const bool branch_taken_0x214e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E5Cu;
        // 0x214e60: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e5c) {
            ctx->pc = 0x214E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214e50;
        }
    }
    ctx->pc = 0x214E64u;
    // 0x214e64: 0xc084b8c  jal         func_212E30
    ctx->pc = 0x214E64u;
    SET_GPR_U32(ctx, 31, 0x214E6Cu);
    ctx->pc = 0x214E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E64u;
    // 0x214e68: 0x2650a258  addiu       $s0, $s2, -0x5DA8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212E30u;
    {
        ctx->pc = 0x214E6Cu;
        ps2_stubs::sceSifGetReg(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x214E6Cu) { return; }
    ctx->pc = 0x214E6Cu;
label_214e6c:
    // 0x214e6c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x214e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x214e70: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x214e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x214e74: 0xc084b88  jal         func_212E20
    ctx->pc = 0x214E74u;
    SET_GPR_U32(ctx, 31, 0x214E7Cu);
    ctx->pc = 0x214E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E74u;
    // 0x214e78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212E20u;
    {
        ctx->pc = 0x214E7Cu;
        ps2_stubs::sceSifSetReg(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x214E7Cu) { return; }
    ctx->pc = 0x214E7Cu;
label_214e7c:
    // 0x214e7c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x214e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x214e80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x214e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e84: 0xc084b88  jal         func_212E20
    ctx->pc = 0x214E84u;
    SET_GPR_U32(ctx, 31, 0x214E8Cu);
    ctx->pc = 0x214E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E84u;
    // 0x214e88: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212E20u;
    {
        ctx->pc = 0x214E8Cu;
        ps2_stubs::sceSifSetReg(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x214E8Cu) { return; }
    ctx->pc = 0x214E8Cu;
label_214e8c:
    // 0x214e8c: 0x2683a240  addiu       $v1, $s4, -0x5DC0
    ctx->pc = 0x214e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943296));
    // 0x214e90: 0x2662a180  addiu       $v0, $s3, -0x5E80
    ctx->pc = 0x214e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294943104));
    // 0x214e94: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x214e94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x214e98: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x214e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x214e9c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x214e9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214ea0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x214ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ea4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x214ea4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214ea8: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x214ea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x214eac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x214eacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214eb0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x214eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x214eb4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x214eb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214eb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x214eb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214ec0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x214ec0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ec4: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x214ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x214ec8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x214ec8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ecc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x214eccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x214ed0: 0x808543e  j           func_2150F8
    ctx->pc = 0x214ED0u;
    ctx->pc = 0x214ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214ED0u;
    // 0x214ed4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2150F8u;
    sceSifSendCmd_0x2150f8(rdram, ctx, runtime); return;
    ctx->pc = 0x214ED8u;
}
