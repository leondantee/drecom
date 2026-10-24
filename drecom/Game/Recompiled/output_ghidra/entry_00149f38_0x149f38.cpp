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

// Function: entry_00149f38
// Address: 0x149f38 - 0x149f88
void entry_00149f38_0x149f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149f38_0x149f38");
#endif

    switch (ctx->pc) {
        case 0x149f48u: goto label_149f48;
        case 0x149f6cu: goto label_149f6c;
        default: break;
    }

    ctx->pc = 0x149f38u;

    // 0x149f38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149f3c: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x149f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x149f40: 0xc058b98  jal         func_162E60
    ctx->pc = 0x149F40u;
    SET_GPR_U32(ctx, 31, 0x149F48u);
    ctx->pc = 0x162E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162E60u, 0x149F40u, 0x149F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149F48u;
label_149f48:
    // 0x149f48: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x149f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x149f4c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x149f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x149f50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x149f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x149f54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149f58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149f5c: 0x24641b40  addiu       $a0, $v1, 0x1B40
    ctx->pc = 0x149f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x149f60: 0x24451b40  addiu       $a1, $v0, 0x1B40
    ctx->pc = 0x149f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x149f64: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x149F64u;
    SET_GPR_U32(ctx, 31, 0x149F6Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x149F6Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x149F6Cu) { return; }
    ctx->pc = 0x149F6Cu;
label_149f6c:
    // 0x149f6c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x149f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x149f70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149f74: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x149f74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x149f78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149f7c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x149f7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x149f80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x149f84: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x149f84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x149f88u;
}
