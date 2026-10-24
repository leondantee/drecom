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

// Function: entry_00203c74
// Address: 0x203c74 - 0x203d48
void entry_00203c74_0x203c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203c74_0x203c74");
#endif

    switch (ctx->pc) {
        case 0x203cd8u: goto label_203cd8;
        case 0x203cecu: goto label_203cec;
        case 0x203d00u: goto label_203d00;
        case 0x203d14u: goto label_203d14;
        case 0x203d30u: goto label_203d30;
        default: break;
    }

    ctx->pc = 0x203c74u;

    // 0x203c74: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x203c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x203c78: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x203c78u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203c7c: 0x3c0244c8  lui         $v0, 0x44C8
    ctx->pc = 0x203c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17608 << 16));
    // 0x203c80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x203c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203c84: 0x0  nop
    ctx->pc = 0x203c84u;
    // NOP
    // 0x203c88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x203c88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203c8c: 0x0  nop
    ctx->pc = 0x203c8cu;
    // NOP
    // 0x203c90: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x203C90u;
    {
        const bool branch_taken_0x203c90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x203c90) {
            ctx->pc = 0x203D48u;
            return;
        }
    }
    ctx->pc = 0x203C98u;
    // 0x203c98: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x203c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x203c9c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x203c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x203ca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x203ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203ca4: 0x0  nop
    ctx->pc = 0x203ca4u;
    // NOP
    // 0x203ca8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x203ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x203cac: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x203cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x203cb0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x203cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x203cb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x203cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203cb8: 0x0  nop
    ctx->pc = 0x203cb8u;
    // NOP
    // 0x203cbc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x203cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x203cc0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x203cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x203cc4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x203cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x203cc8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x203cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x203ccc: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x203cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x203cd0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x203CD0u;
    SET_GPR_U32(ctx, 31, 0x203CD8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x203CD8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x203CD8u) { return; }
    ctx->pc = 0x203CD8u;
label_203cd8:
    // 0x203cd8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x203cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x203cdc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x203cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x203ce0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x203ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x203ce4: 0xc067844  jal         func_19E110
    ctx->pc = 0x203CE4u;
    SET_GPR_U32(ctx, 31, 0x203CECu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x203CE4u, 0x203CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203CECu;
label_203cec:
    // 0x203cec: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x203cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x203cf0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x203cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x203cf4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x203cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x203cf8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x203CF8u;
    SET_GPR_U32(ctx, 31, 0x203D00u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x203D00u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x203D00u) { return; }
    ctx->pc = 0x203D00u;
label_203d00:
    // 0x203d00: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x203d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x203d04: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x203d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x203d08: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x203d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x203d0c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x203D0Cu;
    SET_GPR_U32(ctx, 31, 0x203D14u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x203D14u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x203D14u) { return; }
    ctx->pc = 0x203D14u;
label_203d14:
    // 0x203d14: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x203d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x203d18: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x203d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x203d1c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x203d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x203d20: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x203d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x203d24: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x203d24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x203d28: 0xc05a2d4  jal         func_168B50
    ctx->pc = 0x203D28u;
    SET_GPR_U32(ctx, 31, 0x203D30u);
    ctx->pc = 0x168B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168B50u, 0x203D28u, 0x203D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D30u;
label_203d30:
    // 0x203d30: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x203d30u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x203d34: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203D34u;
    {
        const bool branch_taken_0x203d34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x203d34) {
            ctx->pc = 0x203D48u;
            return;
        }
    }
    ctx->pc = 0x203D3Cu;
    // 0x203d3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x203d3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203d40: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x203D40u;
    {
        const bool branch_taken_0x203d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203d40) {
            ctx->pc = 0x203D6Cu;
            return;
        }
    }
    ctx->pc = 0x203D48u;
}
