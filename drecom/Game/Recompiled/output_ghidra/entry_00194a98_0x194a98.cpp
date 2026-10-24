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

// Function: entry_00194a98
// Address: 0x194a98 - 0x194c3c
void entry_00194a98_0x194a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194a98_0x194a98");
#endif

    switch (ctx->pc) {
        case 0x194accu: goto label_194acc;
        case 0x194b00u: goto label_194b00;
        case 0x194b84u: goto label_194b84;
        default: break;
    }

    ctx->pc = 0x194a98u;

    // 0x194a98: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x194a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x194a9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x194a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x194aa0: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x194aa0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x194aa4: 0x10200065  beqz        $at, . + 4 + (0x65 << 2)
    ctx->pc = 0x194AA4u;
    {
        const bool branch_taken_0x194aa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x194aa4) {
            ctx->pc = 0x194C3Cu;
            return;
        }
    }
    ctx->pc = 0x194AACu;
    // 0x194aac: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x194aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x194ab0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194ab4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x194ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x194ab8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x194ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x194abc: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x194abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x194ac0: 0x24460480  addiu       $a2, $v0, 0x480
    ctx->pc = 0x194ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x194ac4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x194AC4u;
    SET_GPR_U32(ctx, 31, 0x194ACCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x194ACCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x194ACCu) { return; }
    ctx->pc = 0x194ACCu;
label_194acc:
    // 0x194acc: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x194accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194ad0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x194ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x194ad4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x194ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194ad8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x194ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x194adc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x194adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x194ae0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x194ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x194ae4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x194ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194ae8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x194ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x194aec: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x194aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x194af0: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x194af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x194af4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x194af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x194af8: 0xc040c60  jal         func_103180
    ctx->pc = 0x194AF8u;
    SET_GPR_U32(ctx, 31, 0x194B00u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x194B00u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x194B00u) { return; }
    ctx->pc = 0x194B00u;
label_194b00:
    // 0x194b00: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x194b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194b04: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x194b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194b08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x194b08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x194b0c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x194b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x194b10: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x194b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194b14: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x194b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194b18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x194b18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x194b1c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x194b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x194b20: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x194b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194b24: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x194b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194b28: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x194b28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x194b2c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x194b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x194b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194b34: 0x0  nop
    ctx->pc = 0x194b34u;
    // NOP
    // 0x194b38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x194b38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x194b3c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x194b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x194b40: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x194b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194b44: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x194b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194b48: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x194b48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x194b4c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x194b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x194b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194b54: 0x0  nop
    ctx->pc = 0x194b54u;
    // NOP
    // 0x194b58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x194b58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x194b5c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x194b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x194b60: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x194b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194b64: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x194b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194b68: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x194b68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x194b6c: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x194b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194b70: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x194b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194b74: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x194b74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x194b78: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x194b78u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x194b7c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x194B7Cu;
    SET_GPR_U32(ctx, 31, 0x194B84u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x194B7Cu, 0x194B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B84u;
label_194b84:
    // 0x194b84: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x194b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194b88: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x194b88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x194b8c: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x194b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194b90: 0xe7a1010c  swc1        $f1, 0x10C($sp)
    ctx->pc = 0x194b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x194b94: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x194b94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x194b98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x194b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x194b9c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x194b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x194ba0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x194ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194ba4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x194ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x194ba8: 0xc7a20104  lwc1        $f2, 0x104($sp)
    ctx->pc = 0x194ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x194bac: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x194bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194bb0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x194bb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x194bb4: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x194bb4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x194bb8: 0xc6e101b4  lwc1        $f1, 0x1B4($s7)
    ctx->pc = 0x194bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194bbc: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x194bbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x194bc0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x194bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x194bc4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x194bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x194bc8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x194bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194bcc: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x194bccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x194bd0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x194bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x194bd4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x194bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x194bd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x194bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x194bdc: 0x0  nop
    ctx->pc = 0x194bdcu;
    // NOP
    // 0x194be0: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x194be0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x194be4: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x194be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x194be8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x194be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x194bec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x194becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x194bf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x194bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194bf4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x194bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x194bf8: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x194bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x194bfc: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x194bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194c00: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x194c00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x194c04: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x194c04u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x194c08: 0xc6e001b4  lwc1        $f0, 0x1B4($s7)
    ctx->pc = 0x194c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194c0c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x194c0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x194c10: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x194c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x194c14: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x194c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x194c18: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x194c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194c1c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x194c1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x194c20: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x194c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x194c24: 0x3442eeef  ori         $v0, $v0, 0xEEEF
    ctx->pc = 0x194c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x194c28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194c2c: 0x0  nop
    ctx->pc = 0x194c2cu;
    // NOP
    // 0x194c30: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x194c30u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x194c34: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x194C34u;
    {
        const bool branch_taken_0x194c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194c34) {
            ctx->pc = 0x194D30u;
            return;
        }
    }
    ctx->pc = 0x194C3Cu;
}
