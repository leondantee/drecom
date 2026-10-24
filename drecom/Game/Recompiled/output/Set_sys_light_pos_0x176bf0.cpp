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

// Function: Set_sys_light_pos
// Address: 0x176bf0 - 0x176c80
void Set_sys_light_pos_0x176bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_sys_light_pos_0x176bf0");
#endif

    ctx->pc = 0x176bf0u;

    // 0x176bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x176bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x176bf4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x176bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x176bf8: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x176bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x176bfc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x176bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176c00: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x176c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176c04: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x176c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176c08: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x176c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x176c0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176c10: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x176c10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x176c14: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x176c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x176c18: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x176c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x176c1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176c20: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x176c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x176c24: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x176c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176c28: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x176c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176c2c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x176c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176c30: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x176c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x176c34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176c38: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x176c38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x176c3c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x176c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x176c40: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x176c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x176c44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176c48: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x176c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x176c4c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x176c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176c50: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x176c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176c54: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x176c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176c58: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x176c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x176c5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176c60: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x176c60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x176c64: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x176c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x176c68: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x176c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x176c6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176c70: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x176c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x176c74: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x176c74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x176c78: 0x3e00008  jr          $ra
    ctx->pc = 0x176C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176C80u;
}
