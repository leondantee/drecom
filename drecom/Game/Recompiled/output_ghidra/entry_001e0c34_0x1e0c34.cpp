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

// Function: entry_001e0c34
// Address: 0x1e0c34 - 0x1e0cfc
void entry_001e0c34_0x1e0c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0c34_0x1e0c34");
#endif

    ctx->pc = 0x1e0c34u;

    // 0x1e0c34: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0c38: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1e0c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e0c3c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e0c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0c40: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x1e0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
    // 0x1e0c44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0c48: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1e0c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0c4c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e0c4cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e0c50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0c54: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1e0c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e0c58: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e0c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0c5c: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x1e0c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
    // 0x1e0c60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0c64: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1e0c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0c68: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e0c68u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e0c6c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1e0c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1e0c70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0c78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0c7c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1e0c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1e0c80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e0c80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0c84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0c88: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1e0c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1e0c8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0c90: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e0c94: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e0c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e0c98: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0c9c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e0c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e0ca0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0ca4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e0ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e0ca8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0cac: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e0cacu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e0cb0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0cb4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e0cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e0cb8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0cbc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e0cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e0cc0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0cc4: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e0cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e0cc8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0ccc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e0cd0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e0cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e0cd4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e0cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e0cd8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0cdc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1e0cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1e0ce0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0ce4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e0ce8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e0ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e0cec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0cf0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e0cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e0cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0CFCu;
}
