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

// Function: srp_01_init00
// Address: 0x1fbce0 - 0x1fc148
void srp_01_init00_0x1fbce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_01_init00_0x1fbce0");
#endif

    switch (ctx->pc) {
        case 0x1fbd28u: goto label_1fbd28;
        case 0x1fbea0u: goto label_1fbea0;
        case 0x1fbec4u: goto label_1fbec4;
        case 0x1fbee8u: goto label_1fbee8;
        case 0x1fbf2cu: goto label_1fbf2c;
        case 0x1fbf7cu: goto label_1fbf7c;
        case 0x1fbf9cu: goto label_1fbf9c;
        case 0x1fbfc4u: goto label_1fbfc4;
        case 0x1fbff4u: goto label_1fbff4;
        case 0x1fc04cu: goto label_1fc04c;
        case 0x1fc0d4u: goto label_1fc0d4;
        default: break;
    }

    ctx->pc = 0x1fbce0u;

    // 0x1fbce0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1fbce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1fbce4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x1fbce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1fbce8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fbce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fbcec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fbcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fbcf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fbcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fbcf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fbcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fbcf8: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x1fbcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x1fbcfc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbd00: 0x8c520ac0  lw          $s2, 0xAC0($v0)
    ctx->pc = 0x1fbd00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2752)));
    // 0x1fbd04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fbd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbd08: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbd0c: 0xac430358  sw          $v1, 0x358($v0)
    ctx->pc = 0x1fbd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 856), GPR_U32(ctx, 3));
    // 0x1fbd10: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbd14: 0x8c420ac4  lw          $v0, 0xAC4($v0)
    ctx->pc = 0x1fbd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2756)));
    // 0x1fbd18: 0x8c530010  lw          $s3, 0x10($v0)
    ctx->pc = 0x1fbd18u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1fbd1c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fbd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbd20: 0xc0c9930  jal         func_3264C0
    ctx->pc = 0x1FBD20u;
    SET_GPR_U32(ctx, 31, 0x1FBD28u);
    ctx->pc = 0x3264C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3264C0u, 0x1FBD20u, 0x1FBD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBD28u;
label_1fbd28:
    // 0x1fbd28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbd2c: 0x8c430354  lw          $v1, 0x354($v0)
    ctx->pc = 0x1fbd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 852)));
    // 0x1fbd30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fbd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbd34: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBD34u;
    {
        const bool branch_taken_0x1fbd34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fbd34) {
            ctx->pc = 0x1FBD44u;
            goto label_1fbd44;
        }
    }
    ctx->pc = 0x1FBD3Cu;
    // 0x1fbd3c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1FBD3Cu;
    {
        const bool branch_taken_0x1fbd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbd3c) {
            ctx->pc = 0x1FBE98u;
            goto label_1fbe98;
        }
    }
    ctx->pc = 0x1FBD44u;
