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

// Function: ectrl07_move10
// Address: 0x2f55d0 - 0x2f59e8
void ectrl07_move10_0x2f55d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl07_move10_0x2f55d0");
#endif

    switch (ctx->pc) {
        case 0x2f56b8u: goto label_2f56b8;
        case 0x2f56e4u: goto label_2f56e4;
        case 0x2f5710u: goto label_2f5710;
        case 0x2f5750u: goto label_2f5750;
        case 0x2f5780u: goto label_2f5780;
        case 0x2f57acu: goto label_2f57ac;
        case 0x2f5828u: goto label_2f5828;
        case 0x2f58d8u: goto label_2f58d8;
        case 0x2f5954u: goto label_2f5954;
        default: break;
    }

    ctx->pc = 0x2f55d0u;

    // 0x2f55d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f55d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f55d4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x2f55d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x2f55d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f55d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f55dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f55dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f55e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f55e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f55e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f55e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f55e8: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x2f55e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x2f55ec: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2f55ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2f55f0: 0x24638f20  addiu       $v1, $v1, -0x70E0
    ctx->pc = 0x2f55f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938400));
    // 0x2f55f4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f55f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f55f8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2f55f8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x398F20u));
    // 0x2f55fc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2f55fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2f5600: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2f5600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2f5604: 0x24638f30  addiu       $v1, $v1, -0x70D0
    ctx->pc = 0x2f5604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938416));
    // 0x2f5608: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f5608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f560c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2f560cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x398F30u));
    // 0x2f5610: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2f5610u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2f5614: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2f5614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2f5618: 0x24638f40  addiu       $v1, $v1, -0x70C0
    ctx->pc = 0x2f5618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938432));
    // 0x2f561c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f561cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f5620: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2f5620u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x398F40u));
    // 0x2f5624: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2f5624u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2f5628: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f5628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f562c: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2f562cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f5630: 0x2861001e  slti        $at, $v1, 0x1E
    ctx->pc = 0x2f5630u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x2f5634: 0x1020008c  beqz        $at, . + 4 + (0x8C << 2)
    ctx->pc = 0x2F5634u;
    {
        const bool branch_taken_0x2f5634 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5634) {
            ctx->pc = 0x2F5868u;
            goto label_2f5868;
        }
    }
    ctx->pc = 0x2F563Cu;
    // 0x2f563c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2f563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f5640: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2f5640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2f5644: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x2f5644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5648: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2f5648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f564c: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x2f564cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5650: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f5650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f5654: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2f5654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2f5658: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2f5658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f565c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2f565cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2f5660: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x2f5660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5664: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2f5664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f5668: 0xc44000a4  lwc1        $f0, 0xA4($v0)
    ctx->pc = 0x2f5668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f566c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f566cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f5670: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2f5670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2f5674: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2f5674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f5678: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2f5678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2f567c: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x2f567cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5680: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2f5680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f5684: 0xc44000a8  lwc1        $f0, 0xA8($v0)
    ctx->pc = 0x2f5684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5688: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f5688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f568c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2f568cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2f5690: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f5690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5694: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5698: 0x0  nop
    ctx->pc = 0x2f5698u;
    // NOP
    // 0x2f569c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f569cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2f56a0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2f56a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f56a4: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x2f56a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2f56a8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2f56a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f56ac: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2f56acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f56b0: 0xc0c9694  jal         func_325A50
    ctx->pc = 0x2F56B0u;
    SET_GPR_U32(ctx, 31, 0x2F56B8u);
    ctx->pc = 0x325A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325A50u, 0x2F56B0u, 0x2F56B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F56B8u;
label_2f56b8:
    // 0x2f56b8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f56b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f56bc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2f56bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f56c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f56c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f56c4: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F56C4u;
    {
        const bool branch_taken_0x2f56c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f56c4) {
            ctx->pc = 0x2F56E4u;
            goto label_2f56e4;
        }
    }
    ctx->pc = 0x2F56CCu;
    // 0x2f56cc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f56ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2f56d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f56d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f56d4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f56d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f56d8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2f56d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f56dc: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2F56DCu;
    SET_GPR_U32(ctx, 31, 0x2F56E4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2F56E4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2F56E4u) { return; }
    ctx->pc = 0x2F56E4u;
label_2f56e4:
    // 0x2f56e4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f56e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f56e8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2f56e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f56ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f56ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f56f0: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F56F0u;
    {
        const bool branch_taken_0x2f56f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f56f0) {
            ctx->pc = 0x2F5710u;
            goto label_2f5710;
        }
    }
    ctx->pc = 0x2F56F8u;
    // 0x2f56f8: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x2f56f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x2f56fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f56fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f5700: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f5700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f5704: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2f5704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f5708: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2F5708u;
    SET_GPR_U32(ctx, 31, 0x2F5710u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2F5710u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2F5710u) { return; }
    ctx->pc = 0x2F5710u;
