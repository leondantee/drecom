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

// Function: Pl_ds_move
// Address: 0x1cb880 - 0x1cba34
void Pl_ds_move_0x1cb880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_ds_move_0x1cb880");
#endif

    switch (ctx->pc) {
        case 0x1cb880u: goto label_1cb880;
        case 0x1cb884u: goto label_1cb884;
        case 0x1cb888u: goto label_1cb888;
        case 0x1cb88cu: goto label_1cb88c;
        case 0x1cb890u: goto label_1cb890;
        case 0x1cb894u: goto label_1cb894;
        case 0x1cb898u: goto label_1cb898;
        case 0x1cb89cu: goto label_1cb89c;
        case 0x1cb8a0u: goto label_1cb8a0;
        case 0x1cb8a4u: goto label_1cb8a4;
        case 0x1cb8a8u: goto label_1cb8a8;
        case 0x1cb8acu: goto label_1cb8ac;
        case 0x1cb8b0u: goto label_1cb8b0;
        case 0x1cb8b4u: goto label_1cb8b4;
        case 0x1cb8b8u: goto label_1cb8b8;
        case 0x1cb8bcu: goto label_1cb8bc;
        case 0x1cb8c0u: goto label_1cb8c0;
        case 0x1cb8c4u: goto label_1cb8c4;
        case 0x1cb8c8u: goto label_1cb8c8;
        case 0x1cb8ccu: goto label_1cb8cc;
        case 0x1cb8d0u: goto label_1cb8d0;
        case 0x1cb8d4u: goto label_1cb8d4;
        case 0x1cb8d8u: goto label_1cb8d8;
        case 0x1cb8dcu: goto label_1cb8dc;
        case 0x1cb8e0u: goto label_1cb8e0;
        case 0x1cb8e4u: goto label_1cb8e4;
        case 0x1cb8e8u: goto label_1cb8e8;
        case 0x1cb8ecu: goto label_1cb8ec;
        case 0x1cb8f0u: goto label_1cb8f0;
        case 0x1cb8f4u: goto label_1cb8f4;
        case 0x1cb8f8u: goto label_1cb8f8;
        case 0x1cb8fcu: goto label_1cb8fc;
        case 0x1cb900u: goto label_1cb900;
        case 0x1cb904u: goto label_1cb904;
        case 0x1cb908u: goto label_1cb908;
        case 0x1cb90cu: goto label_1cb90c;
        case 0x1cb910u: goto label_1cb910;
        case 0x1cb914u: goto label_1cb914;
        case 0x1cb918u: goto label_1cb918;
        case 0x1cb91cu: goto label_1cb91c;
        case 0x1cb920u: goto label_1cb920;
        case 0x1cb924u: goto label_1cb924;
        case 0x1cb928u: goto label_1cb928;
        case 0x1cb92cu: goto label_1cb92c;
        case 0x1cb930u: goto label_1cb930;
        case 0x1cb934u: goto label_1cb934;
        case 0x1cb938u: goto label_1cb938;
        case 0x1cb93cu: goto label_1cb93c;
        case 0x1cb940u: goto label_1cb940;
        case 0x1cb944u: goto label_1cb944;
        case 0x1cb948u: goto label_1cb948;
        case 0x1cb94cu: goto label_1cb94c;
        case 0x1cb950u: goto label_1cb950;
        case 0x1cb954u: goto label_1cb954;
        case 0x1cb958u: goto label_1cb958;
        case 0x1cb95cu: goto label_1cb95c;
        case 0x1cb960u: goto label_1cb960;
        case 0x1cb964u: goto label_1cb964;
        case 0x1cb968u: goto label_1cb968;
        case 0x1cb96cu: goto label_1cb96c;
        case 0x1cb970u: goto label_1cb970;
        case 0x1cb974u: goto label_1cb974;
        case 0x1cb978u: goto label_1cb978;
        case 0x1cb97cu: goto label_1cb97c;
        case 0x1cb980u: goto label_1cb980;
        case 0x1cb984u: goto label_1cb984;
        case 0x1cb988u: goto label_1cb988;
        case 0x1cb98cu: goto label_1cb98c;
        case 0x1cb990u: goto label_1cb990;
        case 0x1cb994u: goto label_1cb994;
        case 0x1cb998u: goto label_1cb998;
        case 0x1cb99cu: goto label_1cb99c;
        case 0x1cb9a0u: goto label_1cb9a0;
        case 0x1cb9a4u: goto label_1cb9a4;
        case 0x1cb9a8u: goto label_1cb9a8;
        case 0x1cb9acu: goto label_1cb9ac;
        case 0x1cb9b0u: goto label_1cb9b0;
        case 0x1cb9b4u: goto label_1cb9b4;
        case 0x1cb9b8u: goto label_1cb9b8;
        case 0x1cb9bcu: goto label_1cb9bc;
        case 0x1cb9c0u: goto label_1cb9c0;
        case 0x1cb9c4u: goto label_1cb9c4;
        case 0x1cb9c8u: goto label_1cb9c8;
        case 0x1cb9ccu: goto label_1cb9cc;
        case 0x1cb9d0u: goto label_1cb9d0;
        case 0x1cb9d4u: goto label_1cb9d4;
        case 0x1cb9d8u: goto label_1cb9d8;
        case 0x1cb9dcu: goto label_1cb9dc;
        case 0x1cb9e0u: goto label_1cb9e0;
        case 0x1cb9e4u: goto label_1cb9e4;
        case 0x1cb9e8u: goto label_1cb9e8;
        case 0x1cb9ecu: goto label_1cb9ec;
        case 0x1cb9f0u: goto label_1cb9f0;
        case 0x1cb9f4u: goto label_1cb9f4;
        case 0x1cb9f8u: goto label_1cb9f8;
        case 0x1cb9fcu: goto label_1cb9fc;
        case 0x1cba00u: goto label_1cba00;
        case 0x1cba04u: goto label_1cba04;
        case 0x1cba08u: goto label_1cba08;
        case 0x1cba0cu: goto label_1cba0c;
        case 0x1cba10u: goto label_1cba10;
        case 0x1cba14u: goto label_1cba14;
        case 0x1cba18u: goto label_1cba18;
        case 0x1cba1cu: goto label_1cba1c;
        case 0x1cba20u: goto label_1cba20;
        case 0x1cba24u: goto label_1cba24;
        case 0x1cba28u: goto label_1cba28;
        case 0x1cba2cu: goto label_1cba2c;
        case 0x1cba30u: goto label_1cba30;
        default: break;
    }

    ctx->pc = 0x1cb880u;

