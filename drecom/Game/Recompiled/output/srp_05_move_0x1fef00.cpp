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

// Function: srp_05_move
// Address: 0x1fef00 - 0x2001d0
void srp_05_move_0x1fef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_05_move_0x1fef00");
#endif

    switch (ctx->pc) {
        case 0x1fefb8u: goto label_1fefb8;
        case 0x1feffcu: goto label_1feffc;
        case 0x1ff06cu: goto label_1ff06c;
        case 0x1ff088u: goto label_1ff088;
        case 0x1ff0ccu: goto label_1ff0cc;
        case 0x1ff100u: goto label_1ff100;
        case 0x1ff15cu: goto label_1ff15c;
        case 0x1ff180u: goto label_1ff180;
        case 0x1ff1f8u: goto label_1ff1f8;
        case 0x1ff228u: goto label_1ff228;
        case 0x1ff254u: goto label_1ff254;
        case 0x1ff2a8u: goto label_1ff2a8;
        case 0x1ff2ccu: goto label_1ff2cc;
        case 0x1ff2ecu: goto label_1ff2ec;
        case 0x1ff318u: goto label_1ff318;
        case 0x1ff34cu: goto label_1ff34c;
        case 0x1ff3a8u: goto label_1ff3a8;
        case 0x1ff3dcu: goto label_1ff3dc;
        case 0x1ff43cu: goto label_1ff43c;
        case 0x1ff62cu: goto label_1ff62c;
        case 0x1ff648u: goto label_1ff648;
        case 0x1ff680u: goto label_1ff680;
        case 0x1ff69cu: goto label_1ff69c;
        case 0x1ff7d8u: goto label_1ff7d8;
        case 0x1ffa2cu: goto label_1ffa2c;
        case 0x1ffb38u: goto label_1ffb38;
        case 0x1ffc6cu: goto label_1ffc6c;
        case 0x1ffe2cu: goto label_1ffe2c;
        case 0x1fff04u: goto label_1fff04;
        case 0x1fffb0u: goto label_1fffb0;
        case 0x1fffb8u: goto label_1fffb8;
        case 0x1ffff0u: goto label_1ffff0;
        case 0x200028u: goto label_200028;
        case 0x2000b0u: goto label_2000b0;
        default: break;
    }

    ctx->pc = 0x1fef00u;

    // 0x1fef00: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1fef00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1fef04: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1fef04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1fef08: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1fef08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1fef0c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1fef0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1fef10: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1fef10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1fef14: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fef14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1fef18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fef18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fef1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fef1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fef20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fef20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fef24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fef24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fef28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fef28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fef2c: 0xafa400d8  sw          $a0, 0xD8($sp)
    ctx->pc = 0x1fef2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 4));
    // 0x1fef30: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1fef30u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fef34: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1fef34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fef38: 0x248302b0  addiu       $v1, $a0, 0x2B0
    ctx->pc = 0x1fef38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
    // 0x1fef3c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1fef3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fef40: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1fef40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fef44: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x1fef44u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x1fef48: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1fef48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fef4c: 0x248302c0  addiu       $v1, $a0, 0x2C0
    ctx->pc = 0x1fef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 704));
    // 0x1fef50: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1fef50u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fef54: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1fef54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fef58: 0x90a40344  lbu         $a0, 0x344($a1)
    ctx->pc = 0x1fef58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 836)));
    // 0x1fef5c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fef5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fef60: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fef60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fef64: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1fef64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fef68: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fef68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fef6c: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x1fef6cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x1fef70: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1fef70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fef74: 0x90630343  lbu         $v1, 0x343($v1)
    ctx->pc = 0x1fef74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 835)));
    // 0x1fef78: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fef78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fef7c: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x1fef7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fef80: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1FEF80u;
    {
        const bool branch_taken_0x1fef80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fef80) {
            ctx->pc = 0x1FF024u;
            goto label_1ff024;
        }
    }
    ctx->pc = 0x1FEF88u;
    // 0x1fef88: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1fef88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fef8c: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x1fef8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x1fef90: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x1fef90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1fef94: 0x30c50002  andi        $a1, $a2, 0x2
    ctx->pc = 0x1fef94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x1fef98: 0x14a00022  bnez        $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1FEF98u;
    {
        const bool branch_taken_0x1fef98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fef98) {
            ctx->pc = 0x1FF024u;
            goto label_1ff024;
        }
    }
    ctx->pc = 0x1FEFA0u;
    // 0x1fefa0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1fefa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fefa4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1fefa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fefa8: 0x248403c0  addiu       $a0, $a0, 0x3C0
    ctx->pc = 0x1fefa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 960));
    // 0x1fefac: 0x8c650324  lw          $a1, 0x324($v1)
    ctx->pc = 0x1fefacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 804)));
    // 0x1fefb0: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FEFB0u;
    SET_GPR_U32(ctx, 31, 0x1FEFB8u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FEFB8u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FEFB8u) { return; }
    ctx->pc = 0x1FEFB8u;
label_1fefb8:
    // 0x1fefb8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1fefb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fefbc: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1fefbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fefc0: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x1fefc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x1fefc4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fefc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fefc8: 0x38100  sll         $s0, $v1, 4
    ctx->pc = 0x1fefc8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fefcc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1fefccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fefd0: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1fefd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1fefd4: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x1fefd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fefd8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1fefd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fefdc: 0x90660344  lbu         $a2, 0x344($v1)
    ctx->pc = 0x1fefdcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fefe0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x1fefe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1fefe4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1fefe4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fefe8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1fefe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fefec: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1fefecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1feff0: 0x24e503c0  addiu       $a1, $a3, 0x3C0
    ctx->pc = 0x1feff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 960));
    // 0x1feff4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FEFF4u;
    SET_GPR_U32(ctx, 31, 0x1FEFFCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FEFFCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FEFFCu) { return; }
    ctx->pc = 0x1FEFFCu;
label_1feffc:
    // 0x1feffc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1feffcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff000: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1ff000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff004: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ff004u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff008: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff00c: 0x90650344  lbu         $a1, 0x344($v1)
    ctx->pc = 0x1ff00cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1ff010: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1ff010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ff014: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1ff014u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ff018: 0x8fb000d8  lw          $s0, 0xD8($sp)
    ctx->pc = 0x1ff018u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff01c: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1ff01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1ff020: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1ff020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1ff024:
    // 0x1ff024: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff028: 0x90630343  lbu         $v1, 0x343($v1)
    ctx->pc = 0x1ff028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 835)));
    // 0x1ff02c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ff02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff030: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1ff030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1ff034: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FF034u;
    {
        const bool branch_taken_0x1ff034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff034) {
            ctx->pc = 0x1FF09Cu;
            goto label_1ff09c;
        }
    }
    ctx->pc = 0x1FF03Cu;
    // 0x1ff03c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff040: 0x94830340  lhu         $v1, 0x340($a0)
    ctx->pc = 0x1ff040u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 832)));
    // 0x1ff044: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1ff044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1ff048: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x1ff048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1ff04c: 0x14800013  bnez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FF04Cu;
    {
        const bool branch_taken_0x1ff04c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff04c) {
            ctx->pc = 0x1FF09Cu;
            goto label_1ff09c;
        }
    }
    ctx->pc = 0x1FF054u;
    // 0x1ff054: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff058: 0x8fb200d8  lw          $s2, 0xD8($sp)
    ctx->pc = 0x1ff058u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff05c: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x1ff05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1ff060: 0x8e450320  lw          $a1, 0x320($s2)
    ctx->pc = 0x1ff060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
    // 0x1ff064: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FF064u;
    SET_GPR_U32(ctx, 31, 0x1FF06Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FF06Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FF06Cu) { return; }
    ctx->pc = 0x1FF06Cu;
label_1ff06c:
    // 0x1ff06c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff06cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff070: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff074: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff078: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x1ff078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1ff07c: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ff07cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff080: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FF080u;
    SET_GPR_U32(ctx, 31, 0x1FF088u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FF088u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FF088u) { return; }
    ctx->pc = 0x1FF088u;
label_1ff088:
    // 0x1ff088: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff088u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff08c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1ff08cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff090: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ff090u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff094: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff098: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1ff098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_1ff09c:
    // 0x1ff09c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff0a0: 0x94640340  lhu         $a0, 0x340($v1)
    ctx->pc = 0x1ff0a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x1ff0a4: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1ff0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1ff0a8: 0x30640002  andi        $a0, $v1, 0x2
    ctx->pc = 0x1ff0a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1ff0ac: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FF0ACu;
    {
        const bool branch_taken_0x1ff0ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff0ac) {
            ctx->pc = 0x1FF12Cu;
            goto label_1ff12c;
        }
    }
    ctx->pc = 0x1FF0B4u;
    // 0x1ff0b4: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff0b8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff0bc: 0x24a403c0  addiu       $a0, $a1, 0x3C0
    ctx->pc = 0x1ff0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 960));
    // 0x1ff0c0: 0x8c650324  lw          $a1, 0x324($v1)
    ctx->pc = 0x1ff0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 804)));
    // 0x1ff0c4: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FF0C4u;
    SET_GPR_U32(ctx, 31, 0x1FF0CCu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FF0CCu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FF0CCu) { return; }
    ctx->pc = 0x1FF0CCu;
label_1ff0cc:
    // 0x1ff0cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff0ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff0d0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff0d4: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1ff0d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1ff0d8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ff0d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff0dc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1ff0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1ff0e0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff0e4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ff0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ff0e8: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff0ec: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff0f0: 0x24a503c0  addiu       $a1, $a1, 0x3C0
    ctx->pc = 0x1ff0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 960));
    // 0x1ff0f4: 0x246602c0  addiu       $a2, $v1, 0x2C0
    ctx->pc = 0x1ff0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x1ff0f8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FF0F8u;
    SET_GPR_U32(ctx, 31, 0x1FF100u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FF100u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FF100u) { return; }
    ctx->pc = 0x1FF100u;
