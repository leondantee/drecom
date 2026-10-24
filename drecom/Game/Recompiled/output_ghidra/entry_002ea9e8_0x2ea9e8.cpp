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

// Function: entry_002ea9e8
// Address: 0x2ea9e8 - 0x2eab60
void entry_002ea9e8_0x2ea9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ea9e8_0x2ea9e8");
#endif

    switch (ctx->pc) {
        case 0x2ea9f0u: goto label_2ea9f0;
        case 0x2eaa14u: goto label_2eaa14;
        case 0x2eaa38u: goto label_2eaa38;
        case 0x2eaa60u: goto label_2eaa60;
        case 0x2eaa90u: goto label_2eaa90;
        case 0x2eab24u: goto label_2eab24;
        case 0x2eab44u: goto label_2eab44;
        default: break;
    }

    ctx->pc = 0x2ea9e8u;

    // 0x2ea9e8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA9E8u;
    SET_GPR_U32(ctx, 31, 0x2EA9F0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA9E8u, 0x2EA9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA9F0u;
label_2ea9f0:
    // 0x2ea9f0: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ea9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ea9f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea9f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea9f8: 0x0  nop
    ctx->pc = 0x2ea9f8u;
    // NOP
    // 0x2ea9fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea9fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eaa00: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2eaa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eaa04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eaa04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eaa08: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2eaa08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2eaa0c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EAA0Cu;
    SET_GPR_U32(ctx, 31, 0x2EAA14u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EAA0Cu, 0x2EAA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA14u;
label_2eaa14:
    // 0x2eaa14: 0x3c044140  lui         $a0, 0x4140
    ctx->pc = 0x2eaa14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16704 << 16));
    // 0x2eaa18: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2eaa18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eaa1c: 0x0  nop
    ctx->pc = 0x2eaa1cu;
    // NOP
    // 0x2eaa20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eaa20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eaa24: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2eaa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eaa28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eaa28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eaa2c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2eaa2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2eaa30: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EAA30u;
    SET_GPR_U32(ctx, 31, 0x2EAA38u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EAA30u, 0x2EAA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA38u;
label_2eaa38:
    // 0x2eaa38: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2eaa38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2eaa3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eaa3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eaa40: 0x0  nop
    ctx->pc = 0x2eaa40u;
    // NOP
    // 0x2eaa44: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eaa44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eaa48: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2eaa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eaa4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eaa4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eaa50: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2eaa50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2eaa54: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2eaa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eaa58: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EAA58u;
    SET_GPR_U32(ctx, 31, 0x2EAA60u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EAA58u, 0x2EAA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA60u;
label_2eaa60:
    // 0x2eaa60: 0x3c04428c  lui         $a0, 0x428C
    ctx->pc = 0x2eaa60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17036 << 16));
    // 0x2eaa64: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2eaa64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eaa68: 0x0  nop
    ctx->pc = 0x2eaa68u;
    // NOP
    // 0x2eaa6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eaa6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eaa70: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2eaa70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2eaa74: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x2eaa74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x2eaa78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eaa78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaa7c: 0x0  nop
    ctx->pc = 0x2eaa7cu;
    // NOP
    // 0x2eaa80: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2eaa80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2eaa84: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2eaa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eaa88: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EAA88u;
    SET_GPR_U32(ctx, 31, 0x2EAA90u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EAA88u, 0x2EAA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA90u;
label_2eaa90:
    // 0x2eaa90: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x2eaa90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x2eaa94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eaa94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eaa98: 0x0  nop
    ctx->pc = 0x2eaa98u;
    // NOP
    // 0x2eaa9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eaa9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eaaa0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2eaaa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2eaaa4: 0x3c03425c  lui         $v1, 0x425C
    ctx->pc = 0x2eaaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16988 << 16));
    // 0x2eaaa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eaaa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaaac: 0x0  nop
    ctx->pc = 0x2eaaacu;
    // NOP
    // 0x2eaab0: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2eaab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2eaab4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2eaab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2eaab8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eaab8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaabc: 0x0  nop
    ctx->pc = 0x2eaabcu;
    // NOP
    // 0x2eaac0: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2eaac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2eaac4: 0x3c03425c  lui         $v1, 0x425C
    ctx->pc = 0x2eaac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16988 << 16));
    // 0x2eaac8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eaac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaacc: 0x0  nop
    ctx->pc = 0x2eaaccu;
    // NOP
    // 0x2eaad0: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2eaad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2eaad4: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2eaad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2eaad8: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2eaad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2eaadc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eaadcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaae0: 0x0  nop
    ctx->pc = 0x2eaae0u;
    // NOP
    // 0x2eaae4: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2eaae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2eaae8: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2eaae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2eaaec: 0x347551ec  ori         $s5, $v1, 0x51EC
    ctx->pc = 0x2eaaecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2eaaf0: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x2eaaf0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaaf4: 0x0  nop
    ctx->pc = 0x2eaaf4u;
    // NOP
    // 0x2eaaf8: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2eaaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2eaafc: 0x3c03c060  lui         $v1, 0xC060
    ctx->pc = 0x2eaafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49248 << 16));
    // 0x2eab00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eab00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eab04: 0x0  nop
    ctx->pc = 0x2eab04u;
    // NOP
    // 0x2eab08: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2eab08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2eab0c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2eab0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eab10: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2eab10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2eab14: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2eab14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2eab18: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x2eab18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x2eab1c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EAB1Cu;
    SET_GPR_U32(ctx, 31, 0x2EAB24u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EAB1Cu, 0x2EAB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB24u;
label_2eab24:
    // 0x2eab24: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2eab24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2eab28: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2eab28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2eab2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eab2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eab30: 0x0  nop
    ctx->pc = 0x2eab30u;
    // NOP
    // 0x2eab34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eab34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eab38: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2eab38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2eab3c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EAB3Cu;
    SET_GPR_U32(ctx, 31, 0x2EAB44u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EAB3Cu, 0x2EAB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB44u;
label_2eab44:
    // 0x2eab44: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x2eab44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x2eab48: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2eab48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2eab4c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eab4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eab50: 0x0  nop
    ctx->pc = 0x2eab50u;
    // NOP
    // 0x2eab54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eab54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eab58: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2eab58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2eab5c: 0x0  nop
    ctx->pc = 0x2eab5cu;
    // NOP
    ctx->pc = 0x2eab60u;
}