label_1fbd44:
    // 0x1fbd44: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1fbd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1fbd48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbd48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbd4c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbd50: 0xe4400294  swc1        $f0, 0x294($v0)
    ctx->pc = 0x1fbd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 660), bits); }
    // 0x1fbd54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fbd54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbd58: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbd5c: 0xe440029c  swc1        $f0, 0x29C($v0)
    ctx->pc = 0x1fbd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 668), bits); }
    // 0x1fbd60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbd64: 0xac400290  sw          $zero, 0x290($v0)
    ctx->pc = 0x1fbd64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 656), GPR_U32(ctx, 0));
    // 0x1fbd68: 0x3c023f7e  lui         $v0, 0x3F7E
    ctx->pc = 0x1fbd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16254 << 16));
    // 0x1fbd6c: 0x3442b852  ori         $v0, $v0, 0xB852
    ctx->pc = 0x1fbd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47186);
    // 0x1fbd70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbd70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbd74: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbd78: 0xe4400298  swc1        $f0, 0x298($v0)
    ctx->pc = 0x1fbd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 664), bits); }
    // 0x1fbd7c: 0x3c023f82  lui         $v0, 0x3F82
    ctx->pc = 0x1fbd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16258 << 16));
    // 0x1fbd80: 0x34428f5c  ori         $v0, $v0, 0x8F5C
    ctx->pc = 0x1fbd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36700);
    // 0x1fbd84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbd84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbd88: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbd8c: 0xe44002a0  swc1        $f0, 0x2A0($v0)
    ctx->pc = 0x1fbd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 672), bits); }
    // 0x1fbd90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fbd90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbd94: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbd98: 0xe4400270  swc1        $f0, 0x270($v0)
    ctx->pc = 0x1fbd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 624), bits); }
    // 0x1fbd9c: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x1fbd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x1fbda0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbda0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbda4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbda8: 0xe4400274  swc1        $f0, 0x274($v0)
    ctx->pc = 0x1fbda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1fbdac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fbdacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbdb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbdb4: 0xe4400278  swc1        $f0, 0x278($v0)
    ctx->pc = 0x1fbdb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1fbdb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fbdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fbdbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbdbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbdc0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbdc4: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1fbdc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1fbdc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fbdc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbdcc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbdd0: 0xe4400280  swc1        $f0, 0x280($v0)
    ctx->pc = 0x1fbdd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 640), bits); }
    // 0x1fbdd4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1fbdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1fbdd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbdd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbddc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbde0: 0xe4400284  swc1        $f0, 0x284($v0)
    ctx->pc = 0x1fbde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 644), bits); }
    // 0x1fbde4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fbde4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbde8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbdec: 0xe4400288  swc1        $f0, 0x288($v0)
    ctx->pc = 0x1fbdecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 648), bits); }
    // 0x1fbdf0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fbdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fbdf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbdf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbdf8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbdfc: 0xe440028c  swc1        $f0, 0x28C($v0)
    ctx->pc = 0x1fbdfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 652), bits); }
    // 0x1fbe00: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1fbe00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1fbe04: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbe04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbe08: 0xac4302a4  sw          $v1, 0x2A4($v0)
    ctx->pc = 0x1fbe08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 676), GPR_U32(ctx, 3));
    // 0x1fbe0c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1fbe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1fbe10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbe10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbe14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbe14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbe18: 0xe4400338  swc1        $f0, 0x338($v0)
    ctx->pc = 0x1fbe18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 824), bits); }
    // 0x1fbe1c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1fbe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1fbe20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbe20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbe24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbe28: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x1fbe28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x1fbe2c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1fbe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1fbe30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbe30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbe34: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbe38: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x1fbe38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x1fbe3c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1fbe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1fbe40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbe40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbe44: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbe44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbe48: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x1fbe48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x1fbe4c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1fbe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1fbe50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbe50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbe54: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbe54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbe58: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x1fbe58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x1fbe5c: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x1fbe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x1fbe60: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x1fbe60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x1fbe64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbe64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbe68: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbe6c: 0xe44002e0  swc1        $f0, 0x2E0($v0)
    ctx->pc = 0x1fbe6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 736), bits); }
    // 0x1fbe70: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x1fbe70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x1fbe74: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x1fbe74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x1fbe78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbe78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbe7c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbe80: 0xe44002e4  swc1        $f0, 0x2E4($v0)
    ctx->pc = 0x1fbe80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 740), bits); }
    // 0x1fbe84: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x1fbe84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x1fbe88: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x1fbe88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x1fbe8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbe8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbe90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbe90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbe94: 0xe44002e8  swc1        $f0, 0x2E8($v0)
    ctx->pc = 0x1fbe94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 744), bits); }