label_1ff100:
    // 0x1ff100: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1ff100u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff104: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ff104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff108: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ff108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff10c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff110: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1ff110u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1ff114: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1ff114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff118: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1ff118u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1ff11c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff120: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ff120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ff124: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1ff124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1ff128: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1ff128u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff12c:
    // 0x1ff12c: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff130: 0x94a30340  lhu         $v1, 0x340($a1)
    ctx->pc = 0x1ff130u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 832)));
    // 0x1ff134: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1ff134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1ff138: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ff138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ff13c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FF13Cu;
    {
        const bool branch_taken_0x1ff13c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff13c) {
            ctx->pc = 0x1FF198u;
            goto label_1ff198;
        }
    }
    ctx->pc = 0x1FF144u;
    // 0x1ff144: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff148: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff14c: 0x24840380  addiu       $a0, $a0, 0x380
    ctx->pc = 0x1ff14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x1ff150: 0x8c650320  lw          $a1, 0x320($v1)
    ctx->pc = 0x1ff150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
    // 0x1ff154: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FF154u;
    SET_GPR_U32(ctx, 31, 0x1FF15Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FF15Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FF15Cu) { return; }
    ctx->pc = 0x1FF15Cu;
label_1ff15c:
    // 0x1ff15c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff15cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff160: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ff160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff164: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff168: 0x8fb000d8  lw          $s0, 0xD8($sp)
    ctx->pc = 0x1ff168u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff16c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1ff16cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ff170: 0x24c50380  addiu       $a1, $a2, 0x380
    ctx->pc = 0x1ff170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 896));
    // 0x1ff174: 0x246602b0  addiu       $a2, $v1, 0x2B0
    ctx->pc = 0x1ff174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x1ff178: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FF178u;
    SET_GPR_U32(ctx, 31, 0x1FF180u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FF180u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FF180u) { return; }
    ctx->pc = 0x1FF180u;
label_1ff180:
    // 0x1ff180: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1ff180u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff184: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ff184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff188: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ff188u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff18c: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ff18cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff190: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x1ff190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x1ff194: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1ff194u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff198:
    // 0x1ff198: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff19c: 0x8ca302ac  lw          $v1, 0x2AC($a1)
    ctx->pc = 0x1ff19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 684)));
    // 0x1ff1a0: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1FF1A0u;
    {
        const bool branch_taken_0x1ff1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff1a0) {
            ctx->pc = 0x1FF22Cu;
            goto label_1ff22c;
        }
    }
    ctx->pc = 0x1FF1A8u;
    // 0x1ff1a8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff1ac: 0x8c7702ac  lw          $s7, 0x2AC($v1)
    ctx->pc = 0x1ff1acu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 684)));
    // 0x1ff1b0: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff1b4: 0x90a302a9  lbu         $v1, 0x2A9($a1)
    ctx->pc = 0x1ff1b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 681)));
    // 0x1ff1b8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1ff1b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff1bc: 0x92e50345  lbu         $a1, 0x345($s7)
    ctx->pc = 0x1ff1bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 837)));
    // 0x1ff1c0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1ff1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ff1c4: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1ff1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1ff1c8: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x1ff1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x1ff1cc: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1ff1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1ff1d0: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1FF1D0u;
    {
        const bool branch_taken_0x1ff1d0 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x1ff1d0) {
            ctx->pc = 0x1FF204u;
            goto label_1ff204;
        }
    }
    ctx->pc = 0x1FF1D8u;
    // 0x1ff1d8: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x1ff1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1ff1dc: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x1ff1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1ff1e0: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x1ff1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1ff1e4: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ff1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff1e8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1ff1e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1ff1ec: 0x24650480  addiu       $a1, $v1, 0x480
    ctx->pc = 0x1ff1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1ff1f0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1FF1F0u;
    SET_GPR_U32(ctx, 31, 0x1FF1F8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1FF1F8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FF1F8u) { return; }
    ctx->pc = 0x1FF1F8u;
label_1ff1f8:
    // 0x1ff1f8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff1f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff1fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FF1FCu;
    {
        const bool branch_taken_0x1ff1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff1fc) {
            ctx->pc = 0x1FF22Cu;
            goto label_1ff22c;
        }
    }
    ctx->pc = 0x1FF204u;
label_1ff204:
    // 0x1ff204: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff208: 0x906302a9  lbu         $v1, 0x2A9($v1)
    ctx->pc = 0x1ff208u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 681)));
    // 0x1ff20c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1ff20cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff210: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1ff210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1ff214: 0x2e32821  addu        $a1, $s7, $v1
    ctx->pc = 0x1ff214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1ff218: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x1ff218u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff21c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1ff21cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1ff220: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1FF220u;
    SET_GPR_U32(ctx, 31, 0x1FF228u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1FF228u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FF228u) { return; }
    ctx->pc = 0x1FF228u;
label_1ff228:
    // 0x1ff228: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff228u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ff22c:
    // 0x1ff22c: 0x8fa800d8  lw          $t0, 0xD8($sp)
    ctx->pc = 0x1ff22cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff230: 0x91080344  lbu         $t0, 0x344($t0)
    ctx->pc = 0x1ff230u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 836)));
    // 0x1ff234: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x1ff234u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1ff238: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1ff238u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1ff23c: 0x8fb100d8  lw          $s1, 0xD8($sp)
    ctx->pc = 0x1ff23cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff240: 0x2272821  addu        $a1, $s1, $a3
    ctx->pc = 0x1ff240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1ff244: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ff244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ff248: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ff248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff24c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FF24Cu;
    SET_GPR_U32(ctx, 31, 0x1FF254u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FF24Cu, 0x1FF254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF254u;
label_1ff254:
    // 0x1ff254: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff254u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff258: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff25c: 0x90640344  lbu         $a0, 0x344($v1)
    ctx->pc = 0x1ff25cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1ff260: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF260u;
    {
        const bool branch_taken_0x1ff260 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1ff260) {
            ctx->pc = 0x1FF27Cu;
            goto label_1ff27c;
        }
    }
    ctx->pc = 0x1FF268u;
    // 0x1ff268: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ff268u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff26c: 0x0  nop
    ctx->pc = 0x1ff26cu;
    // NOP
    // 0x1ff270: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1ff270u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ff274: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FF274u;
    {
        const bool branch_taken_0x1ff274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff274) {
            ctx->pc = 0x1FF298u;
            goto label_1ff298;
        }
    }
    ctx->pc = 0x1FF27Cu;
label_1ff27c:
    // 0x1ff27c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1ff27cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1ff280: 0x30860001  andi        $a2, $a0, 0x1
    ctx->pc = 0x1ff280u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1ff284: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ff284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ff288: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ff288u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff28c: 0x0  nop
    ctx->pc = 0x1ff28cu;
    // NOP
    // 0x1ff290: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1ff290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ff294: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1ff294u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1ff298:
    // 0x1ff298: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ff298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ff29c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1ff29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ff2a0: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FF2A0u;
    SET_GPR_U32(ctx, 31, 0x1FF2A8u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FF2A8u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FF2A8u) { return; }
    ctx->pc = 0x1FF2A8u;
label_1ff2a8:
    // 0x1ff2a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff2a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff2ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ff2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff2b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ff2b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff2b4: 0x0  nop
    ctx->pc = 0x1ff2b4u;
    // NOP
    // 0x1ff2b8: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1ff2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1ff2bc: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x1ff2bcu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ff2c0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1ff2c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff2c4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1FF2C4u;
    {
        const bool branch_taken_0x1ff2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff2c4) {
            ctx->pc = 0x1FF3B8u;
            goto label_1ff3b8;
        }
    }
    ctx->pc = 0x1FF2CCu;
label_1ff2cc:
    // 0x1ff2cc: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x1ff2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x1ff2d0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff2d4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ff2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ff2d8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ff2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ff2dc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1ff2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ff2e0: 0x24660140  addiu       $a2, $v1, 0x140
    ctx->pc = 0x1ff2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x1ff2e4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FF2E4u;
    SET_GPR_U32(ctx, 31, 0x1FF2ECu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FF2E4u, 0x1FF2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF2ECu;
label_1ff2ec:
    // 0x1ff2ec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff2ecu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff2f0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1ff2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ff2f4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff2f8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1ff2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ff2fc: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x1ff2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1ff300: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1ff300u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ff304: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff308: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1ff308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ff30c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1ff30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ff310: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FF310u;
    SET_GPR_U32(ctx, 31, 0x1FF318u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FF310u, 0x1FF318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF318u;
label_1ff318:
    // 0x1ff318: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff318u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff31c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff320: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1ff320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1ff324: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ff324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff328: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1ff328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ff32c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff330: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1ff330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ff334: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x1ff334u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ff338: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff33c: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x1ff33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1ff340: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ff340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ff344: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FF344u;
    SET_GPR_U32(ctx, 31, 0x1FF34Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FF344u, 0x1FF34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF34Cu;
label_1ff34c:
    // 0x1ff34c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff34cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff350: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff354: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1ff354u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1ff358: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ff358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff35c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1ff35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1ff360: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF360u;
    {
        const bool branch_taken_0x1ff360 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1ff360) {
            ctx->pc = 0x1FF37Cu;
            goto label_1ff37c;
        }
    }
    ctx->pc = 0x1FF368u;
    // 0x1ff368: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ff368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff36c: 0x0  nop
    ctx->pc = 0x1ff36cu;
    // NOP
    // 0x1ff370: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1ff370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ff374: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FF374u;
    {
        const bool branch_taken_0x1ff374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff374) {
            ctx->pc = 0x1FF398u;
            goto label_1ff398;
        }
    }
    ctx->pc = 0x1FF37Cu;
label_1ff37c:
    // 0x1ff37c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1ff37cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1ff380: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ff380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ff384: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ff384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ff388: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ff388u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff38c: 0x0  nop
    ctx->pc = 0x1ff38cu;
    // NOP
    // 0x1ff390: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1ff390u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ff394: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1ff394u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1ff398:
    // 0x1ff398: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ff398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ff39c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1ff39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ff3a0: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FF3A0u;
    SET_GPR_U32(ctx, 31, 0x1FF3A8u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FF3A8u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FF3A8u) { return; }
    ctx->pc = 0x1FF3A8u;
label_1ff3a8:
    // 0x1ff3a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff3a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff3ac: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1ff3acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1ff3b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ff3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ff3b4: 0x0  nop
    ctx->pc = 0x1ff3b4u;
    // NOP
label_1ff3b8:
    // 0x1ff3b8: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff3bc: 0x90a50344  lbu         $a1, 0x344($a1)
    ctx->pc = 0x1ff3bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 836)));
    // 0x1ff3c0: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1ff3c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ff3c4: 0x204182b  sltu        $v1, $s0, $a0
    ctx->pc = 0x1ff3c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ff3c8: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x1FF3C8u;
    {
        const bool branch_taken_0x1ff3c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff3c8) {
            ctx->pc = 0x1FF2CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff2cc;
        }
    }
    ctx->pc = 0x1FF3D0u;
    // 0x1ff3d0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1ff3d0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ff3d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FF3D4u;
    {
        const bool branch_taken_0x1ff3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff3d4) {
            ctx->pc = 0x1FF418u;
            goto label_1ff418;
        }
    }
    ctx->pc = 0x1FF3DCu;
