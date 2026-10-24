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

// Function: entry_001cf848
// Address: 0x1cf848 - 0x1cf8b4
void entry_001cf848_0x1cf848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf848_0x1cf848");
#endif

    switch (ctx->pc) {
        case 0x1cf8b0u: goto label_1cf8b0;
        default: break;
    }

    ctx->pc = 0x1cf848u;

    // 0x1cf848: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf84c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1cf84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cf850: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1cf850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1cf854: 0x652024  and         $a0, $v1, $a1
    ctx->pc = 0x1cf854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1cf858: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CF858u;
    {
        const bool branch_taken_0x1cf858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf858) {
            ctx->pc = 0x1CF91Cu;
            return;
        }
    }
    ctx->pc = 0x1CF860u;
    // 0x1cf860: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cf860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf864: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf868: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1cf868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1cf86c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf870: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x1cf870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf874: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf878: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cf878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1cf87c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf880: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cf880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf884: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf888: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1cf888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1cf88c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf890: 0xa4801574  sh          $zero, 0x1574($a0)
    ctx->pc = 0x1cf890u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cf894: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf898: 0x8c6413e8  lw          $a0, 0x13E8($v1)
    ctx->pc = 0x1cf898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1cf89c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF89Cu;
    {
        const bool branch_taken_0x1cf89c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf89c) {
            ctx->pc = 0x1CF8B4u;
            return;
        }
    }
    ctx->pc = 0x1CF8A4u;
    // 0x1cf8a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf8a8: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1CF8A8u;
    SET_GPR_U32(ctx, 31, 0x1CF8B0u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1CF8A8u, 0x1CF8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF8B0u;
label_1cf8b0:
    // 0x1cf8b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cf8b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1cf8b4u;
}