label_2f5710:
    // 0x2f5710: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f5710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f5714: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2f5714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f5718: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f5718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f571c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2F571Cu;
    {
        const bool branch_taken_0x2f571c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f571c) {
            ctx->pc = 0x2F5758u;
            goto label_2f5758;
        }
    }
    ctx->pc = 0x2F5724u;
    // 0x2f5724: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f5724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f5728: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2f5728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x2f572c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f572cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f5730: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f5730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5734: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f5734u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f5738: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2f5738u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f573c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2f573cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f5740: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2f5740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f5744: 0x24090096  addiu       $t1, $zero, 0x96
    ctx->pc = 0x2f5744u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2f5748: 0xc0c474c  jal         func_311D30
    ctx->pc = 0x2F5748u;
    SET_GPR_U32(ctx, 31, 0x2F5750u);
    ctx->pc = 0x311D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311D30u, 0x2F5748u, 0x2F5750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5750u;
label_2f5750:
    // 0x2f5750: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f5750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f5754: 0xac620100  sw          $v0, 0x100($v1)
    ctx->pc = 0x2f5754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
label_2f5758:
    // 0x2f5758: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f5758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f575c: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2f575cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f5760: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f5760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5764: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F5764u;
    {
        const bool branch_taken_0x2f5764 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f5764) {
            ctx->pc = 0x2F5788u;
            goto label_2f5788;
        }
    }
    ctx->pc = 0x2F576Cu;
    // 0x2f576c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2f576cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f5770: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f5770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f5774: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x2f5774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2f5778: 0xc0bd4cc  jal         func_2F5330
    ctx->pc = 0x2F5778u;
    SET_GPR_U32(ctx, 31, 0x2F5780u);
    ctx->pc = 0x2F5330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5330u, 0x2F5778u, 0x2F5780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5780u;
label_2f5780:
    // 0x2f5780: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f5780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f5784: 0xac620104  sw          $v0, 0x104($v1)
    ctx->pc = 0x2f5784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 2));
label_2f5788:
    // 0x2f5788: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f5788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f578c: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x2f578cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2f5790: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f5790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f5794: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f5794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f5798: 0x10830033  beq         $a0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2F5798u;
    {
        const bool branch_taken_0x2f5798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f5798) {
            ctx->pc = 0x2F5868u;
            goto label_2f5868;
        }
    }
    ctx->pc = 0x2F57A0u;
    // 0x2f57a0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2f57a0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f57a4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2F57A4u;
    {
        const bool branch_taken_0x2f57a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f57a4) {
            ctx->pc = 0x2F5850u;
            goto label_2f5850;
        }
    }
    ctx->pc = 0x2F57ACu;
label_2f57ac:
    // 0x2f57ac: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f57acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f57b0: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2f57b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f57b4: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x2f57b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2f57b8: 0x14200023  bnez        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x2F57B8u;
    {
        const bool branch_taken_0x2f57b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f57b8) {
            ctx->pc = 0x2F5848u;
            goto label_2f5848;
        }
    }
    ctx->pc = 0x2F57C0u;
    // 0x2f57c0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f57c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f57c4: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2f57c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f57c8: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x2f57c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2f57cc: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2F57CCu;
    {
        const bool branch_taken_0x2f57cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f57cc) {
            ctx->pc = 0x2F57F8u;
            goto label_2f57f8;
        }
    }
    ctx->pc = 0x2F57D4u;
    // 0x2f57d4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f57d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f57d8: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2f57d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f57dc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2f57dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f57e0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x2f57e0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f57e4: 0x0  nop
    ctx->pc = 0x2f57e4u;
    // NOP
    // 0x2f57e8: 0x0  nop
    ctx->pc = 0x2f57e8u;
    // NOP
    // 0x2f57ec: 0x1810  mfhi        $v1
    ctx->pc = 0x2f57ecu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f57f0: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2F57F0u;
    {
        const bool branch_taken_0x2f57f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f57f0) {
            ctx->pc = 0x2F5848u;
            goto label_2f5848;
        }
    }
    ctx->pc = 0x2F57F8u;
label_2f57f8:
    // 0x2f57f8: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x2f57f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x2f57fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f57fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f5800: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2f5800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x2f5804: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f5804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f5808: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2f5808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f580c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f580cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f5810: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2f5810u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f5814: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2f5814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f5818: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2f5818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f581c: 0x24090096  addiu       $t1, $zero, 0x96
    ctx->pc = 0x2f581cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2f5820: 0xc0c47d0  jal         func_311F40
    ctx->pc = 0x2F5820u;
    SET_GPR_U32(ctx, 31, 0x2F5828u);
    ctx->pc = 0x311F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311F40u, 0x2F5820u, 0x2F5828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5828u;
