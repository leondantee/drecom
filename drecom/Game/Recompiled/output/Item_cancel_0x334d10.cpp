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

// Function: Item_cancel
// Address: 0x334d10 - 0x3350e4
void Item_cancel_0x334d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Item_cancel_0x334d10");
#endif

    switch (ctx->pc) {
        case 0x334d90u: goto label_334d90;
        case 0x334e7cu: goto label_334e7c;
        case 0x334ec4u: goto label_334ec4;
        case 0x334ed8u: goto label_334ed8;
        case 0x334f40u: goto label_334f40;
        case 0x334fccu: goto label_334fcc;
        case 0x334fe8u: goto label_334fe8;
        case 0x335094u: goto label_335094;
        case 0x3350bcu: goto label_3350bc;
        default: break;
    }

    ctx->pc = 0x334d10u;

    // 0x334d10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x334d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x334d14: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x334d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x334d18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x334d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x334d1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x334d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x334d20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x334d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x334d24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x334d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x334d28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x334d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x334d2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x334d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x334d30: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x334d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x334d34: 0x24506150  addiu       $s0, $v0, 0x6150
    ctx->pc = 0x334d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x334d38: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x334d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x334d3c: 0x245232e0  addiu       $s2, $v0, 0x32E0
    ctx->pc = 0x334d3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 13024));
    // 0x334d40: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x334d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x334d44: 0x24513300  addiu       $s1, $v0, 0x3300
    ctx->pc = 0x334d44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x334d48: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x334d48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x62C9ACu));
    // 0x334d4c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x334d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x334d50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x334D50u;
    {
        const bool branch_taken_0x334d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x334d50) {
            ctx->pc = 0x334D64u;
            goto label_334d64;
        }
    }
    ctx->pc = 0x334D58u;
    // 0x334d58: 0x24140007  addiu       $s4, $zero, 0x7
    ctx->pc = 0x334d58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x334d5c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x334D5Cu;
    {
        const bool branch_taken_0x334d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334d5c) {
            ctx->pc = 0x334D94u;
            goto label_334d94;
        }
    }
    ctx->pc = 0x334D64u;
label_334d64:
    // 0x334d64: 0x9202683f  lbu         $v0, 0x683F($s0)
    ctx->pc = 0x334d64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x334d68: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x334d68u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x334d6c: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x334d6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x334d70: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x334d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x334d74: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x334d74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x334d78: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x334d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x334d7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x334d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x334d80: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x334d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x334d84: 0x2444663e  addiu       $a0, $v0, 0x663E
    ctx->pc = 0x334d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26174));
    // 0x334d88: 0xc0ce1cc  jal         func_338730
    ctx->pc = 0x334D88u;
    SET_GPR_U32(ctx, 31, 0x334D90u);
    ctx->pc = 0x338730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338730u, 0x334D88u, 0x334D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D90u;
label_334d90:
    // 0x334d90: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x334d90u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_334d94:
    // 0x334d94: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x334d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x334d98: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x334d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x334d9c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x334d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x334da0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x334da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x334da4: 0x24429740  addiu       $v0, $v0, -0x68C0
    ctx->pc = 0x334da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940480));
    // 0x334da8: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x334da8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x334dac: 0x8e035dd0  lw          $v1, 0x5DD0($s0)
    ctx->pc = 0x334dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x334db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x334db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334db4: 0x1062005c  beq         $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x334DB4u;
    {
        const bool branch_taken_0x334db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x334db4) {
            ctx->pc = 0x334F28u;
            goto label_334f28;
        }
    }
    ctx->pc = 0x334DBCu;
    // 0x334dbc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x334DBCu;
    {
        const bool branch_taken_0x334dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x334dbc) {
            ctx->pc = 0x334DCCu;
            goto label_334dcc;
        }
    }
    ctx->pc = 0x334DC4u;
    // 0x334dc4: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x334DC4u;
    {
        const bool branch_taken_0x334dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334dc4) {
            ctx->pc = 0x335020u;
            goto label_335020;
        }
    }
    ctx->pc = 0x334DCCu;
