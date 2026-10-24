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

// Function: entry_00178bd8
// Address: 0x178bd8 - 0x178c20
void entry_00178bd8_0x178bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178bd8_0x178bd8");
#endif

    ctx->pc = 0x178bd8u;

    // 0x178bd8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x178bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x178bdc: 0x2c611200  sltiu       $at, $v1, 0x1200
    ctx->pc = 0x178bdcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4608) ? 1 : 0);
    // 0x178be0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x178BE0u;
    {
        const bool branch_taken_0x178be0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x178be0) {
            ctx->pc = 0x178C20u;
            return;
        }
    }
    ctx->pc = 0x178BE8u;
    // 0x178be8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x178be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x178bec: 0x2464ef00  addiu       $a0, $v1, -0x1100
    ctx->pc = 0x178becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962944));
    // 0x178bf0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x178bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x178bf4: 0x48942  srl         $s1, $a0, 5
    ctx->pc = 0x178bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x178bf8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x178bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x178bfc: 0x2464ef00  addiu       $a0, $v1, -0x1100
    ctx->pc = 0x178bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962944));
    // 0x178c00: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x178c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x178c04: 0x3083001f  andi        $v1, $a0, 0x1F
    ctx->pc = 0x178c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x178c08: 0x2464fffc  addiu       $a0, $v1, -0x4
    ctx->pc = 0x178c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x178c0c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x178c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x178c10: 0x418c2  srl         $v1, $a0, 3
    ctx->pc = 0x178c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x178c14: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x178c14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x178c18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x178C18u;
    {
        const bool branch_taken_0x178c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178c18) {
            ctx->pc = 0x178C34u;
            return;
        }
    }
    ctx->pc = 0x178C20u;
}
