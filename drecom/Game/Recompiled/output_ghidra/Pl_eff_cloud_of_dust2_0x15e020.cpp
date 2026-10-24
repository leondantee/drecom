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

// Function: Pl_eff_cloud_of_dust2
// Address: 0x15e020 - 0x15e408
void Pl_eff_cloud_of_dust2_0x15e020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_eff_cloud_of_dust2_0x15e020");
#endif

    switch (ctx->pc) {
        case 0x15e040u: goto label_15e040;
        case 0x15e10cu: goto label_15e10c;
        case 0x15e1acu: goto label_15e1ac;
        case 0x15e1b4u: goto label_15e1b4;
        case 0x15e27cu: goto label_15e27c;
        case 0x15e284u: goto label_15e284;
        case 0x15e324u: goto label_15e324;
        case 0x15e32cu: goto label_15e32c;
        case 0x15e3f4u: goto label_15e3f4;
        default: break;
    }

    ctx->pc = 0x15e020u;

    // 0x15e020: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15e020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15e024: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x15e024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x15e028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15e02c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15e030: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x15e030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x15e034: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15e034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15e038: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x15E038u;
    SET_GPR_U32(ctx, 31, 0x15E040u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x15E038u, 0x15E040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E040u;
label_15e040:
    // 0x15e040: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15e040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15e044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e048: 0x0  nop
    ctx->pc = 0x15e048u;
    // NOP
    // 0x15e04c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x15e04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x15e050: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15e050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15e054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e058: 0x0  nop
    ctx->pc = 0x15e058u;
    // NOP
    // 0x15e05c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x15e05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x15e060: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15e060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15e064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e068: 0x0  nop
    ctx->pc = 0x15e068u;
    // NOP
    // 0x15e06c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x15e06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x15e070: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15e070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15e074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e078: 0x0  nop
    ctx->pc = 0x15e078u;
    // NOP
    // 0x15e07c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x15e07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x15e080: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x15e080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x15e084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e088: 0x0  nop
    ctx->pc = 0x15e088u;
    // NOP
    // 0x15e08c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x15e08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15e090: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x15e090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x15e094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e098: 0x0  nop
    ctx->pc = 0x15e098u;
    // NOP
    // 0x15e09c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x15e09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x15e0a0: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x15e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x15e0a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e0a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e0a8: 0x0  nop
    ctx->pc = 0x15e0a8u;
    // NOP
    // 0x15e0ac: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x15e0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15e0b0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x15e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x15e0b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e0b8: 0x0  nop
    ctx->pc = 0x15e0b8u;
    // NOP
    // 0x15e0bc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x15e0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x15e0c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15e0c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e0c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e0c8: 0x0  nop
    ctx->pc = 0x15e0c8u;
    // NOP
    // 0x15e0cc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x15e0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x15e0d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15e0d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e0d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e0d8: 0x0  nop
    ctx->pc = 0x15e0d8u;
    // NOP
    // 0x15e0dc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x15e0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x15e0e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15e0e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e0e8: 0x0  nop
    ctx->pc = 0x15e0e8u;
    // NOP
    // 0x15e0ec: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x15e0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x15e0f0: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x15e0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x15e0f4: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x15e0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x15e0f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e0f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e0fc: 0x0  nop
    ctx->pc = 0x15e0fcu;
    // NOP
    // 0x15e100: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x15e100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x15e104: 0xc067694  jal         func_19DA50
    ctx->pc = 0x15E104u;
    SET_GPR_U32(ctx, 31, 0x15E10Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x15E104u, 0x15E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E10Cu;
label_15e10c:
    // 0x15e10c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15e10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15e110: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x15e110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x15e114: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15e114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e118: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15E118u;
    {
        const bool branch_taken_0x15e118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e118) {
            ctx->pc = 0x15E190u;
            goto label_15e190;
        }
    }
    ctx->pc = 0x15E120u;
    // 0x15e120: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15e120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e124: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15E124u;
    {
        const bool branch_taken_0x15e124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e124) {
            ctx->pc = 0x15E178u;
            goto label_15e178;
        }
    }
    ctx->pc = 0x15E12Cu;
    // 0x15e12c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e130: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15E130u;
    {
        const bool branch_taken_0x15e130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e130) {
            ctx->pc = 0x15E160u;
            goto label_15e160;
        }
    }
    ctx->pc = 0x15E138u;
    // 0x15e138: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E138u;
    {
        const bool branch_taken_0x15e138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e138) {
            ctx->pc = 0x15E148u;
            goto label_15e148;
        }
    }
    ctx->pc = 0x15E140u;
    // 0x15e140: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15E140u;
    {
        const bool branch_taken_0x15e140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e140) {
            ctx->pc = 0x15E1A0u;
            goto label_15e1a0;
        }
    }
    ctx->pc = 0x15E148u;
