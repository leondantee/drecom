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

// Function: entry_0019ead8
// Address: 0x19ead8 - 0x19eb94
void entry_0019ead8_0x19ead8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ead8_0x19ead8");
#endif

    ctx->pc = 0x19ead8u;

    // 0x19ead8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x19ead8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19eadc: 0x1440ff7b  bnez        $v0, . + 4 + (-0x85 << 2)
    ctx->pc = 0x19EADCu;
    {
        const bool branch_taken_0x19eadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19eadc) {
            ctx->pc = 0x19E8CCu;
            return;
        }
    }
    ctx->pc = 0x19EAE4u;
    // 0x19eae4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19eae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19eae8: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19eaec: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x19eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x19eaf0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x19eaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x19eaf4: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x19EAF4u;
    {
        const bool branch_taken_0x19eaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eaf4) {
            ctx->pc = 0x19EC38u;
            return;
        }
    }
    ctx->pc = 0x19EAFCu;
    // 0x19eafc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19eafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19eb00: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19eb04: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19eb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19eb08: 0x8c248070  lw          $a0, -0x7F90($at)
    ctx->pc = 0x19eb08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x388070u));
    // 0x19eb0c: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x19eb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x19eb10: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x19eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x19eb14: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x19eb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19eb18: 0xac85004c  sw          $a1, 0x4C($a0)
    ctx->pc = 0x19eb18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 5));
    // 0x19eb1c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19eb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19eb20: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19eb24: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x19eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x19eb28: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x19eb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19eb2c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x19EB2Cu;
    {
        const bool branch_taken_0x19eb2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eb2c) {
            ctx->pc = 0x19EB94u;
            return;
        }
    }
    ctx->pc = 0x19EB34u;
    // 0x19eb34: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19eb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19eb38: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19eb3c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x19eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x19eb40: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x19eb40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x19eb44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19eb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19eb48: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x19eb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19eb4c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19eb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19eb50: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19eb54: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x19eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x19eb58: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x19eb58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19eb5c: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x19EB5Cu;
    {
        const bool branch_taken_0x19eb5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eb5c) {
            ctx->pc = 0x19EBF4u;
            return;
        }
    }
    ctx->pc = 0x19EB64u;
    // 0x19eb64: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19eb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19eb68: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19eb6c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x19eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x19eb70: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x19eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19eb74: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19eb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19eb78: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19eb7c: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x19eb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x19eb80: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19eb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19eb84: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19eb88: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x19eb88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x19eb8c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x19EB8Cu;
    {
        const bool branch_taken_0x19eb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eb8c) {
            ctx->pc = 0x19EBF4u;
            return;
        }
    }
    ctx->pc = 0x19EB94u;
}
