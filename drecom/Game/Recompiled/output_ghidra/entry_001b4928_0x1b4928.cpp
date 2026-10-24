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

// Function: entry_001b4928
// Address: 0x1b4928 - 0x1b498c
void entry_001b4928_0x1b4928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4928_0x1b4928");
#endif

    ctx->pc = 0x1b4928u;

    // 0x1b4928: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1b4928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1b492c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1b492cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1b4930: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1B4930u;
    {
        const bool branch_taken_0x1b4930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4930) {
            ctx->pc = 0x1B49FCu;
            return;
        }
    }
    ctx->pc = 0x1B4938u;
    // 0x1b4938: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b493c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b493cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b4940: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1b4940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1b4944: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b4944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b4948: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1B4948u;
    {
        const bool branch_taken_0x1b4948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4948) {
            ctx->pc = 0x1B49FCu;
            return;
        }
    }
    ctx->pc = 0x1B4950u;
    // 0x1b4950: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4954: 0x84621416  lh          $v0, 0x1416($v1)
    ctx->pc = 0x1b4954u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5142)));
    // 0x1b4958: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b4958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b495c: 0xa4621416  sh          $v0, 0x1416($v1)
    ctx->pc = 0x1b495cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5142), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b4960: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4964: 0x904213f8  lbu         $v0, 0x13F8($v0)
    ctx->pc = 0x1b4964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5112)));
    // 0x1b4968: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b4968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b496c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b496cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b4970: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B4970u;
    {
        const bool branch_taken_0x1b4970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b4970) {
            ctx->pc = 0x1B49BCu;
            return;
        }
    }
    ctx->pc = 0x1B4978u;
    // 0x1b4978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b497c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B497Cu;
    {
        const bool branch_taken_0x1b497c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b497c) {
            ctx->pc = 0x1B498Cu;
            return;
        }
    }
    ctx->pc = 0x1B4984u;
    // 0x1b4984: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1B4984u;
    {
        const bool branch_taken_0x1b4984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4984) {
            ctx->pc = 0x1B49ECu;
            return;
        }
    }
    ctx->pc = 0x1B498Cu;
}
