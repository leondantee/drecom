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

// Function: entry_001a6a18
// Address: 0x1a6a18 - 0x1a6cb0
void entry_001a6a18_0x1a6a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6a18_0x1a6a18");
#endif

    ctx->pc = 0x1a6a18u;

    // 0x1a6a18: 0x9224031a  lbu         $a0, 0x31A($s1)
    ctx->pc = 0x1a6a18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 794)));
    // 0x1a6a1c: 0x108000a4  beqz        $a0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x1A6A1Cu;
    {
        const bool branch_taken_0x1a6a1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6a1c) {
            ctx->pc = 0x1A6CB0u;
            return;
        }
    }
    ctx->pc = 0x1A6A24u;
    // 0x1a6a24: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a6a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a6a28: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x1a6a28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6a2c: 0x903023  subu        $a2, $a0, $s0
    ctx->pc = 0x1a6a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a6a30: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1a6a30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a6a34: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x1a6a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a6a38: 0xac6206f0  sw          $v0, 0x6F0($v1)
    ctx->pc = 0x1a6a38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1776), GPR_U32(ctx, 2));
    // 0x1a6a3c: 0x3c025c00  lui         $v0, 0x5C00
    ctx->pc = 0x1a6a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23552 << 16));
    // 0x1a6a40: 0x34431a06  ori         $v1, $v0, 0x1A06
    ctx->pc = 0x1a6a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6662);
    // 0x1a6a44: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a6a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6a48: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a6a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a6a4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a6a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6a50: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a6a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a6a54: 0xac4306f4  sw          $v1, 0x6F4($v0)
    ctx->pc = 0x1a6a54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1780), GPR_U32(ctx, 3));
    // 0x1a6a58: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x1a6a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x1a6a5c: 0x34868080  ori         $a2, $a0, 0x8080
    ctx->pc = 0x1a6a5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x1a6a60: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a6a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6a64: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x1a6a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a6a68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a6a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6a6c: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1a6a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a6a70: 0x248206f8  addiu       $v0, $a0, 0x6F8
    ctx->pc = 0x1a6a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1784));
    // 0x1a6a74: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1a6a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1a6a78: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a6a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6a7c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1a6a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1a6a80: 0x24448100  addiu       $a0, $v0, -0x7F00
    ctx->pc = 0x1a6a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934784));
    // 0x1a6a84: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a6a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a6a88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a6a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a6a8c: 0x8c223cd8  lw          $v0, 0x3CD8($at)
    ctx->pc = 0x1a6a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CD8u));
    // 0x1a6a90: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x1a6a90u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a6a94: 0x0  nop
    ctx->pc = 0x1a6a94u;
    // NOP
    // 0x1a6a98: 0x0  nop
    ctx->pc = 0x1a6a98u;
    // NOP
    // 0x1a6a9c: 0x3812  mflo        $a3
    ctx->pc = 0x1a6a9cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x1a6aa0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a6aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a6aa4: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x1a6aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1a6aa8: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1a6aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a6aac: 0x24c27000  addiu       $v0, $a2, 0x7000
    ctx->pc = 0x1a6aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x1a6ab0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1a6ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a6ab4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a6ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6ab8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1a6ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1a6abc: 0x24428100  addiu       $v0, $v0, -0x7F00
    ctx->pc = 0x1a6abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934784));
    // 0x1a6ac0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a6ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a6ac4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a6ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a6ac8: 0x8c223cd0  lw          $v0, 0x3CD0($at)
    ctx->pc = 0x1a6ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CD0u));
    // 0x1a6acc: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x1a6accu;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a6ad0: 0x0  nop
    ctx->pc = 0x1a6ad0u;
    // NOP
    // 0x1a6ad4: 0x0  nop
    ctx->pc = 0x1a6ad4u;
    // NOP
    // 0x1a6ad8: 0x1012  mflo        $v0
    ctx->pc = 0x1a6ad8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1a6adc: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x1a6adcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a6ae0: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x1a6ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a6ae4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a6ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a6ae8: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x1a6ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x1a6aec: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1a6aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a6af0: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1a6af0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a6af4: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x1a6af4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6af8: 0x90a023  subu        $s4, $a0, $s0
    ctx->pc = 0x1a6af8u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a6afc: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x1a6afcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1a6b00: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x1a6b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a6b04: 0x244306fc  addiu       $v1, $v0, 0x6FC
    ctx->pc = 0x1a6b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1788));
    // 0x1a6b08: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1a6b08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1a6b0c: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x1a6b0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a6b10: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a6b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6b14: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1a6b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a6b18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a6b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a6b1c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1a6b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a6b20: 0x24620700  addiu       $v0, $v1, 0x700
    ctx->pc = 0x1a6b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x1a6b24: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a6b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1a6b28: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a6b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6b2c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1a6b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1a6b30: 0x24468100  addiu       $a2, $v0, -0x7F00
    ctx->pc = 0x1a6b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934784));
    // 0x1a6b34: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a6b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a6b38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a6b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a6b3c: 0x8c223cc8  lw          $v0, 0x3CC8($at)
    ctx->pc = 0x1a6b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CC8u));
    // 0x1a6b40: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x1a6b40u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a6b44: 0x0  nop
    ctx->pc = 0x1a6b44u;
    // NOP
    // 0x1a6b48: 0x0  nop
    ctx->pc = 0x1a6b48u;
    // NOP
    // 0x1a6b4c: 0x2012  mflo        $a0
    ctx->pc = 0x1a6b4cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1a6b50: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1a6b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a6b54: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1a6b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a6b58: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1a6b58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a6b5c: 0x24857000  addiu       $a1, $a0, 0x7000
    ctx->pc = 0x1a6b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x1a6b60: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x1a6b60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1a6b64: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a6b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6b68: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1a6b68u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1a6b6c: 0x25238100  addiu       $v1, $t1, -0x7F00
    ctx->pc = 0x1a6b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294934784));
    // 0x1a6b70: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a6b74: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a6b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a6b78: 0x8c243cc0  lw          $a0, 0x3CC0($at)
    ctx->pc = 0x1a6b78u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D3CC0u));
    // 0x1a6b7c: 0x93001b  divu        $zero, $a0, $s3
    ctx->pc = 0x1a6b7cu;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1a6b80: 0x0  nop
    ctx->pc = 0x1a6b80u;
    // NOP
    // 0x1a6b84: 0x0  nop
    ctx->pc = 0x1a6b84u;
    // NOP
    // 0x1a6b88: 0x2812  mflo        $a1
    ctx->pc = 0x1a6b88u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1a6b8c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a6b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a6b90: 0x453821  addu        $a3, $v0, $a1
    ctx->pc = 0x1a6b90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a6b94: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1a6b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1a6b98: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x1a6b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x1a6b9c: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x1a6b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a6ba0: 0xc44025  or          $t0, $a2, $a0
    ctx->pc = 0x1a6ba0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x1a6ba4: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x1a6ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6ba8: 0xd01023  subu        $v0, $a2, $s0
    ctx->pc = 0x1a6ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a6bac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a6bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6bb0: 0x2433821  addu        $a3, $s2, $v1
    ctx->pc = 0x1a6bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a6bb4: 0x24e30704  addiu       $v1, $a3, 0x704
    ctx->pc = 0x1a6bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1796));
    // 0x1a6bb8: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x1a6bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x1a6bbc: 0x3406fff8  ori         $a2, $zero, 0xFFF8
    ctx->pc = 0x1a6bbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a6bc0: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a6bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6bc4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1a6bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a6bc8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a6bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a6bcc: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x1a6bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a6bd0: 0x24620708  addiu       $v0, $v1, 0x708
    ctx->pc = 0x1a6bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1800));
    // 0x1a6bd4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1a6bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1a6bd8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a6bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a6bdc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a6bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a6be0: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1a6be0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a6be4: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x1a6be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a6be8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a6be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6bec: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1a6becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a6bf0: 0x8c8202c0  lw          $v0, 0x2C0($a0)
    ctx->pc = 0x1a6bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 704)));
    // 0x1a6bf4: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x1a6bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1a6bf8: 0xac8302c0  sw          $v1, 0x2C0($a0)
    ctx->pc = 0x1a6bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 704), GPR_U32(ctx, 3));
    // 0x1a6bfc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a6bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6c00: 0x10a080  sll         $s4, $s0, 2
    ctx->pc = 0x1a6c00u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a6c04: 0x2901821  addu        $v1, $s4, $s0
    ctx->pc = 0x1a6c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1a6c08: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a6c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a6c0c: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1a6c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a6c10: 0x9047002c  lbu         $a3, 0x2C($v0)
    ctx->pc = 0x1a6c10u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1a6c14: 0x30860001  andi        $a2, $a0, 0x1
    ctx->pc = 0x1a6c14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1a6c18: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1a6c18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a6c1c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1a6c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1a6c20: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1a6c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1a6c24: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a6c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a6c28: 0xa043002c  sb          $v1, 0x2C($v0)
    ctx->pc = 0x1a6c28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 44), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6c2c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1a6c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a6c30: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x1a6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a6c34: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a6c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a6c38: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1a6c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a6c3c: 0x9089002c  lbu         $t1, 0x2C($a0)
    ctx->pc = 0x1a6c3cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1a6c40: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x1a6c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1a6c44: 0x340c0  sll         $t0, $v1, 3
    ctx->pc = 0x1a6c44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a6c48: 0x2407ffe7  addiu       $a3, $zero, -0x19
    ctx->pc = 0x1a6c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x1a6c4c: 0x1271024  and         $v0, $t1, $a3
    ctx->pc = 0x1a6c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x1a6c50: 0x483025  or          $a2, $v0, $t0
    ctx->pc = 0x1a6c50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1a6c54: 0xa086002c  sb          $a2, 0x2C($a0)
    ctx->pc = 0x1a6c54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a6c58: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a6c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a6c5c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1a6c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a6c60: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1a6c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a6c64: 0xac4402b8  sw          $a0, 0x2B8($v0)
    ctx->pc = 0x1a6c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 696), GPR_U32(ctx, 4));
    // 0x1a6c68: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1a6c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1a6c6c: 0x34641043  ori         $a0, $v1, 0x1043
    ctx->pc = 0x1a6c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
    // 0x1a6c70: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1a6c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a6c74: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a6c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a6c78: 0xac4402bc  sw          $a0, 0x2BC($v0)
    ctx->pc = 0x1a6c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 700), GPR_U32(ctx, 4));
    // 0x1a6c7c: 0x240a0089  addiu       $t2, $zero, 0x89
    ctx->pc = 0x1a6c7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x1a6c80: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1a6c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a6c84: 0x2224021  addu        $t0, $s1, $v0
    ctx->pc = 0x1a6c84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a6c88: 0xfd0a02c0  sd          $t2, 0x2C0($t0)
    ctx->pc = 0x1a6c88u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 704), GPR_U64(ctx, 10));
    // 0x1a6c8c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1a6c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a6c90: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1a6c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a6c94: 0xdce402c0  ld          $a0, 0x2C0($a3)
    ctx->pc = 0x1a6c94u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 704)));
    // 0x1a6c98: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1a6c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a6c9c: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x1a6c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1a6ca0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1a6ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a6ca4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a6ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a6ca8: 0x824824  and         $t1, $a0, $v0
    ctx->pc = 0x1a6ca8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a6cac: 0xfce902c0  sd          $t1, 0x2C0($a3)
    ctx->pc = 0x1a6cacu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 704), GPR_U64(ctx, 9));
    ctx->pc = 0x1a6cb0u;
}
