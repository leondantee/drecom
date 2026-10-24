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

// Function: Md_make_tags_mirror_db
// Address: 0x2559b0 - 0x256374
void Md_make_tags_mirror_db_0x2559b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_make_tags_mirror_db_0x2559b0");
#endif

    switch (ctx->pc) {
        case 0x255a24u: goto label_255a24;
        case 0x255a6cu: goto label_255a6c;
        case 0x255ab0u: goto label_255ab0;
        case 0x255cd0u: goto label_255cd0;
        case 0x255e28u: goto label_255e28;
        default: break;
    }

    ctx->pc = 0x2559b0u;

    // 0x2559b0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2559b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2559b4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x2559b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x2559b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2559b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2559bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2559bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2559c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2559c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2559c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2559c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2559c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2559c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2559cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2559ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2559d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2559d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2559d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2559d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2559d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2559d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2559dc: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x2559dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x2559e0: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x2559e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x2559e4: 0xafa600f8  sw          $a2, 0xF8($sp)
    ctx->pc = 0x2559e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 6));
    // 0x2559e8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2559e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2559ec: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x2559ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2559f0: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x2559f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
    // 0x2559f4: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2559f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2559f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2559F8u;
    {
        const bool branch_taken_0x2559f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2559f8) {
            ctx->pc = 0x255A18u;
            goto label_255a18;
        }
    }
    ctx->pc = 0x255A00u;
    // 0x255a00: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x255a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x255a04: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x255a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x255a08: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x255a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x255a0c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x255a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255a10: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x255a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255a14: 0xafa400f8  sw          $a0, 0xF8($sp)
    ctx->pc = 0x255a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 4));
label_255a18:
    // 0x255a18: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x255a18u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x255a1c: 0x10000242  b           . + 4 + (0x242 << 2)
    ctx->pc = 0x255A1Cu;
    {
        const bool branch_taken_0x255a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255a1c) {
            ctx->pc = 0x256328u;
            goto label_256328;
        }
    }
    ctx->pc = 0x255A24u;
label_255a24:
    // 0x255a24: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x255a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255a28: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x255a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x255a2c: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x255a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x255a30: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x255a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x255a34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x255A34u;
    {
        const bool branch_taken_0x255a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255a34) {
            ctx->pc = 0x255A58u;
            goto label_255a58;
        }
    }
    ctx->pc = 0x255A3Cu;
    // 0x255a3c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x255a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x255a40: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x255a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x255a44: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x255a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x255a48: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x255a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255a4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x255a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255a50: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x255a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x255a54: 0x0  nop
    ctx->pc = 0x255a54u;
    // NOP
label_255a58:
    // 0x255a58: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x255a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x255a5c: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x255a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255a60: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x255a60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x255a64: 0xc095b3c  jal         func_256CF0
    ctx->pc = 0x255A64u;
    SET_GPR_U32(ctx, 31, 0x255A6Cu);
    ctx->pc = 0x256CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256CF0u, 0x255A64u, 0x255A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A6Cu;
label_255a6c:
    // 0x255a6c: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x255a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x255a70: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x255a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x255a74: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x255a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
    // 0x255a78: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x255a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x255a7c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x255a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x255a80: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x255a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x255a84: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x255a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x255a88: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x255a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x255a8c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x255a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x255a90: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x255a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x255a94: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x255a94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x255a98: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x255a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x255a9c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x255a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x255aa0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x255aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x255aa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x255aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255aa8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x255aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x255aac: 0x0  nop
    ctx->pc = 0x255aacu;
    // NOP
