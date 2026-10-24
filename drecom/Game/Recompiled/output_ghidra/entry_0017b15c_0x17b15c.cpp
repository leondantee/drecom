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

// Function: entry_0017b15c
// Address: 0x17b15c - 0x17b208
void entry_0017b15c_0x17b15c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b15c_0x17b15c");
#endif

    switch (ctx->pc) {
        case 0x17b16cu: goto label_17b16c;
        case 0x17b184u: goto label_17b184;
        case 0x17b190u: goto label_17b190;
        case 0x17b1a0u: goto label_17b1a0;
        case 0x17b1c0u: goto label_17b1c0;
        case 0x17b1dcu: goto label_17b1dc;
        case 0x17b1fcu: goto label_17b1fc;
        default: break;
    }

    ctx->pc = 0x17b15cu;

    // 0x17b15c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x17b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b160: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17b160u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b164: 0xc040bc6  jal         func_102F18
    ctx->pc = 0x17B164u;
    SET_GPR_U32(ctx, 31, 0x17B16Cu);
    ctx->pc = 0x102F18u;
    {
        ctx->pc = 0x17B16Cu;
        ps2_stubs::sceGifPkCloseGifTag(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B16Cu) { return; }
    ctx->pc = 0x17B16Cu;
label_17b16c:
    // 0x17b16c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b170: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x17b170u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17b174: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x17b174u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17b178: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x17b178u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17b17c: 0xc040ba2  jal         func_102E88
    ctx->pc = 0x17B17Cu;
    SET_GPR_U32(ctx, 31, 0x17B184u);
    ctx->pc = 0x102E88u;
    {
        ctx->pc = 0x17B184u;
        ps2_stubs::sceGifPkEnd(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B184u) { return; }
    ctx->pc = 0x17B184u;
label_17b184:
    // 0x17b184: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b188: 0xc040b6e  jal         func_102DB8
    ctx->pc = 0x17B188u;
    SET_GPR_U32(ctx, 31, 0x17B190u);
    ctx->pc = 0x102DB8u;
    {
        ctx->pc = 0x17B190u;
        ps2_stubs::sceGifPkTerminate(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B190u) { return; }
    ctx->pc = 0x17B190u;
label_17b190:
    // 0x17b190: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17b190u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b194: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x17b194u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17b198: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x17B198u;
    SET_GPR_U32(ctx, 31, 0x17B1A0u);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x17B1A0u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B1A0u) { return; }
    ctx->pc = 0x17B1A0u;
label_17b1a0:
    // 0x17b1a0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x17b1a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b1a4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x17b1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x17b1a8: 0x3482a000  ori         $v0, $a0, 0xA000
    ctx->pc = 0x17b1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)40960);
    // 0x17b1ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17b1acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b1b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x17b1b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17b1b4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x17b1b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17b1b8: 0xc0409c6  jal         func_102718
    ctx->pc = 0x17B1B8u;
    SET_GPR_U32(ctx, 31, 0x17B1C0u);
    ctx->pc = 0x102718u;
    {
        ctx->pc = 0x17B1C0u;
        ps2_stubs::sceDmaSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B1C0u) { return; }
    ctx->pc = 0x17B1C0u;
label_17b1c0:
    // 0x17b1c0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x17b1c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b1c4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x17b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x17b1c8: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x17b1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x17b1cc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17b1ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b1d0: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x17b1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x17b1d4: 0xc04086e  jal         func_1021B8
    ctx->pc = 0x17B1D4u;
    SET_GPR_U32(ctx, 31, 0x17B1DCu);
    ctx->pc = 0x1021B8u;
    {
        ctx->pc = 0x17B1DCu;
        ps2_stubs::sceDmaSend(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B1DCu) { return; }
    ctx->pc = 0x17B1DCu;
label_17b1dc:
    // 0x17b1dc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x17b1dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b1e0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x17b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x17b1e4: 0x3446a000  ori         $a2, $v0, 0xA000
    ctx->pc = 0x17b1e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x17b1e8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x17b1e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x17b1ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x17b1ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17b1f0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x17b1f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17b1f4: 0xc0409c6  jal         func_102718
    ctx->pc = 0x17B1F4u;
    SET_GPR_U32(ctx, 31, 0x17B1FCu);
    ctx->pc = 0x102718u;
    {
        ctx->pc = 0x17B1FCu;
        ps2_stubs::sceDmaSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B1FCu) { return; }
    ctx->pc = 0x17B1FCu;
label_17b1fc:
    // 0x17b1fc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b200: 0x8c24ef00  lw          $a0, -0x1100($at)
    ctx->pc = 0x17b200u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x47EF00u));
    // 0x17b204: 0x38850001  xori        $a1, $a0, 0x1
    ctx->pc = 0x17b204u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    ctx->pc = 0x17b208u;
}
