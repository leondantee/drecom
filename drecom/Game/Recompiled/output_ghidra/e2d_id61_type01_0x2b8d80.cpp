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

// Function: e2d_id61_type01
// Address: 0x2b8d80 - 0x2b8e14
void e2d_id61_type01_0x2b8d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id61_type01_0x2b8d80");
#endif

    ctx->pc = 0x2b8d80u;

    // 0x2b8d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b8d84: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b8d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b8d88: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b8d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b8d8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8d8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8d90: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8d94: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b8d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b8d98: 0x3c033f87  lui         $v1, 0x3F87
    ctx->pc = 0x2b8d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16263 << 16));
    // 0x2b8d9c: 0x3463ae14  ori         $v1, $v1, 0xAE14
    ctx->pc = 0x2b8d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44564);
    // 0x2b8da0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8da0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8da4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8da8: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b8da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b8dac: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x2b8dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x2b8db0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8db0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8db4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8db8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b8db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b8dbc: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2b8dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b8dc0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8dc4: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b8dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b8dc8: 0x3c03bc93  lui         $v1, 0xBC93
    ctx->pc = 0x2b8dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48275 << 16));
    // 0x2b8dcc: 0x346374bc  ori         $v1, $v1, 0x74BC
    ctx->pc = 0x2b8dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)29884);
    // 0x2b8dd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8dd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8dd4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8dd8: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b8dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b8ddc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b8ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8de0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8de4: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b8de4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8de8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b8de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8dec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8df0: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b8df0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8df4: 0x3c03bc75  lui         $v1, 0xBC75
    ctx->pc = 0x2b8df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48245 << 16));
    // 0x2b8df8: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b8df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b8dfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8dfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8e00: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8e04: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b8e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b8e08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b8e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b8e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8E14u;
}
