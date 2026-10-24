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

// Function: Em0f_blur_trans
// Address: 0x30b1b0 - 0x30b3a4
void Em0f_blur_trans_0x30b1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_blur_trans_0x30b1b0");
#endif

    switch (ctx->pc) {
        case 0x30b208u: goto label_30b208;
        case 0x30b268u: goto label_30b268;
        case 0x30b2c4u: goto label_30b2c4;
        case 0x30b328u: goto label_30b328;
        case 0x30b364u: goto label_30b364;
        case 0x30b38cu: goto label_30b38c;
        default: break;
    }

    ctx->pc = 0x30b1b0u;

    // 0x30b1b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30b1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30b1b4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x30b1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x30b1b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30b1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30b1bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30b1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30b1c0: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x30b1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x30b1c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x30b1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x30b1c8: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x30b1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x30b1cc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30b1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30b1d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x30b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30b1d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b1d8: 0x8c51023c  lw          $s1, 0x23C($v0)
    ctx->pc = 0x30b1d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
    // 0x30b1dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x30b1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x30b1e0: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x30b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x30b1e4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30b1e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b1ec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30b1f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x30b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30b1f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b1f8: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x30b1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x30b1fc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x30b1fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x30b200: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x30B200u;
    SET_GPR_U32(ctx, 31, 0x30B208u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x30B200u, 0x30B208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B208u;
label_30b208:
    // 0x30b208: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x30b208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30b20c: 0x8c431338  lw          $v1, 0x1338($v0)
    ctx->pc = 0x30b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x30b210: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x30b210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x30b214: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30b214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30b218: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x30B218u;
    {
        const bool branch_taken_0x30b218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b218) {
            ctx->pc = 0x30B274u;
            goto label_30b274;
        }
    }
    ctx->pc = 0x30B220u;
    // 0x30b220: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x30b220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x30b224: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x30b224u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x30b228: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30b228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30b22c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x30b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30b230: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b234: 0x8c500244  lw          $s0, 0x244($v0)
    ctx->pc = 0x30b234u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x30b238: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x30b238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x30b23c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x30b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x30b240: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30b240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30b244: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b248: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30b248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30b24c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x30b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30b250: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b254: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x30b254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x30b258: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x30b258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x30b25c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x30b25cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x30b260: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x30B260u;
    SET_GPR_U32(ctx, 31, 0x30B268u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x30B260u, 0x30B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B268u;
label_30b268:
    // 0x30b268: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x30b268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x30b26c: 0x8c500244  lw          $s0, 0x244($v0)
    ctx->pc = 0x30b26cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x30b270: 0x0  nop
    ctx->pc = 0x30b270u;
    // NOP
label_30b274:
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
    // 0x30b384: 0xc06b0d4  jal         func_1AC350
    ctx->pc = 0x30B384u;
    SET_GPR_U32(ctx, 31, 0x30B38Cu);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x30B384u, 0x30B38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B38Cu;
label_30b38c:
    // 0x30b38c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x30b38cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30b390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b398: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x30b398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30b39c: 0x3e00008  jr          $ra
    ctx->pc = 0x30B39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B3A4u;
}
