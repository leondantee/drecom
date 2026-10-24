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

// Function: entry_00235c48
// Address: 0x235c48 - 0x235f48
void entry_00235c48_0x235c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00235c48_0x235c48");
#endif

    switch (ctx->pc) {
        case 0x235c94u: goto label_235c94;
        case 0x235cf4u: goto label_235cf4;
        case 0x235d58u: goto label_235d58;
        case 0x235da0u: goto label_235da0;
        case 0x235df0u: goto label_235df0;
        case 0x235e60u: goto label_235e60;
        case 0x235ed0u: goto label_235ed0;
        case 0x235f18u: goto label_235f18;
        case 0x235f44u: goto label_235f44;
        default: break;
    }

    ctx->pc = 0x235c48u;

    // 0x235c48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235c4c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x235c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235c50: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x235c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x235c54: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235c58: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x235c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x235c5c: 0x8e12027c  lw          $s2, 0x27C($s0)
    ctx->pc = 0x235c5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
    // 0x235c60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235c64: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x235c64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235c68: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x235c68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x235c6c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x235c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x235c70: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x235c70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x235c74: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x235c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235c78: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x235c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x235c7c: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x235c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x235c80: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x235c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x235c84: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x235c84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x235c88: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x235c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x235c8c: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x235C8Cu;
    SET_GPR_U32(ctx, 31, 0x235C94u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x235C8Cu, 0x235C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C94u;
label_235c94:
    // 0x235c94: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235c98: 0x8c50027c  lw          $s0, 0x27C($v0)
    ctx->pc = 0x235c98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 636)));
    // 0x235c9c: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x235c9cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x235ca0: 0x3c07420c  lui         $a3, 0x420C
    ctx->pc = 0x235ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16908 << 16));
    // 0x235ca4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x235ca4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235ca8: 0x0  nop
    ctx->pc = 0x235ca8u;
    // NOP
    // 0x235cac: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x235cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x235cb0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x235cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x235cb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x235cb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235cb8: 0x0  nop
    ctx->pc = 0x235cb8u;
    // NOP
    // 0x235cbc: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x235cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x235cc0: 0x3c024307  lui         $v0, 0x4307
    ctx->pc = 0x235cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
    // 0x235cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235cc8: 0x0  nop
    ctx->pc = 0x235cc8u;
    // NOP
    // 0x235ccc: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x235cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x235cd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x235cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x235cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235cd8: 0x0  nop
    ctx->pc = 0x235cd8u;
    // NOP
    // 0x235cdc: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x235cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x235ce0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x235ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x235ce4: 0x26850940  addiu       $a1, $s4, 0x940
    ctx->pc = 0x235ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2368));
    // 0x235ce8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x235ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x235cec: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x235CECu;
    SET_GPR_U32(ctx, 31, 0x235CF4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x235CF4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x235CF4u) { return; }
    ctx->pc = 0x235CF4u;
label_235cf4:
    // 0x235cf4: 0x3c103f80  lui         $s0, 0x3F80
    ctx->pc = 0x235cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16256 << 16));
    // 0x235cf8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x235cf8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235cfc: 0x0  nop
    ctx->pc = 0x235cfcu;
    // NOP
    // 0x235d00: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x235d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x235d04: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x235d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
    // 0x235d08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x235d08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235d0c: 0x0  nop
    ctx->pc = 0x235d0cu;
    // NOP
    // 0x235d10: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x235d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x235d14: 0x3c02c160  lui         $v0, 0xC160
    ctx->pc = 0x235d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49504 << 16));
    // 0x235d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235d1c: 0x0  nop
    ctx->pc = 0x235d1cu;
    // NOP
    // 0x235d20: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x235d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x235d24: 0x3c024307  lui         $v0, 0x4307
    ctx->pc = 0x235d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
    // 0x235d28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235d2c: 0x0  nop
    ctx->pc = 0x235d2cu;
    // NOP
    // 0x235d30: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x235d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x235d34: 0x3c153f80  lui         $s5, 0x3F80
    ctx->pc = 0x235d34u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16256 << 16));
    // 0x235d38: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x235d38u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235d3c: 0x0  nop
    ctx->pc = 0x235d3cu;
    // NOP
    // 0x235d40: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x235d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x235d44: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x235d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x235d48: 0x26850940  addiu       $a1, $s4, 0x940
    ctx->pc = 0x235d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2368));
    // 0x235d4c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x235d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x235d50: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x235D50u;
    SET_GPR_U32(ctx, 31, 0x235D58u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x235D58u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x235D58u) { return; }
    ctx->pc = 0x235D58u;
label_235d58:
    // 0x235d58: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235d58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235d5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x235d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x235d60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235d64: 0x0  nop
    ctx->pc = 0x235d64u;
    // NOP
    // 0x235d68: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x235d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x235d6c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235d70: 0x8c44027c  lw          $a0, 0x27C($v0)
    ctx->pc = 0x235d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 636)));
    // 0x235d74: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235d78: 0x8c450280  lw          $a1, 0x280($v0)
    ctx->pc = 0x235d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x235d7c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x235d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x235d80: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x235d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x235d84: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x235d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x235d88: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x235d88u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235d8c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235d90: 0x8c320140  lw          $s2, 0x140($at)
    ctx->pc = 0x235d90u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235d94: 0x72404e28  paddub      $t1, $s2, $zero
    ctx->pc = 0x235d94u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x235d98: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x235D98u;
    SET_GPR_U32(ctx, 31, 0x235DA0u);
    ctx->pc = 0x1D4DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4DE0u, 0x235D98u, 0x235DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DA0u;
