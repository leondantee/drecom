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

// Function: entry_0037cb04
// Address: 0x37cb04 - 0x37cb2c
void entry_0037cb04_0x37cb04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037cb04_0x37cb04");
#endif

    ctx->pc = 0x37cb04u;

    // 0x37cb04: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x37cb04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x37cb08: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x37cb08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x37cb0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37cb10: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x37CB10u;
    {
        const bool branch_taken_0x37cb10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37cb10) {
            ctx->pc = 0x37CB8Cu;
            return;
        }
    }
    ctx->pc = 0x37CB18u;
    // 0x37cb18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37cb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37cb1c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37CB1Cu;
    {
        const bool branch_taken_0x37cb1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37cb1c) {
            ctx->pc = 0x37CB2Cu;
            return;
        }
    }
    ctx->pc = 0x37CB24u;
    // 0x37cb24: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x37CB24u;
    {
        const bool branch_taken_0x37cb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cb24) {
            ctx->pc = 0x37CBE4u;
            return;
        }
    }
    ctx->pc = 0x37CB2Cu;
}