label_1ff3dc:
    // 0x1ff3dc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff3e0: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1ff3e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1ff3e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ff3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff3e8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ff3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ff3ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ff3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ff3f0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff3f4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ff3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ff3f8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1ff3f8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ff3fc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1ff3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ff400: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff404: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1ff404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ff408: 0x24830480  addiu       $v1, $a0, 0x480
    ctx->pc = 0x1ff408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1ff40c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1ff40cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1ff410: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1ff410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ff414: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1ff414u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1ff418:
    // 0x1ff418: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff41c: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x1ff41cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1ff420: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ff420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ff424: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1ff424u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1ff428: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FF428u;
    {
        const bool branch_taken_0x1ff428 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff428) {
            ctx->pc = 0x1FF3DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff3dc;
        }
    }
    ctx->pc = 0x1FF430u;
    // 0x1ff430: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1ff430u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ff434: 0x100002d4  b           . + 4 + (0x2D4 << 2)
    ctx->pc = 0x1FF434u;
    {
        const bool branch_taken_0x1ff434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff434) {
            ctx->pc = 0x1FFF88u;
            goto label_1fff88;
        }
    }
    ctx->pc = 0x1FF43Cu;
label_1ff43c:
    // 0x1ff43c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff440: 0x90650347  lbu         $a1, 0x347($v1)
    ctx->pc = 0x1ff440u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x1ff444: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1ff444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ff448: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff44c: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1ff44cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1ff450: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ff450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff454: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1ff454u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1ff458: 0x10200223  beqz        $at, . + 4 + (0x223 << 2)
    ctx->pc = 0x1FF458u;
    {
        const bool branch_taken_0x1ff458 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff458) {
            ctx->pc = 0x1FFCE8u;
            goto label_1ffce8;
        }
    }
    ctx->pc = 0x1FF460u;
    // 0x1ff460: 0x8fb000d8  lw          $s0, 0xD8($sp)
    ctx->pc = 0x1ff460u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff464: 0x92030abc  lbu         $v1, 0xABC($s0)
    ctx->pc = 0x1ff464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2748)));
    // 0x1ff468: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ff468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff46c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ff46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff470: 0x108301d1  beq         $a0, $v1, . + 4 + (0x1D1 << 2)
    ctx->pc = 0x1FF470u;
    {
        const bool branch_taken_0x1ff470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ff470) {
            ctx->pc = 0x1FFBB8u;
            goto label_1ffbb8;
        }
    }
    ctx->pc = 0x1FF478u;
    // 0x1ff478: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ff478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff47c: 0x10830148  beq         $a0, $v1, . + 4 + (0x148 << 2)
    ctx->pc = 0x1FF47Cu;
    {
        const bool branch_taken_0x1ff47c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ff47c) {
            ctx->pc = 0x1FF9A0u;
            goto label_1ff9a0;
        }
    }
    ctx->pc = 0x1FF484u;
    // 0x1ff484: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF484u;
    {
        const bool branch_taken_0x1ff484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff484) {
            ctx->pc = 0x1FF494u;
            goto label_1ff494;
        }
    }
    ctx->pc = 0x1FF48Cu;
    // 0x1ff48c: 0x100002bc  b           . + 4 + (0x2BC << 2)
    ctx->pc = 0x1FF48Cu;
    {
        const bool branch_taken_0x1ff48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff48c) {
            ctx->pc = 0x1FFF80u;
            goto label_1fff80;
        }
    }
    ctx->pc = 0x1FF494u;
label_1ff494:
    // 0x1ff494: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff498: 0x90830346  lbu         $v1, 0x346($a0)
    ctx->pc = 0x1ff498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x1ff49c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ff49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ff4a0: 0xa0830346  sb          $v1, 0x346($a0)
    ctx->pc = 0x1ff4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 838), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff4a4: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff4a8: 0x90a40348  lbu         $a0, 0x348($a1)
    ctx->pc = 0x1ff4a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1ff4ac: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1ff4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ff4b0: 0xa0a30348  sb          $v1, 0x348($a1)
    ctx->pc = 0x1ff4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff4b4: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ff4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff4b8: 0x90c50348  lbu         $a1, 0x348($a2)
    ctx->pc = 0x1ff4b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 840)));
    // 0x1ff4bc: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1ff4bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ff4c0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1ff4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ff4c4: 0x24640002  addiu       $a0, $v1, 0x2
    ctx->pc = 0x1ff4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1ff4c8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ff4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ff4cc: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff4d0: 0xa083034b  sb          $v1, 0x34B($a0)
    ctx->pc = 0x1ff4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 843), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff4d4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff4d8: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x1ff4d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1ff4dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ff4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff4e0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1ff4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ff4e4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff4e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ff4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ff4ec: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1ff4ecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ff4f0: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff4f4: 0x90a40346  lbu         $a0, 0x346($a1)
    ctx->pc = 0x1ff4f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 838)));
    // 0x1ff4f8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ff4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ff4fc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1ff4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ff500: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff504: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1ff504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ff508: 0x24a40480  addiu       $a0, $a1, 0x480
    ctx->pc = 0x1ff508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
    // 0x1ff50c: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x1ff50cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x1ff510: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff514: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1ff514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1ff518: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1ff518u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff51c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff520: 0x90640346  lbu         $a0, 0x346($v1)
    ctx->pc = 0x1ff520u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1ff524: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x1ff524u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ff528: 0xf0082a  slt         $at, $a3, $s0
    ctx->pc = 0x1ff528u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1ff52c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF52Cu;
    {
        const bool branch_taken_0x1ff52c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff52c) {
            ctx->pc = 0x1FF540u;
            goto label_1ff540;
        }
    }
    ctx->pc = 0x1FF534u;
    // 0x1ff534: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ff534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff538: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ff538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff53c: 0xa0c30abc  sb          $v1, 0xABC($a2)
    ctx->pc = 0x1ff53cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2748), (uint8_t)GPR_U32(ctx, 3));
label_1ff540:
    // 0x1ff540: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff544: 0x906502aa  lbu         $a1, 0x2AA($v1)
    ctx->pc = 0x1ff544u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 682)));
    // 0x1ff548: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1ff548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ff54c: 0x1060028c  beqz        $v1, . + 4 + (0x28C << 2)
    ctx->pc = 0x1FF54Cu;
    {
        const bool branch_taken_0x1ff54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff54c) {
            ctx->pc = 0x1FFF80u;
            goto label_1fff80;
        }
    }
    ctx->pc = 0x1FF554u;
    // 0x1ff554: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ff554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff558: 0x90c50346  lbu         $a1, 0x346($a2)
    ctx->pc = 0x1ff558u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 838)));
    // 0x1ff55c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x1ff55cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ff560: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff564: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x1ff564u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x1ff568: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1ff568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff56c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ff56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff570: 0x58043  sra         $s0, $a1, 1
    ctx->pc = 0x1ff570u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1ff574: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1ff574u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ff578: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff57c: 0x90630290  lbu         $v1, 0x290($v1)
    ctx->pc = 0x1ff57cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 656)));
    // 0x1ff580: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ff580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff584: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ff584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ff588: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1ff588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ff58c: 0x14c4027c  bne         $a2, $a0, . + 4 + (0x27C << 2)
    ctx->pc = 0x1FF58Cu;
    {
        const bool branch_taken_0x1ff58c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ff58c) {
            ctx->pc = 0x1FFF80u;
            goto label_1fff80;
        }
    }
    ctx->pc = 0x1FF594u;
    // 0x1ff594: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1ff594u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ff598: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1ff598u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ff59c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff5a0: 0x8c650328  lw          $a1, 0x328($v1)
    ctx->pc = 0x1ff5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 808)));
    // 0x1ff5a4: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1FF5A4u;
    {
        const bool branch_taken_0x1ff5a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff5a4) {
            ctx->pc = 0x1FF5DCu;
            goto label_1ff5dc;
        }
    }
    ctx->pc = 0x1FF5ACu;
    // 0x1ff5ac: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff5b0: 0x8c83032c  lw          $v1, 0x32C($a0)
    ctx->pc = 0x1ff5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 812)));
    // 0x1ff5b4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF5B4u;
    {
        const bool branch_taken_0x1ff5b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff5b4) {
            ctx->pc = 0x1FF5C8u;
            goto label_1ff5c8;
        }
    }
    ctx->pc = 0x1FF5BCu;
    // 0x1ff5bc: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1ff5bcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ff5c0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1FF5C0u;
    {
        const bool branch_taken_0x1ff5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff5c0) {
            ctx->pc = 0x1FF618u;
            goto label_1ff618;
        }
    }
    ctx->pc = 0x1FF5C8u;
label_1ff5c8:
    // 0x1ff5c8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1ff5c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff5cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ff5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff5d0: 0x70809e28  paddub      $s3, $a0, $zero
    ctx->pc = 0x1ff5d0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ff5d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FF5D4u;
    {
        const bool branch_taken_0x1ff5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff5d4) {
            ctx->pc = 0x1FF618u;
            goto label_1ff618;
        }
    }
    ctx->pc = 0x1FF5DCu;
label_1ff5dc:
    // 0x1ff5dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ff5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff5e0: 0x70a0a628  paddub      $s4, $a1, $zero
    ctx->pc = 0x1ff5e0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ff5e4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff5e8: 0x8c63032c  lw          $v1, 0x32C($v1)
    ctx->pc = 0x1ff5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 812)));
    // 0x1ff5ec: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF5ECu;
    {
        const bool branch_taken_0x1ff5ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff5ec) {
            ctx->pc = 0x1FF604u;
            goto label_1ff604;
        }
    }
    ctx->pc = 0x1FF5F4u;
    // 0x1ff5f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ff5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff5f8: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x1ff5f8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ff5fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF5FCu;
    {
        const bool branch_taken_0x1ff5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff5fc) {
            ctx->pc = 0x1FF618u;
            goto label_1ff618;
        }
    }
    ctx->pc = 0x1FF604u;
label_1ff604:
    // 0x1ff604: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ff604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ff608: 0x70a09628  paddub      $s2, $a1, $zero
    ctx->pc = 0x1ff608u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ff60c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ff60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff610: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x1ff610u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1ff614: 0x0  nop
    ctx->pc = 0x1ff614u;
    // NOP
