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

// Function: entry_001ecc5c
// Address: 0x1ecc5c - 0x1ecd34
void entry_001ecc5c_0x1ecc5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecc5c_0x1ecc5c");
#endif

    switch (ctx->pc) {
        case 0x1eccbcu: goto label_1eccbc;
        case 0x1eccf0u: goto label_1eccf0;
        case 0x1ecd14u: goto label_1ecd14;
        default: break;
    }

    ctx->pc = 0x1ecc5cu;

    // 0x1ecc5c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ecc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ecc60: 0x8c230aa8  lw          $v1, 0xAA8($at)
    ctx->pc = 0x1ecc60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AA8u));
    // 0x1ecc64: 0x286100f1  slti        $at, $v1, 0xF1
    ctx->pc = 0x1ecc64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)241) ? 1 : 0);
    // 0x1ecc68: 0x142000c2  bnez        $at, . + 4 + (0xC2 << 2)
    ctx->pc = 0x1ECC68u;
    {
        const bool branch_taken_0x1ecc68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecc68) {
            ctx->pc = 0x1ECF74u;
            return;
        }
    }
    ctx->pc = 0x1ECC70u;
    // 0x1ecc70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecc74: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x1ecc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ecc78: 0x3c0344e1  lui         $v1, 0x44E1
    ctx->pc = 0x1ecc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17633 << 16));
    // 0x1ecc7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ecc7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecc80: 0x0  nop
    ctx->pc = 0x1ecc80u;
    // NOP
    // 0x1ecc84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ecc84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ecc88: 0x0  nop
    ctx->pc = 0x1ecc88u;
    // NOP
    // 0x1ecc8c: 0x450000b9  bc1f        . + 4 + (0xB9 << 2)
    ctx->pc = 0x1ECC8Cu;
    {
        const bool branch_taken_0x1ecc8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ecc8c) {
            ctx->pc = 0x1ECF74u;
            return;
        }
    }
    ctx->pc = 0x1ECC94u;
    // 0x1ecc94: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1ecc94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecc98: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ecc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecc9c: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x1ecc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
    // 0x1ecca0: 0x34640a92  ori         $a0, $v1, 0xA92
    ctx->pc = 0x1ecca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x1ecca4: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x1ecca4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ecca8: 0x24c40120  addiu       $a0, $a2, 0x120
    ctx->pc = 0x1ecca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x1eccac: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1eccacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eccb0: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x1eccb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x1eccb4: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x1ECCB4u;
    SET_GPR_U32(ctx, 31, 0x1ECCBCu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x1ECCB4u, 0x1ECCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECCBCu;
label_1eccbc:
    // 0x1eccbc: 0x104000ad  beqz        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x1ECCBCu;
    {
        const bool branch_taken_0x1eccbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eccbc) {
            ctx->pc = 0x1ECF74u;
            return;
        }
    }
    ctx->pc = 0x1ECCC4u;
    // 0x1eccc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1eccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eccc8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1eccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ecccc: 0x84830094  lh          $v1, 0x94($a0)
    ctx->pc = 0x1eccccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1eccd0: 0x146000a8  bnez        $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x1ECCD0u;
    {
        const bool branch_taken_0x1eccd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eccd0) {
            ctx->pc = 0x1ECF74u;
            return;
        }
    }
    ctx->pc = 0x1ECCD8u;
    // 0x1eccd8: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x1eccd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1eccdc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1eccdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecce0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1ecce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ecce4: 0xa4850078  sh          $a1, 0x78($a0)
    ctx->pc = 0x1ecce4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 120), (uint16_t)GPR_U32(ctx, 5));
    // 0x1ecce8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ECCE8u;
    SET_GPR_U32(ctx, 31, 0x1ECCF0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ECCE8u, 0x1ECCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECCF0u;
label_1eccf0:
    // 0x1eccf0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1eccf0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eccf4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1eccf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1eccf8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1eccf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1eccfc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1eccfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ecd00: 0x8c230aa0  lw          $v1, 0xAA0($at)
    ctx->pc = 0x1ecd00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AA0u));
    // 0x1ecd04: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1ECD04u;
    {
        const bool branch_taken_0x1ecd04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecd04) {
            ctx->pc = 0x1ECD34u;
            return;
        }
    }
    ctx->pc = 0x1ECD0Cu;
    // 0x1ecd0c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ECD0Cu;
    SET_GPR_U32(ctx, 31, 0x1ECD14u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ECD0Cu, 0x1ECD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECD14u;
label_1ecd14:
    // 0x1ecd14: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ecd14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ecd18: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ecd18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ecd1c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ecd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ecd20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ecd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ecd24: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ecd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ecd28: 0xac230aa0  sw          $v1, 0xAA0($at)
    ctx->pc = 0x1ecd28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AA0u, _value); } while (0);
    // 0x1ecd2c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1ECD2Cu;
    {
        const bool branch_taken_0x1ecd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecd2c) {
            ctx->pc = 0x1ECE3Cu;
            return;
        }
    }
    ctx->pc = 0x1ECD34u;
}
