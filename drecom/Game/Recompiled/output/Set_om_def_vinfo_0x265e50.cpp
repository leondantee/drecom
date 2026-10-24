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

// Function: Set_om_def_vinfo
// Address: 0x265e50 - 0x26614c
void Set_om_def_vinfo_0x265e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_om_def_vinfo_0x265e50");
#endif

    switch (ctx->pc) {
        case 0x265ebcu: goto label_265ebc;
        case 0x265f08u: goto label_265f08;
        case 0x265f68u: goto label_265f68;
        case 0x265f78u: goto label_265f78;
        case 0x265fb0u: goto label_265fb0;
        case 0x265fc8u: goto label_265fc8;
        case 0x26603cu: goto label_26603c;
        case 0x266088u: goto label_266088;
        case 0x2660a8u: goto label_2660a8;
        case 0x2660f0u: goto label_2660f0;
        case 0x2660fcu: goto label_2660fc;
        default: break;
    }

    ctx->pc = 0x265e50u;

    // 0x265e50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x265e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x265e54: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x265e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x265e58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x265e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x265e5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x265e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x265e60: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x265e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x265e64: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x265e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x265e68: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x265e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x265e6c: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x265e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x265e70: 0x8e220a68  lw          $v0, 0xA68($s1)
    ctx->pc = 0x265e70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x265e74: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x265e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x265e78: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x265e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x265e7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x265e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x265e80: 0xae220a68  sw          $v0, 0xA68($s1)
    ctx->pc = 0x265e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2664), GPR_U32(ctx, 2));
    // 0x265e84: 0x8e300a68  lw          $s0, 0xA68($s1)
    ctx->pc = 0x265e84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x265e88: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x265e8c: 0x9022e650  lbu         $v0, -0x19B0($at)
    ctx->pc = 0x265e8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E650u));
    // 0x265e90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x265e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x265e94: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x265e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x265e98: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x265e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x265e9c: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x265e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x265ea0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x265ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265ea4: 0xac501390  sw          $s0, 0x1390($v0)
    ctx->pc = 0x265ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5008), GPR_U32(ctx, 16));
    // 0x265ea8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x265ea8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x265eac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x265eacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x265eb0: 0x24061350  addiu       $a2, $zero, 0x1350
    ctx->pc = 0x265eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4944));
    // 0x265eb4: 0xc046314  jal         func_118C50
    ctx->pc = 0x265EB4u;
    SET_GPR_U32(ctx, 31, 0x265EBCu);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x265EBCu;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x265EBCu) { return; }
    ctx->pc = 0x265EBCu;
label_265ebc:
    // 0x265ebc: 0x26230a68  addiu       $v1, $s1, 0xA68
    ctx->pc = 0x265ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2664));
    // 0x265ec0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x265ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x265ec4: 0x24421350  addiu       $v0, $v0, 0x1350
    ctx->pc = 0x265ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4944));
    // 0x265ec8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x265ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x265ecc: 0x8e220a68  lw          $v0, 0xA68($s1)
    ctx->pc = 0x265eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x265ed0: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x265ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x265ed4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x265ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x265ed8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x265ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x265edc: 0xae220a68  sw          $v0, 0xA68($s1)
    ctx->pc = 0x265edcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2664), GPR_U32(ctx, 2));
    // 0x265ee0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x265ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265ee4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x265ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x265ee8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x265ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x265eec: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x265eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x265ef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x265ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265ef4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x265ef4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x265ef8: 0x8c451590  lw          $a1, 0x1590($v0)
    ctx->pc = 0x265ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5520)));
    // 0x265efc: 0x24061350  addiu       $a2, $zero, 0x1350
    ctx->pc = 0x265efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4944));
    // 0x265f00: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x265F00u;
    SET_GPR_U32(ctx, 31, 0x265F08u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x265F08u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x265F08u) { return; }
    ctx->pc = 0x265F08u;
label_265f08:
    // 0x265f08: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x265f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x265f0c: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x265f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x265f10: 0xa600000e  sh          $zero, 0xE($s0)
    ctx->pc = 0x265f10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x265f14: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x265f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265f18: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x265f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x265f1c: 0x2442b898  addiu       $v0, $v0, -0x4768
    ctx->pc = 0x265f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949016));
    // 0x265f20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x265f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265f24: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x265f24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x265f28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x265f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x265f2c: 0xae021338  sw          $v0, 0x1338($s0)
    ctx->pc = 0x265f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4920), GPR_U32(ctx, 2));
    // 0x265f30: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x265f34: 0x9022e650  lbu         $v0, -0x19B0($at)
    ctx->pc = 0x265f34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E650u));
    // 0x265f38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x265f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x265f3c: 0xa60210a4  sh          $v0, 0x10A4($s0)
    ctx->pc = 0x265f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4260), (uint16_t)GPR_U32(ctx, 2));
    // 0x265f40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x265f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x265f44: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x265f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x265f48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x265f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265f4c: 0xa60210a6  sh          $v0, 0x10A6($s0)
    ctx->pc = 0x265f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 2));
    // 0x265f50: 0xa2001219  sb          $zero, 0x1219($s0)
    ctx->pc = 0x265f50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4633), (uint8_t)GPR_U32(ctx, 0));
    // 0x265f54: 0xae00121c  sw          $zero, 0x121C($s0)
    ctx->pc = 0x265f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4636), GPR_U32(ctx, 0));
    // 0x265f58: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x265f58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x265f5c: 0x8e250a68  lw          $a1, 0xA68($s1)
    ctx->pc = 0x265f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x265f60: 0xc095228  jal         func_2548A0
    ctx->pc = 0x265F60u;
    SET_GPR_U32(ctx, 31, 0x265F68u);
    ctx->pc = 0x2548A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548A0u, 0x265F60u, 0x265F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265F68u;
