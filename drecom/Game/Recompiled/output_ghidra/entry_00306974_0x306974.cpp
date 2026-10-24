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

// Function: entry_00306974
// Address: 0x306974 - 0x3069c0
void entry_00306974_0x306974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00306974_0x306974");
#endif

    ctx->pc = 0x306974u;

    // 0x306974: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x306974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x306978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x306978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30697c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x30697cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x306980: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306984: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x306984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x306988: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x306988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30698c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30698cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x306990: 0x10830052  beq         $a0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x306990u;
    {
        const bool branch_taken_0x306990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x306990) {
            ctx->pc = 0x306ADCu;
            return;
        }
    }
    ctx->pc = 0x306998u;
    // 0x306998: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x306998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30699c: 0x1083003e  beq         $a0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x30699Cu;
    {
        const bool branch_taken_0x30699c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30699c) {
            ctx->pc = 0x306A98u;
            return;
        }
    }
    ctx->pc = 0x3069A4u;
    // 0x3069a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3069a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3069a8: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3069A8u;
    {
        const bool branch_taken_0x3069a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3069a8) {
            ctx->pc = 0x306A28u;
            return;
        }
    }
    ctx->pc = 0x3069B0u;
    // 0x3069b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3069B0u;
    {
        const bool branch_taken_0x3069b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3069b0) {
            ctx->pc = 0x3069C0u;
            return;
        }
    }
    ctx->pc = 0x3069B8u;
    // 0x3069b8: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x3069B8u;
    {
        const bool branch_taken_0x3069b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3069b8) {
            ctx->pc = 0x306B64u;
            return;
        }
    }
    ctx->pc = 0x3069C0u;
}