label_334dcc:
    // 0x334dcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x334dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x334dd0: 0xa2025e04  sb          $v0, 0x5E04($s0)
    ctx->pc = 0x334dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24068), (uint8_t)GPR_U32(ctx, 2));
    // 0x334dd4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334dd8: 0xac2032d0  sw          $zero, 0x32D0($at)
    ctx->pc = 0x334dd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8932D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8932D0u, _value); } while (0);
    // 0x334ddc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x334ddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334de0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334de4: 0xe42032c8  swc1        $f0, 0x32C8($at)
    ctx->pc = 0x334de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8932C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8932C8u, _value); } while (0); }
    // 0x334de8: 0x8e025dd0  lw          $v0, 0x5DD0($s0)
    ctx->pc = 0x334de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x334dec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x334decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x334df0: 0xae025dd0  sw          $v0, 0x5DD0($s0)
    ctx->pc = 0x334df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 2));
    // 0x334df4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334df8: 0xac2032d8  sw          $zero, 0x32D8($at)
    ctx->pc = 0x334df8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8932D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8932D8u, _value); } while (0);
    // 0x334dfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x334dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x334e00: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x334e00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x334e04: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x334e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x334e08: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x334e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x334e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x334e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334e10: 0x0  nop
    ctx->pc = 0x334e10u;
    // NOP
    // 0x334e14: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x334e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x334e18: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x334e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x334e1c: 0xa2420009  sb          $v0, 0x9($s2)
    ctx->pc = 0x334e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x334e20: 0x3c02bd80  lui         $v0, 0xBD80
    ctx->pc = 0x334e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48512 << 16));
    // 0x334e24: 0x3442adfd  ori         $v0, $v0, 0xADFD
    ctx->pc = 0x334e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x334e28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x334e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334e2c: 0x0  nop
    ctx->pc = 0x334e2cu;
    // NOP
    // 0x334e30: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x334e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x334e34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x334e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x334e38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x334e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334e3c: 0x0  nop
    ctx->pc = 0x334e3cu;
    // NOP
    // 0x334e40: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x334e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x334e44: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x334e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x334e48: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x334e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x334e4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x334e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334e50: 0x0  nop
    ctx->pc = 0x334e50u;
    // NOP
    // 0x334e54: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x334e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x334e58: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x334e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x334e5c: 0x24426158  addiu       $v0, $v0, 0x6158
    ctx->pc = 0x334e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24920));
    // 0x334e60: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x334e60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x334e64: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x334e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x334e68: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x334e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x334e6c: 0x2445e7d0  addiu       $a1, $v0, -0x1830
    ctx->pc = 0x334e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x334e70: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x334e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x334e74: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x334E74u;
    SET_GPR_U32(ctx, 31, 0x334E7Cu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x334E7Cu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x334E7Cu) { return; }
    ctx->pc = 0x334E7Cu;
label_334e7c:
    // 0x334e7c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x334e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x334e80: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x334e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x334e84: 0xa6220030  sh          $v0, 0x30($s1)
    ctx->pc = 0x334e84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x334e88: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x334e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x334e8c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x334e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x334e90: 0xa6220032  sh          $v0, 0x32($s1)
    ctx->pc = 0x334e90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 2));
    // 0x334e94: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x334e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x334e98: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x334e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x334e9c: 0xa6220034  sh          $v0, 0x34($s1)
    ctx->pc = 0x334e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x334ea0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x334ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x334ea4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x334ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x334ea8: 0xa6220036  sh          $v0, 0x36($s1)
    ctx->pc = 0x334ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x334eac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x334eacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x334eb0: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x334eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x334eb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x334eb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x334eb8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x334eb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x334ebc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x334EBCu;
    SET_GPR_U32(ctx, 31, 0x334EC4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x334EBCu, 0x334EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334EC4u;
label_334ec4:
    // 0x334ec4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x334ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x334ec8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x334ec8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x334ecc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x334eccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x334ed0: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x334ED0u;
    SET_GPR_U32(ctx, 31, 0x334ED8u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x334ED0u, 0x334ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334ED8u;
label_334ed8:
    // 0x334ed8: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x334ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x334edc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x334edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x334ee0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x334EE0u;
    {
        const bool branch_taken_0x334ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x334ee0) {
            ctx->pc = 0x334F10u;
            goto label_334f10;
        }
    }
    ctx->pc = 0x334EE8u;
    // 0x334ee8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x334ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x334eec: 0x2442c468  addiu       $v0, $v0, -0x3B98
    ctx->pc = 0x334eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952040));
    // 0x334ef0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334ef4: 0xac223338  sw          $v0, 0x3338($at)
    ctx->pc = 0x334ef4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x893338u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893338u, _value); } while (0);
    // 0x334ef8: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x334ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x334efc: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x334efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x334f00: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x334f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x334f04: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x334f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x334f08: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x334F08u;
    {
        const bool branch_taken_0x334f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334f08) {
            ctx->pc = 0x335020u;
            goto label_335020;
        }
    }
    ctx->pc = 0x334F10u;