label_1fbe98:
    // 0x1fbe98: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FBE98u;
    SET_GPR_U32(ctx, 31, 0x1FBEA0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FBE98u, 0x1FBEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBEA0u;
label_1fbea0:
    // 0x1fbea0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbea4: 0xc4410280  lwc1        $f1, 0x280($v0)
    ctx->pc = 0x1fbea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fbea8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fbea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fbeac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbeb0: 0xc4400270  lwc1        $f0, 0x270($v0)
    ctx->pc = 0x1fbeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fbeb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fbeb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fbeb8: 0xe4400270  swc1        $f0, 0x270($v0)
    ctx->pc = 0x1fbeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 624), bits); }
    // 0x1fbebc: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FBEBCu;
    SET_GPR_U32(ctx, 31, 0x1FBEC4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FBEBCu, 0x1FBEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBEC4u;
label_1fbec4:
    // 0x1fbec4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbec8: 0xc4410284  lwc1        $f1, 0x284($v0)
    ctx->pc = 0x1fbec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fbecc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fbeccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fbed0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbed4: 0xc4400274  lwc1        $f0, 0x274($v0)
    ctx->pc = 0x1fbed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fbed8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fbed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fbedc: 0xe4400274  swc1        $f0, 0x274($v0)
    ctx->pc = 0x1fbedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1fbee0: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FBEE0u;
    SET_GPR_U32(ctx, 31, 0x1FBEE8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FBEE0u, 0x1FBEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBEE8u;
label_1fbee8:
    // 0x1fbee8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbeec: 0xc4410288  lwc1        $f1, 0x288($v0)
    ctx->pc = 0x1fbeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fbef0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fbef0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fbef4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbef8: 0xc4400278  lwc1        $f0, 0x278($v0)
    ctx->pc = 0x1fbef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fbefc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fbefcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fbf00: 0xe4400278  swc1        $f0, 0x278($v0)
    ctx->pc = 0x1fbf00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1fbf04: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbf08: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fbf08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fbf0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fbf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fbf10: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fbf10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fbf14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbf18: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fbf18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbf1c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fbf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fbf20: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1fbf20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbf24: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FBF24u;
    SET_GPR_U32(ctx, 31, 0x1FBF2Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FBF24u, 0x1FBF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBF2Cu;
label_1fbf2c:
    // 0x1fbf2c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbf30: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fbf30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fbf34: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBF34u;
    {
        const bool branch_taken_0x1fbf34 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fbf34) {
            ctx->pc = 0x1FBF50u;
            goto label_1fbf50;
        }
    }
    ctx->pc = 0x1FBF3Cu;
    // 0x1fbf3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbf3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbf40: 0x0  nop
    ctx->pc = 0x1fbf40u;
    // NOP
    // 0x1fbf44: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fbf44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fbf48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FBF48u;
    {
        const bool branch_taken_0x1fbf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbf48) {
            ctx->pc = 0x1FBF6Cu;
            goto label_1fbf6c;
        }
    }
    ctx->pc = 0x1FBF50u;
label_1fbf50:
    // 0x1fbf50: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1fbf50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1fbf54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fbf54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fbf58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fbf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fbf5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fbf5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbf60: 0x0  nop
    ctx->pc = 0x1fbf60u;
    // NOP
    // 0x1fbf64: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fbf64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fbf68: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fbf68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fbf6c:
    // 0x1fbf6c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fbf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fbf70: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fbf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fbf74: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FBF74u;
    SET_GPR_U32(ctx, 31, 0x1FBF7Cu);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FBF7Cu;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FBF7Cu) { return; }
    ctx->pc = 0x1FBF7Cu;
label_1fbf7c:
    // 0x1fbf7c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fbf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fbf80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fbf80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbf84: 0x0  nop
    ctx->pc = 0x1fbf84u;
    // NOP
    // 0x1fbf88: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1fbf88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1fbf8c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1fbf8cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fbf90: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1fbf90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbf94: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1FBF94u;
    {
        const bool branch_taken_0x1fbf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbf94) {
            ctx->pc = 0x1FC058u;
            goto label_1fc058;
        }
    }
    ctx->pc = 0x1FBF9Cu;
