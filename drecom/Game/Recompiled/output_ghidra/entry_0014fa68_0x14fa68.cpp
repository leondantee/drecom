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

// Function: entry_0014fa68
// Address: 0x14fa68 - 0x14fa90
void entry_0014fa68_0x14fa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fa68_0x14fa68");
#endif

    ctx->pc = 0x14fa68u;

    // 0x14fa68: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x14fa68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x14fa6c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x14fa6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x14fa70: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14FA70u;
    {
        const bool branch_taken_0x14fa70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fa70) {
            ctx->pc = 0x14FA90u;
            return;
        }
    }
    ctx->pc = 0x14FA78u;
    // 0x14fa78: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x14fa78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x14fa7c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x14fa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x14fa80: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14fa80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14fa84: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x14fa84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x14fa88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14FA88u;
    {
        const bool branch_taken_0x14fa88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fa88) {
            ctx->pc = 0x14FA9Cu;
            return;
        }
    }
    ctx->pc = 0x14FA90u;
}