label_334f10:
    // 0x334f10: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x334f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x334f14: 0x2442c09c  addiu       $v0, $v0, -0x3F64
    ctx->pc = 0x334f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951068));
    // 0x334f18: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334f1c: 0xac223338  sw          $v0, 0x3338($at)
    ctx->pc = 0x334f1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x893338u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893338u, _value); } while (0);
    // 0x334f20: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x334F20u;
    {
        const bool branch_taken_0x334f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334f20) {
            ctx->pc = 0x335020u;
            goto label_335020;
        }
    }
    ctx->pc = 0x334F28u;
label_334f28:
    // 0x334f28: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x334f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x334f2c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x334f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x334f30: 0x2445e7d0  addiu       $a1, $v0, -0x1830
    ctx->pc = 0x334f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x334f34: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x334f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x334f38: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x334F38u;
    SET_GPR_U32(ctx, 31, 0x334F40u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x334F40u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x334F40u) { return; }
    ctx->pc = 0x334F40u;
label_334f40:
    // 0x334f40: 0xc6015df4  lwc1        $f1, 0x5DF4($s0)
    ctx->pc = 0x334f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x334f44: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334f48: 0xc42032c8  lwc1        $f0, 0x32C8($at)
    ctx->pc = 0x334f48u;
    { uint32_t bits = FAST_READ32(0x8932C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x334f4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x334f4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x334f50: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334f54: 0xe42032c8  swc1        $f0, 0x32C8($at)
    ctx->pc = 0x334f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8932C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8932C8u, _value); } while (0); }
    // 0x334f58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x334f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x334f5c: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x334f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x334f60: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x334f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x334f64: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x334f64u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x334f68: 0x0  nop
    ctx->pc = 0x334f68u;
    // NOP
    // 0x334f6c: 0x0  nop
    ctx->pc = 0x334f6cu;
    // NOP
    // 0x334f70: 0x1010  mfhi        $v0
    ctx->pc = 0x334f70u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x334f74: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x334F74u;
    {
        const bool branch_taken_0x334f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x334f74) {
            ctx->pc = 0x334FCCu;
            goto label_334fcc;
        }
    }
    ctx->pc = 0x334F7Cu;
    // 0x334f7c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334f80: 0x8c2232d8  lw          $v0, 0x32D8($at)
    ctx->pc = 0x334f80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8932D8u));
    // 0x334f84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x334f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x334f88: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334f8c: 0xac2232d8  sw          $v0, 0x32D8($at)
    ctx->pc = 0x334f8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8932D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8932D8u, _value); } while (0);
    // 0x334f90: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x334f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x334f94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x334F94u;
    {
        const bool branch_taken_0x334f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x334f94) {
            ctx->pc = 0x334FA8u;
            goto label_334fa8;
        }
    }
    ctx->pc = 0x334F9Cu;
    // 0x334f9c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x334f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x334fa0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334fa4: 0xac2232d8  sw          $v0, 0x32D8($at)
    ctx->pc = 0x334fa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8932D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8932D8u, _value); } while (0);
label_334fa8:
    // 0x334fa8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334fac: 0x8c2232d8  lw          $v0, 0x32D8($at)
    ctx->pc = 0x334facu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8932D8u));
    // 0x334fb0: 0x24420027  addiu       $v0, $v0, 0x27
    ctx->pc = 0x334fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 39));
    // 0x334fb4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x334fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x334fb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x334fb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x334fbc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x334fbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x334fc0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x334fc0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x334fc4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x334FC4u;
    SET_GPR_U32(ctx, 31, 0x334FCCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x334FC4u, 0x334FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334FCCu;
label_334fcc:
    // 0x334fcc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x334fccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x334fd0: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x334fd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x334fd4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334fd8: 0x8c253338  lw          $a1, 0x3338($at)
    ctx->pc = 0x334fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x893338u));
    // 0x334fdc: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x334fdcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x334fe0: 0xc0a4474  jal         func_2911D0
    ctx->pc = 0x334FE0u;
    SET_GPR_U32(ctx, 31, 0x334FE8u);
    ctx->pc = 0x2911D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911D0u, 0x334FE0u, 0x334FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334FE8u;
