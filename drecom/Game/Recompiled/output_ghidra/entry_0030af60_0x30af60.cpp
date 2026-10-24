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

// Function: entry_0030af60
// Address: 0x30af60 - 0x30b014
void entry_0030af60_0x30af60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030af60_0x30af60");
#endif

    switch (ctx->pc) {
        case 0x30af98u: goto label_30af98;
        default: break;
    }

    ctx->pc = 0x30af60u;

    // 0x30af60: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30af60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30af64: 0x8c431338  lw          $v1, 0x1338($v0)
    ctx->pc = 0x30af64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x30af68: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x30af68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x30af6c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30af6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30af70: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x30AF70u;
    {
        const bool branch_taken_0x30af70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30af70) {
            ctx->pc = 0x30B014u;
            return;
        }
    }
    ctx->pc = 0x30AF78u;
    // 0x30af78: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30af78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30af7c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x30af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x30af80: 0x24530af0  addiu       $s3, $v0, 0xAF0
    ctx->pc = 0x30af80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2800));
    // 0x30af84: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30af84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30af88: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x30af88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x30af8c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x30af8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x30af90: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x30AF90u;
    SET_GPR_U32(ctx, 31, 0x30AF98u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x30AF90u, 0x30AF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF98u;
label_30af98:
    // 0x30af98: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x30af98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x30af9c: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x30af9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30afa0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x30afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x30afa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30afa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30afa8: 0x0  nop
    ctx->pc = 0x30afa8u;
    // NOP
    // 0x30afac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x30afacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30afb0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x30afb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x30afb4: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x30afb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30afb8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x30afb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x30afbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30afbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30afc0: 0x0  nop
    ctx->pc = 0x30afc0u;
    // NOP
    // 0x30afc4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x30afc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30afc8: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x30afc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x30afcc: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x30afccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30afd0: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x30afd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30afd4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30afd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30afd8: 0x0  nop
    ctx->pc = 0x30afd8u;
    // NOP
    // 0x30afdc: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x30AFDCu;
    {
        const bool branch_taken_0x30afdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30afdc) {
            ctx->pc = 0x30B014u;
            return;
        }
    }
    ctx->pc = 0x30AFE4u;
    // 0x30afe4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x30afe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30afe8: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x30afe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x30afec: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30afecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30aff0: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x30aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30aff4: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x30aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x30aff8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30aff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30affc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30affcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30b000: 0xac821338  sw          $v0, 0x1338($a0)
    ctx->pc = 0x30b000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 2));
    // 0x30b004: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30b004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30b008: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x30b008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30b00c: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x30B00Cu;
    SET_GPR_U32(ctx, 31, 0x30B014u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x30B00Cu, 0x30B014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B014u;
}
