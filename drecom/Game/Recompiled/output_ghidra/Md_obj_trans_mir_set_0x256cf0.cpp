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

// Function: Md_obj_trans_mir_set
// Address: 0x256cf0 - 0x256eac
void Md_obj_trans_mir_set_0x256cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_obj_trans_mir_set_0x256cf0");
#endif

    ctx->pc = 0x256cf0u;

    // 0x256cf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x256cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x256cf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x256cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x256cf8: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x256cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x256cfc: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x256cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x256d00: 0xa3a60048  sb          $a2, 0x48($sp)
    ctx->pc = 0x256d00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 6));
    // 0x256d04: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x256d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x256d08: 0x2442b860  addiu       $v0, $v0, -0x47A0
    ctx->pc = 0x256d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948960));
    // 0x256d0c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x256d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x256d10: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x256d10u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38B860u));
    // 0x256d14: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x256d14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x256d18: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x256d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x256d1c: 0x2442b870  addiu       $v0, $v0, -0x4790
    ctx->pc = 0x256d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948976));
    // 0x256d20: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x256d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x256d24: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x256d24u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38B870u));
    // 0x256d28: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x256d28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x256d2c: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x256d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256d30: 0x93a20048  lbu         $v0, 0x48($sp)
    ctx->pc = 0x256d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x256d34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x256d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x256d38: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x256d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x256d3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x256d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x256d40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256d44: 0xac500024  sw          $s0, 0x24($v0)
    ctx->pc = 0x256d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 16));
    // 0x256d48: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x256d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x256d4c: 0x2442e200  addiu       $v0, $v0, -0x1E00
    ctx->pc = 0x256d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959616));
    // 0x256d50: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x256d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x256d54: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x256d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x256d58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x256d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256d5c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x256d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x256d60: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x256d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256d64: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x256d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x256d68: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x256d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x256d6c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x256d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x256d70: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x256d70u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x256d74: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x256d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x256d78: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x256d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x256d7c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x256d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x256d80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x256d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x256d84: 0xac20e200  sw          $zero, -0x1E00($at)
    ctx->pc = 0x256d84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61E200u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E200u, _value); } while (0);
    // 0x256d88: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x256d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x256d8c: 0xac20e204  sw          $zero, -0x1DFC($at)
    ctx->pc = 0x256d8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61E204u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E204u, _value); } while (0);
    // 0x256d90: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x256d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x256d94: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x256d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x256d98: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x256d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x256d9c: 0xac22e208  sw          $v0, -0x1DF8($at)
    ctx->pc = 0x256d9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61E208u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E208u, _value); } while (0);
    // 0x256da0: 0x3c026c08  lui         $v0, 0x6C08
    ctx->pc = 0x256da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27656 << 16));
    // 0x256da4: 0x344200b0  ori         $v0, $v0, 0xB0
    ctx->pc = 0x256da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)176);
    // 0x256da8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x256da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x256dac: 0xac22e20c  sw          $v0, -0x1DF4($at)
    ctx->pc = 0x256dacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61E20Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E20Cu, _value); } while (0);
    // 0x256db0: 0x93a20048  lbu         $v0, 0x48($sp)
    ctx->pc = 0x256db0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x256db4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x256db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x256db8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x256db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x256dbc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x256dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x256dc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256dc4: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x256dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x256dc8: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x256dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x256dcc: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x256dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x256dd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x256dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256dd4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x256dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x256dd8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x256dd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256ddc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x256ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x256de0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x256de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x256de4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x256de4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x256de8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x256de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x256dec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x256decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x256df0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x256df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256df4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x256df4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x256df8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x256df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x256dfc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x256dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x256e00: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x256e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x256e04: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x256e04u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x256e08: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x256e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x256e0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x256e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x256e10: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x256e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x256e14: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x256e14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x256e18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x256e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x256e1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x256e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x256e20: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x256e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x256e24: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x256e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x256e28: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x256e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x256e2c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x256e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x256e30: 0x93a20048  lbu         $v0, 0x48($sp)
    ctx->pc = 0x256e30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x256e34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x256e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x256e38: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x256e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x256e3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x256e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x256e40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256e44: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x256e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x256e48: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x256e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x256e4c: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x256e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x256e50: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x256e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x256e54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x256e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256e58: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x256e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x256e5c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x256e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x256e60: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x256e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x256e64: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x256e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x256e68: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x256e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x256e6c: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x256e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x256e70: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x256e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x256e74: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x256e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x256e78: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x256e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x256e7c: 0x3c026c08  lui         $v0, 0x6C08
    ctx->pc = 0x256e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27656 << 16));
    // 0x256e80: 0x344200b8  ori         $v0, $v0, 0xB8
    ctx->pc = 0x256e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)184);
    // 0x256e84: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x256e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x256e88: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x256e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x256e8c: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x256e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x256e90: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x256e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x256e94: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x256e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x256e98: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x256e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x256e9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256ea0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x256ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x256ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x256EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256EACu;
}
