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

// Function: Em1e_pos_hosei
// Address: 0x371f20 - 0x372024
void Em1e_pos_hosei_0x371f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1e_pos_hosei_0x371f20");
#endif

    switch (ctx->pc) {
        case 0x371f5cu: goto label_371f5c;
        case 0x371f70u: goto label_371f70;
        case 0x371fb8u: goto label_371fb8;
        default: break;
    }

    ctx->pc = 0x371f20u;

    // 0x371f20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x371f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x371f24: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x371f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x371f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x371f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x371f2c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x371f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x371f30: 0xa3a50068  sb          $a1, 0x68($sp)
    ctx->pc = 0x371f30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 5));
    // 0x371f34: 0x93a30068  lbu         $v1, 0x68($sp)
    ctx->pc = 0x371f34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371f38: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x371f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x371f3c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x371f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x371f40: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x371F40u;
    {
        const bool branch_taken_0x371f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x371f40) {
            ctx->pc = 0x372010u;
            goto label_372010;
        }
    }
    ctx->pc = 0x371F48u;
    // 0x371f48: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x371f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x371f4c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x371f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x371f50: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x371f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x371f54: 0xc040c9e  jal         func_103278
    ctx->pc = 0x371F54u;
    SET_GPR_U32(ctx, 31, 0x371F5Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x371F5Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x371F5Cu) { return; }
    ctx->pc = 0x371F5Cu;
label_371f5c:
    // 0x371f5c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x371f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x371f60: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x371f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x371f64: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x371f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x371f68: 0xc040c9e  jal         func_103278
    ctx->pc = 0x371F68u;
    SET_GPR_U32(ctx, 31, 0x371F70u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x371F70u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x371F70u) { return; }
    ctx->pc = 0x371F70u;
label_371f70:
    // 0x371f70: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x371f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371f74: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x371f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x371f78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x371f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371f7c: 0x0  nop
    ctx->pc = 0x371f7cu;
    // NOP
    // 0x371f80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x371f80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x371f84: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x371f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x371f88: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x371f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371f8c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x371f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x371f90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x371f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371f94: 0x0  nop
    ctx->pc = 0x371f94u;
    // NOP
    // 0x371f98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x371f98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x371f9c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x371f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x371fa0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x371fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x371fa4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x371fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x371fa8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x371fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x371fac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x371facu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x371fb0: 0xc059e1c  jal         func_167870
    ctx->pc = 0x371FB0u;
    SET_GPR_U32(ctx, 31, 0x371FB8u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x371FB0u, 0x371FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371FB8u;
label_371fb8:
    // 0x371fb8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x371fb8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x371fbc: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x371fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x371fc0: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x371fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x371fc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x371fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371fc8: 0x0  nop
    ctx->pc = 0x371fc8u;
    // NOP
    // 0x371fcc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x371fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x371fd0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x371FD0u;
    {
        const bool branch_taken_0x371fd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x371fd0) {
            ctx->pc = 0x371FF8u;
            goto label_371ff8;
        }
    }
    ctx->pc = 0x371FD8u;
    // 0x371fd8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x371fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371fdc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x371fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x371fe0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x371fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371fe4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x371fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x371fe8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x371fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x371fec: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x371fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x371ff0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x371FF0u;
    {
        const bool branch_taken_0x371ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x371ff0) {
            ctx->pc = 0x372010u;
            goto label_372010;
        }
    }
    ctx->pc = 0x371FF8u;
label_371ff8:
    // 0x371ff8: 0x3c03c743  lui         $v1, 0xC743
    ctx->pc = 0x371ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51011 << 16));
    // 0x371ffc: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x371ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x372000: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x372000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372004: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x372004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x372008: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x372008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x37200c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x37200cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_372010:
    // 0x372010: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x372010u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x372014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372018: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x372018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x37201c: 0x3e00008  jr          $ra
    ctx->pc = 0x37201Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37201Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372024u;
}
