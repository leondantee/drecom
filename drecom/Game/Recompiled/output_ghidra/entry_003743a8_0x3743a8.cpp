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

// Function: entry_003743a8
// Address: 0x3743a8 - 0x374400
void entry_003743a8_0x3743a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003743a8_0x3743a8");
#endif

    switch (ctx->pc) {
        case 0x3743c8u: goto label_3743c8;
        case 0x3743f4u: goto label_3743f4;
        default: break;
    }

    ctx->pc = 0x3743a8u;

    // 0x3743a8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x3743a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3743ac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3743acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3743b0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3743b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x3743b4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3743B4u;
    {
        const bool branch_taken_0x3743b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3743b4) {
            ctx->pc = 0x374400u;
            return;
        }
    }
    ctx->pc = 0x3743BCu;
    // 0x3743bc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3743bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3743c0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x3743C0u;
    SET_GPR_U32(ctx, 31, 0x3743C8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x3743C8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3743C8u) { return; }
    ctx->pc = 0x3743C8u;
label_3743c8:
    // 0x3743c8: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x3743c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3743cc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3743ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3743d0: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x3743d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3743d4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3743d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3743d8: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x3743d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3743dc: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x3743dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3743e0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x3743e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3743e4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3743e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3743e8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3743e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3743ec: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x3743ECu;
    SET_GPR_U32(ctx, 31, 0x3743F4u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x3743ECu, 0x3743F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3743F4u;
label_3743f4:
    // 0x3743f4: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x3743f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3743f8: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x3743f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x3743fc: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x3743fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x374400u;
}
