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

// Function: srp_02_move
// Address: 0x1fcec0 - 0x1fd324
void srp_02_move_0x1fcec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_02_move_0x1fcec0");
#endif

    switch (ctx->pc) {
        case 0x1fcf60u: goto label_1fcf60;
        case 0x1fcfa0u: goto label_1fcfa0;
        case 0x1fd00cu: goto label_1fd00c;
        case 0x1fd024u: goto label_1fd024;
        case 0x1fd064u: goto label_1fd064;
        case 0x1fd094u: goto label_1fd094;
        case 0x1fd0ecu: goto label_1fd0ec;
        case 0x1fd108u: goto label_1fd108;
        case 0x1fd14cu: goto label_1fd14c;
        case 0x1fd19cu: goto label_1fd19c;
        case 0x1fd1bcu: goto label_1fd1bc;
        case 0x1fd1d4u: goto label_1fd1d4;
        case 0x1fd1fcu: goto label_1fd1fc;
        case 0x1fd22cu: goto label_1fd22c;
        case 0x1fd284u: goto label_1fd284;
        case 0x1fd2b4u: goto label_1fd2b4;
        default: break;
    }

    ctx->pc = 0x1fcec0u;

    // 0x1fcec0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fcec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1fcec4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1fcec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1fcec8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fcec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fcecc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fceccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fced0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fced0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fced4: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1fced4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1fced8: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1fced8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fcedc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fcedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcee0: 0x246302b0  addiu       $v1, $v1, 0x2B0
    ctx->pc = 0x1fcee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x1fcee4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1fcee4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fcee8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fcee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fceec: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1fceecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1fcef0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fcef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcef4: 0x246302c0  addiu       $v1, $v1, 0x2C0
    ctx->pc = 0x1fcef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x1fcef8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fcef8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fcefc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fcefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcf00: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fcf00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fcf04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fcf04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fcf08: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fcf08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fcf0c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fcf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcf10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fcf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fcf14: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fcf14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fcf18: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fcf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcf1c: 0x90630343  lbu         $v1, 0x343($v1)
    ctx->pc = 0x1fcf1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 835)));
    // 0x1fcf20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fcf20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fcf24: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1fcf24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fcf28: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1FCF28u;
    {
        const bool branch_taken_0x1fcf28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcf28) {
            ctx->pc = 0x1FCFC4u;
            goto label_1fcfc4;
        }
    }
    ctx->pc = 0x1FCF30u;
    // 0x1fcf30: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fcf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcf34: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x1fcf34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x1fcf38: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1fcf38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1fcf3c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1fcf3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1fcf40: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1FCF40u;
    {
        const bool branch_taken_0x1fcf40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcf40) {
            ctx->pc = 0x1FCFC4u;
            goto label_1fcfc4;
        }
    }
    ctx->pc = 0x1FCF48u;
    // 0x1fcf48: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fcf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcf4c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fcf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcf50: 0x246403c0  addiu       $a0, $v1, 0x3C0
    ctx->pc = 0x1fcf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x1fcf54: 0x8c450324  lw          $a1, 0x324($v0)
    ctx->pc = 0x1fcf54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x1fcf58: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FCF58u;
    SET_GPR_U32(ctx, 31, 0x1FCF60u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FCF60u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FCF60u) { return; }
    ctx->pc = 0x1FCF60u;
label_1fcf60:
    // 0x1fcf60: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fcf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcf64: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fcf64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fcf68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fcf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fcf6c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fcf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fcf70: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fcf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcf74: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fcf74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fcf78: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fcf78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcf7c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fcf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcf80: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fcf80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fcf84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fcf84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fcf88: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fcf88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fcf8c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fcf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcf90: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fcf90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fcf94: 0x24a503c0  addiu       $a1, $a1, 0x3C0
    ctx->pc = 0x1fcf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 960));
    // 0x1fcf98: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FCF98u;
    SET_GPR_U32(ctx, 31, 0x1FCFA0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FCFA0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FCFA0u) { return; }
    ctx->pc = 0x1FCFA0u;