label_15e148:
    // 0x15e148: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x15e148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x15e14c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e14cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e150: 0x0  nop
    ctx->pc = 0x15e150u;
    // NOP
    // 0x15e154: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15e154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x15e158: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15E158u;
    {
        const bool branch_taken_0x15e158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e158) {
            ctx->pc = 0x15E1A0u;
            goto label_15e1a0;
        }
    }
    ctx->pc = 0x15E160u;
label_15e160:
    // 0x15e160: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x15e160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x15e164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e168: 0x0  nop
    ctx->pc = 0x15e168u;
    // NOP
    // 0x15e16c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15e16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x15e170: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15E170u;
    {
        const bool branch_taken_0x15e170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e170) {
            ctx->pc = 0x15E1A0u;
            goto label_15e1a0;
        }
    }
    ctx->pc = 0x15E178u;
label_15e178:
    // 0x15e178: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x15e178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x15e17c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e180: 0x0  nop
    ctx->pc = 0x15e180u;
    // NOP
    // 0x15e184: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15e184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x15e188: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15E188u;
    {
        const bool branch_taken_0x15e188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e188) {
            ctx->pc = 0x15E1A0u;
            goto label_15e1a0;
        }
    }
    ctx->pc = 0x15E190u;
label_15e190:
    // 0x15e190: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x15e190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x15e194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e198: 0x0  nop
    ctx->pc = 0x15e198u;
    // NOP
    // 0x15e19c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15e19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_15e1a0:
    // 0x15e1a0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15e1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15e1a4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x15E1A4u;
    SET_GPR_U32(ctx, 31, 0x15E1ACu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x15E1A4u, 0x15E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E1ACu;
label_15e1ac:
    // 0x15e1ac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x15E1ACu;
    SET_GPR_U32(ctx, 31, 0x15E1B4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x15E1ACu, 0x15E1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E1B4u;
label_15e1b4:
    // 0x15e1b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15e1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15e1b8: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x15e1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x15e1bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e1c0: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15E1C0u;
    {
        const bool branch_taken_0x15e1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e1c0) {
            ctx->pc = 0x15E238u;
            goto label_15e238;
        }
    }
    ctx->pc = 0x15E1C8u;
    // 0x15e1c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e1cc: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15E1CCu;
    {
        const bool branch_taken_0x15e1cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e1cc) {
            ctx->pc = 0x15E220u;
            goto label_15e220;
        }
    }
    ctx->pc = 0x15E1D4u;
    // 0x15e1d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e1d8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15E1D8u;
    {
        const bool branch_taken_0x15e1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e1d8) {
            ctx->pc = 0x15E208u;
            goto label_15e208;
        }
    }
    ctx->pc = 0x15E1E0u;
    // 0x15e1e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E1E0u;
    {
        const bool branch_taken_0x15e1e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e1e0) {
            ctx->pc = 0x15E1F0u;
            goto label_15e1f0;
        }
    }
    ctx->pc = 0x15E1E8u;
    // 0x15e1e8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15E1E8u;
    {
        const bool branch_taken_0x15e1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e1e8) {
            ctx->pc = 0x15E248u;
            goto label_15e248;
        }
    }
    ctx->pc = 0x15E1F0u;
label_15e1f0:
    // 0x15e1f0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x15e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x15e1f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e1f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e1f8: 0x0  nop
    ctx->pc = 0x15e1f8u;
    // NOP
    // 0x15e1fc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x15e1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15e200: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15E200u;
    {
        const bool branch_taken_0x15e200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e200) {
            ctx->pc = 0x15E248u;
            goto label_15e248;
        }
    }
    ctx->pc = 0x15E208u;
