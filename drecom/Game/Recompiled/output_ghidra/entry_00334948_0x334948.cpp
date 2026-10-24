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

// Function: entry_00334948
// Address: 0x334948 - 0x33499c
void entry_00334948_0x334948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00334948_0x334948");
#endif

    switch (ctx->pc) {
        case 0x334988u: goto label_334988;
        default: break;
    }

    ctx->pc = 0x334948u;

    // 0x334948: 0x2a630006  slti        $v1, $s3, 0x6
    ctx->pc = 0x334948u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x33494c: 0x1460ff65  bnez        $v1, . + 4 + (-0x9B << 2)
    ctx->pc = 0x33494Cu;
    {
        const bool branch_taken_0x33494c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33494c) {
            ctx->pc = 0x3346E4u;
            return;
        }
    }
    ctx->pc = 0x334954u;
    // 0x334954: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x334954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x334958: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x334958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33495c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x33495cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x334960: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x334960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x334964: 0x34441048  ori         $a0, $v0, 0x1048
    ctx->pc = 0x334964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x334968: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x334968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33496c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x33496cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x334970: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x334970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x334974: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x334974u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x334978: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x334978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x33497c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x33497cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x334980: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x334980u;
    SET_GPR_U32(ctx, 31, 0x334988u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x334980u, 0x334988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334988u;
label_334988:
    // 0x334988: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x334988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33498c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x33498cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x334990: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x334990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x334994: 0x1000fcb3  b           . + 4 + (-0x34D << 2)
    ctx->pc = 0x334994u;
    {
        const bool branch_taken_0x334994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334994) {
            ctx->pc = 0x333C64u;
            return;
        }
    }
    ctx->pc = 0x33499Cu;
}
