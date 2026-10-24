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

// Function: Set_eff_data_em02_uji_bomb
// Address: 0x313040 - 0x3131d0
void Set_eff_data_em02_uji_bomb_0x313040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_eff_data_em02_uji_bomb_0x313040");
#endif

    switch (ctx->pc) {
        case 0x313060u: goto label_313060;
        case 0x3131a8u: goto label_3131a8;
        default: break;
    }

    ctx->pc = 0x313040u;

    // 0x313040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x313040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x313044: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x313044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x313048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x313048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31304c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x31304cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x313050: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x313050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x313054: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x313054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x313058: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x313058u;
    {
        const bool branch_taken_0x313058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313058) {
            ctx->pc = 0x313190u;
            goto label_313190;
        }
    }
    ctx->pc = 0x313060u;
label_313060:
    // 0x313060: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313064: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x313064u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x313068: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x313068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31306c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31306cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x313070: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313074: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x313074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313078: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x313078u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x31307c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x31307cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313080: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x313080u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x313084: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x313084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x313088: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x313088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31308c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31308cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313090: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x313090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x313094: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x313094u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x313098: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x313098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31309c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x31309cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3130a0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x3130a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3130a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3130a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3130a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3130a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3130ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3130ACu;
    {
        const bool branch_taken_0x3130ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3130ac) {
            ctx->pc = 0x3130CCu;
            goto label_3130cc;
        }
    }
    ctx->pc = 0x3130B4u;
    // 0x3130b4: 0xa200011c  sb          $zero, 0x11C($s0)
    ctx->pc = 0x3130b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x3130b8: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x3130b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x3130bc: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x3130bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x3130c0: 0xae02020c  sw          $v0, 0x20C($s0)
    ctx->pc = 0x3130c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 2));
    // 0x3130c4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3130C4u;
    {
        const bool branch_taken_0x3130c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3130c4) {
            ctx->pc = 0x313190u;
            goto label_313190;
        }
    }
    ctx->pc = 0x3130CCu;
label_3130cc:
    // 0x3130cc: 0xa200011c  sb          $zero, 0x11C($s0)
    ctx->pc = 0x3130ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x3130d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3130d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3130d4: 0xae02012c  sw          $v0, 0x12C($s0)
    ctx->pc = 0x3130d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
    // 0x3130d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3130d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3130dc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3130dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3130e0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3130e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3130e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3130e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3130e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3130e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3130ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3130ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3130f0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3130f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3130f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3130f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3130f8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3130f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3130fc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3130fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x313100: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x313100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x313104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313108: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x313108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x31310c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x31310cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x313110: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x313110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x313114: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313118: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x313118u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x31311c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x31311cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313120: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313124: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x313124u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x313128: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x313128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31312c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31312cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x313130: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313134: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x313134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313138: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x313138u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x31313c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x31313cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313140: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x313140u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x313144: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x313144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x313148: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x313148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31314c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31314cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313150: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x313150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x313154: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x313154u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x313158: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x313158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31315c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x31315cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313160: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x313160u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x313164: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x313164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313168: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x313168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x31316c: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x31316cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x313170: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x313170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x313174: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x313174u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x313178: 0x0  nop
    ctx->pc = 0x313178u;
    // NOP
    // 0x31317c: 0x0  nop
    ctx->pc = 0x31317cu;
    // NOP
    // 0x313180: 0x1010  mfhi        $v0
    ctx->pc = 0x313180u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x313184: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x313184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x313188: 0xae020130  sw          $v0, 0x130($s0)
    ctx->pc = 0x313188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 2));
    // 0x31318c: 0x0  nop
    ctx->pc = 0x31318cu;
    // NOP
label_313190:
    // 0x313190: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x313190u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x313194: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x313194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x313198: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x313198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31319c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x31319cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3131a0: 0xc06553c  jal         func_1954F0
    ctx->pc = 0x3131A0u;
    SET_GPR_U32(ctx, 31, 0x3131A8u);
    ctx->pc = 0x1954F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1954F0u, 0x3131A0u, 0x3131A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3131A8u;
label_3131a8:
    // 0x3131a8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3131a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3131ac: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3131acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x3131b0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x3131b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x3131b4: 0x1443ffaa  bne         $v0, $v1, . + 4 + (-0x56 << 2)
    ctx->pc = 0x3131B4u;
    {
        const bool branch_taken_0x3131b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3131b4) {
            ctx->pc = 0x313060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313060;
        }
    }
    ctx->pc = 0x3131BCu;
    // 0x3131bc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3131bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3131c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3131c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3131c4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3131c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3131c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3131C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3131C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3131D0u;
}
