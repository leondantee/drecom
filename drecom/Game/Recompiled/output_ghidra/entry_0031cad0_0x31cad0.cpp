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

// Function: entry_0031cad0
// Address: 0x31cad0 - 0x31caf4
void entry_0031cad0_0x31cad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031cad0_0x31cad0");
#endif

    ctx->pc = 0x31cad0u;

    // 0x31cad0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cad4: 0x8c4212b4  lw          $v0, 0x12B4($v0)
    ctx->pc = 0x31cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4788)));
    // 0x31cad8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31cad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31cadc: 0x10440035  beq         $v0, $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x31CADCu;
    {
        const bool branch_taken_0x31cadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x31cadc) {
            ctx->pc = 0x31CBB4u;
            return;
        }
    }
    ctx->pc = 0x31CAE4u;
    // 0x31cae4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31CAE4u;
    {
        const bool branch_taken_0x31cae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cae4) {
            ctx->pc = 0x31CAF4u;
            return;
        }
    }
    ctx->pc = 0x31CAECu;
    // 0x31caec: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x31CAECu;
    {
        const bool branch_taken_0x31caec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31caec) {
            ctx->pc = 0x31CC58u;
            return;
        }
    }
    ctx->pc = 0x31CAF4u;
}