label_1ff618:
    // 0x1ff618: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff61c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ff61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ff620: 0x246502c0  addiu       $a1, $v1, 0x2C0
    ctx->pc = 0x1ff620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x1ff624: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1FF624u;
    SET_GPR_U32(ctx, 31, 0x1FF62Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1FF62Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FF62Cu) { return; }
    ctx->pc = 0x1FF62Cu;
label_1ff62c:
    // 0x1ff62c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff62cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff630: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff634: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff638: 0x248402b0  addiu       $a0, $a0, 0x2B0
    ctx->pc = 0x1ff638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
    // 0x1ff63c: 0x246502c0  addiu       $a1, $v1, 0x2C0
    ctx->pc = 0x1ff63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x1ff640: 0xc067594  jal         func_19D650
    ctx->pc = 0x1FF640u;
    SET_GPR_U32(ctx, 31, 0x1FF648u);
    ctx->pc = 0x19D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D650u, 0x1FF640u, 0x1FF648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF648u;
label_1ff648:
    // 0x1ff648: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff64c: 0x3c0440e0  lui         $a0, 0x40E0
    ctx->pc = 0x1ff64cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16608 << 16));
    // 0x1ff650: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1ff650u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ff654: 0xc4610270  lwc1        $f1, 0x270($v1)
    ctx->pc = 0x1ff654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ff658: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1ff658u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1ff65c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ff65cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ff660: 0x3c033989  lui         $v1, 0x3989
    ctx->pc = 0x1ff660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14729 << 16));
    // 0x1ff664: 0x3465f874  ori         $a1, $v1, 0xF874
    ctx->pc = 0x1ff664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63604);
    // 0x1ff668: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ff668u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff66c: 0x0  nop
    ctx->pc = 0x1ff66cu;
    // NOP
    // 0x1ff670: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ff670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ff674: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1ff674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1ff678: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FF678u;
    SET_GPR_U32(ctx, 31, 0x1FF680u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FF678u, 0x1FF680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF680u;
label_1ff680:
    // 0x1ff680: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1ff680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ff684: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ff684u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ff688: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ff688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff68c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ff68cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ff690: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ff690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ff694: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FF694u;
    SET_GPR_U32(ctx, 31, 0x1FF69Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FF694u, 0x1FF69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF69Cu;
label_1ff69c:
    // 0x1ff69c: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1ff69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ff6a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ff6a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ff6a4: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1ff6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff6a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ff6a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ff6ac: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1ff6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1ff6b0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff6b4: 0x90630347  lbu         $v1, 0x347($v1)
    ctx->pc = 0x1ff6b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x1ff6b8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ff6b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff6bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ff6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff6c0: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x1ff6c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1ff6c4: 0x70802e28  paddub      $a1, $a0, $zero
    ctx->pc = 0x1ff6c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ff6c8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1ff6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ff6cc: 0x3065003f  andi        $a1, $v1, 0x3F
    ctx->pc = 0x1ff6ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1ff6d0: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x1ff6d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1ff6d4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1ff6d4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1ff6d8: 0x636b8  dsll        $a2, $a2, 26
    ctx->pc = 0x1ff6d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 26);
    // 0x1ff6dc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff6e0: 0x8c630350  lw          $v1, 0x350($v1)
    ctx->pc = 0x1ff6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 848)));
    // 0x1ff6e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ff6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff6e8: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1ff6e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ff6ec: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1ff6ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1ff6f0: 0x32440003  andi        $a0, $s2, 0x3
    ctx->pc = 0x1ff6f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x1ff6f4: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1ff6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1ff6f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1ff6f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1ff6fc: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1ff6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1ff700: 0xa3f025  or          $fp, $a1, $v1
    ctx->pc = 0x1ff700u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1ff704: 0xde2825  or          $a1, $a2, $fp
    ctx->pc = 0x1ff704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 30));
    // 0x1ff708: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x1ff708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1ff70c: 0x2831825  or          $v1, $s4, $v1
    ctx->pc = 0x1ff70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
    // 0x1ff710: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1ff710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1ff714: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ff714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ff718: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ff718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ff71c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1ff71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1ff720: 0xa32025  or          $a0, $a1, $v1
    ctx->pc = 0x1ff720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1ff724: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff728: 0x24a302b0  addiu       $v1, $a1, 0x2B0
    ctx->pc = 0x1ff728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 688));
    // 0x1ff72c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1ff72cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ff730: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1ff730u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1ff734: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1ff734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ff738: 0x38438  dsll        $s0, $v1, 16
    ctx->pc = 0x1ff738u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << 16);
    // 0x1ff73c: 0x3605ffff  ori         $a1, $s0, 0xFFFF
    ctx->pc = 0x1ff73cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x1ff740: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1ff740u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1ff744: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x1ff744u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1ff748: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x1ff748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ff74c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1ff74cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ff750: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1ff750u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1ff754: 0x341effff  ori         $fp, $zero, 0xFFFF
    ctx->pc = 0x1ff754u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ff758: 0x1e2c38  dsll        $a1, $fp, 16
    ctx->pc = 0x1ff758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) << 16);
    // 0x1ff75c: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x1ff75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1ff760: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1ff760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1ff764: 0xe3b825  or          $s7, $a3, $v1
    ctx->pc = 0x1ff764u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1ff768: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff76c: 0x8ca30320  lw          $v1, 0x320($a1)
    ctx->pc = 0x1ff76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 800)));
    // 0x1ff770: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1ff770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ff774: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1ff774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1ff778: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1ff778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ff77c: 0x51c38  dsll        $v1, $a1, 16
    ctx->pc = 0x1ff77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 16);
    // 0x1ff780: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ff780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ff784: 0xc32824  and         $a1, $a2, $v1
    ctx->pc = 0x1ff784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1ff788: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x1ff788u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1ff78c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff790: 0x8c630324  lw          $v1, 0x324($v1)
    ctx->pc = 0x1ff790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 804)));
    // 0x1ff794: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1ff794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ff798: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1ff798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1ff79c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1ff79cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ff7a0: 0x51c38  dsll        $v1, $a1, 16
    ctx->pc = 0x1ff7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 16);
    // 0x1ff7a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ff7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ff7a8: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1ff7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1ff7ac: 0xe33025  or          $a2, $a3, $v1
    ctx->pc = 0x1ff7acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1ff7b0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff7b4: 0x90650344  lbu         $a1, 0x344($v1)
    ctx->pc = 0x1ff7b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1ff7b8: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x1ff7b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ff7bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ff7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff7c0: 0x74043  sra         $t0, $a3, 1
    ctx->pc = 0x1ff7c0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 7), 1));
    // 0x1ff7c4: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x1ff7c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1ff7c8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1ff7c8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1ff7cc: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x1ff7ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1ff7d0: 0xc06352c  jal         func_18D4B0
    ctx->pc = 0x1FF7D0u;
    SET_GPR_U32(ctx, 31, 0x1FF7D8u);
    ctx->pc = 0x18D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D4B0u, 0x1FF7D0u, 0x1FF7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF7D8u;
label_1ff7d8:
    // 0x1ff7d8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1ff7d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff7dc: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x1ff7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x1ff7e0: 0x34850011  ori         $a1, $a0, 0x11
    ctx->pc = 0x1ff7e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    // 0x1ff7e4: 0x122501e6  beq         $s1, $a1, . + 4 + (0x1E6 << 2)
    ctx->pc = 0x1FF7E4u;
    {
        const bool branch_taken_0x1ff7e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x1ff7e4) {
            ctx->pc = 0x1FFF80u;
            goto label_1fff80;
        }
    }
    ctx->pc = 0x1FF7ECu;
    // 0x1ff7ec: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ff7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff7f0: 0x8cc30328  lw          $v1, 0x328($a2)
    ctx->pc = 0x1ff7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 808)));
    // 0x1ff7f4: 0xae230328  sw          $v1, 0x328($s1)
    ctx->pc = 0x1ff7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 3));
    // 0x1ff7f8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff7fc: 0x8c64032c  lw          $a0, 0x32C($v1)
    ctx->pc = 0x1ff7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 812)));
    // 0x1ff800: 0xae24032c  sw          $a0, 0x32C($s1)
    ctx->pc = 0x1ff800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 4));
    // 0x1ff804: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff808: 0x906602aa  lbu         $a2, 0x2AA($v1)
    ctx->pc = 0x1ff808u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 682)));
    // 0x1ff80c: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1ff80cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1ff810: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x1ff810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ff814: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1ff814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ff818: 0xa22302aa  sb          $v1, 0x2AA($s1)
    ctx->pc = 0x1ff818u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 682), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff81c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff820: 0xae2302ac  sw          $v1, 0x2AC($s1)
    ctx->pc = 0x1ff820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 3));
    // 0x1ff824: 0x8fb000d8  lw          $s0, 0xD8($sp)
    ctx->pc = 0x1ff824u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff828: 0x92030344  lbu         $v1, 0x344($s0)
    ctx->pc = 0x1ff828u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 836)));
    // 0x1ff82c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ff82cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff830: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ff830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff834: 0x42843  sra         $a1, $a0, 1
    ctx->pc = 0x1ff834u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1ff838: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1ff838u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ff83c: 0x70803628  paddub      $a2, $a0, $zero
    ctx->pc = 0x1ff83cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ff840: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff844: 0x90640290  lbu         $a0, 0x290($v1)
    ctx->pc = 0x1ff844u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 656)));
    // 0x1ff848: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ff848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ff84c: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x1ff84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1ff850: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ff850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ff854: 0xa22302a9  sb          $v1, 0x2A9($s1)
    ctx->pc = 0x1ff854u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 681), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff858: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff85c: 0x90a302a8  lbu         $v1, 0x2A8($a1)
    ctx->pc = 0x1ff85cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 680)));
    // 0x1ff860: 0xa22302a8  sb          $v1, 0x2A8($s1)
    ctx->pc = 0x1ff860u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff864: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ff864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff868: 0xc4c002d0  lwc1        $f0, 0x2D0($a2)
    ctx->pc = 0x1ff868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff86c: 0xe62002d0  swc1        $f0, 0x2D0($s1)
    ctx->pc = 0x1ff86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x1ff870: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff874: 0xc4a002d4  lwc1        $f0, 0x2D4($a1)
    ctx->pc = 0x1ff874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff878: 0xe62002d4  swc1        $f0, 0x2D4($s1)
    ctx->pc = 0x1ff878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x1ff87c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff880: 0xc46002d8  lwc1        $f0, 0x2D8($v1)
    ctx->pc = 0x1ff880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff884: 0xe62002d8  swc1        $f0, 0x2D8($s1)
    ctx->pc = 0x1ff884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    // 0x1ff888: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff88c: 0xc46002dc  lwc1        $f0, 0x2DC($v1)
    ctx->pc = 0x1ff88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff890: 0xe62002dc  swc1        $f0, 0x2DC($s1)
    ctx->pc = 0x1ff890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 732), bits); }
    // 0x1ff894: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff898: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x1ff898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ff89c: 0x3c04477f  lui         $a0, 0x477F
    ctx->pc = 0x1ff89cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18303 << 16));
    // 0x1ff8a0: 0x3483ff00  ori         $v1, $a0, 0xFF00
    ctx->pc = 0x1ff8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
    // 0x1ff8a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ff8a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff8a8: 0x0  nop
    ctx->pc = 0x1ff8a8u;
    // NOP
    // 0x1ff8ac: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ff8acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ff8b0: 0x0  nop
    ctx->pc = 0x1ff8b0u;
    // NOP
    // 0x1ff8b4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1FF8B4u;
    {
        const bool branch_taken_0x1ff8b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ff8b4) {
            ctx->pc = 0x1FF8ECu;
            goto label_1ff8ec;
        }
    }
    ctx->pc = 0x1FF8BCu;
    // 0x1ff8bc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff8c0: 0xc4610338  lwc1        $f1, 0x338($v1)
    ctx->pc = 0x1ff8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ff8c4: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff8c8: 0xc4a0033c  lwc1        $f0, 0x33C($a1)
    ctx->pc = 0x1ff8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff8cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ff8ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ff8d0: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x1ff8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x1ff8d4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1ff8d4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff8d8: 0x0  nop
    ctx->pc = 0x1ff8d8u;
    // NOP
    // 0x1ff8dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ff8dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ff8e0: 0xe6200338  swc1        $f0, 0x338($s1)
    ctx->pc = 0x1ff8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
    // 0x1ff8e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF8E4u;
    {
        const bool branch_taken_0x1ff8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff8e4) {
            ctx->pc = 0x1FF8F8u;
            goto label_1ff8f8;
        }
    }
    ctx->pc = 0x1FF8ECu;