label_255ab0:
    // 0x255ab0: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x255ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255ab4: 0xafa600d4  sw          $a2, 0xD4($sp)
    ctx->pc = 0x255ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 6));
    // 0x255ab8: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255abc: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x255abcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255ac0: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x255ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x255ac4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x255ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x255ac8: 0xac660040  sw          $a2, 0x40($v1)
    ctx->pc = 0x255ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 6));
    // 0x255acc: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x255accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255ad0: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x255ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x255ad4: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x255ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x255ad8: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255adc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x255adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255ae0: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x255ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x255ae4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x255ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255ae8: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x255ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x255aec: 0x3213c  dsll32      $a0, $v1, 4
    ctx->pc = 0x255aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 4));
    // 0x255af0: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x255af0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x255af4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x255af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x255af8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x255af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x255afc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255b00: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x255b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x255b04: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x255b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x255b08: 0x628825  or          $s1, $v1, $v0
    ctx->pc = 0x255b08u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255b0c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x255b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255b10: 0xfc510000  sd          $s1, 0x0($v0)
    ctx->pc = 0x255b10u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 17));
    // 0x255b14: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x255b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255b18: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x255b18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x255b1c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x255b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x255b20: 0x34640004  ori         $a0, $v1, 0x4
    ctx->pc = 0x255b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x255b24: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x255b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255b28: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x255b28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x255b2c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x255b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x255b30: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x255b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x255b34: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x255b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x255b38: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x255b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x255b3c: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x255b3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255b40: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x255b40u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x255b44: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x255b44u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x255b48: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x255b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x255b4c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x255b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x255b50: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x255b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x255b54: 0x8fb100d4  lw          $s1, 0xD4($sp)
    ctx->pc = 0x255b54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255b58: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x255b58u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
    // 0x255b5c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x255b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255b60: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x255b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x255b64: 0x3c026c02  lui         $v0, 0x6C02
    ctx->pc = 0x255b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27650 << 16));
    // 0x255b68: 0x344203fe  ori         $v0, $v0, 0x3FE
    ctx->pc = 0x255b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1022);
    // 0x255b6c: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x255b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255b70: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x255b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x255b74: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x255b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255b78: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x255b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x255b7c: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x255b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x255b80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x255b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255b84: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x255b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x255b88: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255b8c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x255b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x255b90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x255b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255b94: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x255b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255b98: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x255b98u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x255b9c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x255b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255ba0: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x255ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x255ba4: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x255ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255ba8: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x255ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x255bac: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x255bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255bb0: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x255bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
    // 0x255bb4: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255bb8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x255bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255bbc: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x255bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x255bc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x255bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255bc4: 0xac440038  sw          $a0, 0x38($v0)
    ctx->pc = 0x255bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 4));
    // 0x255bc8: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x255bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x255bcc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x255bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x255bd0: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x255bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x255bd4: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x255bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x255bd8: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x255bd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x255bdc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x255bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x255be0: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x255be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x255be4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x255be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x255be8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x255be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x255bec: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x255BECu;
    {
        const bool branch_taken_0x255bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x255bec) {
            ctx->pc = 0x255C00u;
            goto label_255c00;
        }
    }
    ctx->pc = 0x255BF4u;
    // 0x255bf4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x255bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x255bf8: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x255bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x255bfc: 0x0  nop
    ctx->pc = 0x255bfcu;
    // NOP
