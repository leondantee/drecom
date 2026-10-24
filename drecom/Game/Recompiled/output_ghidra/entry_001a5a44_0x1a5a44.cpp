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

// Function: entry_001a5a44
// Address: 0x1a5a44 - 0x1a5bf0
void entry_001a5a44_0x1a5a44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5a44_0x1a5a44");
#endif

    ctx->pc = 0x1a5a44u;

    // 0x1a5a44: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1a5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1a5a48: 0x9604002a  lhu         $a0, 0x2A($s0)
    ctx->pc = 0x1a5a48u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1a5a4c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1a5a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1a5a50: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1a5a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a5a54: 0x2402fc0f  addiu       $v0, $zero, -0x3F1
    ctx->pc = 0x1a5a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x1a5a58: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a5a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a5a5c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a5a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5a60: 0xa604002a  sh          $a0, 0x2A($s0)
    ctx->pc = 0x1a5a60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a5a64: 0x9202031c  lbu         $v0, 0x31C($s0)
    ctx->pc = 0x1a5a64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a5a68: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1a5a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a5a6c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a5a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a5a70: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a5a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5a74: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1a5a74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a5a78: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x1a5a78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x1a5a7c: 0x24c2cca0  addiu       $v0, $a2, -0x3360
    ctx->pc = 0x1a5a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954144));
    // 0x1a5a80: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x1a5a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a5a84: 0x9082001e  lbu         $v0, 0x1E($a0)
    ctx->pc = 0x1a5a84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x1a5a88: 0x22e7c  dsll32      $a1, $v0, 25
    ctx->pc = 0x1a5a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 25));
    // 0x1a5a8c: 0x5173e  dsrl32      $v0, $a1, 28
    ctx->pc = 0x1a5a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> (32 + 28));
    // 0x1a5a90: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x1a5a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1a5a94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a5a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a5a98: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x1a5a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a5a9c: 0x820402b0  lb          $a0, 0x2B0($s0)
    ctx->pc = 0x1a5a9cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x1a5aa0: 0x42e3c  dsll32      $a1, $a0, 24
    ctx->pc = 0x1a5aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 24));
    // 0x1a5aa4: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1a5aa4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1a5aa8: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x1a5aa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1a5aac: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1a5aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1a5ab0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a5ab0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a5ab4: 0x9203031c  lbu         $v1, 0x31C($s0)
    ctx->pc = 0x1a5ab4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a5ab8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a5ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a5abc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a5abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a5ac0: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1a5ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a5ac4: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x1a5ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1a5ac8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a5ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a5acc: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x1a5accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a5ad0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a5ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a5ad4: 0xdc630018  ld          $v1, 0x18($v1)
    ctx->pc = 0x1a5ad4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1a5ad8: 0x31b78  dsll        $v1, $v1, 13
    ctx->pc = 0x1a5ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 13);
    // 0x1a5adc: 0x31cbe  dsrl32      $v1, $v1, 18
    ctx->pc = 0x1a5adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 18));
    // 0x1a5ae0: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x1a5ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1a5ae4: 0xde070028  ld          $a3, 0x28($s0)
    ctx->pc = 0x1a5ae4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a5ae8: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x1a5ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1a5aec: 0x2317c  dsll32      $a2, $v0, 5
    ctx->pc = 0x1a5aecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 5));
    // 0x1a5af0: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x1a5af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x1a5af4: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x1a5af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x1a5af8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1a5af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5afc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1a5afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a5b00: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x1a5b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x1a5b04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a5b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a5b08: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a5b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a5b0c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1a5b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1a5b10: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1a5b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1a5b14: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x1a5b14u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x1a5b18: 0x9202002f  lbu         $v0, 0x2F($s0)
    ctx->pc = 0x1a5b18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
    // 0x1a5b1c: 0x3004001f  andi        $a0, $zero, 0x1F
    ctx->pc = 0x1a5b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
    // 0x1a5b20: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x1a5b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1a5b24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a5b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1a5b28: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a5b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a5b2c: 0xa202002f  sb          $v0, 0x2F($s0)
    ctx->pc = 0x1a5b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a5b30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5b34: 0x9204002f  lbu         $a0, 0x2F($s0)
    ctx->pc = 0x1a5b34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
    // 0x1a5b38: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1a5b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1a5b3c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1a5b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a5b40: 0x2402ff1f  addiu       $v0, $zero, -0xE1
    ctx->pc = 0x1a5b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x1a5b44: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a5b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a5b48: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1a5b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5b4c: 0xa203002f  sb          $v1, 0x2F($s0)
    ctx->pc = 0x1a5b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a5b50: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a5b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a5b54: 0xae020280  sw          $v0, 0x280($s0)
    ctx->pc = 0x1a5b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
    // 0x1a5b58: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1a5b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1a5b5c: 0x34621007  ori         $v0, $v1, 0x1007
    ctx->pc = 0x1a5b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4103);
    // 0x1a5b60: 0xae020284  sw          $v0, 0x284($s0)
    ctx->pc = 0x1a5b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 2));
    // 0x1a5b64: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x1a5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1a5b68: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1a5b68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5b6c: 0xfe020288  sd          $v0, 0x288($s0)
    ctx->pc = 0x1a5b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 648), GPR_U64(ctx, 2));
    // 0x1a5b70: 0x8e03030c  lw          $v1, 0x30C($s0)
    ctx->pc = 0x1a5b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 780)));
    // 0x1a5b74: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a5b78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5b7c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1a5b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a5b80: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a5b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a5b84: 0x2462cca0  addiu       $v0, $v1, -0x3360
    ctx->pc = 0x1a5b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a5b88: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1a5b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a5b8c: 0x9462001a  lhu         $v0, 0x1A($v1)
    ctx->pc = 0x1a5b8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x1a5b90: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x1a5b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
    // 0x1a5b94: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x1a5b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x1a5b98: 0x9606002a  lhu         $a2, 0x2A($s0)
    ctx->pc = 0x1a5b98u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1a5b9c: 0x3044003f  andi        $a0, $v0, 0x3F
    ctx->pc = 0x1a5b9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1a5ba0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1a5ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a5ba4: 0x2403fc0f  addiu       $v1, $zero, -0x3F1
    ctx->pc = 0x1a5ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x1a5ba8: 0xc32824  and         $a1, $a2, $v1
    ctx->pc = 0x1a5ba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1a5bac: 0xa29025  or          $s2, $a1, $v0
    ctx->pc = 0x1a5bacu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1a5bb0: 0xa612002a  sh          $s2, 0x2A($s0)
    ctx->pc = 0x1a5bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 18));
    // 0x1a5bb4: 0x9204002f  lbu         $a0, 0x2F($s0)
    ctx->pc = 0x1a5bb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
    // 0x1a5bb8: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x1a5bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x1a5bbc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1a5bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a5bc0: 0x2403ff1f  addiu       $v1, $zero, -0xE1
    ctx->pc = 0x1a5bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x1a5bc4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a5bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a5bc8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a5bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a5bcc: 0xa202002f  sb          $v0, 0x2F($s0)
    ctx->pc = 0x1a5bccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a5bd0: 0x82020310  lb          $v0, 0x310($s0)
    ctx->pc = 0x1a5bd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a5bd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a5bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a5bd8: 0x9204002f  lbu         $a0, 0x2F($s0)
    ctx->pc = 0x1a5bd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
    // 0x1a5bdc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1a5bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1a5be0: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x1a5be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1a5be4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a5be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a5be8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a5be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a5bec: 0xa203002f  sb          $v1, 0x2F($s0)
    ctx->pc = 0x1a5becu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1a5bf0u;
}
