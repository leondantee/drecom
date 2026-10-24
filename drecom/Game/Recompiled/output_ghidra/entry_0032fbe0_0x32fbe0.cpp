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

// Function: entry_0032fbe0
// Address: 0x32fbe0 - 0x32fc44
void entry_0032fbe0_0x32fbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032fbe0_0x32fbe0");
#endif

    ctx->pc = 0x32fbe0u;

    // 0x32fbe0: 0x2a420020  slti        $v0, $s2, 0x20
    ctx->pc = 0x32fbe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x32fbe4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x32FBE4u;
    {
        const bool branch_taken_0x32fbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32fbe4) {
            ctx->pc = 0x32FBC4u;
            return;
        }
    }
    ctx->pc = 0x32FBECu;
    // 0x32fbec: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32fbecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32fbf0: 0x8c372710  lw          $s7, 0x2710($at)
    ctx->pc = 0x32fbf0u;
    SET_GPR_S32(ctx, 23, (int32_t)FAST_READ32(0x892710u));
    // 0x32fbf4: 0xae7765a0  sw          $s7, 0x65A0($s3)
    ctx->pc = 0x32fbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 26016), GPR_U32(ctx, 23));
    // 0x32fbf8: 0x826265b0  lb          $v0, 0x65B0($s3)
    ctx->pc = 0x32fbf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26032)));
    // 0x32fbfc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x32fbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32fc00: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32fc00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x32fc04: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x32fc04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32fc08: 0x10670048  beq         $v1, $a3, . + 4 + (0x48 << 2)
    ctx->pc = 0x32FC08u;
    {
        const bool branch_taken_0x32fc08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x32fc08) {
            ctx->pc = 0x32FD2Cu;
            return;
        }
    }
    ctx->pc = 0x32FC10u;
    // 0x32fc10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32fc14: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x32FC14u;
    {
        const bool branch_taken_0x32fc14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32fc14) {
            ctx->pc = 0x32FD00u;
            return;
        }
    }
    ctx->pc = 0x32FC1Cu;
    // 0x32fc1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32fc20: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x32FC20u;
    {
        const bool branch_taken_0x32fc20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32fc20) {
            ctx->pc = 0x32FCD8u;
            return;
        }
    }
    ctx->pc = 0x32FC28u;
    // 0x32fc28: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x32FC28u;
    {
        const bool branch_taken_0x32fc28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fc28) {
            ctx->pc = 0x32FCB0u;
            return;
        }
    }
    ctx->pc = 0x32FC30u;
    // 0x32fc30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32fc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32fc34: 0x10660003  beq         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x32FC34u;
    {
        const bool branch_taken_0x32fc34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x32fc34) {
            ctx->pc = 0x32FC44u;
            return;
        }
    }
    ctx->pc = 0x32FC3Cu;
    // 0x32fc3c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x32FC3Cu;
    {
        const bool branch_taken_0x32fc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fc3c) {
            ctx->pc = 0x32FD54u;
            return;
        }
    }
    ctx->pc = 0x32FC44u;
}
