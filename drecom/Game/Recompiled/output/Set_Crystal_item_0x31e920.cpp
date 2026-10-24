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

// Function: Set_Crystal_item
// Address: 0x31e920 - 0x31ea10
void Set_Crystal_item_0x31e920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_Crystal_item_0x31e920");
#endif

    switch (ctx->pc) {
        case 0x31e9f0u: goto label_31e9f0;
        default: break;
    }

    ctx->pc = 0x31e920u;

    // 0x31e920: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31e920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31e924: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x31e924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x31e928: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31e928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31e92c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31e92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31e930: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31e930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31e934: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x31e934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x31e938: 0xa3a50050  sb          $a1, 0x50($sp)
    ctx->pc = 0x31e938u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 5));
    // 0x31e93c: 0xa3a60058  sb          $a2, 0x58($sp)
    ctx->pc = 0x31e93cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 6));
    // 0x31e940: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x31e940u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31e944: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x31e944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x31e948: 0x2452af60  addiu       $s2, $v0, -0x50A0
    ctx->pc = 0x31e948u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946656));
    // 0x31e94c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x31e94cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31e950: 0x93a20058  lbu         $v0, 0x58($sp)
    ctx->pc = 0x31e950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31e954: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31e954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31e958: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x31e958u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x31e95c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31e960: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x31e960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x31e964: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x31e964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x31e968: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x31e968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31e96c: 0x93a20058  lbu         $v0, 0x58($sp)
    ctx->pc = 0x31e96cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31e970: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31e970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31e974: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x31e974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x31e978: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31e978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31e97c: 0x621806  srlv        $v1, $v0, $v1
    ctx->pc = 0x31e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x31e980: 0x8c821a64  lw          $v0, 0x1A64($a0)
    ctx->pc = 0x31e980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6756)));
    // 0x31e984: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31e984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31e988: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31E988u;
    {
        const bool branch_taken_0x31e988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e988) {
            ctx->pc = 0x31E99Cu;
            goto label_31e99c;
        }
    }
    ctx->pc = 0x31E990u;
    // 0x31e990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31e990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e994: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x31E994u;
    {
        const bool branch_taken_0x31e994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e994) {
            ctx->pc = 0x31E9F4u;
            goto label_31e9f4;
        }
    }
    ctx->pc = 0x31E99Cu;
label_31e99c:
    // 0x31e99c: 0x24100027  addiu       $s0, $zero, 0x27
    ctx->pc = 0x31e99cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x31e9a0: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x31e9a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31e9a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x31e9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31e9a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e9ac: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31E9ACu;
    {
        const bool branch_taken_0x31e9ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31e9ac) {
            ctx->pc = 0x31E9D0u;
            goto label_31e9d0;
        }
    }
    ctx->pc = 0x31E9B4u;
    // 0x31e9b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E9B4u;
    {
        const bool branch_taken_0x31e9b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e9b4) {
            ctx->pc = 0x31E9C4u;
            goto label_31e9c4;
        }
    }
    ctx->pc = 0x31E9BCu;
    // 0x31e9bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31E9BCu;
    {
        const bool branch_taken_0x31e9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e9bc) {
            ctx->pc = 0x31E9D4u;
            goto label_31e9d4;
        }
    }
    ctx->pc = 0x31E9C4u;
label_31e9c4:
    // 0x31e9c4: 0x36100008  ori         $s0, $s0, 0x8
    ctx->pc = 0x31e9c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
    // 0x31e9c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31E9C8u;
    {
        const bool branch_taken_0x31e9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e9c8) {
            ctx->pc = 0x31E9D4u;
            goto label_31e9d4;
        }
    }
    ctx->pc = 0x31E9D0u;
label_31e9d0:
    // 0x31e9d0: 0x36100010  ori         $s0, $s0, 0x10
    ctx->pc = 0x31e9d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
label_31e9d4:
    // 0x31e9d4: 0x93a20058  lbu         $v0, 0x58($sp)
    ctx->pc = 0x31e9d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31e9d8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x31e9d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31e9dc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31e9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31e9e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31e9e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31e9e4: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x31e9e4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x31e9e8: 0xc0c7a84  jal         func_31EA10
    ctx->pc = 0x31E9E8u;
    SET_GPR_U32(ctx, 31, 0x31E9F0u);
    ctx->pc = 0x31EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EA10u, 0x31E9E8u, 0x31E9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E9F0u;
label_31e9f0:
    // 0x31e9f0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x31e9f0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31e9f4:
    // 0x31e9f4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x31e9f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31e9f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31e9f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31e9fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31e9fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ea00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31ea00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ea04: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x31ea04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31ea08: 0x3e00008  jr          $ra
    ctx->pc = 0x31EA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EA10u;
}