label_1ff8ec:
    // 0x1ff8ec: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff8f0: 0xc4600338  lwc1        $f0, 0x338($v1)
    ctx->pc = 0x1ff8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff8f4: 0xe6200338  swc1        $f0, 0x338($s1)
    ctx->pc = 0x1ff8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
label_1ff8f8:
    // 0x1ff8f8: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ff8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff8fc: 0xc4c0033c  lwc1        $f0, 0x33C($a2)
    ctx->pc = 0x1ff8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff900: 0xe620033c  swc1        $f0, 0x33C($s1)
    ctx->pc = 0x1ff900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 828), bits); }
    // 0x1ff904: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff908: 0xc4800270  lwc1        $f0, 0x270($a0)
    ctx->pc = 0x1ff908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff90c: 0xe6200270  swc1        $f0, 0x270($s1)
    ctx->pc = 0x1ff90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 624), bits); }
    // 0x1ff910: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff914: 0xc4600270  lwc1        $f0, 0x270($v1)
    ctx->pc = 0x1ff914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff918: 0xe6200274  swc1        $f0, 0x274($s1)
    ctx->pc = 0x1ff918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 628), bits); }
    // 0x1ff91c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff920: 0xc4600270  lwc1        $f0, 0x270($v1)
    ctx->pc = 0x1ff920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff924: 0xe6200278  swc1        $f0, 0x278($s1)
    ctx->pc = 0x1ff924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 632), bits); }
    // 0x1ff928: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff92c: 0xc4600280  lwc1        $f0, 0x280($v1)
    ctx->pc = 0x1ff92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff930: 0xe6200280  swc1        $f0, 0x280($s1)
    ctx->pc = 0x1ff930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 640), bits); }
    // 0x1ff934: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff938: 0xc4600280  lwc1        $f0, 0x280($v1)
    ctx->pc = 0x1ff938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff93c: 0xe6200284  swc1        $f0, 0x284($s1)
    ctx->pc = 0x1ff93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 644), bits); }
    // 0x1ff940: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff944: 0xc4600280  lwc1        $f0, 0x280($v1)
    ctx->pc = 0x1ff944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff948: 0xe6200288  swc1        $f0, 0x288($s1)
    ctx->pc = 0x1ff948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 648), bits); }
    // 0x1ff94c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff950: 0xc48002a4  lwc1        $f0, 0x2A4($a0)
    ctx->pc = 0x1ff950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff954: 0xe62002a4  swc1        $f0, 0x2A4($s1)
    ctx->pc = 0x1ff954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 676), bits); }
    // 0x1ff958: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff95c: 0x9064034f  lbu         $a0, 0x34F($v1)
    ctx->pc = 0x1ff95cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 847)));
    // 0x1ff960: 0xa224034f  sb          $a0, 0x34F($s1)
    ctx->pc = 0x1ff960u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 847), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ff964: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff968: 0x90a30344  lbu         $v1, 0x344($a1)
    ctx->pc = 0x1ff968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 836)));
    // 0x1ff96c: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x1ff96cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff970: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1ff970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff974: 0x152843  sra         $a1, $s5, 1
    ctx->pc = 0x1ff974u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 21), 1));
    // 0x1ff978: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1ff978u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ff97c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff980: 0x8c630364  lw          $v1, 0x364($v1)
    ctx->pc = 0x1ff980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 868)));
    // 0x1ff984: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ff984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ff988: 0xae230364  sw          $v1, 0x364($s1)
    ctx->pc = 0x1ff988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 3));
    // 0x1ff98c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff990: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x1ff990u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x1ff994: 0xa6230340  sh          $v1, 0x340($s1)
    ctx->pc = 0x1ff994u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 832), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ff998: 0x10000179  b           . + 4 + (0x179 << 2)
    ctx->pc = 0x1FF998u;
    {
        const bool branch_taken_0x1ff998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff998) {
            ctx->pc = 0x1FFF80u;
            goto label_1fff80;
        }
    }
    ctx->pc = 0x1FF9A0u;
label_1ff9a0:
    // 0x1ff9a0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff9a4: 0x9064034f  lbu         $a0, 0x34F($v1)
    ctx->pc = 0x1ff9a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 847)));
    // 0x1ff9a8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ff9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ff9ac: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1ff9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ff9b0: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FF9B0u;
    {
        const bool branch_taken_0x1ff9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1ff9b0) {
            ctx->pc = 0x1FF9D0u;
            goto label_1ff9d0;
        }
    }
    ctx->pc = 0x1FF9B8u;
    // 0x1ff9b8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff9bc: 0x9083034f  lbu         $v1, 0x34F($a0)
    ctx->pc = 0x1ff9bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 847)));
    // 0x1ff9c0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ff9c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff9c4: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x1ff9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1ff9c8: 0x1483003b  bne         $a0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1FF9C8u;
    {
        const bool branch_taken_0x1ff9c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ff9c8) {
            ctx->pc = 0x1FFAB8u;
            goto label_1ffab8;
        }
    }
    ctx->pc = 0x1FF9D0u;
label_1ff9d0:
    // 0x1ff9d0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff9d4: 0x8c630364  lw          $v1, 0x364($v1)
    ctx->pc = 0x1ff9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 868)));
    // 0x1ff9d8: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1FF9D8u;
    {
        const bool branch_taken_0x1ff9d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff9d8) {
            ctx->pc = 0x1FFAA0u;
            goto label_1ffaa0;
        }
    }
    ctx->pc = 0x1FF9E0u;
    // 0x1ff9e0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff9e4: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1ff9e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1ff9e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ff9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ff9ec: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x1ff9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff9f0: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff9f4: 0x90a40348  lbu         $a0, 0x348($a1)
    ctx->pc = 0x1ff9f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1ff9f8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ff9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ff9fc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ff9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ffa00: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1ffa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1ffa04: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1ffa04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffa08: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffa0c: 0xa070034b  sb          $s0, 0x34B($v1)
    ctx->pc = 0x1ffa0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 16));
    // 0x1ffa10: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffa10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffa14: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x1ffa14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x1ffa18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ffa18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ffa1c: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x1ffa1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ffa20: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1ffa20u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ffa24: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FFA24u;
    {
        const bool branch_taken_0x1ffa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffa24) {
            ctx->pc = 0x1FFA68u;
            goto label_1ffa68;
        }
    }
    ctx->pc = 0x1FFA2Cu;
label_1ffa2c:
    // 0x1ffa2c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffa30: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x1ffa30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x1ffa34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ffa34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffa38: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x1ffa38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ffa3c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1ffa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1ffa40: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffa44: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1ffa44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ffa48: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x1ffa48u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ffa4c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1ffa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ffa50: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffa54: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1ffa54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ffa58: 0x24830480  addiu       $v1, $a0, 0x480
    ctx->pc = 0x1ffa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1ffa5c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1ffa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1ffa60: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1ffa60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ffa64: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1ffa64u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1ffa68:
    // 0x1ffa68: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffa6c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1ffa6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1ffa70: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ffa70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffa74: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1ffa74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1ffa78: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FFA78u;
    {
        const bool branch_taken_0x1ffa78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffa78) {
            ctx->pc = 0x1FFA2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffa2c;
        }
    }
    ctx->pc = 0x1FFA80u;
    // 0x1ffa80: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ffa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ffa84: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffa88: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x1ffa88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ffa8c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1ffa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ffa90: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ffa90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffa94: 0xacc30364  sw          $v1, 0x364($a2)
    ctx->pc = 0x1ffa94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 868), GPR_U32(ctx, 3));
    // 0x1ffa98: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x1FFA98u;
    {
        const bool branch_taken_0x1ffa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffa98) {
            ctx->pc = 0x1FFF80u;
            goto label_1fff80;
        }
    }
    ctx->pc = 0x1FFAA0u;
label_1ffaa0:
    // 0x1ffaa0: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffaa4: 0x8ca40364  lw          $a0, 0x364($a1)
    ctx->pc = 0x1ffaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 868)));
    // 0x1ffaa8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1ffaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ffaac: 0xaca30364  sw          $v1, 0x364($a1)
    ctx->pc = 0x1ffaacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 868), GPR_U32(ctx, 3));
    // 0x1ffab0: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x1FFAB0u;
    {
        const bool branch_taken_0x1ffab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffab0) {
            ctx->pc = 0x1FFF80u;
            goto label_1fff80;
        }
    }
    ctx->pc = 0x1FFAB8u;