label_255c00:
    // 0x255c00: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x255c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x255c04: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x255c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x255c08: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255C08u;
    {
        const bool branch_taken_0x255c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x255c08) {
            ctx->pc = 0x255C18u;
            goto label_255c18;
        }
    }
    ctx->pc = 0x255C10u;
    // 0x255c10: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x255c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x255c14: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x255c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_255c18:
    // 0x255c18: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x255c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x255c1c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x255c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x255c20: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x255c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x255c24: 0x2442b7a0  addiu       $v0, $v0, -0x4860
    ctx->pc = 0x255c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948768));
    // 0x255c28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x255c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255c2c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x255c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x255c30: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x255c30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255c34: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x255c34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x255c38: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x255c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x255c3c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x255c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x255c40: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x255c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x255c44: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x255c44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x255c48: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x255c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x255c4c: 0x2463b7a0  addiu       $v1, $v1, -0x4860
    ctx->pc = 0x255c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948768));
    // 0x255c50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x255c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x255c54: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x255c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255c58: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x255c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x255c5c: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x255c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x255c60: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x255c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x255c64: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x255c64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x255c68: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x255c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x255c6c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x255c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255c70: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x255c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x255c74: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x255c74u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x255c78: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x255c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x255c7c: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x255c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x255c80: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x255c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x255c84: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x255c84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x255c88: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x255c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x255c8c: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x255c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x255c90: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x255c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x255c94: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x255c94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255c98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x255c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x255c9c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x255c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x255ca0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x255ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x255ca4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x255ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x255ca8: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x255ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x255cac: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x255cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x255cb0: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x255cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x255cb4: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x255cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x255cb8: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x255cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x255cbc: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x255cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x255cc0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x255cc0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x255cc4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x255cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255cc8: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x255cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x255ccc: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x255cccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_255cd0:
    // 0x255cd0: 0x8fb500f8  lw          $s5, 0xF8($sp)
    ctx->pc = 0x255cd0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255cd4: 0x26a20040  addiu       $v0, $s5, 0x40
    ctx->pc = 0x255cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x255cd8: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x255cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x255cdc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x255cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x255ce0: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x255ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x255ce4: 0xfea40000  sd          $a0, 0x0($s5)
    ctx->pc = 0x255ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 4));
    // 0x255ce8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x255ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x255cec: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x255cecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x255cf0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x255cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x255cf4: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x255cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x255cf8: 0xaea00018  sw          $zero, 0x18($s5)
    ctx->pc = 0x255cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
    // 0x255cfc: 0xaea00014  sw          $zero, 0x14($s5)
    ctx->pc = 0x255cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
    // 0x255d00: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x255d00u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
    // 0x255d04: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x255d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x255d08: 0xaea2001c  sw          $v0, 0x1C($s5)
    ctx->pc = 0x255d08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 2));
    // 0x255d0c: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255d10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x255d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255d14: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x255d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x255d18: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x255d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x255d1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x255d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255d20: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x255d20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
    // 0x255d24: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255d28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x255d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255d2c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x255d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x255d30: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x255d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x255d34: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x255d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x255d38: 0xaea20024  sw          $v0, 0x24($s5)
    ctx->pc = 0x255d38u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 2));
    // 0x255d3c: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x255d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255d40: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x255d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x255d44: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x255d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x255d48: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x255d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x255d4c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x255d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x255d50: 0xaea20028  sw          $v0, 0x28($s5)
    ctx->pc = 0x255d50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 2));
    // 0x255d54: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255d58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x255d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255d5c: 0x262b021  addu        $s6, $s3, $v0
    ctx->pc = 0x255d5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x255d60: 0x8ed70058  lw          $s7, 0x58($s6)
    ctx->pc = 0x255d60u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x255d64: 0x8efe000c  lw          $fp, 0xC($s7)
    ctx->pc = 0x255d64u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x255d68: 0xaebe002c  sw          $fp, 0x2C($s5)
    ctx->pc = 0x255d68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 30));
    // 0x255d6c: 0x26a30020  addiu       $v1, $s5, 0x20
    ctx->pc = 0x255d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x255d70: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255d74: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x255d74u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255d78: 0x2728021  addu        $s0, $s3, $s2
    ctx->pc = 0x255d78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x255d7c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x255d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x255d80: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x255d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x255d84: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x255d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x255d88: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x255d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x255d8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x255d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255d90: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x255d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x255d94: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255d98: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x255d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x255d9c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x255d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x255da0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x255da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255da4: 0xfea20030  sd          $v0, 0x30($s5)
    ctx->pc = 0x255da4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 2));
    // 0x255da8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x255da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x255dac: 0xaea20038  sw          $v0, 0x38($s5)
    ctx->pc = 0x255dacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
    // 0x255db0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x255db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x255db4: 0x34440004  ori         $a0, $v0, 0x4
    ctx->pc = 0x255db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x255db8: 0xaea4003c  sw          $a0, 0x3C($s5)
    ctx->pc = 0x255db8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 4));
    // 0x255dbc: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x255dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255dc0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x255dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x255dc4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x255dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x255dc8: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x255dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x255dcc: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x255dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x255dd0: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255dd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x255dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255dd8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x255dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x255ddc: 0x8c560030  lw          $s6, 0x30($v0)
    ctx->pc = 0x255ddcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x255de0: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255de4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x255de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255de8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x255de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x255dec: 0x8c570038  lw          $s7, 0x38($v0)
    ctx->pc = 0x255decu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x255df0: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255df4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x255df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255df8: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x255df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x255dfc: 0x8c5e0040  lw          $fp, 0x40($v0)
    ctx->pc = 0x255dfcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x255e00: 0x329500ff  andi        $s5, $s4, 0xFF
    ctx->pc = 0x255e00u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255e04: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x255e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x255e08: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x255e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x255e0c: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x255e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x255e10: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x255e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x255e14: 0x8fb000f8  lw          $s0, 0xF8($sp)
    ctx->pc = 0x255e14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255e18: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x255e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x255e1c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x255e1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255e20: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x255e20u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x255e24: 0x0  nop
    ctx->pc = 0x255e24u;
    // NOP
