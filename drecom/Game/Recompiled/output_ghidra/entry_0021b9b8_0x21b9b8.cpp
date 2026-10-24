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

// Function: entry_0021b9b8
// Address: 0x21b9b8 - 0x21bbd0
void entry_0021b9b8_0x21b9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b9b8_0x21b9b8");
#endif

    switch (ctx->pc) {
        case 0x21ba14u: goto label_21ba14;
        case 0x21ba38u: goto label_21ba38;
        case 0x21ba5cu: goto label_21ba5c;
        case 0x21ba80u: goto label_21ba80;
        case 0x21bafcu: goto label_21bafc;
        case 0x21bb34u: goto label_21bb34;
        default: break;
    }

    ctx->pc = 0x21b9b8u;

    // 0x21b9b8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21b9bc: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21b9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21b9c0: 0x12030083  beq         $s0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x21B9C0u;
    {
        const bool branch_taken_0x21b9c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21b9c0) {
            ctx->pc = 0x21BBD0u;
            return;
        }
    }
    ctx->pc = 0x21B9C8u;
    // 0x21b9c8: 0x3c0342f9  lui         $v1, 0x42F9
    ctx->pc = 0x21b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17145 << 16));
    // 0x21b9cc: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x21b9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x21b9d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21b9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b9d4: 0x0  nop
    ctx->pc = 0x21b9d4u;
    // NOP
    // 0x21b9d8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21b9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21b9dc: 0x3c0342f9  lui         $v1, 0x42F9
    ctx->pc = 0x21b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17145 << 16));
    // 0x21b9e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b9e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b9e4: 0x0  nop
    ctx->pc = 0x21b9e4u;
    // NOP
    // 0x21b9e8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21b9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21b9ec: 0x3c0342f8  lui         $v1, 0x42F8
    ctx->pc = 0x21b9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17144 << 16));
    // 0x21b9f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b9f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b9f4: 0x0  nop
    ctx->pc = 0x21b9f4u;
    // NOP
    // 0x21b9f8: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21b9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21b9fc: 0x3c034218  lui         $v1, 0x4218
    ctx->pc = 0x21b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16920 << 16));
    // 0x21ba00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21ba00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ba04: 0x0  nop
    ctx->pc = 0x21ba04u;
    // NOP
    // 0x21ba08: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21ba08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21ba0c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21BA0Cu;
    SET_GPR_U32(ctx, 31, 0x21BA14u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21BA0Cu, 0x21BA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BA14u;
label_21ba14:
    // 0x21ba14: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x21ba14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x21ba18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21ba18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ba1c: 0x0  nop
    ctx->pc = 0x21ba1cu;
    // NOP
    // 0x21ba20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21ba20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21ba24: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x21ba24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ba28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21ba28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ba2c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21ba2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21ba30: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21BA30u;
    SET_GPR_U32(ctx, 31, 0x21BA38u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21BA30u, 0x21BA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BA38u;
label_21ba38:
    // 0x21ba38: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x21ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x21ba3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21ba3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ba40: 0x0  nop
    ctx->pc = 0x21ba40u;
    // NOP
    // 0x21ba44: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21ba44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21ba48: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x21ba48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ba4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21ba4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ba50: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21ba50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21ba54: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21BA54u;
    SET_GPR_U32(ctx, 31, 0x21BA5Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21BA54u, 0x21BA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BA5Cu;
label_21ba5c:
    // 0x21ba5c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x21ba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x21ba60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21ba60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ba64: 0x0  nop
    ctx->pc = 0x21ba64u;
    // NOP
    // 0x21ba68: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21ba68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21ba6c: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x21ba6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ba70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21ba70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ba74: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21ba74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21ba78: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21BA78u;
    SET_GPR_U32(ctx, 31, 0x21BA80u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21BA78u, 0x21BA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BA80u;
label_21ba80:
    // 0x21ba80: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x21ba80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x21ba84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21ba84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ba88: 0x0  nop
    ctx->pc = 0x21ba88u;
    // NOP
    // 0x21ba8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21ba8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21ba90: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x21ba90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ba94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21ba94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ba98: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21ba98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21ba9c: 0x3c033f79  lui         $v1, 0x3F79
    ctx->pc = 0x21ba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16249 << 16));
    // 0x21baa0: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x21baa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x21baa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21baa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21baa8: 0x0  nop
    ctx->pc = 0x21baa8u;
    // NOP
    // 0x21baac: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x21baacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x21bab0: 0x3c033f79  lui         $v1, 0x3F79
    ctx->pc = 0x21bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16249 << 16));
    // 0x21bab4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x21bab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x21bab8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21bab8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21babc: 0x0  nop
    ctx->pc = 0x21babcu;
    // NOP
    // 0x21bac0: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x21bac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x21bac4: 0x3c033f77  lui         $v1, 0x3F77
    ctx->pc = 0x21bac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16247 << 16));
    // 0x21bac8: 0x34630a3d  ori         $v1, $v1, 0xA3D
    ctx->pc = 0x21bac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2621);
    // 0x21bacc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21baccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bad0: 0x0  nop
    ctx->pc = 0x21bad0u;
    // NOP
    // 0x21bad4: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x21bad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x21bad8: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x21bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x21badc: 0x344351ec  ori         $v1, $v0, 0x51EC
    ctx->pc = 0x21badcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x21bae0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21bae0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bae4: 0x0  nop
    ctx->pc = 0x21bae4u;
    // NOP
    // 0x21bae8: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x21bae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x21baec: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x21baecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21baf0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x21baf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x21baf4: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x21BAF4u;
    SET_GPR_U32(ctx, 31, 0x21BAFCu);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x21BAF4u, 0x21BAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BAFCu;
