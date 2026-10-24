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

// Function: entry_00138618
// Address: 0x138618 - 0x1386f8
void entry_00138618_0x138618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138618_0x138618");
#endif

    switch (ctx->pc) {
        case 0x138660u: goto label_138660;
        case 0x138678u: goto label_138678;
        case 0x138694u: goto label_138694;
        case 0x1386a8u: goto label_1386a8;
        case 0x1386bcu: goto label_1386bc;
        default: break;
    }

    ctx->pc = 0x138618u;

    // 0x138618: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x138618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x13861c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x13861cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x138620: 0x24424ea0  addiu       $v0, $v0, 0x4EA0
    ctx->pc = 0x138620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20128));
    // 0x138624: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x138624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x138628: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x138628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13862c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13862cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x138630: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x138630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138634: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x138634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138638: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x138638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13863c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13863cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x138640: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x138640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x138644: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x138644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x138648: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x138648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13864c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x13864cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138650: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x138650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138654: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x138654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138658: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x138658u;
    SET_GPR_U32(ctx, 31, 0x138660u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x138658u, 0x138660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138660u;
label_138660:
    // 0x138660: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x138660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138664: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x138664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x138668: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x138668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13866c: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x13866cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x138670: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x138670u;
    SET_GPR_U32(ctx, 31, 0x138678u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x138670u, 0x138678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138678u;
label_138678:
    // 0x138678: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138678u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13867c: 0x0  nop
    ctx->pc = 0x13867cu;
    // NOP
    // 0x138680: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x138680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x138684: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x138684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x138688: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x138688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13868c: 0xc040c24  jal         func_103090
    ctx->pc = 0x13868Cu;
    SET_GPR_U32(ctx, 31, 0x138694u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x138694u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x138694u) { return; }
    ctx->pc = 0x138694u;
label_138694:
    // 0x138694: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x138694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x138698: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x138698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13869c: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x13869cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1386a0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1386A0u;
    SET_GPR_U32(ctx, 31, 0x1386A8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1386A8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1386A8u) { return; }
    ctx->pc = 0x1386A8u;
label_1386a8:
    // 0x1386a8: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1386a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1386ac: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1386acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1386b0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1386b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1386b4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1386B4u;
    SET_GPR_U32(ctx, 31, 0x1386BCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1386B4u, 0x1386BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1386BCu;
label_1386bc:
    // 0x1386bc: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x1386bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1386c0: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x1386c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1386c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1386c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1386c8: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1386c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x1386cc: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x1386ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1386d0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1386d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1386d4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1386d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1386d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1386d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1386dc: 0x0  nop
    ctx->pc = 0x1386dcu;
    // NOP
    // 0x1386e0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1386E0u;
    {
        const bool branch_taken_0x1386e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1386e0) {
            ctx->pc = 0x1386F8u;
            return;
        }
    }
    ctx->pc = 0x1386E8u;
    // 0x1386e8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1386e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1386ec: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1386ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1386f0: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1386f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x1386f4: 0x0  nop
    ctx->pc = 0x1386f4u;
    // NOP
    ctx->pc = 0x1386f8u;
}
