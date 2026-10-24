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

// Function: entry_00192038
// Address: 0x192038 - 0x1921dc
void entry_00192038_0x192038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192038_0x192038");
#endif

    switch (ctx->pc) {
        case 0x19206cu: goto label_19206c;
        case 0x1920a0u: goto label_1920a0;
        case 0x192124u: goto label_192124;
        default: break;
    }

    ctx->pc = 0x192038u;

    // 0x192038: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x192038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x19203c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19203cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x192040: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x192040u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x192044: 0x10200065  beqz        $at, . + 4 + (0x65 << 2)
    ctx->pc = 0x192044u;
    {
        const bool branch_taken_0x192044 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x192044) {
            ctx->pc = 0x1921DCu;
            return;
        }
    }
    ctx->pc = 0x19204Cu;
    // 0x19204c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x19204cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x192050: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x192050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x192054: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x192054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x192058: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x192058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x19205c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x19205cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x192060: 0x24460480  addiu       $a2, $v0, 0x480
    ctx->pc = 0x192060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x192064: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x192064u;
    SET_GPR_U32(ctx, 31, 0x19206Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x19206Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19206Cu) { return; }
    ctx->pc = 0x19206Cu;
label_19206c:
    // 0x19206c: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x19206cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192070: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x192070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x192074: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192078: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x192078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x19207c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x19207cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x192080: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x192080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x192084: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192088: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x192088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x19208c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x19208cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x192090: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x192090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x192094: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x192094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x192098: 0xc040c60  jal         func_103180
    ctx->pc = 0x192098u;
    SET_GPR_U32(ctx, 31, 0x1920A0u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x1920A0u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1920A0u) { return; }
    ctx->pc = 0x1920A0u;
label_1920a0:
    // 0x1920a0: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x1920a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1920a4: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1920a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1920a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1920a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1920ac: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1920acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1920b0: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x1920b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1920b4: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x1920b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1920b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1920b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1920bc: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1920bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x1920c0: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x1920c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1920c4: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x1920c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1920c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1920c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1920cc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1920ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1920d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1920d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1920d4: 0x0  nop
    ctx->pc = 0x1920d4u;
    // NOP
    // 0x1920d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1920d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1920dc: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1920dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1920e0: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x1920e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1920e4: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x1920e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1920e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1920e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1920ec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1920ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1920f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1920f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1920f4: 0x0  nop
    ctx->pc = 0x1920f4u;
    // NOP
    // 0x1920f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1920f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1920fc: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1920fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x192100: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x192100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192104: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x192104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192108: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x192108u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19210c: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x19210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192110: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x192110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192114: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x192114u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x192118: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x192118u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x19211c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x19211Cu;
    SET_GPR_U32(ctx, 31, 0x192124u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x19211Cu, 0x192124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192124u;
label_192124:
    // 0x192124: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x192124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192128: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x192128u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x19212c: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x19212cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192130: 0xe7a1010c  swc1        $f1, 0x10C($sp)
    ctx->pc = 0x192130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x192134: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x192134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x192138: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x192138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19213c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19213cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x192140: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192144: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x192144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x192148: 0xc7a20104  lwc1        $f2, 0x104($sp)
    ctx->pc = 0x192148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19214c: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x19214cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192150: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x192150u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x192154: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x192154u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x192158: 0xc6e101b4  lwc1        $f1, 0x1B4($s7)
    ctx->pc = 0x192158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19215c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x19215cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x192160: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x192160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x192164: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x192164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x192168: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x192168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19216c: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x19216cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x192170: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x192170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x192174: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x192174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x192178: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19217c: 0x0  nop
    ctx->pc = 0x19217cu;
    // NOP
    // 0x192180: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x192180u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x192184: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x192184u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x192188: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x192188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19218c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19218cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x192190: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192194: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x192194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x192198: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x192198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19219c: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x19219cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1921a0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1921a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1921a4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1921a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1921a8: 0xc6e001b4  lwc1        $f0, 0x1B4($s7)
    ctx->pc = 0x1921a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1921ac: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1921acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1921b0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1921b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1921b4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1921b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1921b8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1921b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1921bc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1921bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1921c0: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x1921c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x1921c4: 0x3442eeef  ori         $v0, $v0, 0xEEEF
    ctx->pc = 0x1921c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x1921c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1921c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1921cc: 0x0  nop
    ctx->pc = 0x1921ccu;
    // NOP
    // 0x1921d0: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x1921d0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1921d4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1921D4u;
    {
        const bool branch_taken_0x1921d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1921d4) {
            ctx->pc = 0x1922D0u;
            return;
        }
    }
    ctx->pc = 0x1921DCu;
}