label_1cb880:
    // 0x1cb880: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cb880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1cb884:
    // 0x1cb884: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1cb884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_1cb888:
    // 0x1cb888: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cb888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1cb88c:
    // 0x1cb88c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cb88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cb890:
    // 0x1cb890: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cb890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cb894:
    // 0x1cb894: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1cb894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_1cb898:
    // 0x1cb898: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x1cb898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_1cb89c:
    // 0x1cb89c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1cb89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1cb8a0:
    // 0x1cb8a0: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1cb8a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1cb8a4:
    // 0x1cb8a4: 0xc057a4c  jal         func_15E930
label_1cb8a8:
    if (ctx->pc == 0x1CB8A8u) {
        ctx->pc = 0x1CB8ACu;
        goto label_1cb8ac;
    }
    ctx->pc = 0x1CB8A4u;
    SET_GPR_U32(ctx, 31, 0x1CB8ACu);
    ctx->pc = 0x15E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E930u, 0x1CB8A4u, 0x1CB8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8ACu;
label_1cb8ac:
    // 0x1cb8ac: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1cb8acu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cb8b0:
    // 0x1cb8b0: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x1cb8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_1cb8b4:
    // 0x1cb8b4: 0x260512c0  addiu       $a1, $s0, 0x12C0
    ctx->pc = 0x1cb8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4800));
