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

// Function: entry_00137ab0
// Address: 0x137ab0 - 0x137b90
void entry_00137ab0_0x137ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137ab0_0x137ab0");
#endif

    switch (ctx->pc) {
        case 0x137af8u: goto label_137af8;
        case 0x137b10u: goto label_137b10;
        case 0x137b2cu: goto label_137b2c;
        case 0x137b40u: goto label_137b40;
        case 0x137b54u: goto label_137b54;
        default: break;
    }

    ctx->pc = 0x137ab0u;

    // 0x137ab0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x137ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x137ab4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x137ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x137ab8: 0x24624e98  addiu       $v0, $v1, 0x4E98
    ctx->pc = 0x137ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20120));
    // 0x137abc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x137abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x137ac0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x137ac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137ac4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x137ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x137ac8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x137ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x137acc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x137accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x137ad0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x137ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x137ad4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x137ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x137ad8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x137ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x137adc: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x137adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x137ae0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x137ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x137ae4: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x137ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x137ae8: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x137ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x137aec: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x137aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x137af0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x137AF0u;
    SET_GPR_U32(ctx, 31, 0x137AF8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x137AF0u, 0x137AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137AF8u;
label_137af8:
    // 0x137af8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x137af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x137afc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x137afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x137b00: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x137b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x137b04: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x137b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x137b08: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x137B08u;
    SET_GPR_U32(ctx, 31, 0x137B10u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x137B08u, 0x137B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137B10u;
label_137b10:
    // 0x137b10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x137b10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137b14: 0x0  nop
    ctx->pc = 0x137b14u;
    // NOP
    // 0x137b18: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x137b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x137b1c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x137b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x137b20: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x137b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x137b24: 0xc040c24  jal         func_103090
    ctx->pc = 0x137B24u;
    SET_GPR_U32(ctx, 31, 0x137B2Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x137B2Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x137B2Cu) { return; }
    ctx->pc = 0x137B2Cu;
label_137b2c:
    // 0x137b2c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x137b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x137b30: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x137b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x137b34: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x137b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x137b38: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x137B38u;
    SET_GPR_U32(ctx, 31, 0x137B40u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x137B40u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x137B40u) { return; }
    ctx->pc = 0x137B40u;
label_137b40:
    // 0x137b40: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x137b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x137b44: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x137b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x137b48: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x137b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x137b4c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x137B4Cu;
    SET_GPR_U32(ctx, 31, 0x137B54u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x137B4Cu, 0x137B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137B54u;
label_137b54:
    // 0x137b54: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x137b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137b58: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x137b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137b5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x137b5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x137b60: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x137b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x137b64: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x137b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137b68: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x137b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x137b6c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x137b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137b70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x137b70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137b74: 0x0  nop
    ctx->pc = 0x137b74u;
    // NOP
    // 0x137b78: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x137B78u;
    {
        const bool branch_taken_0x137b78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x137b78) {
            ctx->pc = 0x137B90u;
            return;
        }
    }
    ctx->pc = 0x137B80u;
    // 0x137b80: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x137b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x137b84: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x137b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137b88: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x137b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x137b8c: 0x0  nop
    ctx->pc = 0x137b8cu;
    // NOP
    ctx->pc = 0x137b90u;
}
