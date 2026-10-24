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

// Function: srp_id05_type0c
// Address: 0x2bfb50 - 0x2bfbfc
void srp_id05_type0c_0x2bfb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id05_type0c_0x2bfb50");
#endif

    switch (ctx->pc) {
        case 0x2bfb88u: goto label_2bfb88;
        default: break;
    }

    ctx->pc = 0x2bfb50u;

    // 0x2bfb50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bfb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bfb54: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bfb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bfb58: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bfb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bfb5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bfb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfb60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bfb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfb64: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2bfb64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bfb68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bfb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfb6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bfb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfb70: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2bfb70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bfb74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bfb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfb78: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bfb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfb7c: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2bfb7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bfb80: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BFB80u;
    SET_GPR_U32(ctx, 31, 0x2BFB88u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BFB80u, 0x2BFB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFB88u;
label_2bfb88:
    // 0x2bfb88: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2bfb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2bfb8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bfb8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bfb90: 0x0  nop
    ctx->pc = 0x2bfb90u;
    // NOP
    // 0x2bfb94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bfb94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bfb98: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2bfb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2bfb9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bfb9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfba0: 0x0  nop
    ctx->pc = 0x2bfba0u;
    // NOP
    // 0x2bfba4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bfba4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bfba8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bfba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfbac: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2bfbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2bfbb0: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x2bfbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x2bfbb4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2bfbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2bfbb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bfbb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfbbc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bfbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfbc0: 0xe46002e0  swc1        $f0, 0x2E0($v1)
    ctx->pc = 0x2bfbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 736), bits); }
    // 0x2bfbc4: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x2bfbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x2bfbc8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2bfbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2bfbcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bfbccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfbd0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bfbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfbd4: 0xe46002e4  swc1        $f0, 0x2E4($v1)
    ctx->pc = 0x2bfbd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 740), bits); }
    // 0x2bfbd8: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x2bfbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x2bfbdc: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2bfbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2bfbe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bfbe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfbe4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bfbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfbe8: 0xe46002e8  swc1        $f0, 0x2E8($v1)
    ctx->pc = 0x2bfbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 744), bits); }
    // 0x2bfbec: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bfbecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfbf0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bfbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bfbf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFBFCu;
}
