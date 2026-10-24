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

// Function: entry_0013d510
// Address: 0x13d510 - 0x13d550
void entry_0013d510_0x13d510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d510_0x13d510");
#endif

    ctx->pc = 0x13d510u;

    // 0x13d510: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x13d510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x13d514: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d518: 0xfc640028  sd          $a0, 0x28($v1)
    ctx->pc = 0x13d518u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 4));
    // 0x13d51c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13d51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d520: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x13d520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x13d524: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13D524u;
    {
        const bool branch_taken_0x13d524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d524) {
            ctx->pc = 0x13D550u;
            return;
        }
    }
    ctx->pc = 0x13D52Cu;
    // 0x13d52c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d530: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x13d530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13d534: 0x3c030a00  lui         $v1, 0xA00
    ctx->pc = 0x13d534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2560 << 16));
    // 0x13d538: 0x34630070  ori         $v1, $v1, 0x70
    ctx->pc = 0x13d538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)112);
    // 0x13d53c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x13d53cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x13d540: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d544: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x13d544u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
    // 0x13d548: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13D548u;
    {
        const bool branch_taken_0x13d548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d548) {
            ctx->pc = 0x13D560u;
            return;
        }
    }
    ctx->pc = 0x13D550u;
}