label_15e208:
    // 0x15e208: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x15e208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x15e20c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e20cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e210: 0x0  nop
    ctx->pc = 0x15e210u;
    // NOP
    // 0x15e214: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x15e214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15e218: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15E218u;
    {
        const bool branch_taken_0x15e218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e218) {
            ctx->pc = 0x15E248u;
            goto label_15e248;
        }
    }
    ctx->pc = 0x15E220u;
label_15e220:
    // 0x15e220: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x15e220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x15e224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e228: 0x0  nop
    ctx->pc = 0x15e228u;
    // NOP
    // 0x15e22c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15e22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15e230: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15E230u;
    {
        const bool branch_taken_0x15e230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e230) {
            ctx->pc = 0x15E248u;
            goto label_15e248;
        }
    }
    ctx->pc = 0x15E238u;
label_15e238:
    // 0x15e238: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x15e238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x15e23c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e23cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e240: 0x0  nop
    ctx->pc = 0x15e240u;
    // NOP
    // 0x15e244: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15e244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_15e248:
    // 0x15e248: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x15e248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x15e24c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x15e24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x15e250: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15e250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15e254: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15e254u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15e258: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x15e258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x15e25c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x15e25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15e260: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x15e260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15e264: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x15e264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15e268: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x15e268u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15e26c: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x15e26cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15e270: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x15e270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15e274: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x15E274u;
    SET_GPR_U32(ctx, 31, 0x15E27Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x15E274u, 0x15E27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E27Cu;
label_15e27c:
    // 0x15e27c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x15E27Cu;
    SET_GPR_U32(ctx, 31, 0x15E284u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x15E27Cu, 0x15E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E284u;
label_15e284:
    // 0x15e284: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15e284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15e288: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x15e288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x15e28c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e290: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15E290u;
    {
        const bool branch_taken_0x15e290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e290) {
            ctx->pc = 0x15E308u;
            goto label_15e308;
        }
    }
    ctx->pc = 0x15E298u;
    // 0x15e298: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15e298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e29c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15E29Cu;
    {
        const bool branch_taken_0x15e29c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e29c) {
            ctx->pc = 0x15E2F0u;
            goto label_15e2f0;
        }
    }
    ctx->pc = 0x15E2A4u;
    // 0x15e2a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e2a8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15E2A8u;
    {
        const bool branch_taken_0x15e2a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e2a8) {
            ctx->pc = 0x15E2D8u;
            goto label_15e2d8;
        }
    }
    ctx->pc = 0x15E2B0u;
    // 0x15e2b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E2B0u;
    {
        const bool branch_taken_0x15e2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e2b0) {
            ctx->pc = 0x15E2C0u;
            goto label_15e2c0;
        }
    }
    ctx->pc = 0x15E2B8u;
    // 0x15e2b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15E2B8u;
    {
        const bool branch_taken_0x15e2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e2b8) {
            ctx->pc = 0x15E318u;
            goto label_15e318;
        }
    }
    ctx->pc = 0x15E2C0u;
label_15e2c0:
    // 0x15e2c0: 0x3c024302  lui         $v0, 0x4302
    ctx->pc = 0x15e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17154 << 16));
    // 0x15e2c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e2c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e2c8: 0x0  nop
    ctx->pc = 0x15e2c8u;
    // NOP
    // 0x15e2cc: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15e2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x15e2d0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15E2D0u;
    {
        const bool branch_taken_0x15e2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e2d0) {
            ctx->pc = 0x15E318u;
            goto label_15e318;
        }
    }
    ctx->pc = 0x15E2D8u;
label_15e2d8:
    // 0x15e2d8: 0x3c02432a  lui         $v0, 0x432A
    ctx->pc = 0x15e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17194 << 16));
    // 0x15e2dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e2e0: 0x0  nop
    ctx->pc = 0x15e2e0u;
    // NOP
    // 0x15e2e4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15e2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x15e2e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15E2E8u;
    {
        const bool branch_taken_0x15e2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e2e8) {
            ctx->pc = 0x15E318u;
            goto label_15e318;
        }
    }
    ctx->pc = 0x15E2F0u;
label_15e2f0:
    // 0x15e2f0: 0x3c024352  lui         $v0, 0x4352
    ctx->pc = 0x15e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17234 << 16));
    // 0x15e2f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e2f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e2f8: 0x0  nop
    ctx->pc = 0x15e2f8u;
    // NOP
    // 0x15e2fc: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15e2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x15e300: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15E300u;
    {
        const bool branch_taken_0x15e300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e300) {
            ctx->pc = 0x15E318u;
            goto label_15e318;
        }
    }
    ctx->pc = 0x15E308u;