label_1fcfa0:
    // 0x1fcfa0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fcfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fcfa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fcfa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fcfa8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fcfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcfac: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fcfacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fcfb0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fcfb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fcfb4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fcfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fcfb8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fcfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcfbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fcfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fcfc0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1fcfc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1fcfc4:
    // 0x1fcfc4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fcfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcfc8: 0x90630343  lbu         $v1, 0x343($v1)
    ctx->pc = 0x1fcfc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 835)));
    // 0x1fcfcc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fcfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fcfd0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1fcfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1fcfd4: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FCFD4u;
    {
        const bool branch_taken_0x1fcfd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcfd4) {
            ctx->pc = 0x1FD034u;
            goto label_1fd034;
        }
    }
    ctx->pc = 0x1FCFDCu;
    // 0x1fcfdc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fcfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcfe0: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x1fcfe0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x1fcfe4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1fcfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1fcfe8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1fcfe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fcfec: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FCFECu;
    {
        const bool branch_taken_0x1fcfec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcfec) {
            ctx->pc = 0x1FD034u;
            goto label_1fd034;
        }
    }
    ctx->pc = 0x1FCFF4u;
    // 0x1fcff4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fcff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcff8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fcff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcffc: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x1fcffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1fd000: 0x8c450320  lw          $a1, 0x320($v0)
    ctx->pc = 0x1fd000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x1fd004: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FD004u;
    SET_GPR_U32(ctx, 31, 0x1FD00Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FD00Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD00Cu) { return; }
    ctx->pc = 0x1FD00Cu;
label_1fd00c:
    // 0x1fd00c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd010: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fd010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd014: 0x24450380  addiu       $a1, $v0, 0x380
    ctx->pc = 0x1fd014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x1fd018: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1fd018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd01c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FD01Cu;
    SET_GPR_U32(ctx, 31, 0x1FD024u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FD024u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD024u) { return; }
    ctx->pc = 0x1FD024u;
label_1fd024:
    // 0x1fd024: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fd024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fd028: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fd028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd02c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd030: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1fd030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1fd034:
    // 0x1fd034: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd038: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x1fd038u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x1fd03c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1fd03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1fd040: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1fd040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1fd044: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FD044u;
    {
        const bool branch_taken_0x1fd044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd044) {
            ctx->pc = 0x1FD0BCu;
            goto label_1fd0bc;
        }
    }
    ctx->pc = 0x1FD04Cu;
    // 0x1fd04c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd050: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd054: 0x246403c0  addiu       $a0, $v1, 0x3C0
    ctx->pc = 0x1fd054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x1fd058: 0x8c450324  lw          $a1, 0x324($v0)
    ctx->pc = 0x1fd058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x1fd05c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FD05Cu;
    SET_GPR_U32(ctx, 31, 0x1FD064u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FD064u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD064u) { return; }
    ctx->pc = 0x1FD064u;
label_1fd064:
    // 0x1fd064: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd068: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fd068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fd06c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fd06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd070: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fd070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fd074: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd078: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fd078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd07c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd080: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd084: 0x246503c0  addiu       $a1, $v1, 0x3C0
    ctx->pc = 0x1fd084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x1fd088: 0x244602c0  addiu       $a2, $v0, 0x2C0
    ctx->pc = 0x1fd088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x1fd08c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FD08Cu;
    SET_GPR_U32(ctx, 31, 0x1FD094u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FD094u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD094u) { return; }
    ctx->pc = 0x1FD094u;
