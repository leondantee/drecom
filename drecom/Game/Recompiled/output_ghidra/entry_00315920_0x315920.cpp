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

// Function: entry_00315920
// Address: 0x315920 - 0x315b60
void entry_00315920_0x315920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00315920_0x315920");
#endif

    switch (ctx->pc) {
        case 0x315988u: goto label_315988;
        case 0x3159acu: goto label_3159ac;
        case 0x3159d0u: goto label_3159d0;
        case 0x3159f4u: goto label_3159f4;
        case 0x315a30u: goto label_315a30;
        case 0x315a60u: goto label_315a60;
        case 0x315b24u: goto label_315b24;
        case 0x315b44u: goto label_315b44;
        default: break;
    }

    ctx->pc = 0x315920u;

    // 0x315920: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x315920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x315924: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x315924u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x315928: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x315928u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x31592c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x31592cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x315930: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x315930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x315934: 0x1203008a  beq         $s0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x315934u;
    {
        const bool branch_taken_0x315934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x315934) {
            ctx->pc = 0x315B60u;
            return;
        }
    }
    ctx->pc = 0x31593Cu;
    // 0x31593c: 0x3c0242f1  lui         $v0, 0x42F1
    ctx->pc = 0x31593cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17137 << 16));
    // 0x315940: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x315940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x315944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315948: 0x0  nop
    ctx->pc = 0x315948u;
    // NOP
    // 0x31594c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x31594cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x315950: 0x3c0242f1  lui         $v0, 0x42F1
    ctx->pc = 0x315950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17137 << 16));
    // 0x315954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315958: 0x0  nop
    ctx->pc = 0x315958u;
    // NOP
    // 0x31595c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x31595cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x315960: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x315960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x315964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315968: 0x0  nop
    ctx->pc = 0x315968u;
    // NOP
    // 0x31596c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x31596cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x315970: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x315970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x315974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315978: 0x0  nop
    ctx->pc = 0x315978u;
    // NOP
    // 0x31597c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x31597cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x315980: 0xc067648  jal         func_19D920
    ctx->pc = 0x315980u;
    SET_GPR_U32(ctx, 31, 0x315988u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x315980u, 0x315988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315988u;
label_315988:
    // 0x315988: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x315988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x31598c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31598cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315990: 0x0  nop
    ctx->pc = 0x315990u;
    // NOP
    // 0x315994: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x315994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315998: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x315998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31599c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31599cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3159a0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3159a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x3159a4: 0xc067648  jal         func_19D920
    ctx->pc = 0x3159A4u;
    SET_GPR_U32(ctx, 31, 0x3159ACu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3159A4u, 0x3159ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3159ACu;
label_3159ac:
    // 0x3159ac: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3159acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3159b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3159b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3159b4: 0x0  nop
    ctx->pc = 0x3159b4u;
    // NOP
    // 0x3159b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3159b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3159bc: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x3159bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3159c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3159c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3159c4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x3159c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x3159c8: 0xc067648  jal         func_19D920
    ctx->pc = 0x3159C8u;
    SET_GPR_U32(ctx, 31, 0x3159D0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3159C8u, 0x3159D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3159D0u;
label_3159d0:
    // 0x3159d0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3159d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3159d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3159d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3159d8: 0x0  nop
    ctx->pc = 0x3159d8u;
    // NOP
    // 0x3159dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3159dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3159e0: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x3159e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3159e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3159e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3159e8: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x3159e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x3159ec: 0xc067648  jal         func_19D920
    ctx->pc = 0x3159ECu;
    SET_GPR_U32(ctx, 31, 0x3159F4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3159ECu, 0x3159F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3159F4u;
label_3159f4:
    // 0x3159f4: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x3159f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x3159f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3159f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3159fc: 0x0  nop
    ctx->pc = 0x3159fcu;
    // NOP
    // 0x315a00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x315a00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315a04: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x315a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315a08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x315a08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x315a0c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x315a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x315a10: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x315a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x315a14: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x315a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x315a18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315a1c: 0x0  nop
    ctx->pc = 0x315a1cu;
    // NOP
    // 0x315a20: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x315a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x315a24: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x315a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x315a28: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x315A28u;
    SET_GPR_U32(ctx, 31, 0x315A30u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x315A28u, 0x315A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A30u;
label_315a30:
    // 0x315a30: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x315a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x315a34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315a38: 0x0  nop
    ctx->pc = 0x315a38u;
    // NOP
    // 0x315a3c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x315a3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315a40: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x315a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x315a44: 0x3c0241e8  lui         $v0, 0x41E8
    ctx->pc = 0x315a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16872 << 16));
    // 0x315a48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315a4c: 0x0  nop
    ctx->pc = 0x315a4cu;
    // NOP
    // 0x315a50: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x315a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x315a54: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x315a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x315a58: 0xc0454c4  jal         func_115310
    ctx->pc = 0x315A58u;
    SET_GPR_U32(ctx, 31, 0x315A60u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x315A58u, 0x315A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A60u;
label_315a60:
    // 0x315a60: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x315a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x315a64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315a68: 0x0  nop
    ctx->pc = 0x315a68u;
    // NOP
    // 0x315a6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x315a6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315a70: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x315a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x315a74: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x315a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x315a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315a7c: 0x0  nop
    ctx->pc = 0x315a7cu;
    // NOP
    // 0x315a80: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x315a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x315a84: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x315a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x315a88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315a8c: 0x0  nop
    ctx->pc = 0x315a8cu;
    // NOP
    // 0x315a90: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x315a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x315a94: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x315a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x315a98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315a9c: 0x0  nop
    ctx->pc = 0x315a9cu;
    // NOP
    // 0x315aa0: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x315aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x315aa4: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x315aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x315aa8: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x315aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x315aac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315ab0: 0x0  nop
    ctx->pc = 0x315ab0u;
    // NOP
    // 0x315ab4: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x315ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x315ab8: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x315ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x315abc: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x315abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x315ac0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315ac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315ac4: 0x0  nop
    ctx->pc = 0x315ac4u;
    // NOP
    // 0x315ac8: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x315ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x315acc: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x315accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
    // 0x315ad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315ad4: 0x0  nop
    ctx->pc = 0x315ad4u;
    // NOP
    // 0x315ad8: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x315ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x315adc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x315adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x315ae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315ae4: 0x0  nop
    ctx->pc = 0x315ae4u;
    // NOP
    // 0x315ae8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x315ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x315aec: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x315aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x315af0: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x315af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x315af4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x315af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x315af8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x315af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x315afc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315afcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315b00: 0x0  nop
    ctx->pc = 0x315b00u;
    // NOP
    // 0x315b04: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x315b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x315b08: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x315b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x315b0c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x315b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x315b10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315b14: 0x0  nop
    ctx->pc = 0x315b14u;
    // NOP
    // 0x315b18: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x315b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x315b1c: 0xc067648  jal         func_19D920
    ctx->pc = 0x315B1Cu;
    SET_GPR_U32(ctx, 31, 0x315B24u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x315B1Cu, 0x315B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B24u;
label_315b24:
    // 0x315b24: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x315b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x315b28: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x315b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x315b2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315b30: 0x0  nop
    ctx->pc = 0x315b30u;
    // NOP
    // 0x315b34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x315b34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315b38: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x315b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x315b3c: 0xc067648  jal         func_19D920
    ctx->pc = 0x315B3Cu;
    SET_GPR_U32(ctx, 31, 0x315B44u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x315B3Cu, 0x315B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B44u;
label_315b44:
    // 0x315b44: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x315b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x315b48: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x315b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x315b4c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x315b4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315b50: 0x0  nop
    ctx->pc = 0x315b50u;
    // NOP
    // 0x315b54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x315b54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315b58: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x315b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x315b5c: 0x0  nop
    ctx->pc = 0x315b5cu;
    // NOP
    ctx->pc = 0x315b60u;
}
