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

// Function: EffScr_move
// Address: 0x29c690 - 0x29c76c
void EffScr_move_0x29c690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffScr_move_0x29c690");
#endif

    switch (ctx->pc) {
        case 0x29c690u: goto label_29c690;
        case 0x29c694u: goto label_29c694;
        case 0x29c698u: goto label_29c698;
        case 0x29c69cu: goto label_29c69c;
        case 0x29c6a0u: goto label_29c6a0;
        case 0x29c6a4u: goto label_29c6a4;
        case 0x29c6a8u: goto label_29c6a8;
        case 0x29c6acu: goto label_29c6ac;
        case 0x29c6b0u: goto label_29c6b0;
        case 0x29c6b4u: goto label_29c6b4;
        case 0x29c6b8u: goto label_29c6b8;
        case 0x29c6bcu: goto label_29c6bc;
        case 0x29c6c0u: goto label_29c6c0;
        case 0x29c6c4u: goto label_29c6c4;
        case 0x29c6c8u: goto label_29c6c8;
        case 0x29c6ccu: goto label_29c6cc;
        case 0x29c6d0u: goto label_29c6d0;
        case 0x29c6d4u: goto label_29c6d4;
        case 0x29c6d8u: goto label_29c6d8;
        case 0x29c6dcu: goto label_29c6dc;
        case 0x29c6e0u: goto label_29c6e0;
        case 0x29c6e4u: goto label_29c6e4;
        case 0x29c6e8u: goto label_29c6e8;
        case 0x29c6ecu: goto label_29c6ec;
        case 0x29c6f0u: goto label_29c6f0;
        case 0x29c6f4u: goto label_29c6f4;
        case 0x29c6f8u: goto label_29c6f8;
        case 0x29c6fcu: goto label_29c6fc;
        case 0x29c700u: goto label_29c700;
        case 0x29c704u: goto label_29c704;
        case 0x29c708u: goto label_29c708;
        case 0x29c70cu: goto label_29c70c;
        case 0x29c710u: goto label_29c710;
        case 0x29c714u: goto label_29c714;
        case 0x29c718u: goto label_29c718;
        case 0x29c71cu: goto label_29c71c;
        case 0x29c720u: goto label_29c720;
        case 0x29c724u: goto label_29c724;
        case 0x29c728u: goto label_29c728;
        case 0x29c72cu: goto label_29c72c;
        case 0x29c730u: goto label_29c730;
        case 0x29c734u: goto label_29c734;
        case 0x29c738u: goto label_29c738;
        case 0x29c73cu: goto label_29c73c;
        case 0x29c740u: goto label_29c740;
        case 0x29c744u: goto label_29c744;
        case 0x29c748u: goto label_29c748;
        case 0x29c74cu: goto label_29c74c;
        case 0x29c750u: goto label_29c750;
        case 0x29c754u: goto label_29c754;
        case 0x29c758u: goto label_29c758;
        case 0x29c75cu: goto label_29c75c;
        case 0x29c760u: goto label_29c760;
        case 0x29c764u: goto label_29c764;
        case 0x29c768u: goto label_29c768;
        default: break;
    }

    ctx->pc = 0x29c690u;

label_29c690:
    // 0x29c690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29c690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29c694:
    // 0x29c694: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x29c694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_29c698:
    // 0x29c698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29c698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29c69c:
    // 0x29c69c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29c69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29c6a0:
    // 0x29c6a0: 0x3c030085  lui         $v1, 0x85
    ctx->pc = 0x29c6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)133 << 16));
label_29c6a4:
    // 0x29c6a4: 0x24703590  addiu       $s0, $v1, 0x3590
    ctx->pc = 0x29c6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 13712));
label_29c6a8:
    // 0x29c6a8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x29c6a8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_29c6ac:
    // 0x29c6ac: 0x10000026  b           . + 4 + (0x26 << 2)
label_29c6b0:
    if (ctx->pc == 0x29C6B0u) {
        ctx->pc = 0x29C6B4u;
        goto label_29c6b4;
    }
    ctx->pc = 0x29C6ACu;
    {
        const bool branch_taken_0x29c6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c6ac) {
            ctx->pc = 0x29C748u;
            goto label_29c748;
        }
    }
    ctx->pc = 0x29C6B4u;