label_235da0:
    // 0x235da0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235da4: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x235da4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235da8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x235da8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x235dac: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x235dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235db0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x235db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x235db4: 0x8c420284  lw          $v0, 0x284($v0)
    ctx->pc = 0x235db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 644)));
    // 0x235db8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x235db8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235dbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235dc0: 0x8c250140  lw          $a1, 0x140($at)
    ctx->pc = 0x235dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235dc4: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x235dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x235dc8: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x235dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x235dcc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x235dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x235dd0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x235dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235dd4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x235dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x235dd8: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x235dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x235ddc: 0x2442021c  addiu       $v0, $v0, 0x21C
    ctx->pc = 0x235ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x235de0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235de0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235de4: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x235de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x235de8: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x235DE8u;
    SET_GPR_U32(ctx, 31, 0x235DF0u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x235DE8u, 0x235DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DF0u;
label_235df0:
    // 0x235df0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x235df0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235df4: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235df8: 0x8cc20284  lw          $v0, 0x284($a2)
    ctx->pc = 0x235df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 644)));
    // 0x235dfc: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x235dfcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235e00: 0x3c02c20c  lui         $v0, 0xC20C
    ctx->pc = 0x235e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49676 << 16));
    // 0x235e04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235e08: 0x0  nop
    ctx->pc = 0x235e08u;
    // NOP
    // 0x235e0c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x235e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x235e10: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x235e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x235e14: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x235e14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235e18: 0x0  nop
    ctx->pc = 0x235e18u;
    // NOP
    // 0x235e1c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x235e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x235e20: 0x3c024307  lui         $v0, 0x4307
    ctx->pc = 0x235e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
    // 0x235e24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235e28: 0x0  nop
    ctx->pc = 0x235e28u;
    // NOP
    // 0x235e2c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x235e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x235e30: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x235e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x235e34: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x235e34u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235e38: 0x0  nop
    ctx->pc = 0x235e38u;
    // NOP
    // 0x235e3c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x235e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x235e40: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x235e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x235e44: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x235e44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x235e48: 0x26870940  addiu       $a3, $s4, 0x940
    ctx->pc = 0x235e48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 2368));
    // 0x235e4c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x235e4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x235e50: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x235e50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x235e54: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x235e54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x235e58: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x235E58u;
    SET_GPR_U32(ctx, 31, 0x235E60u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x235E60u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x235E60u) { return; }
    ctx->pc = 0x235E60u;
label_235e60:
    // 0x235e60: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x235e60u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235e64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x235e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x235e68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235e6c: 0x0  nop
    ctx->pc = 0x235e6cu;
    // NOP
    // 0x235e70: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x235e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x235e74: 0x3c02c20c  lui         $v0, 0xC20C
    ctx->pc = 0x235e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49676 << 16));
    // 0x235e78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235e7c: 0x0  nop
    ctx->pc = 0x235e7cu;
    // NOP
    // 0x235e80: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x235e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x235e84: 0x3c02c160  lui         $v0, 0xC160
    ctx->pc = 0x235e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49504 << 16));
    // 0x235e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235e8c: 0x0  nop
    ctx->pc = 0x235e8cu;
    // NOP
    // 0x235e90: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x235e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x235e94: 0x3c024307  lui         $v0, 0x4307
    ctx->pc = 0x235e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
    // 0x235e98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235e9c: 0x0  nop
    ctx->pc = 0x235e9cu;
    // NOP
    // 0x235ea0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x235ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x235ea4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x235ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x235ea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235eac: 0x0  nop
    ctx->pc = 0x235eacu;
    // NOP
    // 0x235eb0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x235eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x235eb4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x235eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x235eb8: 0x26860940  addiu       $a2, $s4, 0x940
    ctx->pc = 0x235eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2368));
    // 0x235ebc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x235ebcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x235ec0: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x235ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x235ec4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x235ec4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235ec8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x235EC8u;
    SET_GPR_U32(ctx, 31, 0x235ED0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x235ED0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x235ED0u) { return; }
    ctx->pc = 0x235ED0u;
label_235ed0:
    // 0x235ed0: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x235ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x235ed4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x235ed4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235ed8: 0x0  nop
    ctx->pc = 0x235ed8u;
    // NOP
    // 0x235edc: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x235edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x235ee0: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235ee4: 0x8c860284  lw          $a2, 0x284($a0)
    ctx->pc = 0x235ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 644)));
    // 0x235ee8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235eec: 0x8c420288  lw          $v0, 0x288($v0)
    ctx->pc = 0x235eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 648)));
    // 0x235ef0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x235ef0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x235ef4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x235ef4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235ef8: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x235ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x235efc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x235efcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235f00: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x235f00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x235f04: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x235f04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x235f08: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235f0c: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x235f0cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235f10: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x235F10u;
    SET_GPR_U32(ctx, 31, 0x235F18u);
    ctx->pc = 0x1D4DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4DE0u, 0x235F10u, 0x235F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F18u;
label_235f18:
    // 0x235f18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x235f1c: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x235f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x235f20: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x235f20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x235f24: 0xc43821  addu        $a3, $a2, $a0
    ctx->pc = 0x235f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x235f28: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x235f28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x235f2c: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235f30: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x235f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x235f34: 0x2442021c  addiu       $v0, $v0, 0x21C
    ctx->pc = 0x235f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x235f38: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235f38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235f3c: 0xc06b0d4  jal         func_1AC350
    ctx->pc = 0x235F3Cu;
    SET_GPR_U32(ctx, 31, 0x235F44u);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x235F3Cu, 0x235F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F44u;
label_235f44:
    // 0x235f44: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235f44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x235f48u;
}
