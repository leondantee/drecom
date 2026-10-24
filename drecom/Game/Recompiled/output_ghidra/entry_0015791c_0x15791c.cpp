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

// Function: entry_0015791c
// Address: 0x15791c - 0x157b58
void entry_0015791c_0x15791c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015791c_0x15791c");
#endif

    switch (ctx->pc) {
        case 0x157924u: goto label_157924;
        case 0x1579b0u: goto label_1579b0;
        case 0x157a3cu: goto label_157a3c;
        case 0x157ac8u: goto label_157ac8;
        default: break;
    }

    ctx->pc = 0x15791cu;

    // 0x15791c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x15791Cu;
    SET_GPR_U32(ctx, 31, 0x157924u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x15791Cu, 0x157924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157924u;
label_157924:
    // 0x157924: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x157924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x157928: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x157928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x15792c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15792cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157930: 0x0  nop
    ctx->pc = 0x157930u;
    // NOP
    // 0x157934: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x157934u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157938: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x15793c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15793cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157940: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x157940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x157944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157948: 0x3c044370  lui         $a0, 0x4370
    ctx->pc = 0x157948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17264 << 16));
    // 0x15794c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x15794cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157950: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x157950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157954: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x157954u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157958: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x157958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x15795c: 0x3445cccd  ori         $a1, $v0, 0xCCCD
    ctx->pc = 0x15795cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x157960: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x157960u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157964: 0x0  nop
    ctx->pc = 0x157964u;
    // NOP
    // 0x157968: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15796c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x15796cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157970: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157974: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157978: 0x2442f7d0  addiu       $v0, $v0, -0x830
    ctx->pc = 0x157978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x15797c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15797cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157980: 0x3c0443f1  lui         $a0, 0x43F1
    ctx->pc = 0x157980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17393 << 16));
    // 0x157984: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x157984u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157988: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x157988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15798c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x15798cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157990: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x157990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157994: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x157994u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x157998: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x157998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x15799c: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x15799cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1579a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1579a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1579a4: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x1579a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
    // 0x1579a8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x1579A8u;
    SET_GPR_U32(ctx, 31, 0x1579B0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x1579A8u, 0x1579B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1579B0u;
label_1579b0:
    // 0x1579b0: 0x3c043c03  lui         $a0, 0x3C03
    ctx->pc = 0x1579b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15363 << 16));
    // 0x1579b4: 0x3497126f  ori         $s7, $a0, 0x126F
    ctx->pc = 0x1579b4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4719);
    // 0x1579b8: 0x44970800  mtc1        $s7, $f1
    ctx->pc = 0x1579b8u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1579bc: 0x0  nop
    ctx->pc = 0x1579bcu;
    // NOP
    // 0x1579c0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1579c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1579c4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1579c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1579c8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1579c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1579cc: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x1579ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x1579d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1579d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1579d4: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x1579d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
    // 0x1579d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1579d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1579dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1579dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1579e0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1579e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1579e4: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1579e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1579e8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1579e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1579ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1579ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1579f0: 0x0  nop
    ctx->pc = 0x1579f0u;
    // NOP
    // 0x1579f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1579f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1579f8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1579f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1579fc: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1579fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157a00: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x157a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x157a04: 0x2482f7d0  addiu       $v0, $a0, -0x830
    ctx->pc = 0x157a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965200));
    // 0x157a08: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x157a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157a0c: 0x3c0243f1  lui         $v0, 0x43F1
    ctx->pc = 0x157a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17393 << 16));
    // 0x157a10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157a14: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x157a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157a18: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x157a18u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157a1c: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x157a1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157a20: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x157a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x157a24: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x157a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x157a28: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x157a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157a2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157a2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157a30: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x157a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x157a34: 0xc06765c  jal         func_19D970
    ctx->pc = 0x157A34u;
    SET_GPR_U32(ctx, 31, 0x157A3Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x157A34u, 0x157A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157A3Cu;
label_157a3c:
    // 0x157a3c: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x157a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x157a40: 0x3443126f  ori         $v1, $v0, 0x126F
    ctx->pc = 0x157a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x157a44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x157a44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157a48: 0x0  nop
    ctx->pc = 0x157a48u;
    // NOP
    // 0x157a4c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x157a4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157a50: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x157a50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157a54: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157a58: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x157a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x157a5c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x157a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x157a60: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x157a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x157a64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157a68: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x157a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157a6c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x157a6cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157a70: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x157a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x157a74: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x157a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x157a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x157a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157a7c: 0x0  nop
    ctx->pc = 0x157a7cu;
    // NOP
    // 0x157a80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157a84: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x157a84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157a88: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x157a88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157a8c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x157a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x157a90: 0x24a2f7d0  addiu       $v0, $a1, -0x830
    ctx->pc = 0x157a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965200));
    // 0x157a94: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x157a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x157a98: 0x3c0543f1  lui         $a1, 0x43F1
    ctx->pc = 0x157a98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17393 << 16));
    // 0x157a9c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x157a9cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157aa0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x157aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157aa4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x157aa4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157aa8: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x157aa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157aac: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x157aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x157ab0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x157ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x157ab4: 0xc44000e8  lwc1        $f0, 0xE8($v0)
    ctx->pc = 0x157ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157ab8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157ab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157abc: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x157abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
    // 0x157ac0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x157AC0u;
    SET_GPR_U32(ctx, 31, 0x157AC8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x157AC0u, 0x157AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157AC8u;
label_157ac8:
    // 0x157ac8: 0x3c023c03  lui         $v0, 0x3C03
    ctx->pc = 0x157ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15363 << 16));
    // 0x157acc: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x157accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x157ad0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157ad4: 0x0  nop
    ctx->pc = 0x157ad4u;
    // NOP
    // 0x157ad8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x157ad8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157adc: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x157adcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157ae0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157ae4: 0x2443f760  addiu       $v1, $v0, -0x8A0
    ctx->pc = 0x157ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x157ae8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x157ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x157aec: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x157aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x157af0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157af4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x157af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157af8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x157af8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157afc: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x157afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x157b00: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x157b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x157b04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x157b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157b08: 0x0  nop
    ctx->pc = 0x157b08u;
    // NOP
    // 0x157b0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157b0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157b10: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x157b10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157b14: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x157b14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157b18: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x157b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x157b1c: 0x2462f7d0  addiu       $v0, $v1, -0x830
    ctx->pc = 0x157b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965200));
    // 0x157b20: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x157b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x157b24: 0x3c0243f1  lui         $v0, 0x43F1
    ctx->pc = 0x157b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17393 << 16));
    // 0x157b28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157b2c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x157b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157b30: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x157b30u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157b34: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x157b34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157b38: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x157b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x157b3c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x157b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x157b40: 0xc4600128  lwc1        $f0, 0x128($v1)
    ctx->pc = 0x157b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157b44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157b44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157b48: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x157b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x157b4c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x157b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x157b50: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x157b50u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x157b54: 0x0  nop
    ctx->pc = 0x157b54u;
    // NOP
    ctx->pc = 0x157b58u;
}