label_1fd094:
    // 0x1fd094: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fd094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fd098: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fd098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd09c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd0a0: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fd0a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fd0a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fd0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fd0a8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fd0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fd0ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd0b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fd0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fd0b4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1fd0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1fd0b8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1fd0b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd0bc:
    // 0x1fd0bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd0c0: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x1fd0c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x1fd0c4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1fd0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1fd0c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1fd0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fd0cc: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FD0CCu;
    {
        const bool branch_taken_0x1fd0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd0cc) {
            ctx->pc = 0x1FD11Cu;
            goto label_1fd11c;
        }
    }
    ctx->pc = 0x1FD0D4u;
    // 0x1fd0d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd0d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd0dc: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x1fd0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1fd0e0: 0x8c450320  lw          $a1, 0x320($v0)
    ctx->pc = 0x1fd0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x1fd0e4: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FD0E4u;
    SET_GPR_U32(ctx, 31, 0x1FD0ECu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FD0ECu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD0ECu) { return; }
    ctx->pc = 0x1FD0ECu;
label_1fd0ec:
    // 0x1fd0ec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd0f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd0f4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fd0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd0f8: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x1fd0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1fd0fc: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x1fd0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x1fd100: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FD100u;
    SET_GPR_U32(ctx, 31, 0x1FD108u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FD108u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD108u) { return; }
    ctx->pc = 0x1FD108u;
label_1fd108:
    // 0x1fd108: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fd108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fd10c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fd10cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd110: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd114: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1fd114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1fd118: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1fd118u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd11c:
    // 0x1fd11c: 0x1240007a  beqz        $s2, . + 4 + (0x7A << 2)
    ctx->pc = 0x1FD11Cu;
    {
        const bool branch_taken_0x1fd11c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd11c) {
            ctx->pc = 0x1FD308u;
            goto label_1fd308;
        }
    }
    ctx->pc = 0x1FD124u;
    // 0x1fd124: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd128: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fd128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fd12c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fd12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd130: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fd130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fd134: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd138: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fd138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd13c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1fd13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fd140: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1fd140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd144: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FD144u;
    SET_GPR_U32(ctx, 31, 0x1FD14Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FD144u, 0x1FD14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD14Cu;
label_1fd14c:
    // 0x1fd14c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd150: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fd150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fd154: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD154u;
    {
        const bool branch_taken_0x1fd154 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fd154) {
            ctx->pc = 0x1FD170u;
            goto label_1fd170;
        }
    }
    ctx->pc = 0x1FD15Cu;
    // 0x1fd15c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fd15cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd160: 0x0  nop
    ctx->pc = 0x1fd160u;
    // NOP
    // 0x1fd164: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fd164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fd168: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD168u;
    {
        const bool branch_taken_0x1fd168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd168) {
            ctx->pc = 0x1FD18Cu;
            goto label_1fd18c;
        }
    }
    ctx->pc = 0x1FD170u;
label_1fd170:
    // 0x1fd170: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1fd170u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1fd174: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fd174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fd178: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fd178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fd17c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fd17cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd180: 0x0  nop
    ctx->pc = 0x1fd180u;
    // NOP
    // 0x1fd184: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fd184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fd188: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fd188u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fd18c:
    // 0x1fd18c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1fd18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fd190: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1fd190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fd194: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FD194u;
    SET_GPR_U32(ctx, 31, 0x1FD19Cu);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FD19Cu;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD19Cu) { return; }
    ctx->pc = 0x1FD19Cu;
label_1fd19c:
    // 0x1fd19c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fd19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fd1a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fd1a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd1a4: 0x0  nop
    ctx->pc = 0x1fd1a4u;
    // NOP
    // 0x1fd1a8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1fd1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1fd1ac: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1fd1acu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fd1b0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1fd1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd1b4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1FD1B4u;
    {
        const bool branch_taken_0x1fd1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd1b4) {
            ctx->pc = 0x1FD290u;
            goto label_1fd290;
        }
    }
    ctx->pc = 0x1FD1BCu;
