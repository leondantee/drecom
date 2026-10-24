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

// Function: entry_001d3d70
// Address: 0x1d3d70 - 0x1d3dbc
void entry_001d3d70_0x1d3d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3d70_0x1d3d70");
#endif

    switch (ctx->pc) {
        case 0x1d3d84u: goto label_1d3d84;
        case 0x1d3d98u: goto label_1d3d98;
        default: break;
    }

    ctx->pc = 0x1d3d70u;

    // 0x1d3d70: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d3d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d3d74: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1d3d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1d3d78: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1d3d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1d3d7c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D3D7Cu;
    SET_GPR_U32(ctx, 31, 0x1D3D84u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D3D84u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D3D84u) { return; }
    ctx->pc = 0x1D3D84u;
label_1d3d84:
    // 0x1d3d84: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1d3d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d3d88: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1d3d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1d3d8c: 0x2445e510  addiu       $a1, $v0, -0x1AF0
    ctx->pc = 0x1d3d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x1d3d90: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D3D90u;
    SET_GPR_U32(ctx, 31, 0x1D3D98u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D3D98u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D3D98u) { return; }
    ctx->pc = 0x1D3D98u;
label_1d3d98:
    // 0x1d3d98: 0x97a2015e  lhu         $v0, 0x15E($sp)
    ctx->pc = 0x1d3d98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 350)));
    // 0x1d3d9c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d3d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d3da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3da4: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D3DA4u;
    {
        const bool branch_taken_0x1d3da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d3da4) {
            ctx->pc = 0x1D3E44u;
            return;
        }
    }
    ctx->pc = 0x1D3DACu;
    // 0x1d3dac: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1d3dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d3db0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1d3db0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3db4: 0x8fb10180  lw          $s1, 0x180($sp)
    ctx->pc = 0x1d3db4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d3db8: 0x0  nop
    ctx->pc = 0x1d3db8u;
    // NOP
    ctx->pc = 0x1d3dbcu;
}
