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

// Function: entry_00293958
// Address: 0x293958 - 0x293990
void entry_00293958_0x293958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00293958_0x293958");
#endif

    ctx->pc = 0x293958u;

    // 0x293958: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x293958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x29395c: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x29395cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x293960: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x293960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x293964: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x293964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x293968: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x293968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x29396c: 0x62f025  or          $fp, $v1, $v0
    ctx->pc = 0x29396cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x293970: 0x9ef025  or          $fp, $a0, $fp
    ctx->pc = 0x293970u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) | GPR_U64(ctx, 30));
    // 0x293974: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x293974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x293978: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x293978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x29397c: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x29397cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x293980: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x293980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x293984: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x293984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x293988: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x293988u;
    {
        const bool branch_taken_0x293988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293988) {
            ctx->pc = 0x293AC8u;
            return;
        }
    }
    ctx->pc = 0x293990u;
}
