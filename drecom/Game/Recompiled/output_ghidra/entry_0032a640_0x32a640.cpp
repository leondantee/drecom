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

// Function: entry_0032a640
// Address: 0x32a640 - 0x32a6c0
void entry_0032a640_0x32a640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a640_0x32a640");
#endif

    switch (ctx->pc) {
        case 0x32a660u: goto label_32a660;
        default: break;
    }

    ctx->pc = 0x32a640u;

    // 0x32a640: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x32a640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a644: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x32a644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32a648: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x32a648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a64c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x32a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32a650: 0x24641420  addiu       $a0, $v1, 0x1420
    ctx->pc = 0x32a650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5152));
    // 0x32a654: 0x24450420  addiu       $a1, $v0, 0x420
    ctx->pc = 0x32a654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1056));
    // 0x32a658: 0xc040c9e  jal         func_103278
    ctx->pc = 0x32A658u;
    SET_GPR_U32(ctx, 31, 0x32A660u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x32A660u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32A660u) { return; }
    ctx->pc = 0x32A660u;
label_32a660:
    // 0x32a660: 0x2624000b  addiu       $a0, $s1, 0xB
    ctx->pc = 0x32a660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11));
    // 0x32a664: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x32a664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32a668: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32a668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32a66c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x32a66cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32a670: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x32a670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x32a674: 0x2463a310  addiu       $v1, $v1, -0x5CF0
    ctx->pc = 0x32a674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943504));
    // 0x32a678: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x32a678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32a67c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x32a67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a680: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x32a680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a684: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32a684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a688: 0xe4601c20  swc1        $f0, 0x1C20($v1)
    ctx->pc = 0x32a688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7200), bits); }
    // 0x32a68c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x32a68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a690: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x32a690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a694: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32a694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a698: 0xe4601c24  swc1        $f0, 0x1C24($v1)
    ctx->pc = 0x32a698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7204), bits); }
    // 0x32a69c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x32a69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a6a0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x32a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a6a4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a6a8: 0xe4601c28  swc1        $f0, 0x1C28($v1)
    ctx->pc = 0x32a6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7208), bits); }
    // 0x32a6ac: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x32a6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a6b0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x32a6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a6b4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a6b8: 0xe4601c2c  swc1        $f0, 0x1C2C($v1)
    ctx->pc = 0x32a6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7212), bits); }
    // 0x32a6bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32a6bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x32a6c0u;
}
