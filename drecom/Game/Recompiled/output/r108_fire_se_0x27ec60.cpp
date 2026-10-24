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

// Function: r108_fire_se
// Address: 0x27ec60 - 0x27ed4c
void r108_fire_se_0x27ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r108_fire_se_0x27ec60");
#endif

    switch (ctx->pc) {
        case 0x27ed1cu: goto label_27ed1c;
        default: break;
    }

    ctx->pc = 0x27ec60u;

    // 0x27ec60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27ec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27ec64: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x27ec64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x27ec68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27ec68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27ec6c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x27ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x27ec70: 0x24631920  addiu       $v1, $v1, 0x1920
    ctx->pc = 0x27ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6432));
    // 0x27ec74: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x27ec74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27ec78: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x27ec78u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x391920u));
    // 0x27ec7c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x27ec7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x27ec80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27ec80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27ec84: 0x8c231b70  lw          $v1, 0x1B70($at)
    ctx->pc = 0x27ec84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B70u));
    // 0x27ec88: 0x2c630030  sltiu       $v1, $v1, 0x30
    ctx->pc = 0x27ec88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x27ec8c: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x27EC8Cu;
    {
        const bool branch_taken_0x27ec8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ec8c) {
            ctx->pc = 0x27ED24u;
            goto label_27ed24;
        }
    }
    ctx->pc = 0x27EC94u;
    // 0x27ec94: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27ec94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27ec98: 0xac201b70  sw          $zero, 0x1B70($at)
    ctx->pc = 0x27ec98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621B70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B70u, _value); } while (0);
    // 0x27ec9c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27ec9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27eca0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27eca4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27eca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27eca8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27ecac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27ecb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27ecb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27ecb4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x27ecb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27ecb8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27ecb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27ecbc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27ecc0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27ecc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27ecc4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27ecc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27ecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27eccc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x27ecccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x27ecd0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x27ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x27ecd4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27ecd8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27ecd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27ecdc: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x27ecdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27ece0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x27ece0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27ece4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27ece8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x27ece8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x27ecec: 0x0  nop
    ctx->pc = 0x27ececu;
    // NOP
    // 0x27ecf0: 0x0  nop
    ctx->pc = 0x27ecf0u;
    // NOP
    // 0x27ecf4: 0x8010  mfhi        $s0
    ctx->pc = 0x27ecf4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x27ecf8: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x27ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x27ecfc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x27ecfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x27ed00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27ed00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27ed04: 0x26020410  addiu       $v0, $s0, 0x410
    ctx->pc = 0x27ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x27ed08: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x27ed08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27ed0c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x27ed0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27ed10: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x27ed10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ed14: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x27ED14u;
    SET_GPR_U32(ctx, 31, 0x27ED1Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x27ED14u, 0x27ED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED1Cu;
label_27ed1c:
    // 0x27ed1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27ED1Cu;
    {
        const bool branch_taken_0x27ed1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ed1c) {
            ctx->pc = 0x27ED38u;
            goto label_27ed38;
        }
    }
    ctx->pc = 0x27ED24u;
label_27ed24:
    // 0x27ed24: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27ed24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27ed28: 0x8c231b70  lw          $v1, 0x1B70($at)
    ctx->pc = 0x27ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B70u));
    // 0x27ed2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27ed30: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27ed30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27ed34: 0xac231b70  sw          $v1, 0x1B70($at)
    ctx->pc = 0x27ed34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621B70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B70u, _value); } while (0);
label_27ed38:
    // 0x27ed38: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27ed38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ed3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ed3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ed40: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27ed40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27ed44: 0x3e00008  jr          $ra
    ctx->pc = 0x27ED44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27ED44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27ED4Cu;
}
