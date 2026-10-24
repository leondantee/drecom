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

// Function: Get_ceiling2
// Address: 0x15ea70 - 0x15eb24
void Get_ceiling2_0x15ea70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_ceiling2_0x15ea70");
#endif

    switch (ctx->pc) {
        case 0x15eaf0u: goto label_15eaf0;
        default: break;
    }

    ctx->pc = 0x15ea70u;

    // 0x15ea70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15ea70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15ea74: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x15ea74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x15ea78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ea78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ea7c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x15ea7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x15ea80: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x15ea80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15ea84: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x15ea84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ea88: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x15ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15ea8c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x15ea8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x15ea90: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x15ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15ea94: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x15ea94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ea98: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x15ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15ea9c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x15ea9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x15eaa0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x15eaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15eaa4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x15eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x15eaa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15eaa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15eaac: 0x0  nop
    ctx->pc = 0x15eaacu;
    // NOP
    // 0x15eab0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15eab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15eab4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x15eab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x15eab8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x15eab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15eabc: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x15eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x15eac0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15eac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15eac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15eac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15eac8: 0x0  nop
    ctx->pc = 0x15eac8u;
    // NOP
    // 0x15eacc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15eaccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15ead0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x15ead0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15ead4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x15ead4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15ead8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x15ead8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15eadc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x15eadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15eae0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x15eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x15eae4: 0x344701c7  ori         $a3, $v0, 0x1C7
    ctx->pc = 0x15eae4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)455);
    // 0x15eae8: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15EAE8u;
    SET_GPR_U32(ctx, 31, 0x15EAF0u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15EAE8u, 0x15EAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EAF0u;
label_15eaf0:
    // 0x15eaf0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x15eaf0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15eaf4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15EAF4u;
    {
        const bool branch_taken_0x15eaf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eaf4) {
            ctx->pc = 0x15EB08u;
            goto label_15eb08;
        }
    }
    ctx->pc = 0x15EAFCu;
    // 0x15eafc: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x15eafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15eb00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15EB00u;
    {
        const bool branch_taken_0x15eb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eb00) {
            ctx->pc = 0x15EB10u;
            goto label_15eb10;
        }
    }
    ctx->pc = 0x15EB08u;
label_15eb08:
    // 0x15eb08: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x15eb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15eb0c: 0x0  nop
    ctx->pc = 0x15eb0cu;
    // NOP
label_15eb10:
    // 0x15eb10: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15eb10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15eb14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15eb14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15eb18: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x15eb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15eb1c: 0x3e00008  jr          $ra
    ctx->pc = 0x15EB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EB24u;
}