label_255e28:
    // 0x255e28: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x255e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x255e2c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x255e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x255e30: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x255e30u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x255e34: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x255e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x255e38: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x255e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x255e3c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x255e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x255e40: 0x3c026c03  lui         $v0, 0x6C03
    ctx->pc = 0x255e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27651 << 16));
    // 0x255e44: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x255e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x255e48: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x255e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x255e4c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x255e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x255e50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255e54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x255e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255e58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255e5c: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x255e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x255e60: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x255e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x255e64: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x255e64u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x255e68: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x255e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x255e6c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x255e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x255e70: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x255E70u;
    {
        const bool branch_taken_0x255e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x255e70) {
            ctx->pc = 0x255E88u;
            goto label_255e88;
        }
    }
    ctx->pc = 0x255E78u;
    // 0x255e78: 0xde620008  ld          $v0, 0x8($s3)
    ctx->pc = 0x255e78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x255e7c: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x255e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x255e80: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x255E80u;
    {
        const bool branch_taken_0x255e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255e80) {
            ctx->pc = 0x255F30u;
            goto label_255f30;
        }
    }
    ctx->pc = 0x255E88u;
label_255e88:
    // 0x255e88: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x255e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x255e8c: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x255e8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x255e90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x255e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x255e94: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x255e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x255e98: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x255E98u;
    {
        const bool branch_taken_0x255e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255e98) {
            ctx->pc = 0x255EE8u;
            goto label_255ee8;
        }
    }
    ctx->pc = 0x255EA0u;
    // 0x255ea0: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255ea4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x255EA4u;
    {
        const bool branch_taken_0x255ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255ea4) {
            ctx->pc = 0x255EC8u;
            goto label_255ec8;
        }
    }
    ctx->pc = 0x255EACu;
    // 0x255eac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x255eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x255eb0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255eb4: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x255eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x255eb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255ebc: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x255ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x255ec0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x255EC0u;
    {
        const bool branch_taken_0x255ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255ec0) {
            ctx->pc = 0x255F30u;
            goto label_255f30;
        }
    }
    ctx->pc = 0x255EC8u;
label_255ec8:
    // 0x255ec8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x255ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x255ecc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255ed0: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x255ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x255ed4: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x255ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x255ed8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255edc: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x255edcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x255ee0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x255EE0u;
    {
        const bool branch_taken_0x255ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255ee0) {
            ctx->pc = 0x255F30u;
            goto label_255f30;
        }
    }
    ctx->pc = 0x255EE8u;
label_255ee8:
    // 0x255ee8: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x255ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255eec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x255eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255ef0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x255EF0u;
    {
        const bool branch_taken_0x255ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x255ef0) {
            ctx->pc = 0x255F14u;
            goto label_255f14;
        }
    }
    ctx->pc = 0x255EF8u;
    // 0x255ef8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x255ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x255efc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255f00: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x255f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x255f04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255f08: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x255f08u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x255f0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x255F0Cu;
    {
        const bool branch_taken_0x255f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255f0c) {
            ctx->pc = 0x255F30u;
            goto label_255f30;
        }
    }
    ctx->pc = 0x255F14u;
label_255f14:
    // 0x255f14: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x255f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x255f18: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x255f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255f1c: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x255f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x255f20: 0x34620700  ori         $v0, $v1, 0x700
    ctx->pc = 0x255f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1792);
    // 0x255f24: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x255f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x255f28: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x255f28u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x255f2c: 0x0  nop
    ctx->pc = 0x255f2cu;
    // NOP