label_29c6b4:
    // 0x29c6b4: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x29c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_29c6b8:
    // 0x29c6b8: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x29c6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_29c6bc:
    // 0x29c6bc: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x29c6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_29c6c0:
    // 0x29c6c0: 0x3c030085  lui         $v1, 0x85
    ctx->pc = 0x29c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)133 << 16));
label_29c6c4:
    // 0x29c6c4: 0x24633590  addiu       $v1, $v1, 0x3590
    ctx->pc = 0x29c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13712));
label_29c6c8:
    // 0x29c6c8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x29c6c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_29c6cc:
    // 0x29c6cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29c6d0:
    // 0x29c6d0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29c6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_29c6d4:
    // 0x29c6d4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_29c6d8:
    if (ctx->pc == 0x29C6D8u) {
        ctx->pc = 0x29C6DCu;
        goto label_29c6dc;
    }
    ctx->pc = 0x29C6D4u;
    {
        const bool branch_taken_0x29c6d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c6d4) {
            ctx->pc = 0x29C740u;
            goto label_29c740;
        }
    }
    ctx->pc = 0x29C6DCu;
label_29c6dc:
    // 0x29c6dc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29c6dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_29c6e0:
    // 0x29c6e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x29c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29c6e4:
    // 0x29c6e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29c6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29c6e8:
    // 0x29c6e8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x29c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_29c6ec:
    // 0x29c6ec: 0x24426910  addiu       $v0, $v0, 0x6910
    ctx->pc = 0x29c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26896));
label_29c6f0:
    // 0x29c6f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29c6f4:
    // 0x29c6f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29c6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29c6f8:
    // 0x29c6f8: 0x40f809  jalr        $v0
label_29c6fc:
    if (ctx->pc == 0x29C6FCu) {
        ctx->pc = 0x29C700u;
        goto label_29c700;
    }
    ctx->pc = 0x29C6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C700u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C6F8u, 0x29C700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C700u;
label_29c700:
    // 0x29c700: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x29c700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29c704:
    // 0x29c704: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x29c704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29c708:
    // 0x29c708: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29c708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29c70c:
    // 0x29c70c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x29c70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
label_29c710:
    // 0x29c710: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x29c710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29c714:
    // 0x29c714: 0xc6000134  lwc1        $f0, 0x134($s0)
    ctx->pc = 0x29c714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29c718:
    // 0x29c718: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29c718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29c71c:
    // 0x29c71c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x29c71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_29c720:
    // 0x29c720: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x29c720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29c724:
    // 0x29c724: 0xc6000138  lwc1        $f0, 0x138($s0)
    ctx->pc = 0x29c724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29c728:
    // 0x29c728: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29c728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29c72c:
    // 0x29c72c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x29c72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_29c730:
    // 0x29c730: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x29c730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29c734:
    // 0x29c734: 0xc600013c  lwc1        $f0, 0x13C($s0)
    ctx->pc = 0x29c734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29c738:
    // 0x29c738: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29c738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29c73c:
    // 0x29c73c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x29c73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_29c740:
    // 0x29c740: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29c740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29c744:
    // 0x29c744: 0x0  nop
    ctx->pc = 0x29c744u;
    // NOP
label_29c748:
    // 0x29c748: 0x2e230040  sltiu       $v1, $s1, 0x40
    ctx->pc = 0x29c748u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_29c74c:
    // 0x29c74c: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
label_29c750:
    if (ctx->pc == 0x29C750u) {
        ctx->pc = 0x29C754u;
        goto label_29c754;
    }
    ctx->pc = 0x29C74Cu;
    {
        const bool branch_taken_0x29c74c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c74c) {
            ctx->pc = 0x29C6B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c6b4;
        }
    }
    ctx->pc = 0x29C754u;
label_29c754:
    // 0x29c754: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x29c754u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29c758:
    // 0x29c758: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29c75c:
    // 0x29c75c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c75cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29c760:
    // 0x29c760: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29c760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_29c764:
    // 0x29c764: 0x3e00008  jr          $ra
label_29c768:
    if (ctx->pc == 0x29C768u) {
        ctx->pc = 0x29C76Cu;
        goto label_fallthrough_0x29c764;
    }
    ctx->pc = 0x29C764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29c764:
    ctx->pc = 0x29C76Cu;
}
