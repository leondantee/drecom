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

// Function: entry_0015f040
// Address: 0x15f040 - 0x15f0e4
void entry_0015f040_0x15f040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f040_0x15f040");
#endif

    switch (ctx->pc) {
        case 0x15f094u: goto label_15f094;
        case 0x15f0b4u: goto label_15f0b4;
        case 0x15f0ccu: goto label_15f0cc;
        default: break;
    }

    ctx->pc = 0x15f040u;

    // 0x15f040: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x15f040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x15f044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f048: 0x0  nop
    ctx->pc = 0x15f048u;
    // NOP
    // 0x15f04c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x15f04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x15f050: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15f050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15f054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f058: 0x0  nop
    ctx->pc = 0x15f058u;
    // NOP
    // 0x15f05c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x15f05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x15f060: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x15f060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x15f064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f068: 0x0  nop
    ctx->pc = 0x15f068u;
    // NOP
    // 0x15f06c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x15f06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x15f070: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15f070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15f074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f078: 0x0  nop
    ctx->pc = 0x15f078u;
    // NOP
    // 0x15f07c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15f07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x15f080: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15f080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f084: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x15f084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15f088: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x15f088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15f08c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15F08Cu;
    SET_GPR_U32(ctx, 31, 0x15F094u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15F094u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15F094u) { return; }
    ctx->pc = 0x15F094u;
label_15f094:
    // 0x15f094: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15f094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f098: 0x0  nop
    ctx->pc = 0x15f098u;
    // NOP
    // 0x15f09c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x15f09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x15f0a0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15f0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15f0a4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x15f0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15f0a8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x15f0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15f0ac: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15F0ACu;
    SET_GPR_U32(ctx, 31, 0x15F0B4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15F0B4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15F0B4u) { return; }
    ctx->pc = 0x15F0B4u;
label_15f0b4:
    // 0x15f0b4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15f0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15f0b8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x15f0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15f0bc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x15f0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f0c0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x15f0c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f0c4: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15F0C4u;
    SET_GPR_U32(ctx, 31, 0x15F0CCu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15F0C4u, 0x15F0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F0CCu;
label_15f0cc:
    // 0x15f0cc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x15f0ccu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15f0d0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F0D0u;
    {
        const bool branch_taken_0x15f0d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f0d0) {
            ctx->pc = 0x15F0E4u;
            return;
        }
    }
    ctx->pc = 0x15F0D8u;
    // 0x15f0d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f0dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15F0DCu;
    {
        const bool branch_taken_0x15f0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f0dc) {
            ctx->pc = 0x15F0E8u;
            return;
        }
    }
    ctx->pc = 0x15F0E4u;
}