label_255f30:
    // 0x255f30: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x255f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x255f34: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x255f34u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
    // 0x255f38: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x255f38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x255f3c: 0x223fc  dsll32      $a0, $v0, 15
    ctx->pc = 0x255f3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 15));
    // 0x255f40: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x255f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x255f44: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255f48: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x255f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x255f4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255f50: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x255f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x255f54: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x255f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x255f58: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x255f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x255f5c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x255f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x255f60: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x255f60u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x255f64: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x255f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255f68: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x255f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x255f6c: 0x90a20008  lbu         $v0, 0x8($a1)
    ctx->pc = 0x255f6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x255f70: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x255f70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x255f74: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x255f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x255f78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x255f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x255f7c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x255f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x255f80: 0xa0a20008  sb          $v0, 0x8($a1)
    ctx->pc = 0x255f80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x255f84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x255f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255f88: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x255f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x255f8c: 0x90a40008  lbu         $a0, 0x8($a1)
    ctx->pc = 0x255f8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x255f90: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x255f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x255f94: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x255f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x255f98: 0x2402ff0f  addiu       $v0, $zero, -0xF1
    ctx->pc = 0x255f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x255f9c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x255f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x255fa0: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x255fa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255fa4: 0xa0a60008  sb          $a2, 0x8($a1)
    ctx->pc = 0x255fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x255fa8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x255fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x255fac: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x255facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x255fb0: 0x90a40009  lbu         $a0, 0x9($a1)
    ctx->pc = 0x255fb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x255fb4: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x255fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x255fb8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x255fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x255fbc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x255fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x255fc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255fc4: 0xa0a20009  sb          $v0, 0x9($a1)
    ctx->pc = 0x255fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x255fc8: 0x2a430030  slti        $v1, $s2, 0x30
    ctx->pc = 0x255fc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x255fcc: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x255FCCu;
    {
        const bool branch_taken_0x255fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x255fcc) {
            ctx->pc = 0x256004u;
            goto label_256004;
        }
    }
    ctx->pc = 0x255FD4u;
    // 0x255fd4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x255fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x255fd8: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x255fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x255fdc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x255fdcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x255fe0: 0x30447fff  andi        $a0, $v0, 0x7FFF
    ctx->pc = 0x255fe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x255fe4: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x255fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x255fe8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x255fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x255fec: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x255fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x255ff0: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x255ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x255ff4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x255ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x255ff8: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x255ff8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x255ffc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x255FFCu;
    {
        const bool branch_taken_0x255ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255ffc) {
            ctx->pc = 0x256030u;
            goto label_256030;
        }
    }
    ctx->pc = 0x256004u;
label_256004:
    // 0x256004: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x256004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x256008: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x256008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x25600c: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x25600cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x256010: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x256010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x256014: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x256014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x256018: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x256018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x25601c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25601cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x256020: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x256020u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x256024: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x256024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x256028: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x256028u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25602c: 0x0  nop
    ctx->pc = 0x25602cu;
    // NOP
