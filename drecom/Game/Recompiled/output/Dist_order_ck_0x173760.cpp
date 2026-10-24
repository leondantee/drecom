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

// Function: Dist_order_ck
// Address: 0x173760 - 0x173810
void Dist_order_ck_0x173760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Dist_order_ck_0x173760");
#endif

    switch (ctx->pc) {
        case 0x173784u: goto label_173784;
        default: break;
    }

    ctx->pc = 0x173760u;

    // 0x173760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x173760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x173764: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x173764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x173768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17376c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17376cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x173770: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x173770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x173774: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x173774u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x173778: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x173778u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17377c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x17377Cu;
    {
        const bool branch_taken_0x17377c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17377c) {
            ctx->pc = 0x1737E0u;
            goto label_1737e0;
        }
    }
    ctx->pc = 0x173784u;
label_173784:
    // 0x173784: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x173784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x173788: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x173788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17378c: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x17378cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x173790: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173794: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x173794u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x173798: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x173798u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x17379c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x17379cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1737a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1737a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1737a4: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1737A4u;
    {
        const bool branch_taken_0x1737a4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1737a4) {
            ctx->pc = 0x1737D8u;
            goto label_1737d8;
        }
    }
    ctx->pc = 0x1737ACu;
    // 0x1737ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1737acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1737b0: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1737B0u;
    {
        const bool branch_taken_0x1737b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1737b0) {
            ctx->pc = 0x1737D8u;
            goto label_1737d8;
        }
    }
    ctx->pc = 0x1737B8u;
    // 0x1737b8: 0xc6011288  lwc1        $f1, 0x1288($s0)
    ctx->pc = 0x1737b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1737bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1737bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1737c0: 0xc4401288  lwc1        $f0, 0x1288($v0)
    ctx->pc = 0x1737c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1737c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1737c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1737c8: 0x0  nop
    ctx->pc = 0x1737c8u;
    // NOP
    // 0x1737cc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1737CCu;
    {
        const bool branch_taken_0x1737cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1737cc) {
            ctx->pc = 0x1737D8u;
            goto label_1737d8;
        }
    }
    ctx->pc = 0x1737D4u;
    // 0x1737d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1737d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1737d8:
    // 0x1737d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1737d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1737dc: 0x0  nop
    ctx->pc = 0x1737dcu;
    // NOP
label_1737e0:
    // 0x1737e0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1737e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1737e4: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x1737e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x1737e8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1737e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1737ec: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1737ECu;
    {
        const bool branch_taken_0x1737ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1737ec) {
            ctx->pc = 0x173784u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173784;
        }
    }
    ctx->pc = 0x1737F4u;
    // 0x1737f4: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x1737f4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1737f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1737f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1737fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1737fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173804: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x173804u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x173808: 0x3e00008  jr          $ra
    ctx->pc = 0x173808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173810u;
}
