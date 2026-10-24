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

// Function: entry_00265a48
// Address: 0x265a48 - 0x265a70
void entry_00265a48_0x265a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265a48_0x265a48");
#endif

    ctx->pc = 0x265a48u;

    // 0x265a48: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x265a48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x265a4c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x265a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265a50: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265a54: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x265A54u;
    {
        const bool branch_taken_0x265a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x265a54) {
            ctx->pc = 0x265A70u;
            return;
        }
    }
    ctx->pc = 0x265A5Cu;
    // 0x265a5c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x265a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265a60: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x265a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x265a64: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x265a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x265a68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x265A68u;
    {
        const bool branch_taken_0x265a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265a68) {
            ctx->pc = 0x265A78u;
            return;
        }
    }
    ctx->pc = 0x265A70u;
}
