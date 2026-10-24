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

// Function: entry_0025f81c
// Address: 0x25f81c - 0x25f8b8
void entry_0025f81c_0x25f81c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f81c_0x25f81c");
#endif

    switch (ctx->pc) {
        case 0x25f880u: goto label_25f880;
        case 0x25f8acu: goto label_25f8ac;
        default: break;
    }

    ctx->pc = 0x25f81cu;

    // 0x25f81c: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x25f81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f820: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x25f820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25f824: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x25f824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x25f828: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25f828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25f82c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25f830: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25f830u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25f834: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x25f834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x25f838: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x25f838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25f83c: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25f83cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f840: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25f840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25f844: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25f844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25f848: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x25F848u;
    {
        const bool branch_taken_0x25f848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f848) {
            ctx->pc = 0x25F9B8u;
            return;
        }
    }
    ctx->pc = 0x25F850u;
    // 0x25f850: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x25f850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25f854: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x25f854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x25f858: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x25f858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x25f85c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x25f85cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f860: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f860u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f864: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f868: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x25f868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x25f86c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25F86Cu;
    {
        const bool branch_taken_0x25f86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f86c) {
            ctx->pc = 0x25F8B8u;
            return;
        }
    }
    ctx->pc = 0x25F874u;
    // 0x25f874: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x25f874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25f878: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25F878u;
    SET_GPR_U32(ctx, 31, 0x25F880u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25F880u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F880u) { return; }
    ctx->pc = 0x25F880u;
label_25f880:
    // 0x25f880: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x25f880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f884: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x25f884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25f888: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x25f888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f88c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x25f88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x25f890: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x25f890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f894: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x25f894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x25f898: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25f898u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25f89c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25f89cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25f8a0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x25f8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25f8a4: 0xc040c00  jal         func_103000
    ctx->pc = 0x25F8A4u;
    SET_GPR_U32(ctx, 31, 0x25F8ACu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25F8ACu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F8ACu) { return; }
    ctx->pc = 0x25F8ACu;
label_25f8ac:
    // 0x25f8ac: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f8acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f8b0: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x25f8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x25f8b4: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25f8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x25f8b8u;
}