label_2f5828:
    // 0x2f5828: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2f5828u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f582c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f582cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f5830: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f5830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f5834: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5834u;
    {
        const bool branch_taken_0x2f5834 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f5834) {
            ctx->pc = 0x2F5848u;
            goto label_2f5848;
        }
    }
    ctx->pc = 0x2F583Cu;
    // 0x2f583c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f583cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f5840: 0x8c630100  lw          $v1, 0x100($v1)
    ctx->pc = 0x2f5840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2f5844: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2f5844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2f5848:
    // 0x2f5848: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f5848u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2f584c: 0x0  nop
    ctx->pc = 0x2f584cu;
    // NOP
label_2f5850:
    // 0x2f5850: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f5850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f5854: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2f5854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f5858: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f5858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f585c: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x2f585cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2f5860: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x2F5860u;
    {
        const bool branch_taken_0x2f5860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5860) {
            ctx->pc = 0x2F57ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f57ac;
        }
    }
    ctx->pc = 0x2F5868u;
label_2f5868:
    // 0x2f5868: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f5868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f586c: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x2f586cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2f5870: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f5870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f5874: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f5874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f5878: 0x10830049  beq         $a0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x2F5878u;
    {
        const bool branch_taken_0x2f5878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f5878) {
            ctx->pc = 0x2F59A0u;
            goto label_2f59a0;
        }
    }
    ctx->pc = 0x2F5880u;
    // 0x2f5880: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f5880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f5884: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x2f5884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x2f5888: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f5888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f588c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f588cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f5890: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2F5890u;
    {
        const bool branch_taken_0x2f5890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f5890) {
            ctx->pc = 0x2F59A0u;
            goto label_2f59a0;
        }
    }
    ctx->pc = 0x2F5898u;
    // 0x2f5898: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f5898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f589c: 0x8c700104  lw          $s0, 0x104($v1)
    ctx->pc = 0x2f589cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x2f58a0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f58a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f58a4: 0x8c730100  lw          $s3, 0x100($v1)
    ctx->pc = 0x2f58a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2f58a8: 0x8e64012c  lw          $a0, 0x12C($s3)
    ctx->pc = 0x2f58a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
    // 0x2f58ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f58acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f58b0: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2F58B0u;
    {
        const bool branch_taken_0x2f58b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f58b0) {
            ctx->pc = 0x2F5924u;
            goto label_2f5924;
        }
    }
    ctx->pc = 0x2F58B8u;
    // 0x2f58b8: 0x8e03035c  lw          $v1, 0x35C($s0)
    ctx->pc = 0x2f58b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x2f58bc: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F58BCu;
    {
        const bool branch_taken_0x2f58bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f58bc) {
            ctx->pc = 0x2F5924u;
            goto label_2f5924;
        }
    }
    ctx->pc = 0x2F58C4u;
    // 0x2f58c4: 0x260402b0  addiu       $a0, $s0, 0x2B0
    ctx->pc = 0x2f58c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x2f58c8: 0x266500b0  addiu       $a1, $s3, 0xB0
    ctx->pc = 0x2f58c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    // 0x2f58cc: 0x72603628  paddub      $a2, $s3, $zero
    ctx->pc = 0x2f58ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2f58d0: 0xc0bd554  jal         func_2F5550
    ctx->pc = 0x2F58D0u;
    SET_GPR_U32(ctx, 31, 0x2F58D8u);
    ctx->pc = 0x2F5550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5550u, 0x2F58D0u, 0x2F58D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F58D8u;
label_2f58d8:
    // 0x2f58d8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F58D8u;
    {
        const bool branch_taken_0x2f58d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f58d8) {
            ctx->pc = 0x2F5924u;
            goto label_2f5924;
        }
    }
    ctx->pc = 0x2F58E0u;
    // 0x2f58e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f58e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f58e4: 0xae03035c  sw          $v1, 0x35C($s0)
    ctx->pc = 0x2f58e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 3));
    // 0x2f58e8: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x2f58e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2f58ec: 0x2463ffe7  addiu       $v1, $v1, -0x19
    ctx->pc = 0x2f58ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
    // 0x2f58f0: 0xae030ab8  sw          $v1, 0xAB8($s0)
    ctx->pc = 0x2f58f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 3));
    // 0x2f58f4: 0x260302f0  addiu       $v1, $s0, 0x2F0
    ctx->pc = 0x2f58f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x2f58f8: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x2f58f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x2f58fc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f58fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5900: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f5900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5904: 0x0  nop
    ctx->pc = 0x2f5904u;
    // NOP
    // 0x2f5908: 0xe60002fc  swc1        $f0, 0x2FC($s0)
    ctx->pc = 0x2f5908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 764), bits); }
    // 0x2f590c: 0x26030300  addiu       $v1, $s0, 0x300
    ctx->pc = 0x2f590cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x2f5910: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x2f5910u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x2f5914: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f5914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5918: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f5918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f591c: 0x0  nop
    ctx->pc = 0x2f591cu;
    // NOP
    // 0x2f5920: 0xe600030c  swc1        $f0, 0x30C($s0)
    ctx->pc = 0x2f5920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 780), bits); }
