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

// Function: entry_002f56e4
// Address: 0x2f56e4 - 0x2f5710
void entry_002f56e4_0x2f56e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f56e4_0x2f56e4");
#endif

    ctx->pc = 0x2f56e4u;

    // 0x2f56e4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f56e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f56e8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2f56e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f56ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f56ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f56f0: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F56F0u;
    {
        const bool branch_taken_0x2f56f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f56f0) {
            ctx->pc = 0x2F5710u;
            return;
        }
    }
    ctx->pc = 0x2F56F8u;
    // 0x2f56f8: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x2f56f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x2f56fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f56fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f5700: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f5700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f5704: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2f5704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f5708: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2F5708u;
    SET_GPR_U32(ctx, 31, 0x2F5710u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2F5710u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2F5710u) { return; }
    ctx->pc = 0x2F5710u;
}