label_1cb8b8:
    // 0x1cb8b8: 0xc05cf7c  jal         func_173DF0
label_1cb8bc:
    if (ctx->pc == 0x1CB8BCu) {
        ctx->pc = 0x1CB8C0u;
        goto label_1cb8c0;
    }
    ctx->pc = 0x1CB8B8u;
    SET_GPR_U32(ctx, 31, 0x1CB8C0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1CB8B8u, 0x1CB8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8C0u;
label_1cb8c0:
    // 0x1cb8c0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1cb8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1cb8c4:
    // 0x1cb8c4: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x1cb8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_1cb8c8:
    // 0x1cb8c8: 0xc057a80  jal         func_15EA00
label_1cb8cc:
    if (ctx->pc == 0x1CB8CCu) {
        ctx->pc = 0x1CB8D0u;
        goto label_1cb8d0;
    }
    ctx->pc = 0x1CB8C8u;
    SET_GPR_U32(ctx, 31, 0x1CB8D0u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1CB8C8u, 0x1CB8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8D0u;
label_1cb8d0:
    // 0x1cb8d0: 0x3c0244b2  lui         $v0, 0x44B2
    ctx->pc = 0x1cb8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17586 << 16));
label_1cb8d4:
    // 0x1cb8d4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1cb8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_1cb8d8:
    // 0x1cb8d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb8d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cb8dc:
    // 0x1cb8dc: 0x0  nop
    ctx->pc = 0x1cb8dcu;
    // NOP
label_1cb8e0:
    // 0x1cb8e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1cb8e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1cb8e4:
    // 0x1cb8e4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cb8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_1cb8e8:
    // 0x1cb8e8: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x1cb8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb8ec:
    // 0x1cb8ec: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1cb8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_1cb8f0:
    // 0x1cb8f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb8f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb8f4:
    // 0x1cb8f4: 0x0  nop
    ctx->pc = 0x1cb8f4u;
    // NOP
label_1cb8f8:
    // 0x1cb8f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cb8f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cb8fc:
    // 0x1cb8fc: 0x0  nop
    ctx->pc = 0x1cb8fcu;
    // NOP
label_1cb900:
    // 0x1cb900: 0x45010019  bc1t        . + 4 + (0x19 << 2)
label_1cb904:
    if (ctx->pc == 0x1CB904u) {
        ctx->pc = 0x1CB908u;
        goto label_1cb908;
    }
    ctx->pc = 0x1CB900u;
    {
        const bool branch_taken_0x1cb900 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb900) {
            ctx->pc = 0x1CB968u;
            goto label_1cb968;
        }
    }
    ctx->pc = 0x1CB908u;
label_1cb908:
    // 0x1cb908: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x1cb908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb90c:
    // 0x1cb90c: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x1cb90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
label_1cb910:
    // 0x1cb910: 0xc6001290  lwc1        $f0, 0x1290($s0)
    ctx->pc = 0x1cb910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb914:
    // 0x1cb914: 0xe6001b54  swc1        $f0, 0x1B54($s0)
    ctx->pc = 0x1cb914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6996), bits); }
label_1cb918:
    // 0x1cb918: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x1cb918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb91c:
    // 0x1cb91c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cb91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cb920:
    // 0x1cb920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb924:
    // 0x1cb924: 0x0  nop
    ctx->pc = 0x1cb924u;
    // NOP
label_1cb928:
    // 0x1cb928: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cb928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cb92c:
    // 0x1cb92c: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x1cb92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
label_1cb930:
    // 0x1cb930: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x1cb930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb934:
    // 0x1cb934: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1cb934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1cb938:
    // 0x1cb938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb93c:
    // 0x1cb93c: 0x0  nop
    ctx->pc = 0x1cb93cu;
    // NOP