label_256030:
    // 0x256030: 0x26310007  addiu       $s1, $s1, 0x7
    ctx->pc = 0x256030u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7));
    // 0x256034: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x256034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x256038: 0x1110c3  sra         $v0, $s1, 3
    ctx->pc = 0x256038u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 3));
    // 0x25603c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x25603cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x256040: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x256040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x256044: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x256044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x256048: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x256048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x25604c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25604cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256050: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x256050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x256054: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x256054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256058: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x256058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x25605c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x25605cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x256060: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x256060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x256064: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x256064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256068: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x256068u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x25606c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x25606cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x256070: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x256070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x256074: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x256074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x256078: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x256078u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
    // 0x25607c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x25607cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x256080: 0x34420105  ori         $v0, $v0, 0x105
    ctx->pc = 0x256080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)261);
    // 0x256084: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x256084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x256088: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x256088u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x25608c: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x25608cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x256090: 0x34438004  ori         $v1, $v0, 0x8004
    ctx->pc = 0x256090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32772);
    // 0x256094: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x256094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
    // 0x256098: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x256098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25609c: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x25609cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x2560a0: 0x16113c  dsll32      $v0, $s6, 4
    ctx->pc = 0x2560a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 4));
    // 0x2560a4: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x2560a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x2560a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2560a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2560ac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2560acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2560b0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2560b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2560b4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2560b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2560b8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2560b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2560bc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2560bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2560c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2560c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2560c4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2560c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2560c8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x2560c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x2560cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2560ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2560d0: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x2560d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2560d4: 0xfe020050  sd          $v0, 0x50($s0)
    ctx->pc = 0x2560d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 2));
    // 0x2560d8: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2560d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2560dc: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x2560dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2560e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2560e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2560e4: 0x34438005  ori         $v1, $v0, 0x8005
    ctx->pc = 0x2560e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
    // 0x2560e8: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x2560e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
    // 0x2560ec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2560ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2560f0: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x2560f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x2560f4: 0x17113c  dsll32      $v0, $s7, 4
    ctx->pc = 0x2560f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 4));
    // 0x2560f8: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x2560f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x2560fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2560fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256100: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x256100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x256104: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x256104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256108: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x256108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x25610c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25610cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256110: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x256110u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x256114: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x256114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x256118: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x256118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25611c: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x25611cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x256120: 0xfe030060  sd          $v1, 0x60($s0)
    ctx->pc = 0x256120u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 3));
    // 0x256124: 0x3c030500  lui         $v1, 0x500
    ctx->pc = 0x256124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1280 << 16));
    // 0x256128: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x256128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x25612c: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x25612cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x256130: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x256130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x256134: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x256134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x256138: 0x34648006  ori         $a0, $v1, 0x8006
    ctx->pc = 0x256138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32774);
    // 0x25613c: 0x3c036500  lui         $v1, 0x6500
    ctx->pc = 0x25613cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25856 << 16));
    // 0x256140: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x256140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x256144: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x256144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    // 0x256148: 0x1e113c  dsll32      $v0, $fp, 4
    ctx->pc = 0x256148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 4));
    // 0x25614c: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x25614cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x256150: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x256150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256154: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x256154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x256158: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x256158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25615c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x25615cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x256160: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x256160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256164: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x256164u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x256168: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x256168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x25616c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x25616cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x256170: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x256170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x256174: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x256174u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x256178: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x256178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x25617c: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x25617cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x256180: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x256180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x256184: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x256184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x256188: 0x34438007  ori         $v1, $v0, 0x8007
    ctx->pc = 0x256188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32775);
    // 0x25618c: 0x3c026e00  lui         $v0, 0x6E00
    ctx->pc = 0x25618cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
    // 0x256190: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x256190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x256194: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x256194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x256198: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x256198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x25619c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x25619cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2561a0: 0x2a93c  dsll32      $s5, $v0, 4
    ctx->pc = 0x2561a0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2561a4: 0x15a93e  dsrl32      $s5, $s5, 4
    ctx->pc = 0x2561a4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 4));
    // 0x2561a8: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x2561a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
    // 0x2561ac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2561acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2561b0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2561b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2561b4: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x2561b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2561b8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2561b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2561bc: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x2561bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x2561c0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2561c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2561c4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2561c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2561c8: 0xfe020080  sd          $v0, 0x80($s0)
    ctx->pc = 0x2561c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 2));
    // 0x2561cc: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x2561ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x2561d0: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x2561d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2561d4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2561d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2561d8: 0x34438008  ori         $v1, $v0, 0x8008
    ctx->pc = 0x2561d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32776);
    // 0x2561dc: 0x3c026f00  lui         $v0, 0x6F00
    ctx->pc = 0x2561dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28416 << 16));
    // 0x2561e0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2561e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2561e4: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x2561e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x2561e8: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x2561e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2561ec: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x2561ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2561f0: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x2561f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x2561f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2561f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2561f8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2561f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2561fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2561fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256200: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x256200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x256204: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x256204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x256208: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x256208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x25620c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x25620cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x256210: 0x3c021700  lui         $v0, 0x1700
    ctx->pc = 0x256210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5888 << 16));
    // 0x256214: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x256214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x256218: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x256218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x25621c: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x25621cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x256220: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x256220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x256224: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x256224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x256228: 0x24420240  addiu       $v0, $v0, 0x240
    ctx->pc = 0x256228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x25622c: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x25622cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x256230: 0x26d60240  addiu       $s6, $s6, 0x240
    ctx->pc = 0x256230u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 576));
    // 0x256234: 0x26f700c0  addiu       $s7, $s7, 0xC0
    ctx->pc = 0x256234u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 192));
    // 0x256238: 0x27de00c0  addiu       $fp, $fp, 0xC0
    ctx->pc = 0x256238u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 192));
    // 0x25623c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x25623cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x256240: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x256240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x256244: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x256244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x256248: 0x2652ffd0  addiu       $s2, $s2, -0x30
    ctx->pc = 0x256248u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967248));
    // 0x25624c: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x25624cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x256250: 0x1e40fef5  bgtz        $s2, . + 4 + (-0x10B << 2)
    ctx->pc = 0x256250u;
    {
        const bool branch_taken_0x256250 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x256250) {
            ctx->pc = 0x255E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255e28;
        }
    }
    ctx->pc = 0x256258u;
    // 0x256258: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x256258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x25625c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x25625cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x256260: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x256260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x256264: 0x266200c0  addiu       $v0, $s3, 0xC0
    ctx->pc = 0x256264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x256268: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x256268u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25626c: 0xafb000f8  sw          $s0, 0xF8($sp)
    ctx->pc = 0x25626cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 16));
    // 0x256270: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x256270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x256274: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x256274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x256278: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x256278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x25627c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x25627cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x256280: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x256280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x256284: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x256284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x256288: 0x1c40fe91  bgtz        $v0, . + 4 + (-0x16F << 2)
    ctx->pc = 0x256288u;
    {
        const bool branch_taken_0x256288 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x256288) {
            ctx->pc = 0x255CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255cd0;
        }
    }
    ctx->pc = 0x256290u;
    // 0x256290: 0x2602fff0  addiu       $v0, $s0, -0x10
    ctx->pc = 0x256290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x256294: 0x2213c  dsll32      $a0, $v0, 4
    ctx->pc = 0x256294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 4));
    // 0x256298: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x256298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x25629c: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x25629cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2562a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2562a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2562a4: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x2562a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2562a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2562a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2562ac: 0xac440048  sw          $a0, 0x48($v0)
    ctx->pc = 0x2562acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 4));
    // 0x2562b0: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x2562b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2562b4: 0xac440080  sw          $a0, 0x80($v0)
    ctx->pc = 0x2562b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
    // 0x2562b8: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x2562b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2562bc: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x2562bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2562c0: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x2562c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x2562c4: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2562c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2562c8: 0x24560010  addiu       $s6, $v0, 0x10
    ctx->pc = 0x2562c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2562cc: 0xafb600ac  sw          $s6, 0xAC($sp)
    ctx->pc = 0x2562ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 22));
    // 0x2562d0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2562d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2562d4: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x2562d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2562d8: 0x1440fdf5  bnez        $v0, . + 4 + (-0x20B << 2)
    ctx->pc = 0x2562D8u;
    {
        const bool branch_taken_0x2562d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2562d8) {
            ctx->pc = 0x255AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255ab0;
        }
    }
    ctx->pc = 0x2562E0u;
    // 0x2562e0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2562e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2562e4: 0x2b93c  dsll32      $s7, $v0, 4
    ctx->pc = 0x2562e4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2562e8: 0x17b93e  dsrl32      $s7, $s7, 4
    ctx->pc = 0x2562e8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) >> (32 + 4));
    // 0x2562ec: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2562ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2562f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2562f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2562f4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2562f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2562f8: 0x43f021  addu        $fp, $v0, $v1
    ctx->pc = 0x2562f8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2562fc: 0xafd7002c  sw          $s7, 0x2C($fp)
    ctx->pc = 0x2562fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 44), GPR_U32(ctx, 23));
    // 0x256300: 0x8fb500f8  lw          $s5, 0xF8($sp)
    ctx->pc = 0x256300u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x256304: 0x26a20040  addiu       $v0, $s5, 0x40
    ctx->pc = 0x256304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x256308: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x256308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x25630c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x25630cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x256310: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x256310u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x256314: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x256314u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x256318: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x256318u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x25631c: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x25631cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x256320: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x256320u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x256324: 0x7200a628  paddub      $s4, $s0, $zero
    ctx->pc = 0x256324u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_256328:
    // 0x256328: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x256328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25632c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x25632cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x256330: 0x1440fdbc  bnez        $v0, . + 4 + (-0x244 << 2)
    ctx->pc = 0x256330u;
    {
        const bool branch_taken_0x256330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256330) {
            ctx->pc = 0x255A24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255a24;
        }
    }
    ctx->pc = 0x256338u;
    // 0x256338: 0x8fb200f8  lw          $s2, 0xF8($sp)
    ctx->pc = 0x256338u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x25633c: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x25633cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x256340: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x256340u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x256344: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x256344u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x256348: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x256348u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25634c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25634cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x256350: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x256350u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x256354: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x256354u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256358: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x256358u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25635c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25635cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256360: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x256360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256368: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x256368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x25636c: 0x3e00008  jr          $ra
    ctx->pc = 0x25636Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25636Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256374u;
}
