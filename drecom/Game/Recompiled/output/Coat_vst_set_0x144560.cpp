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

// Function: Coat_vst_set
// Address: 0x144560 - 0x1446d0
void Coat_vst_set_0x144560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Coat_vst_set_0x144560");
#endif

    switch (ctx->pc) {
        case 0x144630u: goto label_144630;
        case 0x144658u: goto label_144658;
        case 0x144664u: goto label_144664;
        default: break;
    }

    ctx->pc = 0x144560u;

    // 0x144560: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x144560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x144564: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x144564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x144568: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x144568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14456c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14456cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144574: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x144574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x144578: 0x2470a530  addiu       $s0, $v1, -0x5AD0
    ctx->pc = 0x144578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944048));
    // 0x14457c: 0x8e031370  lw          $v1, 0x1370($s0)
    ctx->pc = 0x14457cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FB8A0u));
    // 0x144580: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x144580u;
    {
        const bool branch_taken_0x144580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x144580) {
            ctx->pc = 0x14469Cu;
            goto label_14469c;
        }
    }
    ctx->pc = 0x144588u;
    // 0x144588: 0x8e121370  lw          $s2, 0x1370($s0)
    ctx->pc = 0x144588u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4976)));
    // 0x14458c: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x14458cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x144590: 0xae031374  sw          $v1, 0x1374($s0)
    ctx->pc = 0x144590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4980), GPR_U32(ctx, 3));
    // 0x144594: 0x8e031370  lw          $v1, 0x1370($s0)
    ctx->pc = 0x144594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4976)));
    // 0x144598: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x144598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14459c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x14459cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1445a0: 0xae031378  sw          $v1, 0x1378($s0)
    ctx->pc = 0x1445a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4984), GPR_U32(ctx, 3));
    // 0x1445a4: 0x8e031370  lw          $v1, 0x1370($s0)
    ctx->pc = 0x1445a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4976)));
    // 0x1445a8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1445a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1445ac: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1445acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1445b0: 0xae03137c  sw          $v1, 0x137C($s0)
    ctx->pc = 0x1445b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4988), GPR_U32(ctx, 3));
    // 0x1445b4: 0x8e12131c  lw          $s2, 0x131C($s0)
    ctx->pc = 0x1445b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4892)));
    // 0x1445b8: 0xae121380  sw          $s2, 0x1380($s0)
    ctx->pc = 0x1445b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4992), GPR_U32(ctx, 18));
    // 0x1445bc: 0x8e031370  lw          $v1, 0x1370($s0)
    ctx->pc = 0x1445bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4976)));
    // 0x1445c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1445c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1445c4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1445c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1445c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1445c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1445cc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1445ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1445d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1445d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1445d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1445d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1445d8: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x1445d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1445dc: 0xae121384  sw          $s2, 0x1384($s0)
    ctx->pc = 0x1445dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4996), GPR_U32(ctx, 18));
    // 0x1445e0: 0x8e031370  lw          $v1, 0x1370($s0)
    ctx->pc = 0x1445e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4976)));
    // 0x1445e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1445e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1445e8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1445e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1445ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1445ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1445f0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1445f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1445f4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1445f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1445f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1445f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1445fc: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x1445fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x144600: 0xae121388  sw          $s2, 0x1388($s0)
    ctx->pc = 0x144600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5000), GPR_U32(ctx, 18));
    // 0x144604: 0x8e031370  lw          $v1, 0x1370($s0)
    ctx->pc = 0x144604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4976)));
    // 0x144608: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x144608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14460c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x14460cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x144610: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x144610u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x144614: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x144614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x144618: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x144618u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x14461c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14461cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x144620: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x144620u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x144624: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x144624u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x144628: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x144628u;
    {
        const bool branch_taken_0x144628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144628) {
            ctx->pc = 0x144688u;
            goto label_144688;
        }
    }
    ctx->pc = 0x144630u;
label_144630:
    // 0x144630: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x144630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x144634: 0x8e021374  lw          $v0, 0x1374($s0)
    ctx->pc = 0x144634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4980)));
    // 0x144638: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x144638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14463c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x14463cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x144640: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x144640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x144644: 0x8e021374  lw          $v0, 0x1374($s0)
    ctx->pc = 0x144644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4980)));
    // 0x144648: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x144648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14464c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x14464cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x144650: 0xc040c80  jal         func_103200
    ctx->pc = 0x144650u;
    SET_GPR_U32(ctx, 31, 0x144658u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x144658u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x144658u) { return; }
    ctx->pc = 0x144658u;
label_144658:
    // 0x144658: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x144658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14465c: 0xc067588  jal         func_19D620
    ctx->pc = 0x14465Cu;
    SET_GPR_U32(ctx, 31, 0x144664u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x14465Cu, 0x144664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144664u;
label_144664:
    // 0x144664: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x144664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x144668: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x144668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14466c: 0x0  nop
    ctx->pc = 0x14466cu;
    // NOP
    // 0x144670: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x144670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x144674: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x144674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x144678: 0x8e031388  lw          $v1, 0x1388($s0)
    ctx->pc = 0x144678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5000)));
    // 0x14467c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14467cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x144680: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x144680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x144684: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x144684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_144688:
    // 0x144688: 0x2e23000f  sltiu       $v1, $s1, 0xF
    ctx->pc = 0x144688u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x14468c: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x14468Cu;
    {
        const bool branch_taken_0x14468c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14468c) {
            ctx->pc = 0x144630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144630;
        }
    }
    ctx->pc = 0x144694u;
    // 0x144694: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x144694u;
    {
        const bool branch_taken_0x144694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144694) {
            ctx->pc = 0x1446B4u;
            goto label_1446b4;
        }
    }
    ctx->pc = 0x14469Cu;
label_14469c:
    // 0x14469c: 0xae001374  sw          $zero, 0x1374($s0)
    ctx->pc = 0x14469cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4980), GPR_U32(ctx, 0));
    // 0x1446a0: 0xae001378  sw          $zero, 0x1378($s0)
    ctx->pc = 0x1446a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4984), GPR_U32(ctx, 0));
    // 0x1446a4: 0xae00137c  sw          $zero, 0x137C($s0)
    ctx->pc = 0x1446a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4988), GPR_U32(ctx, 0));
    // 0x1446a8: 0xae001380  sw          $zero, 0x1380($s0)
    ctx->pc = 0x1446a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4992), GPR_U32(ctx, 0));
    // 0x1446ac: 0xae001384  sw          $zero, 0x1384($s0)
    ctx->pc = 0x1446acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4996), GPR_U32(ctx, 0));
    // 0x1446b0: 0xae001388  sw          $zero, 0x1388($s0)
    ctx->pc = 0x1446b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5000), GPR_U32(ctx, 0));
label_1446b4:
    // 0x1446b4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1446b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1446b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1446b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1446bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1446bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1446c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1446c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1446c4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1446c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1446c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1446C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1446C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1446D0u;
}