label_2f5924:
    // 0x2f5924: 0x8e64012c  lw          $a0, 0x12C($s3)
    ctx->pc = 0x2f5924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
    // 0x2f5928: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f5928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f592c: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2F592Cu;
    {
        const bool branch_taken_0x2f592c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f592c) {
            ctx->pc = 0x2F59A0u;
            goto label_2f59a0;
        }
    }
    ctx->pc = 0x2F5934u;
    // 0x2f5934: 0x8e03035c  lw          $v1, 0x35C($s0)
    ctx->pc = 0x2f5934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x2f5938: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F5938u;
    {
        const bool branch_taken_0x2f5938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5938) {
            ctx->pc = 0x2F59A0u;
            goto label_2f59a0;
        }
    }
    ctx->pc = 0x2F5940u;
    // 0x2f5940: 0x260402b0  addiu       $a0, $s0, 0x2B0
    ctx->pc = 0x2f5940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x2f5944: 0x266500b0  addiu       $a1, $s3, 0xB0
    ctx->pc = 0x2f5944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    // 0x2f5948: 0x72603628  paddub      $a2, $s3, $zero
    ctx->pc = 0x2f5948u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2f594c: 0xc0bd554  jal         func_2F5550
    ctx->pc = 0x2F594Cu;
    SET_GPR_U32(ctx, 31, 0x2F5954u);
    ctx->pc = 0x2F5550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5550u, 0x2F594Cu, 0x2F5954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5954u;
label_2f5954:
    // 0x2f5954: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F5954u;
    {
        const bool branch_taken_0x2f5954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5954) {
            ctx->pc = 0x2F59A0u;
            goto label_2f59a0;
        }
    }
    ctx->pc = 0x2F595Cu;
    // 0x2f595c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f595cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5960: 0xae03035c  sw          $v1, 0x35C($s0)
    ctx->pc = 0x2f5960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 3));
    // 0x2f5964: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x2f5964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2f5968: 0x2463ffe7  addiu       $v1, $v1, -0x19
    ctx->pc = 0x2f5968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
    // 0x2f596c: 0xae030ab8  sw          $v1, 0xAB8($s0)
    ctx->pc = 0x2f596cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 3));
    // 0x2f5970: 0x260302f0  addiu       $v1, $s0, 0x2F0
    ctx->pc = 0x2f5970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x2f5974: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x2f5974u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x2f5978: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f5978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2f597c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f597cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5980: 0x0  nop
    ctx->pc = 0x2f5980u;
    // NOP
    // 0x2f5984: 0xe60002fc  swc1        $f0, 0x2FC($s0)
    ctx->pc = 0x2f5984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 764), bits); }
    // 0x2f5988: 0x26030300  addiu       $v1, $s0, 0x300
    ctx->pc = 0x2f5988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x2f598c: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x2f598cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x2f5990: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f5990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5994: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f5994u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5998: 0x0  nop
    ctx->pc = 0x2f5998u;
    // NOP
    // 0x2f599c: 0xe600030c  swc1        $f0, 0x30C($s0)
    ctx->pc = 0x2f599cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 780), bits); }
label_2f59a0:
    // 0x2f59a0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f59a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f59a4: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2f59a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f59a8: 0x286300c8  slti        $v1, $v1, 0xC8
    ctx->pc = 0x2f59a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x2f59ac: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F59ACu;
    {
        const bool branch_taken_0x2f59ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f59ac) {
            ctx->pc = 0x2F59C8u;
            goto label_2f59c8;
        }
    }
    ctx->pc = 0x2F59B4u;
    // 0x2f59b4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f59b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f59b8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f59b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f59bc: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2f59bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2f59c0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f59c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f59c4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2f59c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2f59c8:
    // 0x2f59c8: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x2f59c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f59cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f59ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f59d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f59d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f59d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f59d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f59d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f59d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f59dc: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2f59dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f59e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F59E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F59E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F59E8u;
}