label_21bafc:
    // 0x21bafc: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x21bafcu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x21bb00: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x21bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x21bb04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21bb04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bb08: 0x0  nop
    ctx->pc = 0x21bb08u;
    // NOP
    // 0x21bb0c: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x21bb0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21bb10: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x21bb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x21bb14: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x21bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x21bb18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21bb18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bb1c: 0x0  nop
    ctx->pc = 0x21bb1cu;
    // NOP
    // 0x21bb20: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x21bb20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x21bb24: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x21bb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21bb28: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x21bb28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x21bb2c: 0xc0454c4  jal         func_115310
    ctx->pc = 0x21BB2Cu;
    SET_GPR_U32(ctx, 31, 0x21BB34u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x21BB2Cu, 0x21BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BB34u;
label_21bb34:
    // 0x21bb34: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x21bb34u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x21bb38: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x21bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x21bb3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21bb3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bb40: 0x0  nop
    ctx->pc = 0x21bb40u;
    // NOP
    // 0x21bb44: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x21bb44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21bb48: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x21bb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x21bb4c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x21bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x21bb50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21bb50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bb54: 0x0  nop
    ctx->pc = 0x21bb54u;
    // NOP
    // 0x21bb58: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x21bb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x21bb5c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x21bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x21bb60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21bb60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bb64: 0x0  nop
    ctx->pc = 0x21bb64u;
    // NOP
    // 0x21bb68: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x21bb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x21bb6c: 0x3c074080  lui         $a3, 0x4080
    ctx->pc = 0x21bb6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16512 << 16));
    // 0x21bb70: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x21bb70u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bb74: 0x0  nop
    ctx->pc = 0x21bb74u;
    // NOP
    // 0x21bb78: 0xe6010068  swc1        $f1, 0x68($s0)
    ctx->pc = 0x21bb78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x21bb7c: 0x3c063f78  lui         $a2, 0x3F78
    ctx->pc = 0x21bb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16248 << 16));
    // 0x21bb80: 0x34c451ec  ori         $a0, $a2, 0x51EC
    ctx->pc = 0x21bb80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)20972);
    // 0x21bb84: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x21bb84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bb88: 0x0  nop
    ctx->pc = 0x21bb88u;
    // NOP
    // 0x21bb8c: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x21bb8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x21bb90: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x21bb90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x21bb94: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x21bb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x21bb98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21bb98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bb9c: 0x0  nop
    ctx->pc = 0x21bb9cu;
    // NOP
    // 0x21bba0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x21bba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x21bba4: 0x3c03bf99  lui         $v1, 0xBF99
    ctx->pc = 0x21bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49049 << 16));
    // 0x21bba8: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x21bba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x21bbac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x21bbacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bbb0: 0x0  nop
    ctx->pc = 0x21bbb0u;
    // NOP
    // 0x21bbb4: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x21bbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x21bbb8: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x21bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
    // 0x21bbbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21bbbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bbc0: 0x0  nop
    ctx->pc = 0x21bbc0u;
    // NOP
    // 0x21bbc4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21bbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21bbc8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x21bbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x21bbcc: 0xae040100  sw          $a0, 0x100($s0)
    ctx->pc = 0x21bbccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 4));
    ctx->pc = 0x21bbd0u;
}
