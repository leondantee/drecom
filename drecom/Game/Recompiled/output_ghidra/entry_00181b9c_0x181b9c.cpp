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

// Function: entry_00181b9c
// Address: 0x181b9c - 0x181c74
void entry_00181b9c_0x181b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181b9c_0x181b9c");
#endif

    switch (ctx->pc) {
        case 0x181c44u: goto label_181c44;
        default: break;
    }

    ctx->pc = 0x181b9cu;

    // 0x181b9c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181ba0: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181ba0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181ba4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x181ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181ba8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181ba8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181bac: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x181bacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181bb0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x181bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x181bb4: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x181bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181bb8: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181bbc: 0x24681380  addiu       $t0, $v1, 0x1380
    ctx->pc = 0x181bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181bc0: 0x1063821  addu        $a3, $t0, $a2
    ctx->pc = 0x181bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x181bc4: 0x3c0641e3  lui         $a2, 0x41E3
    ctx->pc = 0x181bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16867 << 16));
    // 0x181bc8: 0x34c32d43  ori         $v1, $a2, 0x2D43
    ctx->pc = 0x181bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)11587);
    // 0x181bcc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181bccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181bd0: 0xc4e00178  lwc1        $f0, 0x178($a3)
    ctx->pc = 0x181bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181bd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181bd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181bd8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181bdc: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181bdcu;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181be0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x181be0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x181be4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x181be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x181be8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181bec: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181becu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181bf0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x181bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181bf4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181bf4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181bf8: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x181bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181bfc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x181bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x181c00: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x181c00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181c04: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x181c04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x181c08: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x181c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x181c0c: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x181c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x181c10: 0x3c0641e3  lui         $a2, 0x41E3
    ctx->pc = 0x181c10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16867 << 16));
    // 0x181c14: 0x34c32d43  ori         $v1, $a2, 0x2D43
    ctx->pc = 0x181c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)11587);
    // 0x181c18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181c18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181c1c: 0xc4e00178  lwc1        $f0, 0x178($a3)
    ctx->pc = 0x181c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181c20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181c20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181c24: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181c28: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181c28u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181c2c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x181c2cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x181c30: 0x0  nop
    ctx->pc = 0x181c30u;
    // NOP
    // 0x181c34: 0x0  nop
    ctx->pc = 0x181c34u;
    // NOP
    // 0x181c38: 0x0  nop
    ctx->pc = 0x181c38u;
    // NOP
    // 0x181c3c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x181C3Cu;
    SET_GPR_U32(ctx, 31, 0x181C44u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x181C3Cu, 0x181C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181C44u;
label_181c44:
    // 0x181c44: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x181c44u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x181c48: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181c4c: 0xac23f210  sw          $v1, -0xDF0($at)
    ctx->pc = 0x181c4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F210u, _value); } while (0);
    // 0x181c50: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181c54: 0x8c23f210  lw          $v1, -0xDF0($at)
    ctx->pc = 0x181c54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F210u));
    // 0x181c58: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x181C58u;
    {
        const bool branch_taken_0x181c58 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x181c58) {
            ctx->pc = 0x181C74u;
            return;
        }
    }
    ctx->pc = 0x181C60u;
    // 0x181c60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x181c60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181c64: 0x0  nop
    ctx->pc = 0x181c64u;
    // NOP
    // 0x181c68: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x181c68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x181c6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x181C6Cu;
    {
        const bool branch_taken_0x181c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181c6c) {
            ctx->pc = 0x181C90u;
            return;
        }
    }
    ctx->pc = 0x181C74u;
}
