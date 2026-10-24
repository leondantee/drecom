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

// Function: entry_00192ba8
// Address: 0x192ba8 - 0x192c50
void entry_00192ba8_0x192ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192ba8_0x192ba8");
#endif

    switch (ctx->pc) {
        case 0x192bc4u: goto label_192bc4;
        case 0x192c00u: goto label_192c00;
        default: break;
    }

    ctx->pc = 0x192ba8u;

    // 0x192ba8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x192ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192bac: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x192bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x192bb0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x192bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192bb4: 0x2c23021  addu        $a2, $s6, $v0
    ctx->pc = 0x192bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x192bb8: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x192bb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x192bbc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x192BBCu;
    SET_GPR_U32(ctx, 31, 0x192BC4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x192BC4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x192BC4u) { return; }
    ctx->pc = 0x192BC4u;
label_192bc4:
    // 0x192bc4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x192bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192bc8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x192bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x192bcc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x192bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192bd0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x192bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x192bd4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x192bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x192bd8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x192bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x192bdc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x192bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192be0: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x192be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x192be4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x192be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192be8: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x192be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x192bec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x192becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x192bf0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x192bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x192bf4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x192bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x192bf8: 0xc040c60  jal         func_103180
    ctx->pc = 0x192BF8u;
    SET_GPR_U32(ctx, 31, 0x192C00u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x192C00u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x192C00u) { return; }
    ctx->pc = 0x192C00u;
label_192c00:
    // 0x192c00: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x192c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x192c04: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x192c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x192c08: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x192c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192c0c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x192c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x192c10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192c10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192c14: 0x0  nop
    ctx->pc = 0x192c14u;
    // NOP
    // 0x192c18: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x192c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192c1c: 0x0  nop
    ctx->pc = 0x192c1cu;
    // NOP
    // 0x192c20: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x192C20u;
    {
        const bool branch_taken_0x192c20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192c20) {
            ctx->pc = 0x192C50u;
            return;
        }
    }
    ctx->pc = 0x192C28u;
    // 0x192c28: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x192c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x192c2c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x192c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x192c30: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x192c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192c34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x192c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x192c38: 0xc420fd70  lwc1        $f0, -0x290($at)
    ctx->pc = 0x192c38u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192c3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x192c3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192c40: 0x0  nop
    ctx->pc = 0x192c40u;
    // NOP
    // 0x192c44: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x192C44u;
    {
        const bool branch_taken_0x192c44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192c44) {
            ctx->pc = 0x192C58u;
            return;
        }
    }
    ctx->pc = 0x192C4Cu;
    // 0x192c4c: 0x0  nop
    ctx->pc = 0x192c4cu;
    // NOP
    ctx->pc = 0x192c50u;
}
