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

// Function: entry_0024b4bc
// Address: 0x24b4bc - 0x24b540
void entry_0024b4bc_0x24b4bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024b4bc_0x24b4bc");
#endif

    switch (ctx->pc) {
        case 0x24b520u: goto label_24b520;
        case 0x24b534u: goto label_24b534;
        default: break;
    }

    ctx->pc = 0x24b4bcu;

    // 0x24b4bc: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x24b4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x24b4c0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x24b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x24b4c4: 0x24750280  addiu       $s5, $v1, 0x280
    ctx->pc = 0x24b4c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
    // 0x24b4c8: 0x3c03c110  lui         $v1, 0xC110
    ctx->pc = 0x24b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49424 << 16));
    // 0x24b4cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24b4ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b4d0: 0x0  nop
    ctx->pc = 0x24b4d0u;
    // NOP
    // 0x24b4d4: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x24b4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x24b4d8: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x24b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x24b4dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24b4dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b4e0: 0x0  nop
    ctx->pc = 0x24b4e0u;
    // NOP
    // 0x24b4e4: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x24b4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x24b4e8: 0x3c034274  lui         $v1, 0x4274
    ctx->pc = 0x24b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17012 << 16));
    // 0x24b4ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24b4ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b4f0: 0x0  nop
    ctx->pc = 0x24b4f0u;
    // NOP
    // 0x24b4f4: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x24b4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x24b4f8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x24b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x24b4fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24b4fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b500: 0x0  nop
    ctx->pc = 0x24b500u;
    // NOP
    // 0x24b504: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x24b504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x24b508: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x24b508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x24b50c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x24b50cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x24b510: 0x27b30140  addiu       $s3, $sp, 0x140
    ctx->pc = 0x24b510u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x24b514: 0x72603628  paddub      $a2, $s3, $zero
    ctx->pc = 0x24b514u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x24b518: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x24B518u;
    SET_GPR_U32(ctx, 31, 0x24B520u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x24B520u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B520u) { return; }
    ctx->pc = 0x24B520u;
label_24b520:
    // 0x24b520: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24b520u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24b524: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x24b524u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x24b528: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x24b528u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24b52c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x24B52Cu;
    SET_GPR_U32(ctx, 31, 0x24B534u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x24B534u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B534u) { return; }
    ctx->pc = 0x24B534u;
label_24b534:
    // 0x24b534: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x24b534u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24b538: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x24B538u;
    {
        const bool branch_taken_0x24b538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b538) {
            ctx->pc = 0x24B574u;
            return;
        }
    }
    ctx->pc = 0x24B540u;
}
