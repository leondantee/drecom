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

// Function: entry_0017ab5c
// Address: 0x17ab5c - 0x17abd0
void entry_0017ab5c_0x17ab5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ab5c_0x17ab5c");
#endif

    switch (ctx->pc) {
        case 0x17ab78u: goto label_17ab78;
        case 0x17ab90u: goto label_17ab90;
        default: break;
    }

    ctx->pc = 0x17ab5cu;

    // 0x17ab5c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x17ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x17ab60: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x17ab60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17ab64: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x17ab64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x17ab68: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x17ab68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17ab6c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x17ab6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17ab70: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x17AB70u;
    SET_GPR_U32(ctx, 31, 0x17AB78u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x17AB78u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17AB78u) { return; }
    ctx->pc = 0x17AB78u;
label_17ab78:
    // 0x17ab78: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x17ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x17ab7c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17ab80: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x17ab80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17ab84: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x17ab84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17ab88: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x17AB88u;
    SET_GPR_U32(ctx, 31, 0x17AB90u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x17AB90u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17AB90u) { return; }
    ctx->pc = 0x17AB90u;
label_17ab90:
    // 0x17ab90: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x17ab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ab94: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x17ab94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x17ab98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ab98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ab9c: 0x0  nop
    ctx->pc = 0x17ab9cu;
    // NOP
    // 0x17aba0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17aba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17aba4: 0x0  nop
    ctx->pc = 0x17aba4u;
    // NOP
    // 0x17aba8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x17ABA8u;
    {
        const bool branch_taken_0x17aba8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17aba8) {
            ctx->pc = 0x17ABD0u;
            return;
        }
    }
    ctx->pc = 0x17ABB0u;
    // 0x17abb0: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x17abb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17abb4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x17abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x17abb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17abb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17abbc: 0x0  nop
    ctx->pc = 0x17abbcu;
    // NOP
    // 0x17abc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17abc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17abc4: 0x0  nop
    ctx->pc = 0x17abc4u;
    // NOP
    // 0x17abc8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x17ABC8u;
    {
        const bool branch_taken_0x17abc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17abc8) {
            ctx->pc = 0x17ABDCu;
            return;
        }
    }
    ctx->pc = 0x17ABD0u;
}
