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

// Function: entry_00177aac
// Address: 0x177aac - 0x177b50
void entry_00177aac_0x177aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177aac_0x177aac");
#endif

    ctx->pc = 0x177aacu;

    // 0x177aac: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x177aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177ab0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177ab4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x177ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x177ab8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x177ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177abc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177ac0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x177ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x177ac4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177ac8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177acc: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x177accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x177ad0: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x177ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x177ad4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177ad8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177adc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x177adcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x177ae0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x177ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x177ae4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177ae8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x177ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x177aec: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x177aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177af0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177af4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x177af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x177af8: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x177af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177afc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177b00: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x177b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x177b04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177b08: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177b0c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x177b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x177b10: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x177b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x177b14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177b18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177b1c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x177b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x177b20: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x177b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x177b24: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177b28: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x177b28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x177b2c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177b30: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177b34: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x177b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x177b38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177b3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177b3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177b40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177b44: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x177b44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x177b48: 0x3e00008  jr          $ra
    ctx->pc = 0x177B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177B50u;
}
