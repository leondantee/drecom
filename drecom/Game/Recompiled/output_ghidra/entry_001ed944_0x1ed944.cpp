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

// Function: entry_001ed944
// Address: 0x1ed944 - 0x1ed9ec
void entry_001ed944_0x1ed944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed944_0x1ed944");
#endif

    ctx->pc = 0x1ed944u;

    // 0x1ed944: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ed944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed948: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ed948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed94c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1ed94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed950: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ed950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed954: 0x0  nop
    ctx->pc = 0x1ed954u;
    // NOP
    // 0x1ed958: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ed958u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed95c: 0x0  nop
    ctx->pc = 0x1ed95cu;
    // NOP
    // 0x1ed960: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1ED960u;
    {
        const bool branch_taken_0x1ed960 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ed960) {
            ctx->pc = 0x1EDA44u;
            return;
        }
    }
    ctx->pc = 0x1ED968u;
    // 0x1ed968: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ed968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed96c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ed96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed970: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1ed970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed974: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ed974u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed978: 0x0  nop
    ctx->pc = 0x1ed978u;
    // NOP
    // 0x1ed97c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ed97cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed980: 0x0  nop
    ctx->pc = 0x1ed980u;
    // NOP
    // 0x1ed984: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1ED984u;
    {
        const bool branch_taken_0x1ed984 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ed984) {
            ctx->pc = 0x1ED9ECu;
            return;
        }
    }
    ctx->pc = 0x1ED98Cu;
    // 0x1ed98c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ed98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed990: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1ed990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed994: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1ed994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed998: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x1ed998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x1ed99c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1ed99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1ed9a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ed9a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed9a4: 0x0  nop
    ctx->pc = 0x1ed9a4u;
    // NOP
    // 0x1ed9a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ed9a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ed9ac: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1ed9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1ed9b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ed9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed9b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ed9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed9b8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1ed9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed9bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ed9bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed9c0: 0x0  nop
    ctx->pc = 0x1ed9c0u;
    // NOP
    // 0x1ed9c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ed9c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed9c8: 0x0  nop
    ctx->pc = 0x1ed9c8u;
    // NOP
    // 0x1ed9cc: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1ED9CCu;
    {
        const bool branch_taken_0x1ed9cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ed9cc) {
            ctx->pc = 0x1EDA44u;
            return;
        }
    }
    ctx->pc = 0x1ED9D4u;
    // 0x1ed9d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ed9d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed9d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ed9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed9dc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ed9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed9e0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1ed9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1ed9e4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1ED9E4u;
    {
        const bool branch_taken_0x1ed9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed9e4) {
            ctx->pc = 0x1EDA44u;
            return;
        }
    }
    ctx->pc = 0x1ED9ECu;
}
