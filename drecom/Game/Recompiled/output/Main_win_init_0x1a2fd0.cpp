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

// Function: Main_win_init
// Address: 0x1a2fd0 - 0x1a3f88
void Main_win_init_0x1a2fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Main_win_init_0x1a2fd0");
#endif

    switch (ctx->pc) {
        case 0x1a2ff4u: goto label_1a2ff4;
        default: break;
    }

    ctx->pc = 0x1a2fd0u;

    // 0x1a2fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a2fd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a2fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a2fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a2fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2fdc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1a2fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1a2fe0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a2fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2fe4: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x1a2fe4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1a2fe8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1a2fe8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2fec: 0x10000332  b           . + 4 + (0x332 << 2)
    ctx->pc = 0x1A2FECu;
    {
        const bool branch_taken_0x1a2fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2fec) {
            ctx->pc = 0x1A3CB8u;
            goto label_1a3cb8;
        }
    }
    ctx->pc = 0x1A2FF4u;
label_1a2ff4:
    // 0x1a2ff4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1a2ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1a2ff8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a2ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a2ffc: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1a2ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3000: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a3000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a3004: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1a3004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3008: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a3008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a300c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1a300cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3010: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a3010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a3014: 0xac650474  sw          $a1, 0x474($v1)
    ctx->pc = 0x1a3014u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1140), GPR_U32(ctx, 5));
    // 0x1a3018: 0x3c034800  lui         $v1, 0x4800
    ctx->pc = 0x1a3018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18432 << 16));
    // 0x1a301c: 0x34662a02  ori         $a2, $v1, 0x2A02
    ctx->pc = 0x1a301cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10754);
    // 0x1a3020: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a3020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a3024: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1a3024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3028: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a3028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a302c: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x1a302cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3030: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1a3030u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a3034: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3038: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x1a3038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a303c: 0xace60478  sw          $a2, 0x478($a3)
    ctx->pc = 0x1a303cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1144), GPR_U32(ctx, 6));
    // 0x1a3040: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x1a3040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
    // 0x1a3044: 0x34668080  ori         $a2, $v1, 0x8080
    ctx->pc = 0x1a3044u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1a3048: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a3048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a304c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1a304cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3050: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a3050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a3054: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x1a3054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3058: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a3058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a305c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1a305cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3060: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x1a3060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a3064: 0x24e3047c  addiu       $v1, $a3, 0x47C
    ctx->pc = 0x1a3064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1148));
    // 0x1a3068: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1a3068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1a306c: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x1a306cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a3070: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a3070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a3074: 0x24668100  addiu       $a2, $v1, -0x7F00
    ctx->pc = 0x1a3074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934784));
    // 0x1a3078: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x1a3078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1a307c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1a307cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a3080: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x1a3080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1a3084: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1a3084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a3088: 0x24677000  addiu       $a3, $v1, 0x7000
    ctx->pc = 0x1a3088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x1a308c: 0x30e8ffff  andi        $t0, $a3, 0xFFFF
    ctx->pc = 0x1a308cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1a3090: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a3090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a3094: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1a3094u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1a3098: 0x24c58100  addiu       $a1, $a2, -0x7F00
    ctx->pc = 0x1a3098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934784));
    // 0x1a309c: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x1a309cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a30a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1a30a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a30a4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1a30a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1a30a8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1a30a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a30ac: 0x24877900  addiu       $a3, $a0, 0x7900
    ctx->pc = 0x1a30acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x1a30b0: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x1a30b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1a30b4: 0x1033025  or          $a2, $t0, $v1
    ctx->pc = 0x1a30b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1a30b8: 0x104040  sll         $t0, $s0, 1
    ctx->pc = 0x1a30b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a30bc: 0x1102821  addu        $a1, $t0, $s0
    ctx->pc = 0x1a30bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1a30c0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a30c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a30c4: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1a30c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a30c8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a30c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a30cc: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1a30ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a30d0: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x1a30d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1a30d4: 0x24640480  addiu       $a0, $v1, 0x480
    ctx->pc = 0x1a30d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1a30d8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1a30d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1a30dc: 0x3406fff8  ori         $a2, $zero, 0xFFF8
    ctx->pc = 0x1a30dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a30e0: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a30e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a30e4: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1a30e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a30e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a30e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a30ec: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x1a30ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a30f0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a30f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a30f4: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x1a30f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a30f8: 0x1032021  addu        $a0, $t0, $v1
    ctx->pc = 0x1a30f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1a30fc: 0x24830484  addiu       $v1, $a0, 0x484
    ctx->pc = 0x1a30fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1156));
    // 0x1a3100: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1a3100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1a3104: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1a3104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a3108: 0x91001b  divu        $zero, $a0, $s1
    ctx->pc = 0x1a3108u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1a310c: 0x0  nop
    ctx->pc = 0x1a310cu;
    // NOP
    // 0x1a3110: 0x0  nop
    ctx->pc = 0x1a3110u;
    // NOP
    // 0x1a3114: 0x3812  mflo        $a3
    ctx->pc = 0x1a3114u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x1a3118: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x1a3118u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a311c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a311cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a3120: 0x24658100  addiu       $a1, $v1, -0x7F00
    ctx->pc = 0x1a3120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934784));
    // 0x1a3124: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x1a3124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a3128: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a3128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a312c: 0xe32021  addu        $a0, $a3, $v1
    ctx->pc = 0x1a312cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1a3130: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1a3130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a3134: 0x24657000  addiu       $a1, $v1, 0x7000
    ctx->pc = 0x1a3134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x1a3138: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x1a3138u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1a313c: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x1a313cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a3140: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a3140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a3144: 0x24638100  addiu       $v1, $v1, -0x7F00
    ctx->pc = 0x1a3144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934784));
    // 0x1a3148: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a3148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a314c: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x1a314cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a3150: 0x24e4fffe  addiu       $a0, $a3, -0x2
    ctx->pc = 0x1a3150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x1a3154: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1a3154u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a3158: 0x24a37900  addiu       $v1, $a1, 0x7900
    ctx->pc = 0x1a3158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
    // 0x1a315c: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x1a315cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a3160: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x1a3160u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x1a3164: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a3164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a3168: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a3168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a316c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a316cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3170: 0x903821  addu        $a3, $a0, $s0
    ctx->pc = 0x1a3170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a3174: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1a3174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a3178: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a3178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a317c: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x1a317cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a3180: 0x24830488  addiu       $v1, $a0, 0x488
    ctx->pc = 0x1a3180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1160));
    // 0x1a3184: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1a3184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1a3188: 0x3406fff8  ori         $a2, $zero, 0xFFF8
    ctx->pc = 0x1a3188u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a318c: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1a318cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a3190: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x1a3190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a3194: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a3194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3198: 0x703821  addu        $a3, $v1, $s0
    ctx->pc = 0x1a3198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a319c: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1a319cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a31a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a31a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a31a4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1a31a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a31a8: 0x24a4048c  addiu       $a0, $a1, 0x48C
    ctx->pc = 0x1a31a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1164));
    // 0x1a31ac: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1a31acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1a31b0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1a31b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a31b4: 0x71001b  divu        $zero, $v1, $s1
    ctx->pc = 0x1a31b4u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1a31b8: 0x0  nop
    ctx->pc = 0x1a31b8u;
    // NOP
    // 0x1a31bc: 0x0  nop
    ctx->pc = 0x1a31bcu;
    // NOP
    // 0x1a31c0: 0x3012  mflo        $a2
    ctx->pc = 0x1a31c0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1a31c4: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x1a31c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a31c8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a31c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a31cc: 0x24648100  addiu       $a0, $v1, -0x7F00
    ctx->pc = 0x1a31ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934784));
    // 0x1a31d0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1a31d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a31d4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1a31d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a31d8: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1a31d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a31dc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1a31dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a31e0: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x1a31e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x1a31e4: 0x3068ffff  andi        $t0, $v1, 0xFFFF
    ctx->pc = 0x1a31e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a31e8: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x1a31e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a31ec: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a31ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a31f0: 0x24638100  addiu       $v1, $v1, -0x7F00
    ctx->pc = 0x1a31f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934784));
    // 0x1a31f4: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x1a31f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a31f8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1a31f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a31fc: 0xd1001b  divu        $zero, $a2, $s1
    ctx->pc = 0x1a31fcu;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x1a3200: 0x0  nop
    ctx->pc = 0x1a3200u;
    // NOP
    // 0x1a3204: 0x0  nop
    ctx->pc = 0x1a3204u;
    // NOP
    // 0x1a3208: 0x2012  mflo        $a0
    ctx->pc = 0x1a3208u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1a320c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1a320cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1a3210: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x1a3210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a3214: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a3214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a3218: 0x24647900  addiu       $a0, $v1, 0x7900
    ctx->pc = 0x1a3218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x1a321c: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x1a321cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1a3220: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1a3220u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1a3224: 0x103840  sll         $a3, $s0, 1
    ctx->pc = 0x1a3224u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a3228: 0xf03021  addu        $a2, $a3, $s0
    ctx->pc = 0x1a3228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x1a322c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1a322cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a3230: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x1a3230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a3234: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a3234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3238: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a3238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a323c: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x1a323cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a3240: 0x24830490  addiu       $v1, $a0, 0x490
    ctx->pc = 0x1a3240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
    // 0x1a3244: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x1a3244u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x1a3248: 0x3408fff8  ori         $t0, $zero, 0xFFF8
    ctx->pc = 0x1a3248u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a324c: 0x103840  sll         $a3, $s0, 1
    ctx->pc = 0x1a324cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a3250: 0xf01821  addu        $v1, $a3, $s0
    ctx->pc = 0x1a3250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x1a3254: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a3254u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3258: 0xd02821  addu        $a1, $a2, $s0
    ctx->pc = 0x1a3258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a325c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a325cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a3260: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1a3260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3264: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a3264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a3268: 0x24630494  addiu       $v1, $v1, 0x494
    ctx->pc = 0x1a3268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1172));
    // 0x1a326c: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x1a326cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x1a3270: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x1a3270u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a3274: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1a3274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1a3278: 0x24838100  addiu       $v1, $a0, -0x7F00
    ctx->pc = 0x1a3278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934784));
    // 0x1a327c: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x1a327cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a3280: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1a3280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a3284: 0xb1001b  divu        $zero, $a1, $s1
    ctx->pc = 0x1a3284u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x1a3288: 0x0  nop
    ctx->pc = 0x1a3288u;
    // NOP
    // 0x1a328c: 0x0  nop
    ctx->pc = 0x1a328cu;
    // NOP
    // 0x1a3290: 0x1812  mflo        $v1
    ctx->pc = 0x1a3290u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1a3294: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x1a3294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1a3298: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a3298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a329c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a329cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a32a0: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x1a32a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x1a32a4: 0x33400  sll         $a2, $v1, 16
    ctx->pc = 0x1a32a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a32a8: 0x1040c0  sll         $t0, $s0, 3
    ctx->pc = 0x1a32a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a32ac: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1a32acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1a32b0: 0x24858100  addiu       $a1, $a0, -0x7F00
    ctx->pc = 0x1a32b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934784));
    // 0x1a32b4: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x1a32b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1a32b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a32b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a32bc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1a32bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1a32c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a32c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a32c4: 0x24647000  addiu       $a0, $v1, 0x7000
    ctx->pc = 0x1a32c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x1a32c8: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1a32c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1a32cc: 0x663825  or          $a3, $v1, $a2
    ctx->pc = 0x1a32ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a32d0: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a32d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a32d4: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x1a32d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a32d8: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1a32d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a32dc: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x1a32dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1a32e0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a32e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a32e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a32e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a32e8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a32e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a32ec: 0x24830498  addiu       $v1, $a0, 0x498
    ctx->pc = 0x1a32ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1176));
    // 0x1a32f0: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1a32f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1a32f4: 0x3407fff8  ori         $a3, $zero, 0xFFF8
    ctx->pc = 0x1a32f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a32f8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a32f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a32fc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a32fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3300: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a3300u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3304: 0xd02821  addu        $a1, $a2, $s0
    ctx->pc = 0x1a3304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a3308: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1a3308u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a330c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a330cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3310: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a3310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a3314: 0x2463049c  addiu       $v1, $v1, 0x49C
    ctx->pc = 0x1a3314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1180));
    // 0x1a3318: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1a3318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1a331c: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x1a331cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a3320: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a3320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a3324: 0x24638100  addiu       $v1, $v1, -0x7F00
    ctx->pc = 0x1a3324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934784));
    // 0x1a3328: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x1a3328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a332c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1a332cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a3330: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1a3330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1a3334: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1a3334u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a3338: 0x24837000  addiu       $v1, $a0, 0x7000
    ctx->pc = 0x1a3338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x1a333c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1a333cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a3340: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x1a3340u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a3344: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a3344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a3348: 0x24638100  addiu       $v1, $v1, -0x7F00
    ctx->pc = 0x1a3348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934784));
    // 0x1a334c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a334cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a3350: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1a3350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a3354: 0x24c4fffe  addiu       $a0, $a2, -0x2
    ctx->pc = 0x1a3354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x1a3358: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x1a3358u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a335c: 0x24e37900  addiu       $v1, $a3, 0x7900
    ctx->pc = 0x1a335cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
    // 0x1a3360: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1a3360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a3364: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1a3364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1a3368: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a3368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a336c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1a336cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3370: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a3370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a3374: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a3374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3378: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a3378u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a337c: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1a337cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3380: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x1a3380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1a3384: 0x246304a0  addiu       $v1, $v1, 0x4A0
    ctx->pc = 0x1a3384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1184));
    // 0x1a3388: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1a3388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1a338c: 0x3405fff8  ori         $a1, $zero, 0xFFF8
    ctx->pc = 0x1a338cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a3390: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a3390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a3394: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1a3394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3398: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a3398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a339c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a339cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a33a0: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a33a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a33a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1a33a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a33a8: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1a33a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1a33ac: 0x246304a4  addiu       $v1, $v1, 0x4A4
    ctx->pc = 0x1a33acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1188));
    // 0x1a33b0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1a33b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1a33b4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1a33b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1a33b8: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x1a33b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a33bc: 0x901823  subu        $v1, $a0, $s0
    ctx->pc = 0x1a33bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a33c0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a33c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a33c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a33c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a33c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a33c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a33cc: 0xac650510  sw          $a1, 0x510($v1)
    ctx->pc = 0x1a33ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 5));
    // 0x1a33d0: 0x3c075c00  lui         $a3, 0x5C00
    ctx->pc = 0x1a33d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23552 << 16));
    // 0x1a33d4: 0x34e61a06  ori         $a2, $a3, 0x1A06
    ctx->pc = 0x1a33d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)6662);
    // 0x1a33d8: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x1a33d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a33dc: 0xb01823  subu        $v1, $a1, $s0
    ctx->pc = 0x1a33dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1a33e0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a33e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a33e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a33e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a33e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a33e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a33ec: 0xac660514  sw          $a2, 0x514($v1)
    ctx->pc = 0x1a33ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1300), GPR_U32(ctx, 6));
    // 0x1a33f0: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1a33f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1a33f4: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x1a33f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a33f8: 0xb01823  subu        $v1, $a1, $s0
    ctx->pc = 0x1a33f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1a33fc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a33fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3400: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3404: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a3404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a3408: 0x24830518  addiu       $v1, $a0, 0x518
    ctx->pc = 0x1a3408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1304));
    // 0x1a340c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1a340cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1a3410: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x1a3410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a3414: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a3414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a3418: 0x24668100  addiu       $a2, $v1, -0x7F00
    ctx->pc = 0x1a3418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934784));
    // 0x1a341c: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x1a341cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1a3420: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a3420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a3424: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1a3424u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a3428: 0x24837000  addiu       $v1, $a0, 0x7000
    ctx->pc = 0x1a3428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x1a342c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1a342cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a3430: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x1a3430u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a3434: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a3434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a3438: 0x24678100  addiu       $a3, $v1, -0x7F00
    ctx->pc = 0x1a3438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934784));
    // 0x1a343c: 0xe43021  addu        $a2, $a3, $a0
    ctx->pc = 0x1a343cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1a3440: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1a3440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a3444: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a3444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a3448: 0x24647900  addiu       $a0, $v1, 0x7900
    ctx->pc = 0x1a3448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x1a344c: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x1a344cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1a3450: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1a3450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1a3454: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a3454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a3458: 0x702023  subu        $a0, $v1, $s0
    ctx->pc = 0x1a3458u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a345c: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x1a345cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a3460: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3464: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x1a3464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1a3468: 0x2483051c  addiu       $v1, $a0, 0x51C
    ctx->pc = 0x1a3468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1308));
    // 0x1a346c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1a346cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1a3470: 0x3406fff8  ori         $a2, $zero, 0xFFF8
    ctx->pc = 0x1a3470u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a3474: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a3474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a3478: 0x702823  subu        $a1, $v1, $s0
    ctx->pc = 0x1a3478u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a347c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1a347cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a3480: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3484: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x1a3484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a3488: 0x24e80520  addiu       $t0, $a3, 0x520
    ctx->pc = 0x1a3488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1312));
    // 0x1a348c: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x1a348cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x1a3490: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1a3490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a3494: 0x71001b  divu        $zero, $v1, $s1
    ctx->pc = 0x1a3494u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1a3498: 0x0  nop
    ctx->pc = 0x1a3498u;
    // NOP
    // 0x1a349c: 0x0  nop
    ctx->pc = 0x1a349cu;
    // NOP
    // 0x1a34a0: 0x3012  mflo        $a2
    ctx->pc = 0x1a34a0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1a34a4: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x1a34a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a34a8: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1a34a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1a34ac: 0x24838100  addiu       $v1, $a0, -0x7F00
    ctx->pc = 0x1a34acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934784));
    // 0x1a34b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a34b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a34b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a34b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a34b8: 0xc43821  addu        $a3, $a2, $a0
    ctx->pc = 0x1a34b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1a34bc: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x1a34bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1a34c0: 0x24667000  addiu       $a2, $v1, 0x7000
    ctx->pc = 0x1a34c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x1a34c4: 0x30c8ffff  andi        $t0, $a2, 0xFFFF
    ctx->pc = 0x1a34c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1a34c8: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x1a34c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a34cc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a34ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a34d0: 0x24648100  addiu       $a0, $v1, -0x7F00
    ctx->pc = 0x1a34d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934784));
    // 0x1a34d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1a34d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a34d8: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1a34d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a34dc: 0xf1001b  divu        $zero, $a3, $s1
    ctx->pc = 0x1a34dcu;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x1a34e0: 0x0  nop
    ctx->pc = 0x1a34e0u;
    // NOP
    // 0x1a34e4: 0x0  nop
    ctx->pc = 0x1a34e4u;
    // NOP
    // 0x1a34e8: 0x1812  mflo        $v1
    ctx->pc = 0x1a34e8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1a34ec: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1a34ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a34f0: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1a34f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a34f4: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1a34f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1a34f8: 0x24647900  addiu       $a0, $v1, 0x7900
    ctx->pc = 0x1a34f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x1a34fc: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x1a34fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1a3500: 0x1032825  or          $a1, $t0, $v1
    ctx->pc = 0x1a3500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1a3504: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a3504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a3508: 0x704023  subu        $t0, $v1, $s0
    ctx->pc = 0x1a3508u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a350c: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x1a350cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a3510: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3514: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a3514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a3518: 0x24870524  addiu       $a3, $a0, 0x524
    ctx->pc = 0x1a3518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1316));
    // 0x1a351c: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1a351cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1a3520: 0x3406fff8  ori         $a2, $zero, 0xFFF8
    ctx->pc = 0x1a3520u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a3524: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a3524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a3528: 0x702823  subu        $a1, $v1, $s0
    ctx->pc = 0x1a3528u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a352c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1a352cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a3530: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3534: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a3534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a3538: 0x24830528  addiu       $v1, $a0, 0x528
    ctx->pc = 0x1a3538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1320));
    // 0x1a353c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1a353cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1a3540: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1a3540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1a3544: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x1a3544u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a3548: 0xd02021  addu        $a0, $a2, $s0
    ctx->pc = 0x1a3548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a354c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a354cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a3550: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a3550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3554: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a3554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3558: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1a3558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a355c: 0xe32021  addu        $a0, $a3, $v1
    ctx->pc = 0x1a355cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1a3560: 0xac850184  sw          $a1, 0x184($a0)
    ctx->pc = 0x1a3560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 388), GPR_U32(ctx, 5));
    // 0x1a3564: 0x3c034800  lui         $v1, 0x4800
    ctx->pc = 0x1a3564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18432 << 16));
    // 0x1a3568: 0x34652a02  ori         $a1, $v1, 0x2A02
    ctx->pc = 0x1a3568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10754);
    // 0x1a356c: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1a356cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a3570: 0x903021  addu        $a2, $a0, $s0
    ctx->pc = 0x1a3570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a3574: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1a3574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a3578: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a3578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a357c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a357cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3580: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1a3580u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3584: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x1a3584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1a3588: 0xac650188  sw          $a1, 0x188($v1)
    ctx->pc = 0x1a3588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 392), GPR_U32(ctx, 5));
    // 0x1a358c: 0x3c04ff40  lui         $a0, 0xFF40
    ctx->pc = 0x1a358cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65344 << 16));
    // 0x1a3590: 0x34854040  ori         $a1, $a0, 0x4040
    ctx->pc = 0x1a3590u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16448);
    // 0x1a3594: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a3594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a3598: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x1a3598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a359c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1a359cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a35a0: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x1a35a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a35a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a35a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a35a8: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1a35a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a35ac: 0xe32021  addu        $a0, $a3, $v1
    ctx->pc = 0x1a35acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1a35b0: 0x2483018c  addiu       $v1, $a0, 0x18C
    ctx->pc = 0x1a35b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 396));
    // 0x1a35b4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1a35b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1a35b8: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x1a35b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a35bc: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1a35bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1a35c0: 0x24838120  addiu       $v1, $a0, -0x7EE0
    ctx->pc = 0x1a35c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934816));
    // 0x1a35c4: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1a35c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a35c8: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x1a35c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a35cc: 0x24a3fffe  addiu       $v1, $a1, -0x2
    ctx->pc = 0x1a35ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x1a35d0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1a35d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a35d4: 0x24837900  addiu       $v1, $a0, 0x7900
    ctx->pc = 0x1a35d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x1a35d8: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x1a35d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a35dc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1a35dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a35e0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a35e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a35e4: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x1a35e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1a35e8: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x1a35e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a35ec: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x1a35ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a35f0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1a35f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a35f4: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x1a35f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x1a35f8: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x1a35f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a35fc: 0xe53025  or          $a2, $a3, $a1
    ctx->pc = 0x1a35fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x1a3600: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1a3600u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a3604: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x1a3604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a3608: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1a3608u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a360c: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x1a360cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1a3610: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a3610u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3614: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3618: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x1a3618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a361c: 0x25070190  addiu       $a3, $t0, 0x190
    ctx->pc = 0x1a361cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 400));
    // 0x1a3620: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x1a3620u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x1a3624: 0x3406fff8  ori         $a2, $zero, 0xFFF8
    ctx->pc = 0x1a3624u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a3628: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1a3628u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a362c: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x1a362cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a3630: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a3630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3634: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x1a3634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3638: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1a3638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a363c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a363cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3640: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x1a3640u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a3644: 0x25070194  addiu       $a3, $t0, 0x194
    ctx->pc = 0x1a3644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 404));
    // 0x1a3648: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x1a3648u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x1a364c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a364cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a3650: 0x71001b  divu        $zero, $v1, $s1
    ctx->pc = 0x1a3650u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1a3654: 0x0  nop
    ctx->pc = 0x1a3654u;
    // NOP
    // 0x1a3658: 0x0  nop
    ctx->pc = 0x1a3658u;
    // NOP
    // 0x1a365c: 0x3012  mflo        $a2
    ctx->pc = 0x1a365cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1a3660: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x1a3660u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a3664: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a3664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a3668: 0x24648120  addiu       $a0, $v1, -0x7EE0
    ctx->pc = 0x1a3668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1a366c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1a366cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a3670: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a3670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a3674: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x1a3674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a3678: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1a3678u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1a367c: 0x24837000  addiu       $v1, $a0, 0x7000
    ctx->pc = 0x1a367cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x1a3680: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x1a3680u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a3684: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x1a3684u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a3688: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a3688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a368c: 0x24648120  addiu       $a0, $v1, -0x7EE0
    ctx->pc = 0x1a368cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1a3690: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1a3690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a3694: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1a3694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a3698: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1a3698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1a369c: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x1a369cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a36a0: 0x24c87900  addiu       $t0, $a2, 0x7900
    ctx->pc = 0x1a36a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x1a36a4: 0x82400  sll         $a0, $t0, 16
    ctx->pc = 0x1a36a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1a36a8: 0xe42825  or          $a1, $a3, $a0
    ctx->pc = 0x1a36a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x1a36ac: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a36acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a36b0: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1a36b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a36b4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a36b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a36b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a36b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a36bc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a36bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a36c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a36c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a36c4: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x1a36c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a36c8: 0x24e30198  addiu       $v1, $a3, 0x198
    ctx->pc = 0x1a36c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 408));
    // 0x1a36cc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1a36ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1a36d0: 0x3406fff8  ori         $a2, $zero, 0xFFF8
    ctx->pc = 0x1a36d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a36d4: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x1a36d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a36d8: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x1a36d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1a36dc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a36dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a36e0: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x1a36e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a36e4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a36e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a36e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a36e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a36ec: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x1a36ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a36f0: 0x24e3019c  addiu       $v1, $a3, 0x19C
    ctx->pc = 0x1a36f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 412));
    // 0x1a36f4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1a36f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1a36f8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a36f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a36fc: 0x71001b  divu        $zero, $v1, $s1
    ctx->pc = 0x1a36fcu;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1a3700: 0x0  nop
    ctx->pc = 0x1a3700u;
    // NOP
    // 0x1a3704: 0x0  nop
    ctx->pc = 0x1a3704u;
    // NOP
    // 0x1a3708: 0x3012  mflo        $a2
    ctx->pc = 0x1a3708u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1a370c: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x1a370cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a3710: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1a3710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1a3714: 0x24838120  addiu       $v1, $a0, -0x7EE0
    ctx->pc = 0x1a3714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934816));
    // 0x1a3718: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a3718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a371c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a371cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a3720: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x1a3720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a3724: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1a3724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a3728: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x1a3728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x1a372c: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x1a372cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a3730: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x1a3730u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a3734: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a3734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a3738: 0x24648120  addiu       $a0, $v1, -0x7EE0
    ctx->pc = 0x1a3738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1a373c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1a373cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a3740: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1a3740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a3744: 0xb1001b  divu        $zero, $a1, $s1
    ctx->pc = 0x1a3744u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x1a3748: 0x0  nop
    ctx->pc = 0x1a3748u;
    // NOP
    // 0x1a374c: 0x0  nop
    ctx->pc = 0x1a374cu;
    // NOP
    // 0x1a3750: 0x2012  mflo        $a0
    ctx->pc = 0x1a3750u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1a3754: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1a3754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a3758: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a3758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a375c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a375cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a3760: 0x24667900  addiu       $a2, $v1, 0x7900
    ctx->pc = 0x1a3760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x1a3764: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x1a3764u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1a3768: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x1a3768u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x1a376c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a376cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a3770: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a3770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3774: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1a3774u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3778: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x1a3778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1a377c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a377cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3780: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3784: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a3784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a3788: 0x246601a0  addiu       $a2, $v1, 0x1A0
    ctx->pc = 0x1a3788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x1a378c: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1a378cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x1a3790: 0x3407fff8  ori         $a3, $zero, 0xFFF8
    ctx->pc = 0x1a3790u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a3794: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a3794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a3798: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a3798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a379c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1a379cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a37a0: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x1a37a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1a37a4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a37a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a37a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a37a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a37ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a37acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a37b0: 0x246601a4  addiu       $a2, $v1, 0x1A4
    ctx->pc = 0x1a37b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 420));
    // 0x1a37b4: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1a37b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x1a37b8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1a37b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a37bc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a37bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a37c0: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x1a37c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1a37c4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1a37c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a37c8: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1a37c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a37cc: 0x91001b  divu        $zero, $a0, $s1
    ctx->pc = 0x1a37ccu;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1a37d0: 0x0  nop
    ctx->pc = 0x1a37d0u;
    // NOP
    // 0x1a37d4: 0x0  nop
    ctx->pc = 0x1a37d4u;
    // NOP
    // 0x1a37d8: 0x1812  mflo        $v1
    ctx->pc = 0x1a37d8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1a37dc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1a37dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a37e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a37e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a37e4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a37e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a37e8: 0x24667900  addiu       $a2, $v1, 0x7900
    ctx->pc = 0x1a37e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x1a37ec: 0x63c00  sll         $a3, $a2, 16
    ctx->pc = 0x1a37ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1a37f0: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x1a37f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a37f4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a37f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a37f8: 0x24648120  addiu       $a0, $v1, -0x7EE0
    ctx->pc = 0x1a37f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1a37fc: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1a37fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a3800: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a3800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a3804: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x1a3804u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a3808: 0x24c57000  addiu       $a1, $a2, 0x7000
    ctx->pc = 0x1a3808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x1a380c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1a380cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1a3810: 0x672025  or          $a0, $v1, $a3
    ctx->pc = 0x1a3810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1a3814: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a3814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a3818: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a3818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a381c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a381cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3820: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a3820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3824: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a3824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3828: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a3828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a382c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1a382cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a3830: 0x246301a8  addiu       $v1, $v1, 0x1A8
    ctx->pc = 0x1a3830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 424));
    // 0x1a3834: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3838: 0x3406fff8  ori         $a2, $zero, 0xFFF8
    ctx->pc = 0x1a3838u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a383c: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x1a383cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a3840: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x1a3840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1a3844: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a3844u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3848: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x1a3848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a384c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a384cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3850: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3854: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a3854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a3858: 0x248301ac  addiu       $v1, $a0, 0x1AC
    ctx->pc = 0x1a3858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 428));
    // 0x1a385c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1a385cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1a3860: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x1a3860u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a3864: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a3864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a3868: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x1a3868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1a386c: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x1a386cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a3870: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1a3870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a3874: 0x2465fffe  addiu       $a1, $v1, -0x2
    ctx->pc = 0x1a3874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1a3878: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1a3878u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a387c: 0x24837900  addiu       $v1, $a0, 0x7900
    ctx->pc = 0x1a387cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x1a3880: 0x33c00  sll         $a3, $v1, 16
    ctx->pc = 0x1a3880u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a3884: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x1a3884u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a3888: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a3888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a388c: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x1a388cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1a3890: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x1a3890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a3894: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a3894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a3898: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1a3898u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a389c: 0x24a37000  addiu       $v1, $a1, 0x7000
    ctx->pc = 0x1a389cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
    // 0x1a38a0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a38a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a38a4: 0x873825  or          $a3, $a0, $a3
    ctx->pc = 0x1a38a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x1a38a8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a38a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a38ac: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1a38acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a38b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a38b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a38b4: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x1a38b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a38b8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1a38b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a38bc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a38bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a38c0: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x1a38c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a38c4: 0x248301b0  addiu       $v1, $a0, 0x1B0
    ctx->pc = 0x1a38c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x1a38c8: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1a38c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1a38cc: 0x3407fff8  ori         $a3, $zero, 0xFFF8
    ctx->pc = 0x1a38ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a38d0: 0x104040  sll         $t0, $s0, 1
    ctx->pc = 0x1a38d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a38d4: 0x1101821  addu        $v1, $t0, $s0
    ctx->pc = 0x1a38d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1a38d8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a38d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a38dc: 0xd02821  addu        $a1, $a2, $s0
    ctx->pc = 0x1a38dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a38e0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1a38e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a38e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a38e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a38e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a38e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a38ec: 0x246401b4  addiu       $a0, $v1, 0x1B4
    ctx->pc = 0x1a38ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 436));
    // 0x1a38f0: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x1a38f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x1a38f4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x1a38f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x1a38f8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a38f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a38fc: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x1a38fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3900: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x1a3900u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a3904: 0x1102821  addu        $a1, $t0, $s0
    ctx->pc = 0x1a3904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1a3908: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a3908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a390c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1a390cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3910: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1a3910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a3914: 0xac870220  sw          $a3, 0x220($a0)
    ctx->pc = 0x1a3914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 544), GPR_U32(ctx, 7));
    // 0x1a3918: 0x3c034800  lui         $v1, 0x4800
    ctx->pc = 0x1a3918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18432 << 16));
    // 0x1a391c: 0x34672a02  ori         $a3, $v1, 0x2A02
    ctx->pc = 0x1a391cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10754);
    // 0x1a3920: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1a3920u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a3924: 0x903021  addu        $a2, $a0, $s0
    ctx->pc = 0x1a3924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a3928: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1a3928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a392c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1a392cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3930: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a3930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a3934: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a3934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3938: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1a3938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a393c: 0xac670224  sw          $a3, 0x224($v1)
    ctx->pc = 0x1a393cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 7));
    // 0x1a3940: 0x3c04ff40  lui         $a0, 0xFF40
    ctx->pc = 0x1a3940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65344 << 16));
    // 0x1a3944: 0x34884040  ori         $t0, $a0, 0x4040
    ctx->pc = 0x1a3944u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16448);
    // 0x1a3948: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a3948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a394c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1a394cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3950: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x1a3950u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a3954: 0xf03021  addu        $a2, $a3, $s0
    ctx->pc = 0x1a3954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x1a3958: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1a3958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a395c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a395cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3960: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x1a3960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a3964: 0x24830228  addiu       $v1, $a0, 0x228
    ctx->pc = 0x1a3964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    // 0x1a3968: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x1a3968u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x1a396c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1a396cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a3970: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a3970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a3974: 0x24658120  addiu       $a1, $v1, -0x7EE0
    ctx->pc = 0x1a3974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1a3978: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x1a3978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a397c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1a397cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a3980: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1a3980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1a3984: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a3984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a3988: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x1a3988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x1a398c: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x1a398cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a3990: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1a3990u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a3994: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1a3994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1a3998: 0x24a38120  addiu       $v1, $a1, -0x7EE0
    ctx->pc = 0x1a3998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934816));
    // 0x1a399c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a399cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a39a0: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x1a39a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a39a4: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1a39a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1a39a8: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x1a39a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x1a39ac: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x1a39acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a39b0: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x1a39b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x1a39b4: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a39b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a39b8: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x1a39b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a39bc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1a39bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a39c0: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x1a39c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a39c4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a39c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a39c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1a39c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a39cc: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1a39ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1a39d0: 0x2463022c  addiu       $v1, $v1, 0x22C
    ctx->pc = 0x1a39d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 556));
    // 0x1a39d4: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1a39d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1a39d8: 0x3407fff8  ori         $a3, $zero, 0xFFF8
    ctx->pc = 0x1a39d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a39dc: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1a39dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a39e0: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x1a39e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a39e4: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1a39e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a39e8: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x1a39e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1a39ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a39ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a39f0: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x1a39f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a39f4: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x1a39f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a39f8: 0x24a30230  addiu       $v1, $a1, 0x230
    ctx->pc = 0x1a39f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 560));
    // 0x1a39fc: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1a39fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1a3a00: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1a3a00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a3a04: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a3a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a3a08: 0x24658120  addiu       $a1, $v1, -0x7EE0
    ctx->pc = 0x1a3a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1a3a0c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1a3a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a3a10: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1a3a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a3a14: 0x71001b  divu        $zero, $v1, $s1
    ctx->pc = 0x1a3a14u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1a3a18: 0x0  nop
    ctx->pc = 0x1a3a18u;
    // NOP
    // 0x1a3a1c: 0x0  nop
    ctx->pc = 0x1a3a1cu;
    // NOP
    // 0x1a3a20: 0x1812  mflo        $v1
    ctx->pc = 0x1a3a20u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1a3a24: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x1a3a24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a3a28: 0x682021  addu        $a0, $v1, $t0
    ctx->pc = 0x1a3a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1a3a2c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1a3a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a3a30: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x1a3a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x1a3a34: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x1a3a34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a3a38: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x1a3a38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a3a3c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1a3a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1a3a40: 0x24838120  addiu       $v1, $a0, -0x7EE0
    ctx->pc = 0x1a3a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934816));
    // 0x1a3a44: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1a3a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a3a48: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1a3a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a3a4c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1a3a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a3a50: 0x24837900  addiu       $v1, $a0, 0x7900
    ctx->pc = 0x1a3a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x1a3a54: 0x34400  sll         $t0, $v1, 16
    ctx->pc = 0x1a3a54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a3a58: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1a3a58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1a3a5c: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x1a3a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a3a60: 0xd02021  addu        $a0, $a2, $s0
    ctx->pc = 0x1a3a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a3a64: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a3a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a3a68: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a3a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3a6c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1a3a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3a70: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1a3a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3a74: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1a3a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a3a78: 0x24680234  addiu       $t0, $v1, 0x234
    ctx->pc = 0x1a3a78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 564));
    // 0x1a3a7c: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x1a3a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x1a3a80: 0x3407fff8  ori         $a3, $zero, 0xFFF8
    ctx->pc = 0x1a3a80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a3a84: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a3a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a3a88: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x1a3a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3a8c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1a3a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a3a90: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x1a3a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1a3a94: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a3a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3a98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3a9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a3a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a3aa0: 0x24650238  addiu       $a1, $v1, 0x238
    ctx->pc = 0x1a3aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 568));
    // 0x1a3aa4: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x1a3aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x1a3aa8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1a3aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a3aac: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a3aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a3ab0: 0x24678120  addiu       $a3, $v1, -0x7EE0
    ctx->pc = 0x1a3ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1a3ab4: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x1a3ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1a3ab8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1a3ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a3abc: 0x71001b  divu        $zero, $v1, $s1
    ctx->pc = 0x1a3abcu;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1a3ac0: 0x0  nop
    ctx->pc = 0x1a3ac0u;
    // NOP
    // 0x1a3ac4: 0x0  nop
    ctx->pc = 0x1a3ac4u;
    // NOP
    // 0x1a3ac8: 0x2012  mflo        $a0
    ctx->pc = 0x1a3ac8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1a3acc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1a3accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a3ad0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a3ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a3ad4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a3ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a3ad8: 0x24667000  addiu       $a2, $v1, 0x7000
    ctx->pc = 0x1a3ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x1a3adc: 0x30c8ffff  andi        $t0, $a2, 0xFFFF
    ctx->pc = 0x1a3adcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1a3ae0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1a3ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a3ae4: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1a3ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1a3ae8: 0x24a38120  addiu       $v1, $a1, -0x7EE0
    ctx->pc = 0x1a3ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934816));
    // 0x1a3aec: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a3aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a3af0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a3af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a3af4: 0x71001b  divu        $zero, $v1, $s1
    ctx->pc = 0x1a3af4u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1a3af8: 0x0  nop
    ctx->pc = 0x1a3af8u;
    // NOP
    // 0x1a3afc: 0x0  nop
    ctx->pc = 0x1a3afcu;
    // NOP
    // 0x1a3b00: 0x1812  mflo        $v1
    ctx->pc = 0x1a3b00u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1a3b04: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1a3b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a3b08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a3b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a3b0c: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x1a3b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a3b10: 0x24e37900  addiu       $v1, $a3, 0x7900
    ctx->pc = 0x1a3b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
    // 0x1a3b14: 0x33400  sll         $a2, $v1, 16
    ctx->pc = 0x1a3b14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a3b18: 0x1062825  or          $a1, $t0, $a2
    ctx->pc = 0x1a3b18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x1a3b1c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a3b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a3b20: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1a3b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3b24: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a3b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a3b28: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1a3b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3b2c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a3b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a3b30: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1a3b30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3b34: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1a3b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1a3b38: 0x2463023c  addiu       $v1, $v1, 0x23C
    ctx->pc = 0x1a3b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 572));
    // 0x1a3b3c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1a3b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1a3b40: 0x3406fff8  ori         $a2, $zero, 0xFFF8
    ctx->pc = 0x1a3b40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a3b44: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x1a3b44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a3b48: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x1a3b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1a3b4c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a3b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a3b50: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a3b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3b54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a3b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3b58: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1a3b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3b5c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a3b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a3b60: 0x24630240  addiu       $v1, $v1, 0x240
    ctx->pc = 0x1a3b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x1a3b64: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1a3b64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1a3b68: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x1a3b68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a3b6c: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1a3b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1a3b70: 0x24a38120  addiu       $v1, $a1, -0x7EE0
    ctx->pc = 0x1a3b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934816));
    // 0x1a3b74: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x1a3b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1a3b78: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a3b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a3b7c: 0x71001b  divu        $zero, $v1, $s1
    ctx->pc = 0x1a3b7cu;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1a3b80: 0x0  nop
    ctx->pc = 0x1a3b80u;
    // NOP
    // 0x1a3b84: 0x0  nop
    ctx->pc = 0x1a3b84u;
    // NOP
    // 0x1a3b88: 0x2812  mflo        $a1
    ctx->pc = 0x1a3b88u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1a3b8c: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1a3b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a3b90: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1a3b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a3b94: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a3b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a3b98: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x1a3b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x1a3b9c: 0x33400  sll         $a2, $v1, 16
    ctx->pc = 0x1a3b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a3ba0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1a3ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a3ba4: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x1a3ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x1a3ba8: 0x24e38120  addiu       $v1, $a3, -0x7EE0
    ctx->pc = 0x1a3ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294934816));
    // 0x1a3bac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a3bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a3bb0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1a3bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a3bb4: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1a3bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1a3bb8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1a3bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a3bbc: 0x24837000  addiu       $v1, $a0, 0x7000
    ctx->pc = 0x1a3bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x1a3bc0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a3bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a3bc4: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x1a3bc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a3bc8: 0x103840  sll         $a3, $s0, 1
    ctx->pc = 0x1a3bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a3bcc: 0xf01821  addu        $v1, $a3, $s0
    ctx->pc = 0x1a3bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x1a3bd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a3bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3bd4: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x1a3bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3bd8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a3bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a3bdc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1a3bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3be0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a3be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a3be4: 0x24630244  addiu       $v1, $v1, 0x244
    ctx->pc = 0x1a3be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 580));
    // 0x1a3be8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1a3be8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1a3bec: 0x3406fff8  ori         $a2, $zero, 0xFFF8
    ctx->pc = 0x1a3becu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a3bf0: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1a3bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a3bf4: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x1a3bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a3bf8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a3bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3bfc: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x1a3bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3c00: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1a3c00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a3c04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3c08: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a3c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a3c0c: 0x24830248  addiu       $v1, $a0, 0x248
    ctx->pc = 0x1a3c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 584));
    // 0x1a3c10: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1a3c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1a3c14: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1a3c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a3c18: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1a3c18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1a3c1c: 0x24c78120  addiu       $a3, $a2, -0x7EE0
    ctx->pc = 0x1a3c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934816));
    // 0x1a3c20: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x1a3c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1a3c24: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1a3c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a3c28: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1a3c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a3c2c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1a3c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a3c30: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x1a3c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x1a3c34: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x1a3c34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a3c38: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x1a3c38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a3c3c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a3c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a3c40: 0x24648120  addiu       $a0, $v1, -0x7EE0
    ctx->pc = 0x1a3c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1a3c44: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1a3c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a3c48: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1a3c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a3c4c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a3c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a3c50: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x1a3c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x1a3c54: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1a3c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a3c58: 0xc32825  or          $a1, $a2, $v1
    ctx->pc = 0x1a3c58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1a3c5c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a3c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a3c60: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a3c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3c64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a3c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3c68: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a3c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3c6c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a3c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3c70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3c74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a3c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a3c78: 0x2463024c  addiu       $v1, $v1, 0x24C
    ctx->pc = 0x1a3c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 588));
    // 0x1a3c7c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1a3c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1a3c80: 0x3406fff8  ori         $a2, $zero, 0xFFF8
    ctx->pc = 0x1a3c80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a3c84: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x1a3c84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a3c88: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x1a3c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1a3c8c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a3c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3c90: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x1a3c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a3c94: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a3c94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3c98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3c9c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a3c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a3ca0: 0x24830250  addiu       $v1, $a0, 0x250
    ctx->pc = 0x1a3ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    // 0x1a3ca4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1a3ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1a3ca8: 0x113040  sll         $a2, $s1, 1
    ctx->pc = 0x1a3ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1a3cac: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x1a3cacu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1a3cb0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1a3cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a3cb4: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1a3cb4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1a3cb8:
    // 0x1a3cb8: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x1a3cb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a3cbc: 0x1460fccd  bnez        $v1, . + 4 + (-0x333 << 2)
    ctx->pc = 0x1A3CBCu;
    {
        const bool branch_taken_0x1a3cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3cbc) {
            ctx->pc = 0x1A2FF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2ff4;
        }
    }
    ctx->pc = 0x1A3CC4u;
    // 0x1a3cc4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a3cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a3cc8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3ccc: 0xac6405e8  sw          $a0, 0x5E8($v1)
    ctx->pc = 0x1a3cccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1512), GPR_U32(ctx, 4));
    // 0x1a3cd0: 0x3c045c00  lui         $a0, 0x5C00
    ctx->pc = 0x1a3cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23552 << 16));
    // 0x1a3cd4: 0x34851a06  ori         $a1, $a0, 0x1A06
    ctx->pc = 0x1a3cd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6662);
    // 0x1a3cd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3cdc: 0xac6505ec  sw          $a1, 0x5EC($v1)
    ctx->pc = 0x1a3cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1516), GPR_U32(ctx, 5));
    // 0x1a3ce0: 0x3c06ff60  lui         $a2, 0xFF60
    ctx->pc = 0x1a3ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65376 << 16));
    // 0x1a3ce4: 0x34c76060  ori         $a3, $a2, 0x6060
    ctx->pc = 0x1a3ce4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24672);
    // 0x1a3ce8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3cec: 0x246305f0  addiu       $v1, $v1, 0x5F0
    ctx->pc = 0x1a3cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1520));
    // 0x1a3cf0: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1a3cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1a3cf4: 0x3c037948  lui         $v1, 0x7948
    ctx->pc = 0x1a3cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31048 << 16));
    // 0x1a3cf8: 0x346471a0  ori         $a0, $v1, 0x71A0
    ctx->pc = 0x1a3cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)29088);
    // 0x1a3cfc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a3cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3d00: 0x24a305f4  addiu       $v1, $a1, 0x5F4
    ctx->pc = 0x1a3d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1524));
    // 0x1a3d04: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3d04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3d08: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x1a3d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a3d0c: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1a3d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3d10: 0x24e305f8  addiu       $v1, $a3, 0x5F8
    ctx->pc = 0x1a3d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1528));
    // 0x1a3d14: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3d14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3d18: 0x3c037b38  lui         $v1, 0x7B38
    ctx->pc = 0x1a3d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31544 << 16));
    // 0x1a3d1c: 0x34648690  ori         $a0, $v1, 0x8690
    ctx->pc = 0x1a3d1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34448);
    // 0x1a3d20: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x1a3d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3d24: 0x24c305fc  addiu       $v1, $a2, 0x5FC
    ctx->pc = 0x1a3d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1532));
    // 0x1a3d28: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3d2c: 0x3405fff8  ori         $a1, $zero, 0xFFF8
    ctx->pc = 0x1a3d2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a3d30: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1a3d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3d34: 0x24830600  addiu       $v1, $a0, 0x600
    ctx->pc = 0x1a3d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1536));
    // 0x1a3d38: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1a3d38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1a3d3c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x1a3d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x1a3d40: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x1a3d40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3d44: 0xad070604  sw          $a3, 0x604($t0)
    ctx->pc = 0x1a3d44u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1540), GPR_U32(ctx, 7));
    // 0x1a3d48: 0x3c064800  lui         $a2, 0x4800
    ctx->pc = 0x1a3d48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18432 << 16));
    // 0x1a3d4c: 0x34c32a02  ori         $v1, $a2, 0x2A02
    ctx->pc = 0x1a3d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10754);
    // 0x1a3d50: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a3d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3d54: 0xaca30608  sw          $v1, 0x608($a1)
    ctx->pc = 0x1a3d54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1544), GPR_U32(ctx, 3));
    // 0x1a3d58: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a3d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a3d5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3d60: 0x2463060c  addiu       $v1, $v1, 0x60C
    ctx->pc = 0x1a3d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1548));
    // 0x1a3d64: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3d64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3d68: 0x3c077938  lui         $a3, 0x7938
    ctx->pc = 0x1a3d68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)31032 << 16));
    // 0x1a3d6c: 0x34e47190  ori         $a0, $a3, 0x7190
    ctx->pc = 0x1a3d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)29072);
    // 0x1a3d70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3d74: 0x24660610  addiu       $a2, $v1, 0x610
    ctx->pc = 0x1a3d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1552));
    // 0x1a3d78: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1a3d78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1a3d7c: 0x3408fff8  ori         $t0, $zero, 0xFFF8
    ctx->pc = 0x1a3d7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a3d80: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a3d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3d84: 0x24a30614  addiu       $v1, $a1, 0x614
    ctx->pc = 0x1a3d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1556));
    // 0x1a3d88: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x1a3d88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x1a3d8c: 0x3c047938  lui         $a0, 0x7938
    ctx->pc = 0x1a3d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31032 << 16));
    // 0x1a3d90: 0x34848690  ori         $a0, $a0, 0x8690
    ctx->pc = 0x1a3d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34448);
    // 0x1a3d94: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1a3d94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3d98: 0x24e30618  addiu       $v1, $a3, 0x618
    ctx->pc = 0x1a3d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1560));
    // 0x1a3d9c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3da0: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x1a3da0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a3da4: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x1a3da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3da8: 0x24c3061c  addiu       $v1, $a2, 0x61C
    ctx->pc = 0x1a3da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1564));
    // 0x1a3dac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3db0: 0x3c037b38  lui         $v1, 0x7B38
    ctx->pc = 0x1a3db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31544 << 16));
    // 0x1a3db4: 0x34648690  ori         $a0, $v1, 0x8690
    ctx->pc = 0x1a3db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34448);
    // 0x1a3db8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a3db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3dbc: 0x24a30620  addiu       $v1, $a1, 0x620
    ctx->pc = 0x1a3dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1568));
    // 0x1a3dc0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3dc4: 0x3408fff8  ori         $t0, $zero, 0xFFF8
    ctx->pc = 0x1a3dc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a3dc8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1a3dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3dcc: 0x24830624  addiu       $v1, $a0, 0x624
    ctx->pc = 0x1a3dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1572));
    // 0x1a3dd0: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x1a3dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x1a3dd4: 0x3c077b38  lui         $a3, 0x7B38
    ctx->pc = 0x1a3dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)31544 << 16));
    // 0x1a3dd8: 0x34e47190  ori         $a0, $a3, 0x7190
    ctx->pc = 0x1a3dd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)29072);
    // 0x1a3ddc: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x1a3ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3de0: 0x24c30628  addiu       $v1, $a2, 0x628
    ctx->pc = 0x1a3de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1576));
    // 0x1a3de4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3de4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3de8: 0x3405fff8  ori         $a1, $zero, 0xFFF8
    ctx->pc = 0x1a3de8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a3dec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1a3decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3df0: 0x2483062c  addiu       $v1, $a0, 0x62C
    ctx->pc = 0x1a3df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1580));
    // 0x1a3df4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1a3df4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1a3df8: 0x3c037938  lui         $v1, 0x7938
    ctx->pc = 0x1a3df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31032 << 16));
    // 0x1a3dfc: 0x34647190  ori         $a0, $v1, 0x7190
    ctx->pc = 0x1a3dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)29072);
    // 0x1a3e00: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a3e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3e04: 0x24a60630  addiu       $a2, $a1, 0x630
    ctx->pc = 0x1a3e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1584));
    // 0x1a3e08: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1a3e08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1a3e0c: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x1a3e0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a3e10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3e14: 0x24630634  addiu       $v1, $v1, 0x634
    ctx->pc = 0x1a3e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1588));
    // 0x1a3e18: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3e18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3e1c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a3e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a3e20: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1a3e20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3e24: 0xace30638  sw          $v1, 0x638($a3)
    ctx->pc = 0x1a3e24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1592), GPR_U32(ctx, 3));
    // 0x1a3e28: 0x3c055c00  lui         $a1, 0x5C00
    ctx->pc = 0x1a3e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23552 << 16));
    // 0x1a3e2c: 0x34a41a06  ori         $a0, $a1, 0x1A06
    ctx->pc = 0x1a3e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6662);
    // 0x1a3e30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3e34: 0xac64063c  sw          $a0, 0x63C($v1)
    ctx->pc = 0x1a3e34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1596), GPR_U32(ctx, 4));
    // 0x1a3e38: 0x3c06ff60  lui         $a2, 0xFF60
    ctx->pc = 0x1a3e38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65376 << 16));
    // 0x1a3e3c: 0x34c46060  ori         $a0, $a2, 0x6060
    ctx->pc = 0x1a3e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24672);
    // 0x1a3e40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3e44: 0x24630640  addiu       $v1, $v1, 0x640
    ctx->pc = 0x1a3e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1600));
    // 0x1a3e48: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3e48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3e4c: 0x3c077d10  lui         $a3, 0x7D10
    ctx->pc = 0x1a3e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32016 << 16));
    // 0x1a3e50: 0x34e47b10  ori         $a0, $a3, 0x7B10
    ctx->pc = 0x1a3e50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)31504);
    // 0x1a3e54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3e58: 0x24650644  addiu       $a1, $v1, 0x644
    ctx->pc = 0x1a3e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1604));
    // 0x1a3e5c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1a3e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1a3e60: 0x3404fffd  ori         $a0, $zero, 0xFFFD
    ctx->pc = 0x1a3e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x1a3e64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3e68: 0x24660648  addiu       $a2, $v1, 0x648
    ctx->pc = 0x1a3e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1608));
    // 0x1a3e6c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1a3e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1a3e70: 0x3c038400  lui         $v1, 0x8400
    ctx->pc = 0x1a3e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33792 << 16));
    // 0x1a3e74: 0x34648980  ori         $a0, $v1, 0x8980
    ctx->pc = 0x1a3e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35200);
    // 0x1a3e78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3e7c: 0x2467064c  addiu       $a3, $v1, 0x64C
    ctx->pc = 0x1a3e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1612));
    // 0x1a3e80: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1a3e80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1a3e84: 0x3404fffd  ori         $a0, $zero, 0xFFFD
    ctx->pc = 0x1a3e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x1a3e88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3e8c: 0x24650650  addiu       $a1, $v1, 0x650
    ctx->pc = 0x1a3e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1616));
    // 0x1a3e90: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1a3e90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1a3e94: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a3e94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a3e98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3e9c: 0xac640654  sw          $a0, 0x654($v1)
    ctx->pc = 0x1a3e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1620), GPR_U32(ctx, 4));
    // 0x1a3ea0: 0x3c054800  lui         $a1, 0x4800
    ctx->pc = 0x1a3ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18432 << 16));
    // 0x1a3ea4: 0x34a62a02  ori         $a2, $a1, 0x2A02
    ctx->pc = 0x1a3ea4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)10754);
    // 0x1a3ea8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3eac: 0xac660658  sw          $a2, 0x658($v1)
    ctx->pc = 0x1a3eacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1624), GPR_U32(ctx, 6));
    // 0x1a3eb0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a3eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a3eb4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3eb8: 0x2465065c  addiu       $a1, $v1, 0x65C
    ctx->pc = 0x1a3eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1628));
    // 0x1a3ebc: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1a3ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1a3ec0: 0x3c037d00  lui         $v1, 0x7D00
    ctx->pc = 0x1a3ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32000 << 16));
    // 0x1a3ec4: 0x34647b00  ori         $a0, $v1, 0x7B00
    ctx->pc = 0x1a3ec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31488);
    // 0x1a3ec8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3ecc: 0x24680660  addiu       $t0, $v1, 0x660
    ctx->pc = 0x1a3eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1632));
    // 0x1a3ed0: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x1a3ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x1a3ed4: 0x3404fffd  ori         $a0, $zero, 0xFFFD
    ctx->pc = 0x1a3ed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x1a3ed8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3edc: 0x24630664  addiu       $v1, $v1, 0x664
    ctx->pc = 0x1a3edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1636));
    // 0x1a3ee0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3ee4: 0x3c067d00  lui         $a2, 0x7D00
    ctx->pc = 0x1a3ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32000 << 16));
    // 0x1a3ee8: 0x34c78980  ori         $a3, $a2, 0x8980
    ctx->pc = 0x1a3ee8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)35200);
    // 0x1a3eec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1a3eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3ef0: 0x24830668  addiu       $v1, $a0, 0x668
    ctx->pc = 0x1a3ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1640));
    // 0x1a3ef4: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1a3ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1a3ef8: 0x3405fffd  ori         $a1, $zero, 0xFFFD
    ctx->pc = 0x1a3ef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x1a3efc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3f00: 0x2464066c  addiu       $a0, $v1, 0x66C
    ctx->pc = 0x1a3f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1644));
    // 0x1a3f04: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1a3f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1a3f08: 0x3c088400  lui         $t0, 0x8400
    ctx->pc = 0x1a3f08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33792 << 16));
    // 0x1a3f0c: 0x35038980  ori         $v1, $t0, 0x8980
    ctx->pc = 0x1a3f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)35200);
    // 0x1a3f10: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1a3f10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3f14: 0x24e60670  addiu       $a2, $a3, 0x670
    ctx->pc = 0x1a3f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1648));
    // 0x1a3f18: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1a3f18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1a3f1c: 0x3404fffd  ori         $a0, $zero, 0xFFFD
    ctx->pc = 0x1a3f1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x1a3f20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3f24: 0x24630674  addiu       $v1, $v1, 0x674
    ctx->pc = 0x1a3f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1652));
    // 0x1a3f28: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3f28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3f2c: 0x3c048400  lui         $a0, 0x8400
    ctx->pc = 0x1a3f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33792 << 16));
    // 0x1a3f30: 0x34857b00  ori         $a1, $a0, 0x7B00
    ctx->pc = 0x1a3f30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31488);
    // 0x1a3f34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3f38: 0x24680678  addiu       $t0, $v1, 0x678
    ctx->pc = 0x1a3f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1656));
    // 0x1a3f3c: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x1a3f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x1a3f40: 0x3407fffd  ori         $a3, $zero, 0xFFFD
    ctx->pc = 0x1a3f40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x1a3f44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a3f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3f48: 0x2466067c  addiu       $a2, $v1, 0x67C
    ctx->pc = 0x1a3f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1660));
    // 0x1a3f4c: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1a3f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x1a3f50: 0x3c037d00  lui         $v1, 0x7D00
    ctx->pc = 0x1a3f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32000 << 16));
    // 0x1a3f54: 0x34657b00  ori         $a1, $v1, 0x7B00
    ctx->pc = 0x1a3f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31488);
    // 0x1a3f58: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1a3f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3f5c: 0x24830680  addiu       $v1, $a0, 0x680
    ctx->pc = 0x1a3f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1664));
    // 0x1a3f60: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1a3f60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1a3f64: 0x3403fffd  ori         $v1, $zero, 0xFFFD
    ctx->pc = 0x1a3f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x1a3f68: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a3f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3f6c: 0x24a40684  addiu       $a0, $a1, 0x684
    ctx->pc = 0x1a3f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1668));
    // 0x1a3f70: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a3f70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a3f74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a3f74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3f78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3f7c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a3f7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a3f80: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3F88u;
}
