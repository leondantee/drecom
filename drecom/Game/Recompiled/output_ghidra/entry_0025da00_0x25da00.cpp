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

// Function: entry_0025da00
// Address: 0x25da00 - 0x25daa4
void entry_0025da00_0x25da00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025da00_0x25da00");
#endif

    switch (ctx->pc) {
        case 0x25da9cu: goto label_25da9c;
        default: break;
    }

    ctx->pc = 0x25da00u;

    // 0x25da00: 0x32c300c0  andi        $v1, $s6, 0xC0
    ctx->pc = 0x25da00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)192);
    // 0x25da04: 0x14600182  bnez        $v1, . + 4 + (0x182 << 2)
    ctx->pc = 0x25DA04u;
    {
        const bool branch_taken_0x25da04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25da04) {
            ctx->pc = 0x25E010u;
            return;
        }
    }
    ctx->pc = 0x25DA0Cu;
    // 0x25da0c: 0x960209e0  lhu         $v0, 0x9E0($s0)
    ctx->pc = 0x25da0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2528)));
    // 0x25da10: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25da10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25da14: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x25da14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25da18: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x25DA18u;
    {
        const bool branch_taken_0x25da18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25da18) {
            ctx->pc = 0x25DB68u;
            return;
        }
    }
    ctx->pc = 0x25DA20u;
    // 0x25da20: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x25da20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x25da24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25da24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25da28: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x25DA28u;
    {
        const bool branch_taken_0x25da28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25da28) {
            ctx->pc = 0x25DAC4u;
            return;
        }
    }
    ctx->pc = 0x25DA30u;
    // 0x25da30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25da30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25da34: 0x2821804  sllv        $v1, $v0, $s4
    ctx->pc = 0x25da34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x25da38: 0x3c023007  lui         $v0, 0x3007
    ctx->pc = 0x25da38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12295 << 16));
    // 0x25da3c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x25da3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x25da40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x25da40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25da44: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x25DA44u;
    {
        const bool branch_taken_0x25da44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25da44) {
            ctx->pc = 0x25DAC4u;
            return;
        }
    }
    ctx->pc = 0x25DA4Cu;
    // 0x25da4c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25da50: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25da50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25da54: 0x8c420a18  lw          $v0, 0xA18($v0)
    ctx->pc = 0x25da54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2584)));
    // 0x25da58: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25DA58u;
    {
        const bool branch_taken_0x25da58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25da58) {
            ctx->pc = 0x25DAA4u;
            return;
        }
    }
    ctx->pc = 0x25DA60u;
    // 0x25da60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25da60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25da64: 0xa7a2010a  sh          $v0, 0x10A($sp)
    ctx->pc = 0x25da64u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 266), (uint16_t)GPR_U32(ctx, 2));
    // 0x25da68: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25da68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25da6c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25da70: 0x8c440a18  lw          $a0, 0xA18($v0)
    ctx->pc = 0x25da70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2584)));
    // 0x25da74: 0xafa4010c  sw          $a0, 0x10C($sp)
    ctx->pc = 0x25da74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 4));
    // 0x25da78: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x25da78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x25da7c: 0xb23021  addu        $a2, $a1, $s2
    ctx->pc = 0x25da7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x25da80: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x25da80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x25da84: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25da84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25da88: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x25da88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x25da8c: 0x26250104  addiu       $a1, $s1, 0x104
    ctx->pc = 0x25da8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x25da90: 0x24460cb0  addiu       $a2, $v0, 0xCB0
    ctx->pc = 0x25da90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
    // 0x25da94: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25DA94u;
    SET_GPR_U32(ctx, 31, 0x25DA9Cu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25DA94u, 0x25DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DA9Cu;
label_25da9c:
    // 0x25da9c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x25DA9Cu;
    {
        const bool branch_taken_0x25da9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25da9c) {
            ctx->pc = 0x25DB38u;
            return;
        }
    }
    ctx->pc = 0x25DAA4u;
}
