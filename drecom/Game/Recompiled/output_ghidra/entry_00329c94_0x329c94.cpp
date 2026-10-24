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

// Function: entry_00329c94
// Address: 0x329c94 - 0x329cd4
void entry_00329c94_0x329c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329c94_0x329c94");
#endif

    ctx->pc = 0x329c94u;

    // 0x329c94: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x329c94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x329c98: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x329c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329c9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329ca0: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x329CA0u;
    {
        const bool branch_taken_0x329ca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x329ca0) {
            ctx->pc = 0x329CD4u;
            return;
        }
    }
    ctx->pc = 0x329CA8u;
    // 0x329ca8: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x329ca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x329cac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x329cacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329cb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329cb4: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x329CB4u;
    {
        const bool branch_taken_0x329cb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x329cb4) {
            ctx->pc = 0x329CD4u;
            return;
        }
    }
    ctx->pc = 0x329CBCu;
    // 0x329cbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x329cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x329cc0: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x329cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x329cc4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x329cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x329cc8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x329cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x329ccc: 0x10600116  beqz        $v1, . + 4 + (0x116 << 2)
    ctx->pc = 0x329CCCu;
    {
        const bool branch_taken_0x329ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x329ccc) {
            ctx->pc = 0x32A128u;
            return;
        }
    }
    ctx->pc = 0x329CD4u;
}
