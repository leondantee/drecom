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

// Function: entry_002cccf0
// Address: 0x2cccf0 - 0x2ccddc
void entry_002cccf0_0x2cccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cccf0_0x2cccf0");
#endif

    switch (ctx->pc) {
        case 0x2ccd3cu: goto label_2ccd3c;
        case 0x2ccd74u: goto label_2ccd74;
        case 0x2ccdacu: goto label_2ccdac;
        default: break;
    }

    ctx->pc = 0x2cccf0u;

    // 0x2cccf0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cccf4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2cccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2cccf8: 0x24501db0  addiu       $s0, $v0, 0x1DB0
    ctx->pc = 0x2cccf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7600));
    // 0x2cccfc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccd00: 0x94430006  lhu         $v1, 0x6($v0)
    ctx->pc = 0x2ccd00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2ccd04: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2ccd04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ccd08: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ccd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ccd0c: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x2ccd0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ccd10: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CCD10u;
    {
        const bool branch_taken_0x2ccd10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccd10) {
            ctx->pc = 0x2CCDDCu;
            return;
        }
    }
    ctx->pc = 0x2CCD18u;
    // 0x2ccd18: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccd1c: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2ccd1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2ccd20: 0x34830003  ori         $v1, $a0, 0x3
    ctx->pc = 0x2ccd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x2ccd24: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x2ccd24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ccd28: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2ccd28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2ccd2c: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x2ccd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x2ccd30: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2ccd30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ccd34: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCD34u;
    SET_GPR_U32(ctx, 31, 0x2CCD3Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCD34u, 0x2CCD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCD3Cu;
label_2ccd3c:
    // 0x2ccd3c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2ccd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2ccd40: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ccd40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccd44: 0x0  nop
    ctx->pc = 0x2ccd44u;
    // NOP
    // 0x2ccd48: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccd48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccd4c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2ccd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2ccd50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ccd50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccd54: 0x0  nop
    ctx->pc = 0x2ccd54u;
    // NOP
    // 0x2ccd58: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ccd58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccd5c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2ccd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccd60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccd60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccd64: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ccd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccd68: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2ccd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2ccd6c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCD6Cu;
    SET_GPR_U32(ctx, 31, 0x2CCD74u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCD6Cu, 0x2CCD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCD74u;
label_2ccd74:
    // 0x2ccd74: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x2ccd74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x2ccd78: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ccd78u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccd7c: 0x0  nop
    ctx->pc = 0x2ccd7cu;
    // NOP
    // 0x2ccd80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccd80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccd84: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2ccd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2ccd88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ccd88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccd8c: 0x0  nop
    ctx->pc = 0x2ccd8cu;
    // NOP
    // 0x2ccd90: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ccd90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccd94: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2ccd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccd98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccd98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccd9c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccda0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2ccda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2ccda4: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCDA4u;
    SET_GPR_U32(ctx, 31, 0x2CCDACu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCDA4u, 0x2CCDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCDACu;
label_2ccdac:
    // 0x2ccdac: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x2ccdacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x2ccdb0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ccdb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccdb4: 0x0  nop
    ctx->pc = 0x2ccdb4u;
    // NOP
    // 0x2ccdb8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccdb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccdbc: 0x3c06c316  lui         $a2, 0xC316
    ctx->pc = 0x2ccdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49942 << 16));
    // 0x2ccdc0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2ccdc0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccdc4: 0x0  nop
    ctx->pc = 0x2ccdc4u;
    // NOP
    // 0x2ccdc8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ccdc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccdcc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2ccdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccdd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccdd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccdd4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccdd8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2ccdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x2ccddcu;
}
