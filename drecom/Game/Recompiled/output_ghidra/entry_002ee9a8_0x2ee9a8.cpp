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

// Function: entry_002ee9a8
// Address: 0x2ee9a8 - 0x2eebf8
void entry_002ee9a8_0x2ee9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ee9a8_0x2ee9a8");
#endif

    switch (ctx->pc) {
        case 0x2eea24u: goto label_2eea24;
        case 0x2eea48u: goto label_2eea48;
        case 0x2eea6cu: goto label_2eea6c;
        case 0x2eea94u: goto label_2eea94;
        case 0x2eeac4u: goto label_2eeac4;
        case 0x2eebc0u: goto label_2eebc0;
        case 0x2eebe0u: goto label_2eebe0;
        default: break;
    }

    ctx->pc = 0x2ee9a8u;

    // 0x2ee9a8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2ee9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2ee9ac: 0x2457a610  addiu       $s7, $v0, -0x59F0
    ctx->pc = 0x2ee9acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x2ee9b0: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x2ee9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ee9b4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2ee9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2ee9b8: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x2ee9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x2ee9bc: 0x1202008e  beq         $s0, $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x2EE9BCu;
    {
        const bool branch_taken_0x2ee9bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee9bc) {
            ctx->pc = 0x2EEBF8u;
            return;
        }
    }
    ctx->pc = 0x2EE9C4u;
    // 0x2ee9c4: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ee9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ee9c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee9cc: 0x0  nop
    ctx->pc = 0x2ee9ccu;
    // NOP
    // 0x2ee9d0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ee9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ee9d4: 0x3c024133  lui         $v0, 0x4133
    ctx->pc = 0x2ee9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16691 << 16));
    // 0x2ee9d8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ee9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ee9dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee9e0: 0x0  nop
    ctx->pc = 0x2ee9e0u;
    // NOP
    // 0x2ee9e4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ee9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ee9e8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ee9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2ee9ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee9ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee9f0: 0x0  nop
    ctx->pc = 0x2ee9f0u;
    // NOP
    // 0x2ee9f4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ee9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ee9f8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ee9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ee9fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee9fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eea00: 0x0  nop
    ctx->pc = 0x2eea00u;
    // NOP
    // 0x2eea04: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2eea04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2eea08: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2eea08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2eea0c: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2eea0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2eea10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eea10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eea14: 0x0  nop
    ctx->pc = 0x2eea14u;
    // NOP
    // 0x2eea18: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2eea18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2eea1c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EEA1Cu;
    SET_GPR_U32(ctx, 31, 0x2EEA24u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EEA1Cu, 0x2EEA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEA24u;
label_2eea24:
    // 0x2eea24: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eea24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eea28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eea28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eea2c: 0x0  nop
    ctx->pc = 0x2eea2cu;
    // NOP
    // 0x2eea30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eea30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eea34: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2eea34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eea38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eea38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eea3c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2eea3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2eea40: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EEA40u;
    SET_GPR_U32(ctx, 31, 0x2EEA48u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EEA40u, 0x2EEA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEA48u;
label_2eea48:
    // 0x2eea48: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eea48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eea4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eea4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eea50: 0x0  nop
    ctx->pc = 0x2eea50u;
    // NOP
    // 0x2eea54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eea54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eea58: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2eea58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eea5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eea5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eea60: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2eea60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2eea64: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EEA64u;
    SET_GPR_U32(ctx, 31, 0x2EEA6Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EEA64u, 0x2EEA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEA6Cu;
label_2eea6c:
    // 0x2eea6c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eea70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eea70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eea74: 0x0  nop
    ctx->pc = 0x2eea74u;
    // NOP
    // 0x2eea78: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eea78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eea7c: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2eea7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eea80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eea80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eea84: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2eea84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2eea88: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x2eea88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eea8c: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EEA8Cu;
    SET_GPR_U32(ctx, 31, 0x2EEA94u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EEA8Cu, 0x2EEA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEA94u;
label_2eea94:
    // 0x2eea94: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2eea94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2eea98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eea98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eea9c: 0x0  nop
    ctx->pc = 0x2eea9cu;
    // NOP
    // 0x2eeaa0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eeaa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eeaa4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2eeaa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2eeaa8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eeaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eeaac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eeaacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeab0: 0x0  nop
    ctx->pc = 0x2eeab0u;
    // NOP
    // 0x2eeab4: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2eeab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2eeab8: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x2eeab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eeabc: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EEABCu;
    SET_GPR_U32(ctx, 31, 0x2EEAC4u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EEABCu, 0x2EEAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEAC4u;
label_2eeac4:
    // 0x2eeac4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2eeac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2eeac8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eeac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eeacc: 0x0  nop
    ctx->pc = 0x2eeaccu;
    // NOP
    // 0x2eead0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eead0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eead4: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2eead4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2eead8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2eead8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2eeadc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eeadcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeae0: 0x0  nop
    ctx->pc = 0x2eeae0u;
    // NOP
    // 0x2eeae4: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2eeae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2eeae8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eeae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eeaec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eeaecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeaf0: 0x0  nop
    ctx->pc = 0x2eeaf0u;
    // NOP
    // 0x2eeaf4: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2eeaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2eeaf8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2eeaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2eeafc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eeafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeb00: 0x0  nop
    ctx->pc = 0x2eeb00u;
    // NOP
    // 0x2eeb04: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2eeb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2eeb08: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2eeb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2eeb0c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2eeb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2eeb10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eeb10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeb14: 0x0  nop
    ctx->pc = 0x2eeb14u;
    // NOP
    // 0x2eeb18: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2eeb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2eeb1c: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2eeb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2eeb20: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2eeb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2eeb24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eeb24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeb28: 0x0  nop
    ctx->pc = 0x2eeb28u;
    // NOP
    // 0x2eeb2c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2eeb2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2eeb30: 0x3c0242aa  lui         $v0, 0x42AA
    ctx->pc = 0x2eeb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17066 << 16));
    // 0x2eeb34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eeb34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeb38: 0x0  nop
    ctx->pc = 0x2eeb38u;
    // NOP
    // 0x2eeb3c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2eeb3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2eeb40: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2eeb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x2eeb44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eeb44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeb48: 0x0  nop
    ctx->pc = 0x2eeb48u;
    // NOP
    // 0x2eeb4c: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2eeb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2eeb50: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2eeb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2eeb54: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2eeb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2eeb58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eeb58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeb5c: 0x0  nop
    ctx->pc = 0x2eeb5cu;
    // NOP
    // 0x2eeb60: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2eeb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2eeb64: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eeb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eeb68: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2eeb68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2eeb6c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2eeb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2eeb70: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2eeb70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eeb74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eeb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eeb78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eeb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eeb7c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2eeb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2eeb80: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eeb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eeb84: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2eeb84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2eeb88: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2eeb88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2eeb8c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2eeb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eeb90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eeb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eeb94: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2eeb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2eeb98: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2eeb98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2eeb9c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2eeb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2eeba0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eeba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eeba4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2eeba4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2eeba8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eeba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eebac: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2eebacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2eebb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eebb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eebb4: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x2eebb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x2eebb8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EEBB8u;
    SET_GPR_U32(ctx, 31, 0x2EEBC0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EEBB8u, 0x2EEBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEBC0u;
label_2eebc0:
    // 0x2eebc0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2eebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2eebc4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2eebc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2eebc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eebc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eebcc: 0x0  nop
    ctx->pc = 0x2eebccu;
    // NOP
    // 0x2eebd0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eebd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eebd4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2eebd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2eebd8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EEBD8u;
    SET_GPR_U32(ctx, 31, 0x2EEBE0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EEBD8u, 0x2EEBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEBE0u;
label_2eebe0:
    // 0x2eebe0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2eebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2eebe4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2eebe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2eebe8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eebe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eebec: 0x0  nop
    ctx->pc = 0x2eebecu;
    // NOP
    // 0x2eebf0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eebf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eebf4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2eebf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->pc = 0x2eebf8u;
}