label_1fd1bc:
    // 0x1fd1bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd1c0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1fd1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fd1c4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1fd1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fd1c8: 0x24460140  addiu       $a2, $v0, 0x140
    ctx->pc = 0x1fd1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1fd1cc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FD1CCu;
    SET_GPR_U32(ctx, 31, 0x1FD1D4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FD1CCu, 0x1FD1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD1D4u;
label_1fd1d4:
    // 0x1fd1d4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fd1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fd1d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd1dc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fd1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd1e0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1fd1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fd1e4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fd1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fd1e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd1ec: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fd1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd1f0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1fd1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fd1f4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FD1F4u;
    SET_GPR_U32(ctx, 31, 0x1FD1FCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FD1F4u, 0x1FD1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD1FCu;
label_1fd1fc:
    // 0x1fd1fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd200: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fd200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fd204: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fd204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd208: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fd208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fd20c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd210: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fd210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd214: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fd214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fd218: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd21c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fd21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd220: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1fd220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fd224: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FD224u;
    SET_GPR_U32(ctx, 31, 0x1FD22Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FD224u, 0x1FD22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD22Cu;
label_1fd22c:
    // 0x1fd22c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd230: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fd230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fd234: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fd234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd238: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fd238u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fd23c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD23Cu;
    {
        const bool branch_taken_0x1fd23c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fd23c) {
            ctx->pc = 0x1FD258u;
            goto label_1fd258;
        }
    }
    ctx->pc = 0x1FD244u;
    // 0x1fd244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fd244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd248: 0x0  nop
    ctx->pc = 0x1fd248u;
    // NOP
    // 0x1fd24c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fd24cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fd250: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD250u;
    {
        const bool branch_taken_0x1fd250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd250) {
            ctx->pc = 0x1FD274u;
            goto label_1fd274;
        }
    }
    ctx->pc = 0x1FD258u;
label_1fd258:
    // 0x1fd258: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1fd258u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1fd25c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fd25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fd260: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fd260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fd264: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fd264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd268: 0x0  nop
    ctx->pc = 0x1fd268u;
    // NOP
    // 0x1fd26c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fd26cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fd270: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fd270u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fd274:
    // 0x1fd274: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1fd274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fd278: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1fd278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fd27c: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FD27Cu;
    SET_GPR_U32(ctx, 31, 0x1FD284u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FD284u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD284u) { return; }
    ctx->pc = 0x1FD284u;
label_1fd284:
    // 0x1fd284: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fd284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fd288: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fd288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fd28c: 0x0  nop
    ctx->pc = 0x1fd28cu;
    // NOP
label_1fd290:
    // 0x1fd290: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd294: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fd294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fd298: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fd298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fd29c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fd29cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fd2a0: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1FD2A0u;
    {
        const bool branch_taken_0x1fd2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd2a0) {
            ctx->pc = 0x1FD1BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd1bc;
        }
    }
    ctx->pc = 0x1FD2A8u;
    // 0x1fd2a8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fd2a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fd2ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FD2ACu;
    {
        const bool branch_taken_0x1fd2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd2ac) {
            ctx->pc = 0x1FD2F0u;
            goto label_1fd2f0;
        }
    }
    ctx->pc = 0x1FD2B4u;
label_1fd2b4:
    // 0x1fd2b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd2b8: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fd2b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fd2bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fd2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fd2c0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fd2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fd2c4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fd2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fd2c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd2cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fd2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fd2d0: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fd2d0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd2d4: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fd2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fd2d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd2dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fd2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fd2e0: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fd2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fd2e4: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fd2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fd2e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fd2e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fd2ec: 0x0  nop
    ctx->pc = 0x1fd2ecu;
    // NOP
label_1fd2f0:
    // 0x1fd2f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd2f4: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fd2f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fd2f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fd2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fd2fc: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fd2fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fd300: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FD300u;
    {
        const bool branch_taken_0x1fd300 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd300) {
            ctx->pc = 0x1FD2B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd2b4;
        }
    }
    ctx->pc = 0x1FD308u;
label_1fd308:
    // 0x1fd308: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1fd308u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fd30c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fd30cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd310: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fd310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd314: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fd314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd318: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1fd318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fd31c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD324u;
}
