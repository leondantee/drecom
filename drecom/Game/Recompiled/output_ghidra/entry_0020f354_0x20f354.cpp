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

// Function: entry_0020f354
// Address: 0x20f354 - 0x20f3a4
void entry_0020f354_0x20f354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020f354_0x20f354");
#endif

    switch (ctx->pc) {
        case 0x20f3a0u: goto label_20f3a0;
        default: break;
    }

    ctx->pc = 0x20f354u;

    // 0x20f354: 0x3c03beb2  lui         $v1, 0xBEB2
    ctx->pc = 0x20f354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48818 << 16));
    // 0x20f358: 0x34631643  ori         $v1, $v1, 0x1643
    ctx->pc = 0x20f358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5699);
    // 0x20f35c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20f35cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f360: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f364: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x20f364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x20f368: 0x3c04c28a  lui         $a0, 0xC28A
    ctx->pc = 0x20f368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49802 << 16));
    // 0x20f36c: 0x3483f4df  ori         $v1, $a0, 0xF4DF
    ctx->pc = 0x20f36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62687);
    // 0x20f370: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x20f370u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20f374: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20f374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f378: 0xe4ac0184  swc1        $f12, 0x184($a1)
    ctx->pc = 0x20f378u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 388), bits); }
    // 0x20f37c: 0x3c034289  lui         $v1, 0x4289
    ctx->pc = 0x20f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17033 << 16));
    // 0x20f380: 0x3466642d  ori         $a2, $v1, 0x642D
    ctx->pc = 0x20f380u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)25645);
    // 0x20f384: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x20f384u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20f388: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f38c: 0xe48d0188  swc1        $f13, 0x188($a0)
    ctx->pc = 0x20f38cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x20f390: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20f390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f394: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x20f394u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x20f398: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x20F398u;
    SET_GPR_U32(ctx, 31, 0x20F3A0u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x20F398u, 0x20F3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F3A0u;
label_20f3a0:
    // 0x20f3a0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x20f3a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20f3a4u;
}