label_1ffab8:
    // 0x1ffab8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffabc: 0x9085034f  lbu         $a1, 0x34F($a0)
    ctx->pc = 0x1ffabcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 847)));
    // 0x1ffac0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1ffac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ffac4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffac8: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x1ffac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x1ffacc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ffaccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffad0: 0xa38021  addu        $s0, $a1, $v1
    ctx->pc = 0x1ffad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ffad4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffad8: 0x90640347  lbu         $a0, 0x347($v1)
    ctx->pc = 0x1ffad8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x1ffadc: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x1ffadcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ffae0: 0x207182a  slt         $v1, $s0, $a3
    ctx->pc = 0x1ffae0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1ffae4: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1FFAE4u;
    {
        const bool branch_taken_0x1ffae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffae4) {
            ctx->pc = 0x1FFBA0u;
            goto label_1ffba0;
        }
    }
    ctx->pc = 0x1FFAECu;
    // 0x1ffaec: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ffaecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffaf0: 0x90c30348  lbu         $v1, 0x348($a2)
    ctx->pc = 0x1ffaf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 840)));
    // 0x1ffaf4: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x1ffaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ffaf8: 0xa0c50348  sb          $a1, 0x348($a2)
    ctx->pc = 0x1ffaf8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 840), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ffafc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffb00: 0x90660348  lbu         $a2, 0x348($v1)
    ctx->pc = 0x1ffb00u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1ffb04: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x1ffb04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1ffb08: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x1ffb08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ffb0c: 0x24c40002  addiu       $a0, $a2, 0x2
    ctx->pc = 0x1ffb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1ffb10: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ffb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ffb14: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffb14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffb18: 0xa0a3034b  sb          $v1, 0x34B($a1)
    ctx->pc = 0x1ffb18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 843), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ffb1c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffb20: 0x90640345  lbu         $a0, 0x345($v1)
    ctx->pc = 0x1ffb20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1ffb24: 0x24900001  addiu       $s0, $a0, 0x1
    ctx->pc = 0x1ffb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ffb28: 0xa0700345  sb          $s0, 0x345($v1)
    ctx->pc = 0x1ffb28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 837), (uint8_t)GPR_U32(ctx, 16));
    // 0x1ffb2c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1ffb2cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ffb30: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1FFB30u;
    {
        const bool branch_taken_0x1ffb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffb30) {
            ctx->pc = 0x1FFB78u;
            goto label_1ffb78;
        }
    }
    ctx->pc = 0x1FFB38u;
label_1ffb38:
    // 0x1ffb38: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffb3c: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x1ffb3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x1ffb40: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ffb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffb44: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ffb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ffb48: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ffb48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ffb4c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffb50: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ffb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ffb54: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1ffb54u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ffb58: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1ffb58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ffb5c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffb60: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1ffb60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ffb64: 0x26440480  addiu       $a0, $s2, 0x480
    ctx->pc = 0x1ffb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1152));
    // 0x1ffb68: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x1ffb68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x1ffb6c: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x1ffb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ffb70: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1ffb70u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ffb74: 0x0  nop
    ctx->pc = 0x1ffb74u;
    // NOP
label_1ffb78:
    // 0x1ffb78: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffb7c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1ffb7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1ffb80: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ffb80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffb84: 0x90082b  sltu        $at, $a0, $s0
    ctx->pc = 0x1ffb84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1ffb88: 0x1020ffeb  beqz        $at, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1FFB88u;
    {
        const bool branch_taken_0x1ffb88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffb88) {
            ctx->pc = 0x1FFB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffb38;
        }
    }
    ctx->pc = 0x1FFB90u;
    // 0x1ffb90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ffb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ffb94: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ffb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffb98: 0xa0c50abc  sb          $a1, 0xABC($a2)
    ctx->pc = 0x1ffb98u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2748), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ffb9c: 0x0  nop
    ctx->pc = 0x1ffb9cu;
    // NOP
label_1ffba0:
    // 0x1ffba0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffba4: 0x9064034f  lbu         $a0, 0x34F($v1)
    ctx->pc = 0x1ffba4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 847)));
    // 0x1ffba8: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1ffba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ffbac: 0xa065034f  sb          $a1, 0x34F($v1)
    ctx->pc = 0x1ffbacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 847), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ffbb0: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x1FFBB0u;
    {
        const bool branch_taken_0x1ffbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffbb0) {
            ctx->pc = 0x1FFF80u;
            goto label_1fff80;
        }
    }
    ctx->pc = 0x1FFBB8u;
label_1ffbb8:
    // 0x1ffbb8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffbbc: 0x9064034f  lbu         $a0, 0x34F($v1)
    ctx->pc = 0x1ffbbcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 847)));
    // 0x1ffbc0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ffbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ffbc4: 0x240400fe  addiu       $a0, $zero, 0xFE
    ctx->pc = 0x1ffbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1ffbc8: 0x14640015  bne         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FFBC8u;
    {
        const bool branch_taken_0x1ffbc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ffbc8) {
            ctx->pc = 0x1FFC20u;
            goto label_1ffc20;
        }
    }
    ctx->pc = 0x1FFBD0u;
    // 0x1ffbd0: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffbd4: 0x3c043f75  lui         $a0, 0x3F75
    ctx->pc = 0x1ffbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16245 << 16));
    // 0x1ffbd8: 0x3483c28f  ori         $v1, $a0, 0xC28F
    ctx->pc = 0x1ffbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49807);
    // 0x1ffbdc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ffbdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ffbe0: 0xc4a002dc  lwc1        $f0, 0x2DC($a1)
    ctx->pc = 0x1ffbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ffbe4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ffbe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ffbe8: 0xe4a002dc  swc1        $f0, 0x2DC($a1)
    ctx->pc = 0x1ffbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 732), bits); }
    // 0x1ffbec: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffbecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffbf0: 0x8ca30364  lw          $v1, 0x364($a1)
    ctx->pc = 0x1ffbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 868)));
    // 0x1ffbf4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ffbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ffbf8: 0xaca30364  sw          $v1, 0x364($a1)
    ctx->pc = 0x1ffbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 868), GPR_U32(ctx, 3));
    // 0x1ffbfc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffc00: 0x8c640364  lw          $a0, 0x364($v1)
    ctx->pc = 0x1ffc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 868)));
    // 0x1ffc04: 0x148000de  bnez        $a0, . + 4 + (0xDE << 2)
    ctx->pc = 0x1FFC04u;
    {
        const bool branch_taken_0x1ffc04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffc04) {
            ctx->pc = 0x1FFF80u;
            goto label_1fff80;
        }
    }
    ctx->pc = 0x1FFC0Cu;
    // 0x1ffc0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ffc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ffc10: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffc14: 0xac830358  sw          $v1, 0x358($a0)
    ctx->pc = 0x1ffc14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 856), GPR_U32(ctx, 3));
    // 0x1ffc18: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x1FFC18u;
    {
        const bool branch_taken_0x1ffc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffc18) {
            ctx->pc = 0x1FFFA0u;
            goto label_1fffa0;
        }
    }
    ctx->pc = 0x1FFC20u;
label_1ffc20:
    // 0x1ffc20: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffc24: 0x90850348  lbu         $a1, 0x348($a0)
    ctx->pc = 0x1ffc24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1ffc28: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1ffc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1ffc2c: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x1ffc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ffc30: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffc30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffc34: 0x90a60348  lbu         $a2, 0x348($a1)
    ctx->pc = 0x1ffc34u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1ffc38: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1ffc38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1ffc3c: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1ffc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1ffc40: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1ffc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1ffc44: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ffc44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffc48: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffc48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffc4c: 0xa0a3034b  sb          $v1, 0x34B($a1)
    ctx->pc = 0x1ffc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 843), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ffc50: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffc54: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x1ffc54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x1ffc58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ffc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ffc5c: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x1ffc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ffc60: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1ffc60u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ffc64: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FFC64u;
    {
        const bool branch_taken_0x1ffc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffc64) {
            ctx->pc = 0x1FFCA8u;
            goto label_1ffca8;
        }
    }
    ctx->pc = 0x1FFC6Cu;
label_1ffc6c:
    // 0x1ffc6c: 0x8fbe00d8  lw          $fp, 0xD8($sp)
    ctx->pc = 0x1ffc6cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffc70: 0x93c50345  lbu         $a1, 0x345($fp)
    ctx->pc = 0x1ffc70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 837)));
    // 0x1ffc74: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1ffc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ffc78: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ffc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ffc7c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ffc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ffc80: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffc84: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ffc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ffc88: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1ffc88u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ffc8c: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x1ffc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ffc90: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffc94: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1ffc94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ffc98: 0x24c30480  addiu       $v1, $a2, 0x480
    ctx->pc = 0x1ffc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1152));
    // 0x1ffc9c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1ffc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1ffca0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ffca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ffca4: 0x0  nop
    ctx->pc = 0x1ffca4u;
    // NOP
label_1ffca8:
    // 0x1ffca8: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffcac: 0x90a60348  lbu         $a2, 0x348($a1)
    ctx->pc = 0x1ffcacu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1ffcb0: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1ffcb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1ffcb4: 0xf0082b  sltu        $at, $a3, $s0
    ctx->pc = 0x1ffcb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1ffcb8: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FFCB8u;
    {
        const bool branch_taken_0x1ffcb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffcb8) {
            ctx->pc = 0x1FFC6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffc6c;
        }
    }
    ctx->pc = 0x1FFCC0u;
    // 0x1ffcc0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffcc4: 0x90660348  lbu         $a2, 0x348($v1)
    ctx->pc = 0x1ffcc4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1ffcc8: 0x30de00ff  andi        $fp, $a2, 0xFF
    ctx->pc = 0x1ffcc8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1ffccc: 0x17c000ac  bnez        $fp, . + 4 + (0xAC << 2)
    ctx->pc = 0x1FFCCCu;
    {
        const bool branch_taken_0x1ffccc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffccc) {
            ctx->pc = 0x1FFF80u;
            goto label_1fff80;
        }
    }
    ctx->pc = 0x1FFCD4u;
    // 0x1ffcd4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ffcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ffcd8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffcdc: 0xac650358  sw          $a1, 0x358($v1)
    ctx->pc = 0x1ffcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 5));
    // 0x1ffce0: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x1FFCE0u;
    {
        const bool branch_taken_0x1ffce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffce0) {
            ctx->pc = 0x1FFFA0u;
            goto label_1fffa0;
        }
    }
    ctx->pc = 0x1FFCE8u;