label_1cb940:
    // 0x1cb940: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cb940u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cb944:
    // 0x1cb944: 0x0  nop
    ctx->pc = 0x1cb944u;
    // NOP
label_1cb948:
    // 0x1cb948: 0x45010017  bc1t        . + 4 + (0x17 << 2)
label_1cb94c:
    if (ctx->pc == 0x1CB94Cu) {
        ctx->pc = 0x1CB950u;
        goto label_1cb950;
    }
    ctx->pc = 0x1CB948u;
    {
        const bool branch_taken_0x1cb948 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb948) {
            ctx->pc = 0x1CB9A8u;
            goto label_1cb9a8;
        }
    }
    ctx->pc = 0x1CB950u;
label_1cb950:
    // 0x1cb950: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1cb950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1cb954:
    // 0x1cb954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb958:
    // 0x1cb958: 0x0  nop
    ctx->pc = 0x1cb958u;
    // NOP
label_1cb95c:
    // 0x1cb95c: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x1cb95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
label_1cb960:
    // 0x1cb960: 0x10000011  b           . + 4 + (0x11 << 2)
label_1cb964:
    if (ctx->pc == 0x1CB964u) {
        ctx->pc = 0x1CB968u;
        goto label_1cb968;
    }
    ctx->pc = 0x1CB960u;
    {
        const bool branch_taken_0x1cb960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb960) {
            ctx->pc = 0x1CB9A8u;
            goto label_1cb9a8;
        }
    }
    ctx->pc = 0x1CB968u;
label_1cb968:
    // 0x1cb968: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x1cb968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb96c:
    // 0x1cb96c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cb96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cb970:
    // 0x1cb970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb974:
    // 0x1cb974: 0x0  nop
    ctx->pc = 0x1cb974u;
    // NOP
label_1cb978:
    // 0x1cb978: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cb978u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cb97c:
    // 0x1cb97c: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x1cb97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
label_1cb980:
    // 0x1cb980: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x1cb980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb984:
    // 0x1cb984: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb984u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb988:
    // 0x1cb988: 0x0  nop
    ctx->pc = 0x1cb988u;
    // NOP
label_1cb98c:
    // 0x1cb98c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cb98cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cb990:
    // 0x1cb990: 0x0  nop
    ctx->pc = 0x1cb990u;
    // NOP
label_1cb994:
    // 0x1cb994: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1cb998:
    if (ctx->pc == 0x1CB998u) {
        ctx->pc = 0x1CB99Cu;
        goto label_1cb99c;
    }
    ctx->pc = 0x1CB994u;
    {
        const bool branch_taken_0x1cb994 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb994) {
            ctx->pc = 0x1CB9A8u;
            goto label_1cb9a8;
        }
    }
    ctx->pc = 0x1CB99Cu;
label_1cb99c:
    // 0x1cb99c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb99cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb9a0:
    // 0x1cb9a0: 0x0  nop
    ctx->pc = 0x1cb9a0u;
    // NOP
label_1cb9a4:
    // 0x1cb9a4: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x1cb9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
label_1cb9a8:
    // 0x1cb9a8: 0x8e041b60  lw          $a0, 0x1B60($s0)
    ctx->pc = 0x1cb9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7008)));
label_1cb9ac:
    // 0x1cb9ac: 0x2c81000b  sltiu       $at, $a0, 0xB
    ctx->pc = 0x1cb9acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_1cb9b0:
    // 0x1cb9b0: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_1cb9b4:
    if (ctx->pc == 0x1CB9B4u) {
        ctx->pc = 0x1CB9B8u;
        goto label_1cb9b8;
    }
    ctx->pc = 0x1CB9B0u;
    {
        const bool branch_taken_0x1cb9b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb9b0) {
            ctx->pc = 0x1CB9F8u;
            goto label_1cb9f8;
        }
    }
    ctx->pc = 0x1CB9B8u;
