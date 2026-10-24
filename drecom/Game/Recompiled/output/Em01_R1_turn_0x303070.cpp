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

// Function: Em01_R1_turn
// Address: 0x303070 - 0x303334
void Em01_R1_turn_0x303070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_turn_0x303070");
#endif

    switch (ctx->pc) {
        case 0x3030e4u: goto label_3030e4;
        case 0x303190u: goto label_303190;
        case 0x3031b8u: goto label_3031b8;
        case 0x3031e0u: goto label_3031e0;
        case 0x303210u: goto label_303210;
        case 0x30321cu: goto label_30321c;
        case 0x30322cu: goto label_30322c;
        case 0x303238u: goto label_303238;
        default: break;
    }

    ctx->pc = 0x303070u;

    // 0x303070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x303070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x303074: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x303074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x303078: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x303078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30307c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x30307cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x303080: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303084: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x303084u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x303088: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x303088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30308c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30308cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303090: 0x10830057  beq         $a0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x303090u;
    {
        const bool branch_taken_0x303090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x303090) {
            ctx->pc = 0x3031F0u;
            goto label_3031f0;
        }
    }
    ctx->pc = 0x303098u;
    // 0x303098: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303098u;
    {
        const bool branch_taken_0x303098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x303098) {
            ctx->pc = 0x3030A8u;
            goto label_3030a8;
        }
    }
    ctx->pc = 0x3030A0u;
    // 0x3030a0: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x3030A0u;
    {
        const bool branch_taken_0x3030a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3030a0) {
            ctx->pc = 0x303320u;
            goto label_303320;
        }
    }
    ctx->pc = 0x3030A8u;
label_3030a8:
    // 0x3030a8: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x3030a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x3030ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3030acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3030b0: 0xac43136c  sw          $v1, 0x136C($v0)
    ctx->pc = 0x3030b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4972), GPR_U32(ctx, 3));
    // 0x3030b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3030b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3030b8: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x3030b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x3030bc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x3030bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x3030c0: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x3030c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x3030c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3030c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3030c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3030c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3030cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3030ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3030d0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x3030d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x3030d4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x3030d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3030d8: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x3030d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x3030dc: 0xc05cc90  jal         func_173240
    ctx->pc = 0x3030DCu;
    SET_GPR_U32(ctx, 31, 0x3030E4u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x3030DCu, 0x3030E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3030E4u;
label_3030e4:
    // 0x3030e4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3030e4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3030e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3030e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3030ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3030ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3030f0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x3030f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x3030f4: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x3030f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x3030f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3030F8u;
    {
        const bool branch_taken_0x3030f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3030f8) {
            ctx->pc = 0x303108u;
            goto label_303108;
        }
    }
    ctx->pc = 0x303100u;
    // 0x303100: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x303100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303104: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x303104u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_303108:
    // 0x303108: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x303108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x30310c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30310Cu;
    {
        const bool branch_taken_0x30310c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30310c) {
            ctx->pc = 0x30312Cu;
            goto label_30312c;
        }
    }
    ctx->pc = 0x303114u;
    // 0x303114: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x303114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x303118: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x303118u;
    {
        const bool branch_taken_0x303118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303118) {
            ctx->pc = 0x30312Cu;
            goto label_30312c;
        }
    }
    ctx->pc = 0x303120u;
    // 0x303120: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x303120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x303124: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x303124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303128: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x303128u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_30312c:
    // 0x30312c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30312cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303130: 0x8c421310  lw          $v0, 0x1310($v0)
    ctx->pc = 0x303130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4880)));
    // 0x303134: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x303134u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x303138: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x303138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30313c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x30313cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x303140: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x303140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x303144: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x303144u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x303148: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x303148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30314c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30314Cu;
    {
        const bool branch_taken_0x30314c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30314c) {
            ctx->pc = 0x3031C0u;
            goto label_3031c0;
        }
    }
    ctx->pc = 0x303154u;
    // 0x303154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303158: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x303158u;
    {
        const bool branch_taken_0x303158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x303158) {
            ctx->pc = 0x303198u;
            goto label_303198;
        }
    }
    ctx->pc = 0x303160u;
    // 0x303160: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x303160u;
    {
        const bool branch_taken_0x303160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303160) {
            ctx->pc = 0x303170u;
            goto label_303170;
        }
    }
    ctx->pc = 0x303168u;
    // 0x303168: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x303168u;
    {
        const bool branch_taken_0x303168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303168) {
            ctx->pc = 0x3031E0u;
            goto label_3031e0;
        }
    }
    ctx->pc = 0x303170u;
label_303170:
    // 0x303170: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x303170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303174: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x303174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303178: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x303178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30317c: 0x24061403  addiu       $a2, $zero, 0x1403
    ctx->pc = 0x30317cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5123));
    // 0x303180: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x303180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303184: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x303184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x303188: 0xc0965d0  jal         func_259740
    ctx->pc = 0x303188u;
    SET_GPR_U32(ctx, 31, 0x303190u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x303188u, 0x303190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303190u;
label_303190:
    // 0x303190: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x303190u;
    {
        const bool branch_taken_0x303190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303190) {
            ctx->pc = 0x3031E0u;
            goto label_3031e0;
        }
    }
    ctx->pc = 0x303198u;
