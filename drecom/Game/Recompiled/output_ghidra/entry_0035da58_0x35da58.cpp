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

// Function: entry_0035da58
// Address: 0x35da58 - 0x35db34
void entry_0035da58_0x35da58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035da58_0x35da58");
#endif

    switch (ctx->pc) {
        case 0x35da70u: goto label_35da70;
        case 0x35dafcu: goto label_35dafc;
        default: break;
    }

    ctx->pc = 0x35da58u;

    // 0x35da58: 0x86020024  lh          $v0, 0x24($s0)
    ctx->pc = 0x35da58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x35da5c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35da5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35da60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35da60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35da64: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x35da64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x35da68: 0xc042ea4  jal         func_10BA90
    ctx->pc = 0x35DA68u;
    SET_GPR_U32(ctx, 31, 0x35DA70u);
    ctx->pc = 0x10BA90u;
    {
        ctx->pc = 0x35DA70u;
        ps2_stubs::sceIpuInit(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35DA70u) { return; }
    ctx->pc = 0x35DA70u;
label_35da70:
    // 0x35da70: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x35da70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x35da74: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x35da74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x35da78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35da78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35da7c: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x35da7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x35da80: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x35da80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x35da84: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x35da84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35da88: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x35da88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35da8c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35da8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35da90: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35da90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35da94: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x35da94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x35da98: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x35da98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x35da9c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x35da9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x35daa0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x35daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x35daa4: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x35daa4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35daa8: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x35daa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x35daac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35daacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35dab0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35dab0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35dab4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x35dab4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x35dab8: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x35dab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x35dabc: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x35dabcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x35dac0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35dac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35dac4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35dac4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35dac8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x35dac8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x35dacc: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x35daccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
    // 0x35dad0: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x35dad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x35dad4: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x35dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x35dad8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x35dad8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35dadc: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x35dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
    // 0x35dae0: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x35dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x35dae4: 0x24445e80  addiu       $a0, $v0, 0x5E80
    ctx->pc = 0x35dae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24192));
    // 0x35dae8: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x35dae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x35daec: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x35daecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x35daf0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x35daf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35daf4: 0xc0d7568  jal         func_35D5A0
    ctx->pc = 0x35DAF4u;
    SET_GPR_U32(ctx, 31, 0x35DAFCu);
    ctx->pc = 0x35D5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5A0u, 0x35DAF4u, 0x35DAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DAFCu;
label_35dafc:
    // 0x35dafc: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x35dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x35db00: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x35db00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x35db04: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x35DB04u;
    {
        const bool branch_taken_0x35db04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35db04) {
            ctx->pc = 0x35DB34u;
            return;
        }
    }
    ctx->pc = 0x35DB0Cu;
    // 0x35db0c: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x35db0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x35db10: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x35db10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35db14: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x35db14u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x35db18: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x35db18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x35db1c: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x35db1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35db20: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x35db20u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x35db24: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x35db24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x35db28: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x35db28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x35db2c: 0xc0d779c  jal         func_35DE70
    ctx->pc = 0x35DB2Cu;
    SET_GPR_U32(ctx, 31, 0x35DB34u);
    ctx->pc = 0x35DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DE70u, 0x35DB2Cu, 0x35DB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DB34u;
}
