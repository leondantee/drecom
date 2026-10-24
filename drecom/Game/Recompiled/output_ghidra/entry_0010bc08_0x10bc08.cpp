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

// Function: entry_0010bc08
// Address: 0x10bc08 - 0x10bc60
void entry_0010bc08_0x10bc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bc08_0x10bc08");
#endif

    ctx->pc = 0x10bc08u;

label_10bc08:
    // 0x10bc08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10bc0c: 0x0  nop
    ctx->pc = 0x10bc0cu;
    // NOP
    // 0x10bc10: 0x0  nop
    ctx->pc = 0x10bc10u;
    // NOP
    // 0x10bc14: 0x0  nop
    ctx->pc = 0x10bc14u;
    // NOP
    // 0x10bc18: 0x0  nop
    ctx->pc = 0x10bc18u;
    // NOP
    // 0x10bc1c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10BC1Cu;
    {
        const bool branch_taken_0x10bc1c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10bc1c) {
            ctx->pc = 0x10BC08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10bc08;
        }
    }
    ctx->pc = 0x10BC24u;
    // 0x10bc24: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10bc24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10bc28: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10bc28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10bc2c: 0x24634530  addiu       $v1, $v1, 0x4530
    ctx->pc = 0x10bc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17712));
    // 0x10bc30: 0x34847010  ori         $a0, $a0, 0x7010
    ctx->pc = 0x10bc30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28688);
    // 0x10bc34: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x10bc34u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x384530u));
    // 0x10bc38: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10bc38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10bc3c: 0x3c066000  lui         $a2, 0x6000
    ctx->pc = 0x10bc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24576 << 16));
    // 0x10bc40: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x10bc40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x10bc44: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x10bc44u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x10bc48: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10bc48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10bc4c: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x10bc4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x10bc50: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x10bc50u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x384540u));
    // 0x10bc54: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x10bc54u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x10bc58: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x10bc58u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 6));
    // 0x10bc5c: 0x0  nop
    ctx->pc = 0x10bc5cu;
    // NOP
    ctx->pc = 0x10bc60u;
}