label_334fe8:
    // 0x334fe8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x334FE8u;
    {
        const bool branch_taken_0x334fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x334fe8) {
            ctx->pc = 0x335020u;
            goto label_335020;
        }
    }
    ctx->pc = 0x334FF0u;
    // 0x334ff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x334ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334ff4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334ff8: 0xac2232d0  sw          $v0, 0x32D0($at)
    ctx->pc = 0x334ff8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8932D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8932D0u, _value); } while (0);
    // 0x334ffc: 0x92026625  lbu         $v0, 0x6625($s0)
    ctx->pc = 0x334ffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26149)));
    // 0x335000: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x335000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x335004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335008: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x335008u;
    {
        const bool branch_taken_0x335008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x335008) {
            ctx->pc = 0x335020u;
            goto label_335020;
        }
    }
    ctx->pc = 0x335010u;
    // 0x335010: 0xa2006625  sb          $zero, 0x6625($s0)
    ctx->pc = 0x335010u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26149), (uint8_t)GPR_U32(ctx, 0));
    // 0x335014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335018: 0xa20265ab  sb          $v0, 0x65AB($s0)
    ctx->pc = 0x335018u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26027), (uint8_t)GPR_U32(ctx, 2));
    // 0x33501c: 0xa20065ac  sb          $zero, 0x65AC($s0)
    ctx->pc = 0x33501cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26028), (uint8_t)GPR_U32(ctx, 0));
label_335020:
    // 0x335020: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335024: 0x8c2232d0  lw          $v0, 0x32D0($at)
    ctx->pc = 0x335024u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8932D0u));
    // 0x335028: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x335028u;
    {
        const bool branch_taken_0x335028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335028) {
            ctx->pc = 0x33504Cu;
            goto label_33504c;
        }
    }
    ctx->pc = 0x335030u;
    // 0x335030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335034: 0xae025dc8  sw          $v0, 0x5DC8($s0)
    ctx->pc = 0x335034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 2));
    // 0x335038: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33503c: 0xac2032d0  sw          $zero, 0x32D0($at)
    ctx->pc = 0x33503cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8932D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8932D0u, _value); } while (0);
    // 0x335040: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x335040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x335044: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x335044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x335048: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x335048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
label_33504c:
    // 0x33504c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33504cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335050: 0xc42032c8  lwc1        $f0, 0x32C8($at)
    ctx->pc = 0x335050u;
    { uint32_t bits = FAST_READ32(0x8932C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x335054: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x335054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x335058: 0xc6015e00  lwc1        $f1, 0x5E00($s0)
    ctx->pc = 0x335058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33505c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33505cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x335060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x335060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335064: 0x0  nop
    ctx->pc = 0x335064u;
    // NOP
    // 0x335068: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x335068u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33506c: 0x0  nop
    ctx->pc = 0x33506cu;
    // NOP
    // 0x335070: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x335070u;
    {
        const bool branch_taken_0x335070 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x335070) {
            ctx->pc = 0x335088u;
            goto label_335088;
        }
    }
    ctx->pc = 0x335078u;
    // 0x335078: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x335078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x33507c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33507cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335080: 0x0  nop
    ctx->pc = 0x335080u;
    // NOP
    // 0x335084: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x335084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
label_335088:
    // 0x335088: 0xc60c5e00  lwc1        $f12, 0x5E00($s0)
    ctx->pc = 0x335088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33508c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x33508Cu;
    SET_GPR_U32(ctx, 31, 0x335094u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x33508Cu, 0x335094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335094u;
label_335094:
    // 0x335094: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x335094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x335098: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x335098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x33509c: 0x3c031c07  lui         $v1, 0x1C07
    ctx->pc = 0x33509cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7175 << 16));
    // 0x3350a0: 0x3463050a  ori         $v1, $v1, 0x50A
    ctx->pc = 0x3350a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1290);
    // 0x3350a4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x3350a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3350a8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3350a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x3350ac: 0x246520c8  addiu       $a1, $v1, 0x20C8
    ctx->pc = 0x3350acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8392));
    // 0x3350b0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x3350b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3350b4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x3350B4u;
    SET_GPR_U32(ctx, 31, 0x3350BCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x3350B4u, 0x3350BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3350BCu;
label_3350bc:
    // 0x3350bc: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x3350bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3350c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3350c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3350c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3350c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3350c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3350c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3350cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3350ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3350d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3350d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3350d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3350d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3350d8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x3350d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3350dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3350DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3350DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3350E4u;
}