label_265f68:
    // 0x265f68: 0xae220a68  sw          $v0, 0xA68($s1)
    ctx->pc = 0x265f68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2664), GPR_U32(ctx, 2));
    // 0x265f6c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x265f6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x265f70: 0xc096558  jal         func_259560
    ctx->pc = 0x265F70u;
    SET_GPR_U32(ctx, 31, 0x265F78u);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x265F70u, 0x265F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265F78u;
label_265f78:
    // 0x265f78: 0x8e02133c  lw          $v0, 0x133C($s0)
    ctx->pc = 0x265f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x265f7c: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x265f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x265f80: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x265f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x265f84: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x265F84u;
    {
        const bool branch_taken_0x265f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x265f84) {
            ctx->pc = 0x265FB8u;
            goto label_265fb8;
        }
    }
    ctx->pc = 0x265F8Cu;
    // 0x265f8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265f90: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265F90u;
    {
        const bool branch_taken_0x265f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x265f90) {
            ctx->pc = 0x265FA0u;
            goto label_265fa0;
        }
    }
    ctx->pc = 0x265F98u;
    // 0x265f98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x265F98u;
    {
        const bool branch_taken_0x265f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265f98) {
            ctx->pc = 0x265FC8u;
            goto label_265fc8;
        }
    }
    ctx->pc = 0x265FA0u;
label_265fa0:
    // 0x265fa0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x265fa0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x265fa4: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x265fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x265fa8: 0xc05be64  jal         func_16F990
    ctx->pc = 0x265FA8u;
    SET_GPR_U32(ctx, 31, 0x265FB0u);
    ctx->pc = 0x16F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F990u, 0x265FA8u, 0x265FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265FB0u;
label_265fb0:
    // 0x265fb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x265FB0u;
    {
        const bool branch_taken_0x265fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265fb0) {
            ctx->pc = 0x265FC8u;
            goto label_265fc8;
        }
    }
    ctx->pc = 0x265FB8u;
label_265fb8:
    // 0x265fb8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x265fb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x265fbc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x265fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x265fc0: 0xc05be64  jal         func_16F990
    ctx->pc = 0x265FC0u;
    SET_GPR_U32(ctx, 31, 0x265FC8u);
    ctx->pc = 0x16F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F990u, 0x265FC0u, 0x265FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265FC8u;
label_265fc8:
    // 0x265fc8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x265fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265fcc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x265fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x265fd0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x265FD0u;
    {
        const bool branch_taken_0x265fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x265fd0) {
            ctx->pc = 0x265FF4u;
            goto label_265ff4;
        }
    }
    ctx->pc = 0x265FD8u;
    // 0x265fd8: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x265fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x265fdc: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x265fdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x265fe0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x265fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x265fe4: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x265fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x265fe8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x265fe8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x265fec: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x265fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x265ff0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x265ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_265ff4:
    // 0x265ff4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x265ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265ff8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x265ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x265ffc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x265FFCu;
    {
        const bool branch_taken_0x265ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x265ffc) {
            ctx->pc = 0x266014u;
            goto label_266014;
        }
    }
    ctx->pc = 0x266004u;
    // 0x266004: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x266004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x266008: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x266008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x26600c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x26600cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x266010: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x266010u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_266014:
    // 0x266014: 0x8e220a68  lw          $v0, 0xA68($s1)
    ctx->pc = 0x266014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x266018: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x266018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x26601c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x26601cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x266020: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x266020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x266024: 0xae220a68  sw          $v0, 0xA68($s1)
    ctx->pc = 0x266024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2664), GPR_U32(ctx, 2));
    // 0x266028: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x266028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x26602c: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x26602cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x266030: 0x8e260a68  lw          $a2, 0xA68($s1)
    ctx->pc = 0x266030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x266034: 0xc0767a0  jal         func_1D9E80
    ctx->pc = 0x266034u;
    SET_GPR_U32(ctx, 31, 0x26603Cu);
    ctx->pc = 0x1D9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E80u, 0x266034u, 0x26603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26603Cu;