label_1cb9b8:
    // 0x1cb9b8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1cb9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_1cb9bc:
    // 0x1cb9bc: 0x2443f480  addiu       $v1, $v0, -0xB80
    ctx->pc = 0x1cb9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964352));
label_1cb9c0:
    // 0x1cb9c0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1cb9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1cb9c4:
    // 0x1cb9c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb9c8:
    // 0x1cb9c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cb9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cb9cc:
    // 0x1cb9cc: 0x400008  jr          $v0
label_1cb9d0:
    if (ctx->pc == 0x1CB9D0u) {
        ctx->pc = 0x1CB9D4u;
        goto label_1cb9d4;
    }
    ctx->pc = 0x1CB9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB9CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CB9D4u;
label_1cb9d4:
    // 0x1cb9d4: 0x8e0213e8  lw          $v0, 0x13E8($s0)
    ctx->pc = 0x1cb9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
label_1cb9d8:
    // 0x1cb9d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1cb9dc:
    if (ctx->pc == 0x1CB9DCu) {
        ctx->pc = 0x1CB9E0u;
        goto label_1cb9e0;
    }
    ctx->pc = 0x1CB9D8u;
    {
        const bool branch_taken_0x1cb9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb9d8) {
            ctx->pc = 0x1CB9F8u;
            goto label_1cb9f8;
        }
    }
    ctx->pc = 0x1CB9E0u;
label_1cb9e0:
    // 0x1cb9e0: 0x8e0213e8  lw          $v0, 0x13E8($s0)
    ctx->pc = 0x1cb9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
label_1cb9e4:
    // 0x1cb9e4: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x1cb9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_1cb9e8:
    // 0x1cb9e8: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1cb9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_1cb9ec:
    // 0x1cb9ec: 0xc05ccfc  jal         func_1733F0
label_1cb9f0:
    if (ctx->pc == 0x1CB9F0u) {
        ctx->pc = 0x1CB9F4u;
        goto label_1cb9f4;
    }
    ctx->pc = 0x1CB9ECu;
    SET_GPR_U32(ctx, 31, 0x1CB9F4u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1CB9ECu, 0x1CB9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB9F4u;
label_1cb9f4:
    // 0x1cb9f4: 0xe6001b54  swc1        $f0, 0x1B54($s0)
    ctx->pc = 0x1cb9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6996), bits); }
label_1cb9f8:
    // 0x1cb9f8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1cb9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_1cb9fc:
    // 0x1cb9fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cb9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1cba00:
    // 0x1cba00: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1cba00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1cba04:
    // 0x1cba04: 0xc60c1b54  lwc1        $f12, 0x1B54($s0)
    ctx->pc = 0x1cba04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cba08:
    // 0x1cba08: 0xc60d00d4  lwc1        $f13, 0xD4($s0)
    ctx->pc = 0x1cba08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1cba0c:
    // 0x1cba0c: 0xc058f50  jal         func_163D40
label_1cba10:
    if (ctx->pc == 0x1CBA10u) {
        ctx->pc = 0x1CBA14u;
        goto label_1cba14;
    }
    ctx->pc = 0x1CBA0Cu;
    SET_GPR_U32(ctx, 31, 0x1CBA14u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CBA0Cu, 0x1CBA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBA14u;
label_1cba14:
    // 0x1cba14: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1cba14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1cba18:
    // 0x1cba18: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1cba18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cba1c:
    // 0x1cba1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cba1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cba20:
    // 0x1cba20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cba20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cba24:
    // 0x1cba24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cba24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cba28:
    // 0x1cba28: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1cba28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1cba2c:
    // 0x1cba2c: 0x3e00008  jr          $ra
label_1cba30:
    if (ctx->pc == 0x1CBA30u) {
        ctx->pc = 0x1CBA34u;
        goto label_fallthrough_0x1cba2c;
    }
    ctx->pc = 0x1CBA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cba2c:
    ctx->pc = 0x1CBA34u;
}
