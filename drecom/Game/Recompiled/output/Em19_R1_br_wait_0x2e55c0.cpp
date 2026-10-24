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

// Function: Em19_R1_br_wait
// Address: 0x2e55c0 - 0x2e56f0
void Em19_R1_br_wait_0x2e55c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_R1_br_wait_0x2e55c0");
#endif

    switch (ctx->pc) {
        case 0x2e560cu: goto label_2e560c;
        case 0x2e5630u: goto label_2e5630;
        case 0x2e5694u: goto label_2e5694;
        default: break;
    }

    ctx->pc = 0x2e55c0u;

    // 0x2e55c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e55c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e55c4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2e55c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2e55c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e55c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e55cc: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2e55ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x2e55d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e55d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e55d4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2e55d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2e55d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e55d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e55dc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e55dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2e55e0: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2E55E0u;
    {
        const bool branch_taken_0x2e55e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e55e0) {
            ctx->pc = 0x2E56DCu;
            goto label_2e56dc;
        }
    }
    ctx->pc = 0x2E55E8u;
    // 0x2e55e8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e55e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e55ec: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x2e55ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2e55f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e55f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e55f4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2e55f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e55f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e55f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e55fc: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x2e55fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2e5600: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x2e5600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2e5604: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2E5604u;
    SET_GPR_U32(ctx, 31, 0x2E560Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2E5604u, 0x2E560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E560Cu;
label_2e560c:
    // 0x2e560c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2e560cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5610: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2e5610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5614: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2e5614u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e5618: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2e5618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e561c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2e561cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5620: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e5620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e5624: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2e5624u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2e5628: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x2E5628u;
    SET_GPR_U32(ctx, 31, 0x2E5630u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x2E5628u, 0x2E5630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5630u;
label_2e5630:
    // 0x2e5630: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2e5630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2e5634: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x2e5634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5638: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x2e5638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x2e563c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e563cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5640: 0x0  nop
    ctx->pc = 0x2e5640u;
    // NOP
    // 0x2e5644: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e5644u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5648: 0x0  nop
    ctx->pc = 0x2e5648u;
    // NOP
    // 0x2e564c: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2E564Cu;
    {
        const bool branch_taken_0x2e564c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e564c) {
            ctx->pc = 0x2E568Cu;
            goto label_2e568c;
        }
    }
    ctx->pc = 0x2E5654u;
    // 0x2e5654: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e5654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5658: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e565c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e565cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e5660: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e5660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5664: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5668: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e5668u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e566c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e566cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5670: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e5670u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5674: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5678: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e5678u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e567c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e567cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5680: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e5680u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e5684: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E5684u;
    {
        const bool branch_taken_0x2e5684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5684) {
            ctx->pc = 0x2E56DCu;
            goto label_2e56dc;
        }
    }
    ctx->pc = 0x2E568Cu;
label_2e568c:
    // 0x2e568c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E568Cu;
    SET_GPR_U32(ctx, 31, 0x2E5694u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E568Cu, 0x2E5694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5694u;
label_2e5694:
    // 0x2e5694: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e5694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e5698: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2e5698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2e569c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E569Cu;
    {
        const bool branch_taken_0x2e569c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e569c) {
            ctx->pc = 0x2E56DCu;
            goto label_2e56dc;
        }
    }
    ctx->pc = 0x2E56A4u;
    // 0x2e56a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e56a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e56a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e56a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e56ac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e56acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e56b0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2e56b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e56b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e56b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e56b8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e56b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e56bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e56bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e56c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e56c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e56c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e56c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e56c8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e56c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e56cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e56ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e56d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e56d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e56d4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E56D4u;
    {
        const bool branch_taken_0x2e56d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e56d4) {
            ctx->pc = 0x2E56DCu;
            goto label_2e56dc;
        }
    }
    ctx->pc = 0x2E56DCu;
label_2e56dc:
    // 0x2e56dc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2e56dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e56e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e56e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e56e4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e56e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e56e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E56E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E56E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E56F0u;
}
