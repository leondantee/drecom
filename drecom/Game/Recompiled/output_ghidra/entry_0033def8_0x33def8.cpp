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

// Function: entry_0033def8
// Address: 0x33def8 - 0x33df30
void entry_0033def8_0x33def8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033def8_0x33def8");
#endif

    ctx->pc = 0x33def8u;

    // 0x33def8: 0x26520090  addiu       $s2, $s2, 0x90
    ctx->pc = 0x33def8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x33defc: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x33defcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x33df00: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x33df00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x33df04: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x33df04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
    // 0x33df08: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x33df08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x33df0c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x33df0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x33df10: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x33df10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x33df14: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x33df14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
    // 0x33df18: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x33df18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x33df1c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x33df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x33df20: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x33df20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x33df24: 0xae430068  sw          $v1, 0x68($s2)
    ctx->pc = 0x33df24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 3));
    // 0x33df28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x33DF28u;
    {
        const bool branch_taken_0x33df28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33df28) {
            ctx->pc = 0x33DF58u;
            return;
        }
    }
    ctx->pc = 0x33DF30u;
}
