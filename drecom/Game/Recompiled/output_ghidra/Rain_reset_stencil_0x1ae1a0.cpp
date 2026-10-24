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

// Function: Rain_reset_stencil
// Address: 0x1ae1a0 - 0x1ae330
void Rain_reset_stencil_0x1ae1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rain_reset_stencil_0x1ae1a0");
#endif

    ctx->pc = 0x1ae1a0u;

    // 0x1ae1a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ae1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ae1a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ae1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ae1a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ae1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ae1ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ae1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ae1b0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1ae1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1ae1b4: 0x8fb10038  lw          $s1, 0x38($sp)
    ctx->pc = 0x1ae1b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae1b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ae1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae1bc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ae1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ae1c0: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1ae1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1ae1c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ae1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ae1c8: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ae1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ae1cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE1CCu;
    {
        const bool branch_taken_0x1ae1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae1cc) {
            ctx->pc = 0x1AE1ECu;
            goto label_1ae1ec;
        }
    }
    ctx->pc = 0x1AE1D4u;
    // 0x1ae1d4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1ae1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1ae1d8: 0x34430038  ori         $v1, $v0, 0x38
    ctx->pc = 0x1ae1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56);
    // 0x1ae1dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ae1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae1e0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1ae1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1ae1e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE1E4u;
    {
        const bool branch_taken_0x1ae1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae1e4) {
            ctx->pc = 0x1AE1F8u;
            goto label_1ae1f8;
        }
    }
    ctx->pc = 0x1AE1ECu;
label_1ae1ec:
    // 0x1ae1ec: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1ae1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1ae1f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ae1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae1f4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1ae1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_1ae1f8:
    // 0x1ae1f8: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x1ae1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1ae1fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ae1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae200: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1ae200u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1ae204: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ae204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae208: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ae208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ae20c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1ae20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1ae210: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1ae210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ae214: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ae214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae218: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1ae218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ae21c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1ae21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ae220: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ae220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae224: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1ae224u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1ae228: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x1ae228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1ae22c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ae22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae230: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1ae230u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1ae234: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ae234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae238: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ae238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ae23c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1ae23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1ae240: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1ae240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ae244: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ae244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae248: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1ae248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1ae24c: 0x34421400  ori         $v0, $v0, 0x1400
    ctx->pc = 0x1ae24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x1ae250: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1ae250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ae254: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ae254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae258: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1ae258u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1ae25c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ae25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ae260: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ae260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae264: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1ae264u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1ae268: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ae268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae26c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ae26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ae270: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1ae270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1ae274: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ae274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae278: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ae278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae27c: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x1ae27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1ae280: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1ae280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ae284: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ae284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae288: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1ae288u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1ae28c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x1ae28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1ae290: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ae290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae294: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1ae294u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1ae298: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ae298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae29c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ae29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ae2a0: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1ae2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1ae2a4: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x1ae2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x1ae2a8: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x1ae2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1ae2ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ae2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae2b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ae2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ae2b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ae2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ae2b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae2b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae2bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ae2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae2c0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1ae2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ae2c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ae2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae2c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ae2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae2cc: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1ae2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1ae2d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ae2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae2d4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ae2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ae2d8: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1ae2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1ae2dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ae2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae2e0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1ae2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1ae2e4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1ae2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ae2e8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1ae2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ae2ec: 0x39102  srl         $s2, $v1, 4
    ctx->pc = 0x1ae2ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1ae2f0: 0x72208628  paddub      $s0, $s1, $zero
    ctx->pc = 0x1ae2f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ae2f4: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x1ae2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1ae2f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ae2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ae2fc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ae2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ae300: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ae300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae304: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ae304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae308: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1ae308u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1ae30c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1ae30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ae310: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1ae310u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1ae314: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ae314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae318: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ae318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae31c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ae31cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ae320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae324: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ae324u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ae328: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE330u;
}
