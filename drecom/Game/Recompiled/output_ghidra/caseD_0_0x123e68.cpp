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

// Function: caseD_0
// Address: 0x123e68 - 0x123e9c
void caseD_0_0x123e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x123e68");
#endif

    ctx->pc = 0x123e68u;

    // 0x123e68: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x123e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x123e6c: 0x8c23af60  lw          $v1, -0x50A0($at)
    ctx->pc = 0x123e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85AF60u));
    // 0x123e70: 0x2c6202bc  sltiu       $v0, $v1, 0x2BC
    ctx->pc = 0x123e70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)700) ? 1 : 0);
    // 0x123e74: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x123E74u;
    {
        const bool branch_taken_0x123e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123e74) {
            ctx->pc = 0x123E9Cu;
            return;
        }
    }
    ctx->pc = 0x123E7Cu;
    // 0x123e7c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x123e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123e80: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x123e80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x123e84: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x123e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x123e88: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x123e88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x123e8c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x123e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123e90: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x123e90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x123e94: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x123e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x123e98: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x123e98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x123e9cu;
}