label_15e308:
    // 0x15e308: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15e308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15e30c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e30cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e310: 0x0  nop
    ctx->pc = 0x15e310u;
    // NOP
    // 0x15e314: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15e314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_15e318:
    // 0x15e318: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15e318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15e31c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x15E31Cu;
    SET_GPR_U32(ctx, 31, 0x15E324u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x15E31Cu, 0x15E324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E324u;
label_15e324:
    // 0x15e324: 0xc067694  jal         func_19DA50
    ctx->pc = 0x15E324u;
    SET_GPR_U32(ctx, 31, 0x15E32Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x15E324u, 0x15E32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E32Cu;
label_15e32c:
    // 0x15e32c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15e32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15e330: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x15e330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x15e334: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15e334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e338: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15E338u;
    {
        const bool branch_taken_0x15e338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e338) {
            ctx->pc = 0x15E3B0u;
            goto label_15e3b0;
        }
    }
    ctx->pc = 0x15E340u;
    // 0x15e340: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15e340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e344: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15E344u;
    {
        const bool branch_taken_0x15e344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e344) {
            ctx->pc = 0x15E398u;
            goto label_15e398;
        }
    }
    ctx->pc = 0x15E34Cu;
    // 0x15e34c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e350: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15E350u;
    {
        const bool branch_taken_0x15e350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e350) {
            ctx->pc = 0x15E380u;
            goto label_15e380;
        }
    }
    ctx->pc = 0x15E358u;
    // 0x15e358: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E358u;
    {
        const bool branch_taken_0x15e358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e358) {
            ctx->pc = 0x15E368u;
            goto label_15e368;
        }
    }
    ctx->pc = 0x15E360u;
    // 0x15e360: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15E360u;
    {
        const bool branch_taken_0x15e360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e360) {
            ctx->pc = 0x15E3C0u;
            goto label_15e3c0;
        }
    }
    ctx->pc = 0x15E368u;
label_15e368:
    // 0x15e368: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x15e368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x15e36c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e370: 0x0  nop
    ctx->pc = 0x15e370u;
    // NOP
    // 0x15e374: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x15e374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15e378: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15E378u;
    {
        const bool branch_taken_0x15e378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e378) {
            ctx->pc = 0x15E3C0u;
            goto label_15e3c0;
        }
    }
    ctx->pc = 0x15E380u;
label_15e380:
    // 0x15e380: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x15e380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x15e384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e388: 0x0  nop
    ctx->pc = 0x15e388u;
    // NOP
    // 0x15e38c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x15e38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15e390: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15E390u;
    {
        const bool branch_taken_0x15e390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e390) {
            ctx->pc = 0x15E3C0u;
            goto label_15e3c0;
        }
    }
    ctx->pc = 0x15E398u;
label_15e398:
    // 0x15e398: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x15e398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x15e39c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e39cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e3a0: 0x0  nop
    ctx->pc = 0x15e3a0u;
    // NOP
    // 0x15e3a4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15e3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15e3a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15E3A8u;
    {
        const bool branch_taken_0x15e3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e3a8) {
            ctx->pc = 0x15E3C0u;
            goto label_15e3c0;
        }
    }
    ctx->pc = 0x15E3B0u;
label_15e3b0:
    // 0x15e3b0: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x15e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x15e3b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e3b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e3b8: 0x0  nop
    ctx->pc = 0x15e3b8u;
    // NOP
    // 0x15e3bc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15e3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_15e3c0:
    // 0x15e3c0: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x15e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x15e3c4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x15e3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x15e3c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15e3c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15e3cc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15e3ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15e3d0: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x15e3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x15e3d4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x15e3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15e3d8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x15e3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15e3dc: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x15e3dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15e3e0: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x15e3e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15e3e4: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x15e3e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15e3e8: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x15e3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15e3ec: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x15E3ECu;
    SET_GPR_U32(ctx, 31, 0x15E3F4u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x15E3ECu, 0x15E3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E3F4u;
label_15e3f4:
    // 0x15e3f4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15e3f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e3f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e3fc: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x15e3fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15e400: 0x3e00008  jr          $ra
    ctx->pc = 0x15E400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E408u;
}