label_1ffce8:
    // 0x1ffce8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffcec: 0x90770abc  lbu         $s7, 0xABC($v1)
    ctx->pc = 0x1ffcecu;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2748)));
    // 0x1ffcf0: 0x32e500ff  andi        $a1, $s7, 0xFF
    ctx->pc = 0x1ffcf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x1ffcf4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ffcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ffcf8: 0x10a3006f  beq         $a1, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x1FFCF8u;
    {
        const bool branch_taken_0x1ffcf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ffcf8) {
            ctx->pc = 0x1FFEB8u;
            goto label_1ffeb8;
        }
    }
    ctx->pc = 0x1FFD00u;
    // 0x1ffd00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ffd00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffd04: 0x10a6003e  beq         $a1, $a2, . + 4 + (0x3E << 2)
    ctx->pc = 0x1FFD04u;
    {
        const bool branch_taken_0x1ffd04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x1ffd04) {
            ctx->pc = 0x1FFE00u;
            goto label_1ffe00;
        }
    }
    ctx->pc = 0x1FFD0Cu;
    // 0x1ffd0c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFD0Cu;
    {
        const bool branch_taken_0x1ffd0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffd0c) {
            ctx->pc = 0x1FFD1Cu;
            goto label_1ffd1c;
        }
    }
    ctx->pc = 0x1FFD14u;
    // 0x1ffd14: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1FFD14u;
    {
        const bool branch_taken_0x1ffd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffd14) {
            ctx->pc = 0x1FFF80u;
            goto label_1fff80;
        }
    }
    ctx->pc = 0x1FFD1Cu;
label_1ffd1c:
    // 0x1ffd1c: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffd20: 0x90a30346  lbu         $v1, 0x346($a1)
    ctx->pc = 0x1ffd20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 838)));
    // 0x1ffd24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ffd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ffd28: 0xa0a30346  sb          $v1, 0x346($a1)
    ctx->pc = 0x1ffd28u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 838), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ffd2c: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffd30: 0x90a70348  lbu         $a3, 0x348($a1)
    ctx->pc = 0x1ffd30u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1ffd34: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x1ffd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1ffd38: 0xa0a30348  sb          $v1, 0x348($a1)
    ctx->pc = 0x1ffd38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ffd3c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffd40: 0x90660348  lbu         $a2, 0x348($v1)
    ctx->pc = 0x1ffd40u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1ffd44: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x1ffd44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1ffd48: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1ffd48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ffd4c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1ffd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1ffd50: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ffd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffd54: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ffd54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffd58: 0xa0c3034b  sb          $v1, 0x34B($a2)
    ctx->pc = 0x1ffd58u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 843), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ffd5c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffd60: 0x90650346  lbu         $a1, 0x346($v1)
    ctx->pc = 0x1ffd60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1ffd64: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x1ffd64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ffd68: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x1ffd68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1ffd6c: 0x8fa800d8  lw          $t0, 0xD8($sp)
    ctx->pc = 0x1ffd6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffd70: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1ffd70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1ffd74: 0x79080000  lq          $t0, 0x0($t0)
    ctx->pc = 0x1ffd74u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1ffd78: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x1ffd78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffd7c: 0x90f10346  lbu         $s1, 0x346($a3)
    ctx->pc = 0x1ffd7cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 838)));
    // 0x1ffd80: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x1ffd80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1ffd84: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1ffd84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1ffd88: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ffd88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffd8c: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x1ffd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1ffd90: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1ffd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1ffd94: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x1ffd94u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x1ffd98: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffd9c: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1ffd9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1ffda0: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1ffda0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffda4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffda8: 0x90850347  lbu         $a1, 0x347($a0)
    ctx->pc = 0x1ffda8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 839)));
    // 0x1ffdac: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1ffdacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ffdb0: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x1ffdb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ffdb4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFDB4u;
    {
        const bool branch_taken_0x1ffdb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffdb4) {
            ctx->pc = 0x1FFDC8u;
            goto label_1ffdc8;
        }
    }
    ctx->pc = 0x1FFDBCu;
    // 0x1ffdbc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1ffdbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffdc0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffdc4: 0xa0700abc  sb          $s0, 0xABC($v1)
    ctx->pc = 0x1ffdc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 16));
label_1ffdc8:
    // 0x1ffdc8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffdcc: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x1ffdccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x1ffdd0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ffdd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffdd4: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffdd8: 0x90a60346  lbu         $a2, 0x346($a1)
    ctx->pc = 0x1ffdd8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 838)));
    // 0x1ffddc: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x1ffddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1ffde0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1ffde0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1ffde4: 0x14200066  bnez        $at, . + 4 + (0x66 << 2)
    ctx->pc = 0x1FFDE4u;
    {
        const bool branch_taken_0x1ffde4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffde4) {
            ctx->pc = 0x1FFF80u;
            goto label_1fff80;
        }
    }
    ctx->pc = 0x1FFDECu;
    // 0x1ffdec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ffdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ffdf0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffdf4: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x1ffdf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ffdf8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1FFDF8u;
    {
        const bool branch_taken_0x1ffdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffdf8) {
            ctx->pc = 0x1FFF80u;
            goto label_1fff80;
        }
    }
    ctx->pc = 0x1FFE00u;
label_1ffe00:
    // 0x1ffe00: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffe00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffe04: 0x90830346  lbu         $v1, 0x346($a0)
    ctx->pc = 0x1ffe04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x1ffe08: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1ffe08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ffe0c: 0xa0850346  sb          $a1, 0x346($a0)
    ctx->pc = 0x1ffe0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 838), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ffe10: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffe10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffe14: 0x90660345  lbu         $a2, 0x345($v1)
    ctx->pc = 0x1ffe14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1ffe18: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x1ffe18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ffe1c: 0xa0650345  sb          $a1, 0x345($v1)
    ctx->pc = 0x1ffe1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 837), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ffe20: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1ffe20u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ffe24: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FFE24u;
    {
        const bool branch_taken_0x1ffe24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffe24) {
            ctx->pc = 0x1FFE68u;
            goto label_1ffe68;
        }
    }
    ctx->pc = 0x1FFE2Cu;
label_1ffe2c:
    // 0x1ffe2c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffe30: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1ffe30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1ffe34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ffe34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffe38: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ffe38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ffe3c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1ffe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ffe40: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffe44: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1ffe44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ffe48: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x1ffe48u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ffe4c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1ffe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ffe50: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ffe50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffe54: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x1ffe54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1ffe58: 0x24830480  addiu       $v1, $a0, 0x480
    ctx->pc = 0x1ffe58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1ffe5c: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x1ffe5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x1ffe60: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1ffe60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ffe64: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1ffe64u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1ffe68:
    // 0x1ffe68: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffe6c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1ffe6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1ffe70: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ffe70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffe74: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1ffe74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1ffe78: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FFE78u;
    {
        const bool branch_taken_0x1ffe78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffe78) {
            ctx->pc = 0x1FFE2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffe2c;
        }
    }
    ctx->pc = 0x1FFE80u;
    // 0x1ffe80: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffe80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffe84: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x1ffe84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x1ffe88: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ffe88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffe8c: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffe8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffe90: 0x90a30346  lbu         $v1, 0x346($a1)
    ctx->pc = 0x1ffe90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 838)));
    // 0x1ffe94: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x1ffe94u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffe98: 0x2a4082a  slt         $at, $s5, $a0
    ctx->pc = 0x1ffe98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1ffe9c: 0x14200038  bnez        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x1FFE9Cu;
    {
        const bool branch_taken_0x1ffe9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffe9c) {
            ctx->pc = 0x1FFF80u;
            goto label_1fff80;
        }
    }
    ctx->pc = 0x1FFEA4u;
    // 0x1ffea4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1ffea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ffea8: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffeac: 0xa0b00abc  sb          $s0, 0xABC($a1)
    ctx->pc = 0x1ffeacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2748), (uint8_t)GPR_U32(ctx, 16));
    // 0x1ffeb0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1FFEB0u;
    {
        const bool branch_taken_0x1ffeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffeb0) {
            ctx->pc = 0x1FFF80u;
            goto label_1fff80;
        }
    }
    ctx->pc = 0x1FFEB8u;
label_1ffeb8:
    // 0x1ffeb8: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffebc: 0x90a40348  lbu         $a0, 0x348($a1)
    ctx->pc = 0x1ffebcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1ffec0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1ffec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ffec4: 0xa0a30348  sb          $v1, 0x348($a1)
    ctx->pc = 0x1ffec4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ffec8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffecc: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1ffeccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1ffed0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ffed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffed4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ffed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ffed8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1ffed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1ffedc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ffedcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffee0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffee4: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x1ffee4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ffee8: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffeec: 0x90a40345  lbu         $a0, 0x345($a1)
    ctx->pc = 0x1ffeecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 837)));
    // 0x1ffef0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1ffef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ffef4: 0xa0a30345  sb          $v1, 0x345($a1)
    ctx->pc = 0x1ffef4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ffef8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1ffef8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ffefc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FFEFCu;
    {
        const bool branch_taken_0x1ffefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffefc) {
            ctx->pc = 0x1FFF40u;
            goto label_1fff40;
        }
    }
    ctx->pc = 0x1FFF04u;
label_1fff04:
    // 0x1fff04: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1fff04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fff08: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x1fff08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x1fff0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fff0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fff10: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fff10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fff14: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fff14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fff18: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1fff18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fff1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fff20: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fff20u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fff24: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fff24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fff28: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1fff28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fff2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fff30: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fff30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fff34: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fff34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fff38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fff38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fff3c: 0x0  nop
    ctx->pc = 0x1fff3cu;
    // NOP
label_1fff40:
    // 0x1fff40: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1fff40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fff44: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x1fff44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fff48: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fff48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fff4c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fff4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fff50: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FFF50u;
    {
        const bool branch_taken_0x1fff50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fff50) {
            ctx->pc = 0x1FFF04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fff04;
        }
    }
    ctx->pc = 0x1FFF58u;
    // 0x1fff58: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1fff58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fff5c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fff5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fff60: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fff60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fff64: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FFF64u;
    {
        const bool branch_taken_0x1fff64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fff64) {
            ctx->pc = 0x1FFF80u;
            goto label_1fff80;
        }
    }
    ctx->pc = 0x1FFF6Cu;
    // 0x1fff6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fff70: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1fff70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fff74: 0xac640358  sw          $a0, 0x358($v1)
    ctx->pc = 0x1fff74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 4));
    // 0x1fff78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FFF78u;
    {
        const bool branch_taken_0x1fff78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fff78) {
            ctx->pc = 0x1FFFA0u;
            goto label_1fffa0;
        }
    }
    ctx->pc = 0x1FFF80u;