label_1fbf9c:
    // 0x1fbf9c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fbf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fbfa0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbfa4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fbfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbfa8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1fbfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fbfac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fbfacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fbfb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbfb4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fbfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbfb8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fbfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fbfbc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FBFBCu;
    SET_GPR_U32(ctx, 31, 0x1FBFC4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FBFBCu, 0x1FBFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBFC4u;
label_1fbfc4:
    // 0x1fbfc4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbfc8: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fbfc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fbfcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fbfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fbfd0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fbfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fbfd4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbfd8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fbfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbfdc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fbfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fbfe0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbfe4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fbfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbfe8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fbfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fbfec: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FBFECu;
    SET_GPR_U32(ctx, 31, 0x1FBFF4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FBFECu, 0x1FBFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBFF4u;
label_1fbff4:
    // 0x1fbff4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fbff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbff8: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fbff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fbffc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fbffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc000: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fc000u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fc004: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC004u;
    {
        const bool branch_taken_0x1fc004 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fc004) {
            ctx->pc = 0x1FC020u;
            goto label_1fc020;
        }
    }
    ctx->pc = 0x1FC00Cu;
    // 0x1fc00c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc00cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc010: 0x0  nop
    ctx->pc = 0x1fc010u;
    // NOP
    // 0x1fc014: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fc014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fc018: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC018u;
    {
        const bool branch_taken_0x1fc018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc018) {
            ctx->pc = 0x1FC03Cu;
            goto label_1fc03c;
        }
    }
    ctx->pc = 0x1FC020u;
label_1fc020:
    // 0x1fc020: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1fc020u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1fc024: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fc024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fc028: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fc028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fc02c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fc02cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc030: 0x0  nop
    ctx->pc = 0x1fc030u;
    // NOP
    // 0x1fc034: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fc034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fc038: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fc038u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fc03c:
    // 0x1fc03c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fc03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fc040: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fc040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fc044: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FC044u;
    SET_GPR_U32(ctx, 31, 0x1FC04Cu);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FC04Cu;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC04Cu) { return; }
    ctx->pc = 0x1FC04Cu;
label_1fc04c:
    // 0x1fc04c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fc04cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fc050: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fc050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fc054: 0x0  nop
    ctx->pc = 0x1fc054u;
    // NOP
label_1fc058:
    // 0x1fc058: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fc058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fc05c: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fc05cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fc060: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fc060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc064: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fc064u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fc068: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1FC068u;
    {
        const bool branch_taken_0x1fc068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc068) {
            ctx->pc = 0x1FBF9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fbf9c;
        }
    }
    ctx->pc = 0x1FC070u;
    // 0x1fc070: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fc070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fc074: 0x90640347  lbu         $a0, 0x347($v1)
    ctx->pc = 0x1fc074u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x1fc078: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fc078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fc07c: 0xa0640348  sb          $a0, 0x348($v1)
    ctx->pc = 0x1fc07cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 840), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fc080: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fc080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fc084: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fc084u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fc088: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fc088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc08c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fc08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fc090: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fc090u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fc094: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fc094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc098: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fc098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fc09c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fc09cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc0a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fc0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fc0a4: 0xa0640346  sb          $a0, 0x346($v1)
    ctx->pc = 0x1fc0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fc0a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fc0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fc0ac: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fc0acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fc0b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fc0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc0b4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1fc0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fc0b8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1fc0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1fc0bc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fc0bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc0c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fc0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fc0c4: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x1fc0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fc0c8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fc0c8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fc0cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FC0CCu;
    {
        const bool branch_taken_0x1fc0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc0cc) {
            ctx->pc = 0x1FC110u;
            goto label_1fc110;
        }
    }
    ctx->pc = 0x1FC0D4u;
label_1fc0d4:
    // 0x1fc0d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fc0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fc0d8: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fc0d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fc0dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fc0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc0e0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fc0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fc0e4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fc0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fc0e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fc0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fc0ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fc0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fc0f0: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fc0f0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fc0f4: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fc0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fc0f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fc0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fc0fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fc0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fc100: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fc100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fc104: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fc104u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fc108: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fc108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fc10c: 0x0  nop
    ctx->pc = 0x1fc10cu;
    // NOP
label_1fc110:
    // 0x1fc110: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fc110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fc114: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fc114u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fc118: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fc118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc11c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fc11cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fc120: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FC120u;
    {
        const bool branch_taken_0x1fc120 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc120) {
            ctx->pc = 0x1FC0D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc0d4;
        }
    }
    ctx->pc = 0x1FC128u;
    // 0x1fc128: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x1fc128u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fc12c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fc12cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc130: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fc130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fc134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc13c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1fc13cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fc140: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC148u;
}
