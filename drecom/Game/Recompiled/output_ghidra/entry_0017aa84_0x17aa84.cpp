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

// Function: entry_0017aa84
// Address: 0x17aa84 - 0x17ab30
void entry_0017aa84_0x17aa84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017aa84_0x17aa84");
#endif

    switch (ctx->pc) {
        case 0x17aa98u: goto label_17aa98;
        case 0x17aab0u: goto label_17aab0;
        default: break;
    }

    ctx->pc = 0x17aa84u;

    // 0x17aa84: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x17aa84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17aa88: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x17aa88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17aa8c: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x17aa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17aa90: 0xc040c60  jal         func_103180
    ctx->pc = 0x17AA90u;
    SET_GPR_U32(ctx, 31, 0x17AA98u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x17AA98u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17AA98u) { return; }
    ctx->pc = 0x17AA98u;
label_17aa98:
    // 0x17aa98: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x17aa98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17aa9c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x17aa9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x17aaa0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x17aaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17aaa4: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x17aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17aaa8: 0xc040c60  jal         func_103180
    ctx->pc = 0x17AAA8u;
    SET_GPR_U32(ctx, 31, 0x17AAB0u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x17AAB0u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17AAB0u) { return; }
    ctx->pc = 0x17AAB0u;
label_17aab0:
    // 0x17aab0: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x17aab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17aab4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17aab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17aab8: 0x0  nop
    ctx->pc = 0x17aab8u;
    // NOP
    // 0x17aabc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17aabcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17aac0: 0x0  nop
    ctx->pc = 0x17aac0u;
    // NOP
    // 0x17aac4: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x17AAC4u;
    {
        const bool branch_taken_0x17aac4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17aac4) {
            ctx->pc = 0x17AB30u;
            return;
        }
    }
    ctx->pc = 0x17AACCu;
    // 0x17aacc: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x17aaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17aad0: 0x3c04457f  lui         $a0, 0x457F
    ctx->pc = 0x17aad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17791 << 16));
    // 0x17aad4: 0x3482f000  ori         $v0, $a0, 0xF000
    ctx->pc = 0x17aad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61440);
    // 0x17aad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17aad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17aadc: 0x0  nop
    ctx->pc = 0x17aadcu;
    // NOP
    // 0x17aae0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17aae0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17aae4: 0x0  nop
    ctx->pc = 0x17aae4u;
    // NOP
    // 0x17aae8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x17AAE8u;
    {
        const bool branch_taken_0x17aae8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17aae8) {
            ctx->pc = 0x17AB30u;
            return;
        }
    }
    ctx->pc = 0x17AAF0u;
    // 0x17aaf0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x17aaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17aaf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17aaf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17aaf8: 0x0  nop
    ctx->pc = 0x17aaf8u;
    // NOP
    // 0x17aafc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17aafcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ab00: 0x0  nop
    ctx->pc = 0x17ab00u;
    // NOP
    // 0x17ab04: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x17AB04u;
    {
        const bool branch_taken_0x17ab04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ab04) {
            ctx->pc = 0x17AB30u;
            return;
        }
    }
    ctx->pc = 0x17AB0Cu;
    // 0x17ab0c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x17ab0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ab10: 0x3c04457f  lui         $a0, 0x457F
    ctx->pc = 0x17ab10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17791 << 16));
    // 0x17ab14: 0x3482f000  ori         $v0, $a0, 0xF000
    ctx->pc = 0x17ab14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61440);
    // 0x17ab18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ab18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ab1c: 0x0  nop
    ctx->pc = 0x17ab1cu;
    // NOP
    // 0x17ab20: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17ab20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ab24: 0x0  nop
    ctx->pc = 0x17ab24u;
    // NOP
    // 0x17ab28: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x17AB28u;
    {
        const bool branch_taken_0x17ab28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ab28) {
            ctx->pc = 0x17AB3Cu;
            return;
        }
    }
    ctx->pc = 0x17AB30u;
}
