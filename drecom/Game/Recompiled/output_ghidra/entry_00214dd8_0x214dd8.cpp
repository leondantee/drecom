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

// Function: entry_00214dd8
// Address: 0x214dd8 - 0x214e4c
void entry_00214dd8_0x214dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214dd8_0x214dd8");
#endif

    switch (ctx->pc) {
        case 0x214de8u: goto label_214de8;
        case 0x214df8u: goto label_214df8;
        case 0x214e04u: goto label_214e04;
        default: break;
    }

    ctx->pc = 0x214dd8u;

    // 0x214dd8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x214dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x214ddc: 0x24a55178  addiu       $a1, $a1, 0x5178
    ctx->pc = 0x214ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20856));
    // 0x214de0: 0xc0849cc  jal         func_212730
    ctx->pc = 0x214DE0u;
    SET_GPR_U32(ctx, 31, 0x214DE8u);
    ctx->pc = 0x214DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214DE0u;
    // 0x214de4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212730u;
    {
        ctx->pc = 0x214DE8u;
        ps2_syscalls::AddDmacHandler(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x214DE8u) { return; }
    ctx->pc = 0x214DE8u;
label_214de8:
    // 0x214de8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x214de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x214dec: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x214decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x214df0: 0xc084d76  jal         func_2135D8
    ctx->pc = 0x214DF0u;
    SET_GPR_U32(ctx, 31, 0x214DF8u);
    ctx->pc = 0x214DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214DF0u;
    // 0x214df4: 0xac62a254  sw          $v0, -0x5DAC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943316), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2135D8u;
    {
        ctx->pc = 0x214DF8u;
        ps2_syscalls::EnableDmac(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x214DF8u) { return; }
    ctx->pc = 0x214DF8u;
label_214df8:
    // 0x214df8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x214df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x214dfc: 0xc084b8c  jal         func_212E30
    ctx->pc = 0x214DFCu;
    SET_GPR_U32(ctx, 31, 0x214E04u);
    ctx->pc = 0x212E30u;
    {
        ctx->pc = 0x214E04u;
        ps2_stubs::sceSifGetReg(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x214E04u) { return; }
    ctx->pc = 0x214E04u;
label_214e04:
    // 0x214e04: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x214E04u;
    {
        const bool branch_taken_0x214e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E04u;
        // 0x214e08: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e04) {
            ctx->pc = 0x214E4Cu;
            return;
        }
    }
    ctx->pc = 0x214E0Cu;
    // 0x214e0c: 0x2685a240  addiu       $a1, $s4, -0x5DC0
    ctx->pc = 0x214e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943296));
    // 0x214e10: 0x2662a180  addiu       $v0, $s3, -0x5E80
    ctx->pc = 0x214e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294943104));
    // 0x214e14: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x214e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x214e18: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x214e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x214e1c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x214e1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214e20: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x214e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x214e24: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x214e24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214e28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x214e28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e2c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x214e2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214e30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x214e30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e34: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x214e34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214e38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x214e38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214e40: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x214e40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x214e44: 0x808543e  j           func_2150F8
    ctx->pc = 0x214E44u;
    ctx->pc = 0x214E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E44u;
    // 0x214e48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2150F8u;
    sceSifSendCmd_0x2150f8(rdram, ctx, runtime); return;
    ctx->pc = 0x214E4Cu;
}
