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

// Function: entry_002ecdb0
// Address: 0x2ecdb0 - 0x2ecf38
void entry_002ecdb0_0x2ecdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ecdb0_0x2ecdb0");
#endif

    switch (ctx->pc) {
        case 0x2ecdb8u: goto label_2ecdb8;
        case 0x2ecddcu: goto label_2ecddc;
        case 0x2ece00u: goto label_2ece00;
        case 0x2ece28u: goto label_2ece28;
        case 0x2ece58u: goto label_2ece58;
        case 0x2ecf00u: goto label_2ecf00;
        case 0x2ecf20u: goto label_2ecf20;
        default: break;
    }

    ctx->pc = 0x2ecdb0u;

    // 0x2ecdb0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ECDB0u;
    SET_GPR_U32(ctx, 31, 0x2ECDB8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ECDB0u, 0x2ECDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECDB8u;
label_2ecdb8:
    // 0x2ecdb8: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x2ecdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x2ecdbc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ecdbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ecdc0: 0x0  nop
    ctx->pc = 0x2ecdc0u;
    // NOP
    // 0x2ecdc4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ecdc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ecdc8: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2ecdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ecdcc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ecdccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ecdd0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ecdd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ecdd4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ECDD4u;
    SET_GPR_U32(ctx, 31, 0x2ECDDCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ECDD4u, 0x2ECDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECDDCu;
label_2ecddc:
    // 0x2ecddc: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ecddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ecde0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ecde0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ecde4: 0x0  nop
    ctx->pc = 0x2ecde4u;
    // NOP
    // 0x2ecde8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ecde8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ecdec: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2ecdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ecdf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ecdf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ecdf4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ecdf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ecdf8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ECDF8u;
    SET_GPR_U32(ctx, 31, 0x2ECE00u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ECDF8u, 0x2ECE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECE00u;
label_2ece00:
    // 0x2ece00: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ece00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ece04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ece04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ece08: 0x0  nop
    ctx->pc = 0x2ece08u;
    // NOP
    // 0x2ece0c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ece0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ece10: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2ece10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ece14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ece14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ece18: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ece18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ece1c: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ece1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ece20: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2ECE20u;
    SET_GPR_U32(ctx, 31, 0x2ECE28u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2ECE20u, 0x2ECE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECE28u;
label_2ece28:
    // 0x2ece28: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ece28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ece2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ece2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ece30: 0x0  nop
    ctx->pc = 0x2ece30u;
    // NOP
    // 0x2ece34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ece34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ece38: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2ece38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2ece3c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2ece3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2ece40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ece40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ece44: 0x0  nop
    ctx->pc = 0x2ece44u;
    // NOP
    // 0x2ece48: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2ece48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2ece4c: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ece4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ece50: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2ECE50u;
    SET_GPR_U32(ctx, 31, 0x2ECE58u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2ECE50u, 0x2ECE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECE58u;
label_2ece58:
    // 0x2ece58: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ece58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ece5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ece5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ece60: 0x0  nop
    ctx->pc = 0x2ece60u;
    // NOP
    // 0x2ece64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ece64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ece68: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2ece68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2ece6c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ece6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ece70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ece70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ece74: 0x0  nop
    ctx->pc = 0x2ece74u;
    // NOP
    // 0x2ece78: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2ece78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2ece7c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ece7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ece80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ece80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ece84: 0x0  nop
    ctx->pc = 0x2ece84u;
    // NOP
    // 0x2ece88: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2ece88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2ece8c: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x2ece8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
    // 0x2ece90: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ece90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ece94: 0x0  nop
    ctx->pc = 0x2ece94u;
    // NOP
    // 0x2ece98: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2ece98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2ece9c: 0x3c043f78  lui         $a0, 0x3F78
    ctx->pc = 0x2ece9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16248 << 16));
    // 0x2ecea0: 0x348251ec  ori         $v0, $a0, 0x51EC
    ctx->pc = 0x2ecea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20972);
    // 0x2ecea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ecea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecea8: 0x0  nop
    ctx->pc = 0x2ecea8u;
    // NOP
    // 0x2eceac: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2eceacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2eceb0: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2eceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2eceb4: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2eceb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2eceb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eceb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecebc: 0x0  nop
    ctx->pc = 0x2ecebcu;
    // NOP
    // 0x2ecec0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2ecec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2ecec4: 0x3c03c060  lui         $v1, 0xC060
    ctx->pc = 0x2ecec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49248 << 16));
    // 0x2ecec8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ecec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ececc: 0x0  nop
    ctx->pc = 0x2ececcu;
    // NOP
    // 0x2eced0: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2eced0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2eced4: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2eced4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eced8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2eced8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2ecedc: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2ecedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2ecee0: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x2ecee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x2ecee4: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x2ecee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x2ecee8: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x2ecee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2eceec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eceecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecef0: 0x0  nop
    ctx->pc = 0x2ecef0u;
    // NOP
    // 0x2ecef4: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2ecef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2ecef8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ECEF8u;
    SET_GPR_U32(ctx, 31, 0x2ECF00u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ECEF8u, 0x2ECF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECF00u;
label_2ecf00:
    // 0x2ecf00: 0x3c153dcc  lui         $s5, 0x3DCC
    ctx->pc = 0x2ecf00u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)15820 << 16));
    // 0x2ecf04: 0x36a3cccd  ori         $v1, $s5, 0xCCCD
    ctx->pc = 0x2ecf04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)52429);
    // 0x2ecf08: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ecf08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ecf0c: 0x0  nop
    ctx->pc = 0x2ecf0cu;
    // NOP
    // 0x2ecf10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ecf10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ecf14: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2ecf14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2ecf18: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ECF18u;
    SET_GPR_U32(ctx, 31, 0x2ECF20u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ECF18u, 0x2ECF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECF20u;
label_2ecf20:
    // 0x2ecf20: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x2ecf20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x2ecf24: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2ecf24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ecf28: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ecf28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ecf2c: 0x0  nop
    ctx->pc = 0x2ecf2cu;
    // NOP
    // 0x2ecf30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ecf30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ecf34: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2ecf34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->pc = 0x2ecf38u;
}