label_303198:
    // 0x303198: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x303198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30319c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30319cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3031a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3031a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3031a4: 0x24061404  addiu       $a2, $zero, 0x1404
    ctx->pc = 0x3031a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5124));
    // 0x3031a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3031a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3031ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3031acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3031b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3031B0u;
    SET_GPR_U32(ctx, 31, 0x3031B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3031B0u, 0x3031B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3031B8u;
label_3031b8:
    // 0x3031b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3031B8u;
    {
        const bool branch_taken_0x3031b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3031b8) {
            ctx->pc = 0x3031E0u;
            goto label_3031e0;
        }
    }
    ctx->pc = 0x3031C0u;
label_3031c0:
    // 0x3031c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3031c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3031c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3031c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3031c8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3031c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3031cc: 0x2406140a  addiu       $a2, $zero, 0x140A
    ctx->pc = 0x3031ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5130));
    // 0x3031d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3031d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3031d4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3031d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3031d8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3031D8u;
    SET_GPR_U32(ctx, 31, 0x3031E0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3031D8u, 0x3031E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3031E0u;
label_3031e0:
    // 0x3031e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3031e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3031e4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3031e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3031e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3031e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3031ec: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3031ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_3031f0:
    // 0x3031f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3031f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3031f4: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x3031f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x3031f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3031f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3031fc: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x3031fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x303200: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x303200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303204: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x303204u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x303208: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x303208u;
    SET_GPR_U32(ctx, 31, 0x303210u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x303208u, 0x303210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303210u;
label_303210:
    // 0x303210: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x303210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303214: 0xc05cd10  jal         func_173440
    ctx->pc = 0x303214u;
    SET_GPR_U32(ctx, 31, 0x30321Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x303214u, 0x30321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30321Cu;
label_30321c:
    // 0x30321c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30321cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303220: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x303220u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x303224: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x303224u;
    SET_GPR_U32(ctx, 31, 0x30322Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x303224u, 0x30322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30322Cu;
label_30322c:
    // 0x30322c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30322cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303230: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x303230u;
    SET_GPR_U32(ctx, 31, 0x303238u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x303230u, 0x303238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303238u;
label_303238:
    // 0x303238: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30323c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30323cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x303240: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x303240u;
    {
        const bool branch_taken_0x303240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303240) {
            ctx->pc = 0x303320u;
            goto label_303320;
        }
    }
    ctx->pc = 0x303248u;
    // 0x303248: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x303248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30324c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30324cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303250: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x303250u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x303254: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x303254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x303258: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30325c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30325cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x303260: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303264: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x303264u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x303268: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30326c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30326cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x303270: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303274: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x303274u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x303278: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x303278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30327c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30327cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303280: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x303280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x303284: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x303284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x303288: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30328c: 0xac64136c  sw          $a0, 0x136C($v1)
    ctx->pc = 0x30328cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4972), GPR_U32(ctx, 4));
    // 0x303290: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303294: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x303294u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x303298: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x303298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30329c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30329cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3032a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3032a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3032a4: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3032A4u;
    {
        const bool branch_taken_0x3032a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3032a4) {
            ctx->pc = 0x303308u;
            goto label_303308;
        }
    }
    ctx->pc = 0x3032ACu;
    // 0x3032ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3032acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3032b0: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3032B0u;
    {
        const bool branch_taken_0x3032b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3032b0) {
            ctx->pc = 0x3032E8u;
            goto label_3032e8;
        }
    }
    ctx->pc = 0x3032B8u;
    // 0x3032b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3032B8u;
    {
        const bool branch_taken_0x3032b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3032b8) {
            ctx->pc = 0x3032C8u;
            goto label_3032c8;
        }
    }
    ctx->pc = 0x3032C0u;
    // 0x3032c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3032C0u;
    {
        const bool branch_taken_0x3032c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3032c0) {
            ctx->pc = 0x303320u;
            goto label_303320;
        }
    }
    ctx->pc = 0x3032C8u;
label_3032c8:
    // 0x3032c8: 0x3c03bf3b  lui         $v1, 0xBF3B
    ctx->pc = 0x3032c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48955 << 16));
    // 0x3032cc: 0x3463a866  ori         $v1, $v1, 0xA866
    ctx->pc = 0x3032ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43110);
    // 0x3032d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3032d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3032d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3032d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3032d8: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x3032d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x3032dc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3032dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3032e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3032E0u;
    {
        const bool branch_taken_0x3032e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3032e0) {
            ctx->pc = 0x303320u;
            goto label_303320;
        }
    }
    ctx->pc = 0x3032E8u;
label_3032e8:
    // 0x3032e8: 0x3c033f3b  lui         $v1, 0x3F3B
    ctx->pc = 0x3032e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16187 << 16));
    // 0x3032ec: 0x3463a866  ori         $v1, $v1, 0xA866
    ctx->pc = 0x3032ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43110);
    // 0x3032f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3032f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3032f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3032f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3032f8: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x3032f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x3032fc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3032fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x303300: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x303300u;
    {
        const bool branch_taken_0x303300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303300) {
            ctx->pc = 0x303320u;
            goto label_303320;
        }
    }
    ctx->pc = 0x303308u;
label_303308:
    // 0x303308: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x303308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x30330c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x30330cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x303310: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303314: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303318: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x303318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x30331c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x30331cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_303320:
    // 0x303320: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x303320u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303324: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x303324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303328: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x303328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30332c: 0x3e00008  jr          $ra
    ctx->pc = 0x30332Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30332Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303334u;
}
