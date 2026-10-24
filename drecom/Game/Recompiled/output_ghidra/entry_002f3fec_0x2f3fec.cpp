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

// Function: entry_002f3fec
// Address: 0x2f3fec - 0x2f41d0
void entry_002f3fec_0x2f3fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f3fec_0x2f3fec");
#endif

    switch (ctx->pc) {
        case 0x2f406cu: goto label_2f406c;
        case 0x2f4090u: goto label_2f4090;
        case 0x2f40b4u: goto label_2f40b4;
        case 0x2f40ecu: goto label_2f40ec;
        default: break;
    }

    ctx->pc = 0x2f3fecu;

    // 0x2f3fec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3ff0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3ff4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3ff8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3ffc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4000: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4004: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f4004u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f4008: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f400c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f400cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4010: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4014: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4018: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f401c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f401cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f4020: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f4020u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f4024: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f4024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f4028: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f402c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f402cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f4030: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2f4030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4034: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2f4034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f4038: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f4038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f403c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f403cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4040: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f4040u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f4044: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2f4044u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2f4048: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f404c: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2f404cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2f4050: 0x0  nop
    ctx->pc = 0x2f4050u;
    // NOP
    // 0x2f4054: 0x0  nop
    ctx->pc = 0x2f4054u;
    // NOP
    // 0x2f4058: 0x1010  mfhi        $v0
    ctx->pc = 0x2f4058u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f405c: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2F405Cu;
    {
        const bool branch_taken_0x2f405c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f405c) {
            ctx->pc = 0x2F41D0u;
            return;
        }
    }
    ctx->pc = 0x2F4064u;
    // 0x2f4064: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F4064u;
    SET_GPR_U32(ctx, 31, 0x2F406Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F4064u, 0x2F406Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F406Cu;
label_2f406c:
    // 0x2f406c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f406cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f4070: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4074: 0x0  nop
    ctx->pc = 0x2f4074u;
    // NOP
    // 0x2f4078: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f4078u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f407c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f407cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4080: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f4080u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f4084: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2f4084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2f4088: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F4088u;
    SET_GPR_U32(ctx, 31, 0x2F4090u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F4088u, 0x2F4090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4090u;
label_2f4090:
    // 0x2f4090: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f4090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f4094: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4098: 0x0  nop
    ctx->pc = 0x2f4098u;
    // NOP
    // 0x2f409c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f409cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f40a0: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f40a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f40a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f40a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f40a8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2f40a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2f40ac: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F40ACu;
    SET_GPR_U32(ctx, 31, 0x2F40B4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F40ACu, 0x2F40B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F40B4u;
label_2f40b4:
    // 0x2f40b4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f40b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f40b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f40b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f40bc: 0x0  nop
    ctx->pc = 0x2f40bcu;
    // NOP
    // 0x2f40c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f40c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f40c4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f40c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f40c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f40c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f40cc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2f40ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2f40d0: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x2f40d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x2f40d4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f40d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f40d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f40d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f40dc: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f40dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f40e0: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x2f40e0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f40e4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F40E4u;
    SET_GPR_U32(ctx, 31, 0x2F40ECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F40E4u, 0x2F40ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F40ECu;
label_2f40ec:
    // 0x2f40ec: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2f40ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2f40f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f40f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f40f4: 0x0  nop
    ctx->pc = 0x2f40f4u;
    // NOP
    // 0x2f40f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f40f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f40fc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2f40fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2f4100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4104: 0x0  nop
    ctx->pc = 0x2f4104u;
    // NOP
    // 0x2f4108: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x2f4108u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f410c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f410cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2f4110: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4114: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f4114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4118: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f4118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f411c: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x2f411cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2f4120: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f4120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f4124: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f4124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f4128: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f412c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f412cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f4130: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4134: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4134u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4138: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f413c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f413cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4144: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4148: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f4148u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f414c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f414cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4150: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4150u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4154: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4158: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f415c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4160: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f4160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f4164: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f4164u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f4168: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f4168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f416c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f416cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4170: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f4170u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f4174: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f4174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4178: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f4178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f417c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f417cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f4180: 0x0  nop
    ctx->pc = 0x2f4180u;
    // NOP
    // 0x2f4184: 0x0  nop
    ctx->pc = 0x2f4184u;
    // NOP
    // 0x2f4188: 0x1810  mfhi        $v1
    ctx->pc = 0x2f4188u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f418c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f418cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f4190: 0x24428e90  addiu       $v0, $v0, -0x7170
    ctx->pc = 0x2f4190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938256));
    // 0x2f4194: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4198: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f4198u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f419c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f419cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f41a0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f41a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f41a4: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f41a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f41a8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f41a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f41ac: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f41acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f41b0: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f41b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f41b4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2f41b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f41b8: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2f41b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f41bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f41bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f41c0: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2f41c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f41c4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f41c4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f41c8: 0xc0bbe74  jal         func_2EF9D0
    ctx->pc = 0x2F41C8u;
    SET_GPR_U32(ctx, 31, 0x2F41D0u);
    ctx->pc = 0x2EF9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF9D0u, 0x2F41C8u, 0x2F41D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F41D0u;
}
