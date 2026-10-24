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

// Function: MoveImage
// Address: 0x179f60 - 0x17a15c
void MoveImage_0x179f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveImage_0x179f60");
#endif

    switch (ctx->pc) {
        case 0x17a130u: goto label_17a130;
        case 0x17a144u: goto label_17a144;
        default: break;
    }

    ctx->pc = 0x179f60u;

    // 0x179f60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x179f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x179f64: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x179f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x179f68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x179f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x179f6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x179f70: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x179f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x179f74: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x179f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x179f78: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x179f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x179f7c: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x179f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x179f80: 0xafa80050  sw          $t0, 0x50($sp)
    ctx->pc = 0x179f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 8));
    // 0x179f84: 0xafa90058  sw          $t1, 0x58($sp)
    ctx->pc = 0x179f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 9));
    // 0x179f88: 0xafaa0060  sw          $t2, 0x60($sp)
    ctx->pc = 0x179f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 10));
    // 0x179f8c: 0xafab0068  sw          $t3, 0x68($sp)
    ctx->pc = 0x179f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 11));
    // 0x179f90: 0x3c107000  lui         $s0, 0x7000
    ctx->pc = 0x179f90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28672 << 16));
    // 0x179f94: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x179f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x179f98: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x179f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x179f9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x179f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x179fa0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x179fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179fa4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x179fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x179fa8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x179fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179fac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179fb0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x179fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x179fb4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x179fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x179fb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x179fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x179fbc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x179fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x179fc0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179fc4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x179fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x179fc8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x179fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x179fcc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x179fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179fd0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x179fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179fd4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179fd8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x179fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x179fdc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179fe0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x179fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179fe4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x179fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179fe8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179fec: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x179fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x179ff0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x179ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x179ff4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x179ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179ff8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x179ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x179ffc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17a000: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17a000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x17a004: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x17a004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17a008: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17a008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17a00c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x17a00cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x17a010: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x17a010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17a014: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x17a014u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x17a018: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x17a018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17a01c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x17a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a020: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17a020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17a024: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x17a024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x17a028: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x17a028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17a02c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17a02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17a030: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17a030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x17a034: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x17a034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x17a038: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17a038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17a03c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x17a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a040: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17a040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17a044: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17a044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x17a048: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17a048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17a04c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x17a04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17a050: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x17a050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17a054: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17a054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17a058: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17a058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x17a05c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x17a05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17a060: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17a060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17a064: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x17a064u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x17a068: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x17a068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x17a06c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x17a06cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x17a070: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x17a070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17a074: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17a074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17a078: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17a078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17a07c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x17a07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x17a080: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17a080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17a084: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17a084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17a088: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17a088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x17a08c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17a08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17a090: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17a090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17a094: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x17a094u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x17a098: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x17a098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x17a09c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x17a09cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x17a0a0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x17a0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17a0a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17a0a8: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x17a0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x17a0ac: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x17a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x17a0b0: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x17a0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x17a0b4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x17a0b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17a0b8: 0x3c028fff  lui         $v0, 0x8FFF
    ctx->pc = 0x17a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36863 << 16));
    // 0x17a0bc: 0x3442ffe0  ori         $v0, $v0, 0xFFE0
    ctx->pc = 0x17a0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65504);
    // 0x17a0c0: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x17a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17a0c4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x17a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17a0c8: 0x38902  srl         $s1, $v1, 4
    ctx->pc = 0x17a0c8u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17a0cc: 0x3c107000  lui         $s0, 0x7000
    ctx->pc = 0x17a0ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28672 << 16));
    // 0x17a0d0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x17a0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17a0d4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x17a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x17a0d8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17a0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17a0dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17a0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17a0e0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17a0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x17a0e4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x17a0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x17a0e8: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x17a0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x17a0ec: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x17a0ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17a0f0: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x17a0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x17a0f4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17a0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x17a0f8: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x17a0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x17a0fc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x17a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x17a100: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17a100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17a104: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17a104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17a108: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x17a108u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x17a10c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x17a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x17a110: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x17a110u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x17a114: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x17a114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17a118: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x17a118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x17a11c: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x17a11cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x17a120: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x17a120u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17a124: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x17a124u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17a128: 0xc0409c6  jal         func_102718
    ctx->pc = 0x17A128u;
    SET_GPR_U32(ctx, 31, 0x17A130u);
    ctx->pc = 0x102718u;
    {
        ctx->pc = 0x17A130u;
        ps2_stubs::sceDmaSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17A130u) { return; }
    ctx->pc = 0x17A130u;
label_17a130:
    // 0x17a130: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x17a130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x17a134: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x17a134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x17a138: 0x3c05f000  lui         $a1, 0xF000
    ctx->pc = 0x17a138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61440 << 16));
    // 0x17a13c: 0xc04086e  jal         func_1021B8
    ctx->pc = 0x17A13Cu;
    SET_GPR_U32(ctx, 31, 0x17A144u);
    ctx->pc = 0x1021B8u;
    {
        ctx->pc = 0x17A144u;
        ps2_stubs::sceDmaSend(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17A144u) { return; }
    ctx->pc = 0x17A144u;
label_17a144:
    // 0x17a144: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x17a144u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a148: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a14c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a14cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a150: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x17a150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17a154: 0x3e00008  jr          $ra
    ctx->pc = 0x17A154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A15Cu;
}
