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

// Function: entry_001ca93c
// Address: 0x1ca93c - 0x1ca97c
void entry_001ca93c_0x1ca93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca93c_0x1ca93c");
#endif

    ctx->pc = 0x1ca93cu;

    // 0x1ca93c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1ca93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca940: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1ca940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1ca944: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ca944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ca948: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ca948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ca94c: 0x1083006f  beq         $a0, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x1CA94Cu;
    {
        const bool branch_taken_0x1ca94c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ca94c) {
            ctx->pc = 0x1CAB0Cu;
            return;
        }
    }
    ctx->pc = 0x1CA954u;
    // 0x1ca954: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ca954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca958: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1CA958u;
    {
        const bool branch_taken_0x1ca958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ca958) {
            ctx->pc = 0x1CAA94u;
            return;
        }
    }
    ctx->pc = 0x1CA960u;
    // 0x1ca960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ca960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca964: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CA964u;
    {
        const bool branch_taken_0x1ca964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ca964) {
            ctx->pc = 0x1CA9ACu;
            return;
        }
    }
    ctx->pc = 0x1CA96Cu;
    // 0x1ca96c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA96Cu;
    {
        const bool branch_taken_0x1ca96c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca96c) {
            ctx->pc = 0x1CA97Cu;
            return;
        }
    }
    ctx->pc = 0x1CA974u;
    // 0x1ca974: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x1CA974u;
    {
        const bool branch_taken_0x1ca974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca974) {
            ctx->pc = 0x1CAC84u;
            return;
        }
    }
    ctx->pc = 0x1CA97Cu;
}
