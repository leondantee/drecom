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

// Function: entry_00245754
// Address: 0x245754 - 0x2457ac
void entry_00245754_0x245754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00245754_0x245754");
#endif

    ctx->pc = 0x245754u;

    // 0x245754: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245758: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x245758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24575c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x24575cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245760: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x245760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x245764: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x245764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x245768: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24576c: 0x0  nop
    ctx->pc = 0x24576cu;
    // NOP
    // 0x245770: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x245770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x245774: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x245774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x245778: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24577c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x24577cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245780: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x245780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245784: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245784u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245788: 0x0  nop
    ctx->pc = 0x245788u;
    // NOP
    // 0x24578c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24578cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245790: 0x0  nop
    ctx->pc = 0x245790u;
    // NOP
    // 0x245794: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x245794u;
    {
        const bool branch_taken_0x245794 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x245794) {
            ctx->pc = 0x2457ACu;
            return;
        }
    }
    ctx->pc = 0x24579Cu;
    // 0x24579c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24579cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2457a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2457a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2457a4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2457a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2457a8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2457a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x2457acu;
}
