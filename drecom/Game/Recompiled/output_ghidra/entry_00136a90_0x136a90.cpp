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

// Function: entry_00136a90
// Address: 0x136a90 - 0x136af8
void entry_00136a90_0x136a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136a90_0x136a90");
#endif

    switch (ctx->pc) {
        case 0x136abcu: goto label_136abc;
        default: break;
    }

    ctx->pc = 0x136a90u;

    // 0x136a90: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x136a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x136a94: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x136a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x136a98: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x136a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x136a9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x136a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x136aa0: 0x2450004c  addiu       $s0, $v0, 0x4C
    ctx->pc = 0x136aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x136aa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136aa8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x136aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x136aac: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x136aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x136ab0: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x136ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x136ab4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x136AB4u;
    SET_GPR_U32(ctx, 31, 0x136ABCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x136AB4u, 0x136ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136ABCu;
label_136abc:
    // 0x136abc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x136abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x136ac0: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x136ac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x136ac4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x136ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x136ac8: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x136AC8u;
    {
        const bool branch_taken_0x136ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x136ac8) {
            ctx->pc = 0x136B40u;
            return;
        }
    }
    ctx->pc = 0x136AD0u;
    // 0x136ad0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x136ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136ad4: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x136AD4u;
    {
        const bool branch_taken_0x136ad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x136ad4) {
            ctx->pc = 0x136B28u;
            return;
        }
    }
    ctx->pc = 0x136ADCu;
    // 0x136adc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136ae0: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x136AE0u;
    {
        const bool branch_taken_0x136ae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x136ae0) {
            ctx->pc = 0x136B10u;
            return;
        }
    }
    ctx->pc = 0x136AE8u;
    // 0x136ae8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x136AE8u;
    {
        const bool branch_taken_0x136ae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x136ae8) {
            ctx->pc = 0x136AF8u;
            return;
        }
    }
    ctx->pc = 0x136AF0u;
    // 0x136af0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x136AF0u;
    {
        const bool branch_taken_0x136af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136af0) {
            ctx->pc = 0x136B50u;
            return;
        }
    }
    ctx->pc = 0x136AF8u;
}
