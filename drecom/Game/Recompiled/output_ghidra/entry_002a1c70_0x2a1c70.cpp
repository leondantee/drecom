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

// Function: entry_002a1c70
// Address: 0x2a1c70 - 0x2a1cc0
void entry_002a1c70_0x2a1c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a1c70_0x2a1c70");
#endif

    switch (ctx->pc) {
        case 0x2a1c98u: goto label_2a1c98;
        default: break;
    }

    ctx->pc = 0x2a1c70u;

    // 0x2a1c70: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1c74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a1c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1c78: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x2a1c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x2a1c7c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2a1c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2a1c80: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a1c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a1c84: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a1c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a1c88: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a1c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a1c8c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2a1c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2a1c90: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2A1C90u;
    SET_GPR_U32(ctx, 31, 0x2A1C98u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2A1C90u, 0x2A1C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1C98u;
label_2a1c98:
    // 0x2a1c98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A1C98u;
    {
        const bool branch_taken_0x2a1c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1c98) {
            ctx->pc = 0x2A1CC0u;
            return;
        }
    }
    ctx->pc = 0x2A1CA0u;
    // 0x2a1ca0: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x2a1ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1ca4: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x2a1ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x2a1ca8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a1ca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1cac: 0x0  nop
    ctx->pc = 0x2a1cacu;
    // NOP
    // 0x2a1cb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a1cb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1cb4: 0x0  nop
    ctx->pc = 0x2a1cb4u;
    // NOP
    // 0x2a1cb8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1CB8u;
    {
        const bool branch_taken_0x2a1cb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a1cb8) {
            ctx->pc = 0x2A1CC8u;
            return;
        }
    }
    ctx->pc = 0x2A1CC0u;
}