label_26603c:
    // 0x26603c: 0xae220a68  sw          $v0, 0xA68($s1)
    ctx->pc = 0x26603cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2664), GPR_U32(ctx, 2));
    // 0x266040: 0x8e220a68  lw          $v0, 0xA68($s1)
    ctx->pc = 0x266040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x266044: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x266044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x266048: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x266048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x26604c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26604cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x266050: 0xae220a68  sw          $v0, 0xA68($s1)
    ctx->pc = 0x266050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2664), GPR_U32(ctx, 2));
    // 0x266054: 0x8e02133c  lw          $v0, 0x133C($s0)
    ctx->pc = 0x266054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x266058: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x266058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26605c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26605Cu;
    {
        const bool branch_taken_0x26605c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26605c) {
            ctx->pc = 0x2660ACu;
            goto label_2660ac;
        }
    }
    ctx->pc = 0x266064u;
    // 0x266064: 0x8e02133c  lw          $v0, 0x133C($s0)
    ctx->pc = 0x266064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x266068: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x266068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x26606c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26606Cu;
    {
        const bool branch_taken_0x26606c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26606c) {
            ctx->pc = 0x266094u;
            goto label_266094;
        }
    }
    ctx->pc = 0x266074u;
    // 0x266074: 0x8e260a68  lw          $a2, 0xA68($s1)
    ctx->pc = 0x266074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x266078: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x266078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26607c: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x26607cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x266080: 0xc099854  jal         func_266150
    ctx->pc = 0x266080u;
    SET_GPR_U32(ctx, 31, 0x266088u);
    ctx->pc = 0x266150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266150u, 0x266080u, 0x266088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266088u;
label_266088:
    // 0x266088: 0xae220a68  sw          $v0, 0xA68($s1)
    ctx->pc = 0x266088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2664), GPR_U32(ctx, 2));
    // 0x26608c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26608Cu;
    {
        const bool branch_taken_0x26608c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26608c) {
            ctx->pc = 0x2660ACu;
            goto label_2660ac;
        }
    }
    ctx->pc = 0x266094u;
label_266094:
    // 0x266094: 0x8e260a68  lw          $a2, 0xA68($s1)
    ctx->pc = 0x266094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x266098: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x266098u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x26609c: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x26609cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x2660a0: 0xc0998dc  jal         func_266370
    ctx->pc = 0x2660A0u;
    SET_GPR_U32(ctx, 31, 0x2660A8u);
    ctx->pc = 0x266370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266370u, 0x2660A0u, 0x2660A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2660A8u;
label_2660a8:
    // 0x2660a8: 0xae220a68  sw          $v0, 0xA68($s1)
    ctx->pc = 0x2660a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2664), GPR_U32(ctx, 2));
label_2660ac:
    // 0x2660ac: 0x8e220a68  lw          $v0, 0xA68($s1)
    ctx->pc = 0x2660acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x2660b0: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x2660b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2660b4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2660b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2660b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2660b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2660bc: 0xae220a68  sw          $v0, 0xA68($s1)
    ctx->pc = 0x2660bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2664), GPR_U32(ctx, 2));
    // 0x2660c0: 0xfe000a08  sd          $zero, 0xA08($s0)
    ctx->pc = 0x2660c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2568), GPR_U64(ctx, 0));
    // 0x2660c4: 0x8e030368  lw          $v1, 0x368($s0)
    ctx->pc = 0x2660c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x2660c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2660c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2660cc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2660CCu;
    {
        const bool branch_taken_0x2660cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2660cc) {
            ctx->pc = 0x2660F0u;
            goto label_2660f0;
        }
    }
    ctx->pc = 0x2660D4u;
    // 0x2660d4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2660d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2660d8: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x2660d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x2660dc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2660dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2660e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2660e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2660e4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2660e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2660e8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2660E8u;
    SET_GPR_U32(ctx, 31, 0x2660F0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2660E8u, 0x2660F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2660F0u;
label_2660f0:
    // 0x2660f0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2660f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2660f4: 0xc095c7c  jal         func_2571F0
    ctx->pc = 0x2660F4u;
    SET_GPR_U32(ctx, 31, 0x2660FCu);
    ctx->pc = 0x2571F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571F0u, 0x2660F4u, 0x2660FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2660FCu;
label_2660fc:
    // 0x2660fc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2660fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x266100: 0x9022e650  lbu         $v0, -0x19B0($at)
    ctx->pc = 0x266100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E650u));
    // 0x266104: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x266104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x266108: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x266108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x26610c: 0xa022e650  sb          $v0, -0x19B0($at)
    ctx->pc = 0x26610cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61E650u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E650u, _value); } while (0);
    // 0x266110: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x266110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x266114: 0x9022e674  lbu         $v0, -0x198C($at)
    ctx->pc = 0x266114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E674u));
    // 0x266118: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x266118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26611c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26611cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x266120: 0xa022e674  sb          $v0, -0x198C($at)
    ctx->pc = 0x266120u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61E674u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E674u, _value); } while (0);
    // 0x266124: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x266124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x266128: 0x9022e650  lbu         $v0, -0x19B0($at)
    ctx->pc = 0x266128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E650u));
    // 0x26612c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26612cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x266130: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x266130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x266134: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x266134u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266138: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x266138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26613c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26613cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266140: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x266140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x266144: 0x3e00008  jr          $ra
    ctx->pc = 0x266144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26614Cu;
}