label_1fff80:
    // 0x1fff80: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x1fff80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1fff84: 0x7060b628  paddub      $s6, $v1, $zero
    ctx->pc = 0x1fff84u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1fff88:
    // 0x1fff88: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1fff88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fff8c: 0x90a402a8  lbu         $a0, 0x2A8($a1)
    ctx->pc = 0x1fff8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 680)));
    // 0x1fff90: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fff90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fff94: 0x2c3302b  sltu        $a2, $s6, $v1
    ctx->pc = 0x1fff94u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fff98: 0x14c0fd28  bnez        $a2, . + 4 + (-0x2D8 << 2)
    ctx->pc = 0x1FFF98u;
    {
        const bool branch_taken_0x1fff98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fff98) {
            ctx->pc = 0x1FF43Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff43c;
        }
    }
    ctx->pc = 0x1FFFA0u;
label_1fffa0:
    // 0x1fffa0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fffa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fffa4: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1fffa4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fffa8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1FFFA8u;
    {
        const bool branch_taken_0x1fffa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fffa8) {
            ctx->pc = 0x200060u;
            goto label_200060;
        }
    }
    ctx->pc = 0x1FFFB0u;
label_1fffb0:
    // 0x1fffb0: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FFFB0u;
    SET_GPR_U32(ctx, 31, 0x1FFFB8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FFFB0u, 0x1FFFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFFB8u;
label_1fffb8:
    // 0x1fffb8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1fffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fffbc: 0xc48102a4  lwc1        $f1, 0x2A4($a0)
    ctx->pc = 0x1fffbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fffc0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fffc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fffc4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fffc8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1fffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fffcc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fffccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fffd0: 0xc4600480  lwc1        $f0, 0x480($v1)
    ctx->pc = 0x1fffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fffd4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fffd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fffd8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fffd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fffdc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1fffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1fffe0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fffe4: 0xe4600480  swc1        $f0, 0x480($v1)
    ctx->pc = 0x1fffe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1152), bits); }
    // 0x1fffe8: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FFFE8u;
    SET_GPR_U32(ctx, 31, 0x1FFFF0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FFFE8u, 0x1FFFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFFF0u;
label_1ffff0:
    // 0x1ffff0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffff4: 0xc46102a4  lwc1        $f1, 0x2A4($v1)
    ctx->pc = 0x1ffff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ffff8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ffff8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ffffc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1ffffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200000: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x200000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x200004: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x200004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200008: 0xc4600484  lwc1        $f0, 0x484($v1)
    ctx->pc = 0x200008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20000c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20000cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x200010: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x200010u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200014: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x200014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x200018: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x200018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20001c: 0xe4800484  swc1        $f0, 0x484($a0)
    ctx->pc = 0x20001cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1156), bits); }
    // 0x200020: 0xc067648  jal         func_19D920
    ctx->pc = 0x200020u;
    SET_GPR_U32(ctx, 31, 0x200028u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x200020u, 0x200028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200028u;
label_200028:
    // 0x200028: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x200028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x20002c: 0xc46102a4  lwc1        $f1, 0x2A4($v1)
    ctx->pc = 0x20002cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200030: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x200030u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x200034: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x200034u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200038: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x200038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x20003c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x20003cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x200040: 0xc4a00488  lwc1        $f0, 0x488($a1)
    ctx->pc = 0x200040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200044: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x200044u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x200048: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x200048u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x20004c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x20004cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x200050: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x200050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200054: 0xe4600488  swc1        $f0, 0x488($v1)
    ctx->pc = 0x200054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1160), bits); }
    // 0x200058: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x200058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20005c: 0x0  nop
    ctx->pc = 0x20005cu;
    // NOP
label_200060:
    // 0x200060: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x200060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x200064: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x200064u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x200068: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x200068u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x20006c: 0x207182b  sltu        $v1, $s0, $a3
    ctx->pc = 0x20006cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x200070: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x200070u;
    {
        const bool branch_taken_0x200070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x200070) {
            ctx->pc = 0x1FFFB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fffb0;
        }
    }
    ctx->pc = 0x200078u;
    // 0x200078: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x200078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x20007c: 0x90c302ab  lbu         $v1, 0x2AB($a2)
    ctx->pc = 0x20007cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 683)));
    // 0x200080: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x200080u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x200084: 0x10a00045  beqz        $a1, . + 4 + (0x45 << 2)
    ctx->pc = 0x200084u;
    {
        const bool branch_taken_0x200084 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x200084) {
            ctx->pc = 0x20019Cu;
            goto label_20019c;
        }
    }
    ctx->pc = 0x20008Cu;
    // 0x20008c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x20008cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x200090: 0x906602ab  lbu         $a2, 0x2AB($v1)
    ctx->pc = 0x200090u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 683)));
    // 0x200094: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x200094u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x200098: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x200098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x20009c: 0x14a60033  bne         $a1, $a2, . + 4 + (0x33 << 2)
    ctx->pc = 0x20009Cu;
    {
        const bool branch_taken_0x20009c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x20009c) {
            ctx->pc = 0x20016Cu;
            goto label_20016c;
        }
    }
    ctx->pc = 0x2000A4u;
    // 0x2000a4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2000a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2000a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2000A8u;
    {
        const bool branch_taken_0x2000a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2000a8) {
            ctx->pc = 0x2000D8u;
            goto label_2000d8;
        }
    }
    ctx->pc = 0x2000B0u;
label_2000b0:
    // 0x2000b0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2000b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2000b4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x2000b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2000b8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2000b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2000bc: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x2000bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
    // 0x2000c0: 0x34836666  ori         $v1, $a0, 0x6666
    ctx->pc = 0x2000c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
    // 0x2000c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2000c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2000c8: 0xc4a00ac8  lwc1        $f0, 0xAC8($a1)
    ctx->pc = 0x2000c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2000cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2000ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2000d0: 0xe4a00ac8  swc1        $f0, 0xAC8($a1)
    ctx->pc = 0x2000d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2760), bits); }
    // 0x2000d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2000d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2000d8:
    // 0x2000d8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x2000d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2000dc: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x2000dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x2000e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2000e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2000e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2000e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2000e8: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x2000e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2000ec: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2000ECu;
    {
        const bool branch_taken_0x2000ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2000ec) {
            ctx->pc = 0x2000B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2000b0;
        }
    }
    ctx->pc = 0x2000F4u;
    // 0x2000f4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x2000f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2000f8: 0x3c053f5e  lui         $a1, 0x3F5E
    ctx->pc = 0x2000f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16222 << 16));
    // 0x2000fc: 0x34a3b852  ori         $v1, $a1, 0xB852
    ctx->pc = 0x2000fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47186);
    // 0x200100: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x200100u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200104: 0xc48002d0  lwc1        $f0, 0x2D0($a0)
    ctx->pc = 0x200104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200108: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x200108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20010c: 0xe48002d0  swc1        $f0, 0x2D0($a0)
    ctx->pc = 0x20010cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 720), bits); }
    // 0x200110: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x200110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x200114: 0x3c123f5e  lui         $s2, 0x3F5E
    ctx->pc = 0x200114u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16222 << 16));
    // 0x200118: 0x3643b852  ori         $v1, $s2, 0xB852
    ctx->pc = 0x200118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)47186);
    // 0x20011c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20011cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200120: 0xc48002d4  lwc1        $f0, 0x2D4($a0)
    ctx->pc = 0x200120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200124: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x200124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x200128: 0xe48002d4  swc1        $f0, 0x2D4($a0)
    ctx->pc = 0x200128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 724), bits); }
    // 0x20012c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x20012cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x200130: 0x3c033f5e  lui         $v1, 0x3F5E
    ctx->pc = 0x200130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16222 << 16));
    // 0x200134: 0x3465b852  ori         $a1, $v1, 0xB852
    ctx->pc = 0x200134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47186);
    // 0x200138: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x200138u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20013c: 0xc48002d8  lwc1        $f0, 0x2D8($a0)
    ctx->pc = 0x20013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200140: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x200140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x200144: 0xe48002d8  swc1        $f0, 0x2D8($a0)
    ctx->pc = 0x200144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 728), bits); }
    // 0x200148: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x200148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x20014c: 0x3c053f5e  lui         $a1, 0x3F5E
    ctx->pc = 0x20014cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16222 << 16));
    // 0x200150: 0x34a4b852  ori         $a0, $a1, 0xB852
    ctx->pc = 0x200150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47186);
    // 0x200154: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x200154u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200158: 0xc46002dc  lwc1        $f0, 0x2DC($v1)
    ctx->pc = 0x200158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20015c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20015cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x200160: 0xe46002dc  swc1        $f0, 0x2DC($v1)
    ctx->pc = 0x200160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 732), bits); }
    // 0x200164: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x200164u;
    {
        const bool branch_taken_0x200164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200164) {
            ctx->pc = 0x20019Cu;
            goto label_20019c;
        }
    }
    ctx->pc = 0x20016Cu;
label_20016c:
    // 0x20016c: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x20016cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x200170: 0x90c302ab  lbu         $v1, 0x2AB($a2)
    ctx->pc = 0x200170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 683)));
    // 0x200174: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x200174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x200178: 0xa0c402ab  sb          $a0, 0x2AB($a2)
    ctx->pc = 0x200178u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 683), (uint8_t)GPR_U32(ctx, 4));
    // 0x20017c: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x20017cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x200180: 0x90a302ab  lbu         $v1, 0x2AB($a1)
    ctx->pc = 0x200180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 683)));
    // 0x200184: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x200184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x200188: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200188u;
    {
        const bool branch_taken_0x200188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x200188) {
            ctx->pc = 0x20019Cu;
            goto label_20019c;
        }
    }
    ctx->pc = 0x200190u;
    // 0x200190: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x200190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x200194: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x200194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x200198: 0xa08302ab  sb          $v1, 0x2AB($a0)
    ctx->pc = 0x200198u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 683), (uint8_t)GPR_U32(ctx, 3));
label_20019c:
    // 0x20019c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x20019cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2001a0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2001a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2001a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2001a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2001a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2001a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2001ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2001acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2001b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2001b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2001b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2001b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2001b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2001b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2001bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2001bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2001c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2001c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2001c4: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2001c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2001c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2001C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2001C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2001D0u;
}
