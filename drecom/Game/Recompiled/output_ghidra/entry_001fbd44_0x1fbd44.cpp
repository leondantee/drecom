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

// Function: entry_001fbd44
// Address: 0x1fbd44 - 0x1fbe98
void entry_001fbd44_0x1fbd44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbd44_0x1fbd44");
#endif

    ctx->pc = 0x1fbd44u;

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
    ctx->pc = 0x1fbe98u;
}
