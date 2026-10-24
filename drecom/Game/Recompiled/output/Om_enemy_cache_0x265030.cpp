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

// Function: Om_enemy_cache
// Address: 0x265030 - 0x265184
void Om_enemy_cache_0x265030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om_enemy_cache_0x265030");
#endif

    switch (ctx->pc) {
        case 0x265070u: goto label_265070;
        case 0x2650e0u: goto label_2650e0;
        case 0x265110u: goto label_265110;
        default: break;
    }

    ctx->pc = 0x265030u;

    // 0x265030: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x265030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x265034: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x265034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x265038: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x265038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26503c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26503cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x265040: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x265040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x265044: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x265044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x265048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x265048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26504c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x26504cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x265050: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x265050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    // 0x265054: 0x8fb30060  lw          $s3, 0x60($sp)
    ctx->pc = 0x265054u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x265058: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x265058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x26505c: 0x24740080  addiu       $s4, $v1, 0x80
    ctx->pc = 0x26505cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x265060: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x265060u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x265064: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x265064u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x265068: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x265068u;
    {
        const bool branch_taken_0x265068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265068) {
            ctx->pc = 0x265120u;
            goto label_265120;
        }
    }
    ctx->pc = 0x265070u;
label_265070:
    // 0x265070: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x265070u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x265074: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x265074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x265078: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x265078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26507c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x26507cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x265080: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x265080u;
    {
        const bool branch_taken_0x265080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265080) {
            ctx->pc = 0x265118u;
            goto label_265118;
        }
    }
    ctx->pc = 0x265088u;
    // 0x265088: 0x8e910a68  lw          $s1, 0xA68($s4)
    ctx->pc = 0x265088u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2664)));
    // 0x26508c: 0x966210a4  lhu         $v0, 0x10A4($s3)
    ctx->pc = 0x26508cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4260)));
    // 0x265090: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x265090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x265094: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x265094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x265098: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x265098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x26509c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26509cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2650a0: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x2650a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2650a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2650a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2650a8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2650a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2650ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2650acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2650b0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2650b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2650b4: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x2650b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x2650b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2650b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2650bc: 0xac511390  sw          $s1, 0x1390($v0)
    ctx->pc = 0x2650bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5008), GPR_U32(ctx, 17));
    // 0x2650c0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2650c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2650c4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2650c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2650c8: 0xac5101ac  sw          $s1, 0x1AC($v0)
    ctx->pc = 0x2650c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 428), GPR_U32(ctx, 17));
    // 0x2650cc: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2650ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2650d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2650d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2650d4: 0x24061350  addiu       $a2, $zero, 0x1350
    ctx->pc = 0x2650d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4944));
    // 0x2650d8: 0xc046314  jal         func_118C50
    ctx->pc = 0x2650D8u;
    SET_GPR_U32(ctx, 31, 0x2650E0u);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x2650E0u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2650E0u) { return; }
    ctx->pc = 0x2650E0u;
label_2650e0:
    // 0x2650e0: 0x26830a68  addiu       $v1, $s4, 0xA68
    ctx->pc = 0x2650e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2664));
    // 0x2650e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2650e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2650e8: 0x24421350  addiu       $v0, $v0, 0x1350
    ctx->pc = 0x2650e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4944));
    // 0x2650ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2650ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2650f0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2650f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2650f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2650f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2650f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2650f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2650fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2650fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x265100: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x265100u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x265104: 0x24061350  addiu       $a2, $zero, 0x1350
    ctx->pc = 0x265104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4944));
    // 0x265108: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x265108u;
    SET_GPR_U32(ctx, 31, 0x265110u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x265110u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x265110u) { return; }
    ctx->pc = 0x265110u;
label_265110:
    // 0x265110: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x265110u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x265114: 0x0  nop
    ctx->pc = 0x265114u;
    // NOP
label_265118:
    // 0x265118: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x265118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26511c: 0x0  nop
    ctx->pc = 0x26511cu;
    // NOP
label_265120:
    // 0x265120: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x265120u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x265124: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x265124u;
    {
        const bool branch_taken_0x265124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265124) {
            ctx->pc = 0x265070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265070;
        }
    }
    ctx->pc = 0x26512Cu;
    // 0x26512c: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x26512cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x265130: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x265134: 0x9023e653  lbu         $v1, -0x19AD($at)
    ctx->pc = 0x265134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61E653u));
    // 0x265138: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x265138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26513c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26513cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x265140: 0xa023e653  sb          $v1, -0x19AD($at)
    ctx->pc = 0x265140u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61E653u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E653u, _value); } while (0);
    // 0x265144: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x265148: 0x9024e650  lbu         $a0, -0x19B0($at)
    ctx->pc = 0x265148u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x61E650u));
    // 0x26514c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26514cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x265150: 0x9023e653  lbu         $v1, -0x19AD($at)
    ctx->pc = 0x265150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61E653u));
    // 0x265154: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x265154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x265158: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x26515c: 0xa023e650  sb          $v1, -0x19B0($at)
    ctx->pc = 0x26515cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61E650u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E650u, _value); } while (0);
    // 0x265160: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x265160u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x265164: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x265164u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x265168: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x265168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26516c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26516cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265170: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x265170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265174: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x265174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265178: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x265178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26517c: 0x3e00008  jr          $ra
    ctx->pc = 0x26517Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26517Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265184u;
}
