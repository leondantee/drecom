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

// Function: entry_0030b274
// Address: 0x30b274 - 0x30b384
void entry_0030b274_0x30b274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030b274_0x30b274");
#endif

    switch (ctx->pc) {
        case 0x30b2c4u: goto label_30b2c4;
        case 0x30b328u: goto label_30b328;
        case 0x30b364u: goto label_30b364;
        default: break;
    }

    ctx->pc = 0x30b274u;

    // 0x30b274: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30b274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b278: 0x0  nop
    ctx->pc = 0x30b278u;
    // NOP
    // 0x30b27c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x30b27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x30b280: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30b280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b284: 0x0  nop
    ctx->pc = 0x30b284u;
    // NOP
    // 0x30b288: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x30b288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x30b28c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30b28cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b290: 0x0  nop
    ctx->pc = 0x30b290u;
    // NOP
    // 0x30b294: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x30b294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x30b298: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30b298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30b29c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30b29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b2a0: 0x0  nop
    ctx->pc = 0x30b2a0u;
    // NOP
    // 0x30b2a4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x30b2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x30b2a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x30b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30b2ac: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30b2b0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x30b2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30b2b4: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x30b2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x30b2b8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x30b2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30b2bc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x30B2BCu;
    SET_GPR_U32(ctx, 31, 0x30B2C4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x30B2C4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30B2C4u) { return; }
    ctx->pc = 0x30B2C4u;
label_30b2c4:
    // 0x30b2c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30b2c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30b2c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b2cc: 0x0  nop
    ctx->pc = 0x30b2ccu;
    // NOP
    // 0x30b2d0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x30b2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x30b2d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30b2d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b2d8: 0x0  nop
    ctx->pc = 0x30b2d8u;
    // NOP
    // 0x30b2dc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x30b2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x30b2e0: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x30b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x30b2e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30b2e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b2e8: 0x0  nop
    ctx->pc = 0x30b2e8u;
    // NOP
    // 0x30b2ec: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x30b2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x30b2f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30b2f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b2f4: 0x0  nop
    ctx->pc = 0x30b2f4u;
    // NOP
    // 0x30b2f8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x30b2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x30b2fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30b300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30b300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b304: 0x0  nop
    ctx->pc = 0x30b304u;
    // NOP
    // 0x30b308: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x30b308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x30b30c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x30b30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30b310: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30b310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30b314: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x30b314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30b318: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x30b318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x30b31c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x30b31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30b320: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x30B320u;
    SET_GPR_U32(ctx, 31, 0x30B328u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x30B328u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30B328u) { return; }
    ctx->pc = 0x30B328u;
label_30b328:
    // 0x30b328: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30b328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30b32c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30b32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b330: 0x0  nop
    ctx->pc = 0x30b330u;
    // NOP
    // 0x30b334: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x30b334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x30b338: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x30b338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30b33c: 0x8c440244  lw          $a0, 0x244($v0)
    ctx->pc = 0x30b33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x30b340: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x30b340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30b344: 0x8c450248  lw          $a1, 0x248($v0)
    ctx->pc = 0x30b344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 584)));
    // 0x30b348: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x30b348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30b34c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x30b34cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30b350: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x30b350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30b354: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x30b354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x30b358: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x30b358u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0140u));
    // 0x30b35c: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x30B35Cu;
    SET_GPR_U32(ctx, 31, 0x30B364u);
    ctx->pc = 0x1D4DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4DE0u, 0x30B35Cu, 0x30B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B364u;
label_30b364:
    // 0x30b364: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x30b364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x30b368: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x30b368u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x30b36c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30b370: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b374: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30b374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30b378: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x30b378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30b37c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b380: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x30b380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    ctx->pc = 0x30b384u;
}
