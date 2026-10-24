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

// Function: Finish_shw_tag
// Address: 0x1e8380 - 0x1e8858
void Finish_shw_tag_0x1e8380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish_shw_tag_0x1e8380");
#endif

    ctx->pc = 0x1e8380u;

    // 0x1e8380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e8380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e8384: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e8388: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e8388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e838c: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x1e838cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x1e8390: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1e8390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e8394: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e8394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e8398: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E8398u;
    {
        const bool branch_taken_0x1e8398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8398) {
            ctx->pc = 0x1E83ACu;
            goto label_1e83ac;
        }
    }
    ctx->pc = 0x1E83A0u;
    // 0x1e83a0: 0x24100700  addiu       $s0, $zero, 0x700
    ctx->pc = 0x1e83a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x1e83a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E83A4u;
    {
        const bool branch_taken_0x1e83a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e83a4) {
            ctx->pc = 0x1E83B0u;
            goto label_1e83b0;
        }
    }
    ctx->pc = 0x1E83ACu;
label_1e83ac:
    // 0x1e83ac: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1e83acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e83b0:
    // 0x1e83b0: 0x3c02a023  lui         $v0, 0xA023
    ctx->pc = 0x1e83b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40995 << 16));
    // 0x1e83b4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e83b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1e83b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e83b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e83bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e83bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e83c0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e83c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e83c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e83c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e83c8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e83c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e83cc: 0x24020055  addiu       $v0, $zero, 0x55
    ctx->pc = 0x1e83ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x1e83d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e83d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e83d4: 0x3c021e55  lui         $v0, 0x1E55
    ctx->pc = 0x1e83d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7765 << 16));
    // 0x1e83d8: 0x34421eee  ori         $v0, $v0, 0x1EEE
    ctx->pc = 0x1e83d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7918);
    // 0x1e83dc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e83dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e83e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e83e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e83e4: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e83e4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e83e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e83e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e83ec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e83ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e83f0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e83f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e83f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e83f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e83f8: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x1e83f8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x1e83fc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1e83fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e8400: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8404: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e8404u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e8408: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e840c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e840cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e8410: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e8410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e8414: 0x24031003  addiu       $v1, $zero, 0x1003
    ctx->pc = 0x1e8414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
    // 0x1e8418: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e841c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e841cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e8420: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x1e8420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1e8424: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8428: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e8428u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e842c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e842cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8430: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e8430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e8434: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e8434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e8438: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e8438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e843c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e843cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e8440: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1e8440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e8444: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e8444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e8448: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e844c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e844cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e8450: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1e8450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e8454: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8458: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e8458u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e845c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e845cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8460: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e8460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e8464: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e8464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e8468: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x1e8468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1e846c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e846cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e8470: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x1e8470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1e8474: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e8474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e8478: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e847c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e847cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e8480: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x1e8480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1e8484: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8488: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e8488u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e848c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e848cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8490: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e8490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e8494: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e8494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e8498: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x1e8498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1e849c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e849cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e84a0: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x1e84a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1e84a4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e84a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e84a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e84a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e84ac: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e84acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e84b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1e84b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e84b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e84b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e84b8: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1e84b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e84bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e84bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e84c0: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e84c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e84c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e84c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e84c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e84cc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e84ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e84d0: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1e84d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1e84d4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e84d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e84d8: 0x34029000  ori         $v0, $zero, 0x9000
    ctx->pc = 0x1e84d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x1e84dc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e84dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e84e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e84e4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e84e4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e84e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1e84e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e84ec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e84ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e84f0: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1e84f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e84f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e84f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e84f8: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e84f8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e84fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e84fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8500: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e8500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e8504: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e8504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e8508: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e8508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e850c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e850cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e8510: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x1e8510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e8514: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e8514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e8518: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e851c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e851cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e8520: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1e8520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e8524: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8528: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e8528u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e852c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e852cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8530: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e8530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e8534: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e8534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e8538: 0x240200ef  addiu       $v0, $zero, 0xEF
    ctx->pc = 0x1e8538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
    // 0x1e853c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e853cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e8540: 0x240200ef  addiu       $v0, $zero, 0xEF
    ctx->pc = 0x1e8540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
    // 0x1e8544: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e8544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e8548: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e854c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e854cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e8550: 0x240300ef  addiu       $v1, $zero, 0xEF
    ctx->pc = 0x1e8550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
    // 0x1e8554: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8558: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e8558u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e855c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e855cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8560: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e8560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e8564: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e8564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e8568: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x1e8568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1e856c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e856cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e8570: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x1e8570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1e8574: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e8574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e8578: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e857c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e857cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e8580: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1e8580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e8584: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e8584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e8588: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1e8588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e858c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e858cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8590: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e8590u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e8594: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8598: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e8598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e859c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e859cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e85a0: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1e85a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1e85a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e85a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e85a8: 0x34029000  ori         $v0, $zero, 0x9000
    ctx->pc = 0x1e85a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x1e85ac: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e85acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e85b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e85b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e85b4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e85b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e85b8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1e85b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e85bc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e85bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e85c0: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1e85c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e85c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e85c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e85c8: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e85c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e85cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e85ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e85d0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e85d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e85d4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e85d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e85d8: 0x3c02a02b  lui         $v0, 0xA02B
    ctx->pc = 0x1e85d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41003 << 16));
    // 0x1e85dc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e85dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1e85e0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e85e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e85e4: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x1e85e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1e85e8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e85e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e85ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e85ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e85f0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e85f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e85f4: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x1e85f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x1e85f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e85f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e85fc: 0x3402e251  ori         $v0, $zero, 0xE251
    ctx->pc = 0x1e85fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57937);
    // 0x1e8600: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e8600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e8604: 0x344226ee  ori         $v0, $v0, 0x26EE
    ctx->pc = 0x1e8604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9966);
    // 0x1e8608: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e8608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e860c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e860cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8610: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e8610u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e8614: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8618: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e8618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e861c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e861cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e8620: 0x24031001  addiu       $v1, $zero, 0x1001
    ctx->pc = 0x1e8620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x1e8624: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8628: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e8628u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e862c: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x1e862cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1e8630: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8634: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e8634u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e8638: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e863c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e863cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e8640: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e8640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e8644: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x1e8644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e8648: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x1e8648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1e864c: 0x312c2  srl         $v0, $v1, 11
    ctx->pc = 0x1e864cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x1e8650: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e8650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e8654: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e8654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e8658: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1e8658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1e865c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e865cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e8660: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8664: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e8664u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e8668: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x1e8668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1e866c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e866cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8670: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e8670u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e8674: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8678: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e8678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e867c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e867cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e8680: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1e8680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e8684: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e8684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e8688: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1e8688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1e868c: 0x34421400  ori         $v0, $v0, 0x1400
    ctx->pc = 0x1e868cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x1e8690: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e8690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e8694: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8698: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e8698u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e869c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e869cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e86a0: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x1e86a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x1e86a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e86a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e86a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e86a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e86ac: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e86acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e86b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e86b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e86b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e86b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e86b8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1e86b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e86bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e86bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e86c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e86c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e86c4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1e86c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e86c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e86c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e86cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e86ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e86d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e86d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e86d4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1e86d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1e86d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e86dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e86dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e86e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e86e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e86e4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1e86e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1e86e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e86ec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e86f0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e86f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e86f4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1e86f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e86f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e86f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e86fc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1e86fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e8700: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e8700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e8704: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8708: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e8708u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e870c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e8710: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e8710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e8714: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1e8714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e8718: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e8718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e871c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8720: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e8720u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e8724: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8728: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e8728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e872c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e872cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e8730: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x1e8730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1e8734: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e8734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e8738: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x1e8738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1e873c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e873cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e8740: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8744: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e8744u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e8748: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1e8748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e874c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e874cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e8750: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1e8750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e8754: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8758: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e8758u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e875c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8760: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e8760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e8764: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e8764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e8768: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e8768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e876c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e876cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8770: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8774: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1e8774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e8778: 0x3c023f5f  lui         $v0, 0x3F5F
    ctx->pc = 0x1e8778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16223 << 16));
    // 0x1e877c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e877cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8780: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8784: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1e8784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e8788: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e8788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e878c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e878cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8790: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8794: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1e8794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1e8798: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e8798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e879c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e879cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e87a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e87a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e87a4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1e87a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1e87a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e87a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e87ac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e87acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e87b0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e87b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e87b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e87b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e87b8: 0x9022fd74  lbu         $v0, -0x28C($at)
    ctx->pc = 0x1e87b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5CFD74u));
    // 0x1e87bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e87bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e87c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1e87c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e87c4: 0x34430062  ori         $v1, $v0, 0x62
    ctx->pc = 0x1e87c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)98);
    // 0x1e87c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e87c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e87cc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e87ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e87d0: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1e87d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e87d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e87d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e87d8: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e87d8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e87dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e87dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e87e0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e87e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e87e4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e87e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e87e8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1e87e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1e87ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e87ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e87f0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e87f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e87f4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e87f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e87f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e87f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e87fc: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e87fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e8800: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8804: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e8804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e8808: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e8808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e880c: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1e880cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1e8810: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e8810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e8814: 0x34029000  ori         $v0, $zero, 0x9000
    ctx->pc = 0x1e8814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x1e8818: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e8818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e881c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e881cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8820: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e8820u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e8824: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1e8824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e8828: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e8828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e882c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1e882cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e8830: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8834: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e8834u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e8838: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e883c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e883cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e8840: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e8840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e8844: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e884c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1e884cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e8850: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8858u;
}
