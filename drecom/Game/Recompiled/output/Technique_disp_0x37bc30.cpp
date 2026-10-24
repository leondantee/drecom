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

// Function: Technique_disp
// Address: 0x37bc30 - 0x37c0c4
void Technique_disp_0x37bc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Technique_disp_0x37bc30");
#endif

    switch (ctx->pc) {
        case 0x37bd1cu: goto label_37bd1c;
        case 0x37bdc4u: goto label_37bdc4;
        case 0x37bdfcu: goto label_37bdfc;
        case 0x37be48u: goto label_37be48;
        case 0x37bfe4u: goto label_37bfe4;
        case 0x37c010u: goto label_37c010;
        case 0x37c040u: goto label_37c040;
        case 0x37c068u: goto label_37c068;
        default: break;
    }

    ctx->pc = 0x37bc30u;

    // 0x37bc30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x37bc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x37bc34: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x37bc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x37bc38: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x37bc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x37bc3c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x37bc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x37bc40: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x37bc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x37bc44: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x37bc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x37bc48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37bc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x37bc4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37bc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x37bc50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37bc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37bc54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37bc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37bc58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37bc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37bc5c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x37bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x37bc60: 0x24716150  addiu       $s1, $v1, 0x6150
    ctx->pc = 0x37bc60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
    // 0x37bc64: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x37bc64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x37bc68: 0x24720cf0  addiu       $s2, $v1, 0xCF0
    ctx->pc = 0x37bc68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
    // 0x37bc6c: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x37bc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x37bc70: 0x24700d20  addiu       $s0, $v1, 0xD20
    ctx->pc = 0x37bc70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3360));
    // 0x37bc74: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x37bc74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x37bc78: 0x8c240128  lw          $a0, 0x128($at)
    ctx->pc = 0x37bc78u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0128u));
    // 0x37bc7c: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x37bc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x37bc80: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x37bc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x37bc84: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x37BC84u;
    {
        const bool branch_taken_0x37bc84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bc84) {
            ctx->pc = 0x37BD60u;
            goto label_37bd60;
        }
    }
    ctx->pc = 0x37BC8Cu;
    // 0x37bc8c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37bc90: 0x8c230588  lw          $v1, 0x588($at)
    ctx->pc = 0x37bc90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0588u));
    // 0x37bc94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37bc98: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bc98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37bc9c: 0xac230588  sw          $v1, 0x588($at)
    ctx->pc = 0x37bc9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A0588u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0588u, _value); } while (0);
    // 0x37bca0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37bca4: 0x8c250588  lw          $a1, 0x588($at)
    ctx->pc = 0x37bca4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x9A0588u));
    // 0x37bca8: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37bcac: 0x8c230580  lw          $v1, 0x580($at)
    ctx->pc = 0x37bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0580u));
    // 0x37bcb0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x37bcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37bcb4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x37bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x37bcb8: 0x2463b858  addiu       $v1, $v1, -0x47A8
    ctx->pc = 0x37bcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948952));
    // 0x37bcbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37bcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37bcc0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x37bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37bcc4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37bcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x37bcc8: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x37bcc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x37bccc: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x37BCCCu;
    {
        const bool branch_taken_0x37bccc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bccc) {
            ctx->pc = 0x37BD04u;
            goto label_37bd04;
        }
    }
    ctx->pc = 0x37BCD4u;
    // 0x37bcd4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bcd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37bcd8: 0x8c230580  lw          $v1, 0x580($at)
    ctx->pc = 0x37bcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0580u));
    // 0x37bcdc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x37bcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37bce0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x37bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x37bce4: 0x2463b858  addiu       $v1, $v1, -0x47A8
    ctx->pc = 0x37bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948952));
    // 0x37bce8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37bce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37bcec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x37bcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37bcf0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x37bcf4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bcf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37bcf8: 0xac230588  sw          $v1, 0x588($at)
    ctx->pc = 0x37bcf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A0588u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0588u, _value); } while (0);
    // 0x37bcfc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x37BCFCu;
    {
        const bool branch_taken_0x37bcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bcfc) {
            ctx->pc = 0x37BD60u;
            goto label_37bd60;
        }
    }
    ctx->pc = 0x37BD04u;
label_37bd04:
    // 0x37bd04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x37bd04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37bd08: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x37bd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x37bd0c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37bd0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37bd10: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x37bd10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37bd14: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x37BD14u;
    SET_GPR_U32(ctx, 31, 0x37BD1Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x37BD14u, 0x37BD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BD1Cu;
label_37bd1c:
    // 0x37bd1c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bd1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37bd20: 0x8c2305a0  lw          $v1, 0x5A0($at)
    ctx->pc = 0x37bd20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A05A0u));
    // 0x37bd24: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x37bd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x37bd28: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x37BD28u;
    {
        const bool branch_taken_0x37bd28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bd28) {
            ctx->pc = 0x37BD58u;
            goto label_37bd58;
        }
    }
    ctx->pc = 0x37BD30u;
    // 0x37bd30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37bd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37bd34: 0xae235dcc  sw          $v1, 0x5DCC($s1)
    ctx->pc = 0x37bd34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24012), GPR_U32(ctx, 3));
    // 0x37bd38: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bd38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37bd3c: 0x8c2405a0  lw          $a0, 0x5A0($at)
    ctx->pc = 0x37bd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x9A05A0u));
    // 0x37bd40: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x37bd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x37bd44: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x37bd44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x37bd48: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bd48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37bd4c: 0xac2305a0  sw          $v1, 0x5A0($at)
    ctx->pc = 0x37bd4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A05A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A05A0u, _value); } while (0);
    // 0x37bd50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37BD50u;
    {
        const bool branch_taken_0x37bd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bd50) {
            ctx->pc = 0x37BD60u;
            goto label_37bd60;
        }
    }
    ctx->pc = 0x37BD58u;
label_37bd58:
    // 0x37bd58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37bd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37bd5c: 0xae235dcc  sw          $v1, 0x5DCC($s1)
    ctx->pc = 0x37bd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24012), GPR_U32(ctx, 3));
label_37bd60:
    // 0x37bd60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x37bd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x37bd64: 0x8c240128  lw          $a0, 0x128($at)
    ctx->pc = 0x37bd64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0128u));
    // 0x37bd68: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x37bd68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x37bd6c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x37bd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x37bd70: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x37BD70u;
    {
        const bool branch_taken_0x37bd70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bd70) {
            ctx->pc = 0x37BDCCu;
            goto label_37bdcc;
        }
    }
    ctx->pc = 0x37BD78u;
    // 0x37bd78: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37bd7c: 0x8c230588  lw          $v1, 0x588($at)
    ctx->pc = 0x37bd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0588u));
    // 0x37bd80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x37bd84: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37bd88: 0xac230588  sw          $v1, 0x588($at)
    ctx->pc = 0x37bd88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A0588u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0588u, _value); } while (0);
    // 0x37bd8c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bd8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37bd90: 0x8c230588  lw          $v1, 0x588($at)
    ctx->pc = 0x37bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0588u));
    // 0x37bd94: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x37BD94u;
    {
        const bool branch_taken_0x37bd94 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x37bd94) {
            ctx->pc = 0x37BDACu;
            goto label_37bdac;
        }
    }
    ctx->pc = 0x37BD9Cu;
    // 0x37bd9c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37bda0: 0xac200588  sw          $zero, 0x588($at)
    ctx->pc = 0x37bda0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0588u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0588u, _value); } while (0);
    // 0x37bda4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x37BDA4u;
    {
        const bool branch_taken_0x37bda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bda4) {
            ctx->pc = 0x37BDCCu;
            goto label_37bdcc;
        }
    }
    ctx->pc = 0x37BDACu;
label_37bdac:
    // 0x37bdac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x37bdacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37bdb0: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x37bdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x37bdb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37bdb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37bdb8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x37bdb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37bdbc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x37BDBCu;
    SET_GPR_U32(ctx, 31, 0x37BDC4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x37BDBCu, 0x37BDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BDC4u;
label_37bdc4:
    // 0x37bdc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37bdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37bdc8: 0xae235dcc  sw          $v1, 0x5DCC($s1)
    ctx->pc = 0x37bdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24012), GPR_U32(ctx, 3));
label_37bdcc:
    // 0x37bdcc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x37bdccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x37bdd0: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x37bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x37bdd4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x37bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x37bdd8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x37bdd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x37bddc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x37BDDCu;
    {
        const bool branch_taken_0x37bddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bddc) {
            ctx->pc = 0x37BE18u;
            goto label_37be18;
        }
    }
    ctx->pc = 0x37BDE4u;
    // 0x37bde4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x37bde4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37bde8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x37bde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x37bdec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37bdecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37bdf0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x37bdf0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37bdf4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x37BDF4u;
    SET_GPR_U32(ctx, 31, 0x37BDFCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x37BDF4u, 0x37BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BDFCu;
label_37bdfc:
    // 0x37bdfc: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bdfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37be00: 0x8c2305a0  lw          $v1, 0x5A0($at)
    ctx->pc = 0x37be00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A05A0u));
    // 0x37be04: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x37be04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x37be08: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37be08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37be0c: 0xac2305a0  sw          $v1, 0x5A0($at)
    ctx->pc = 0x37be0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A05A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A05A0u, _value); } while (0);
    // 0x37be10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37be10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37be14: 0xae235dcc  sw          $v1, 0x5DCC($s1)
    ctx->pc = 0x37be14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24012), GPR_U32(ctx, 3));
label_37be18:
    // 0x37be18: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37be18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37be1c: 0x8c2305a0  lw          $v1, 0x5A0($at)
    ctx->pc = 0x37be1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A05A0u));
    // 0x37be20: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x37be20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x37be24: 0x14600091  bnez        $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x37BE24u;
    {
        const bool branch_taken_0x37be24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37be24) {
            ctx->pc = 0x37C06Cu;
            goto label_37c06c;
        }
    }
    ctx->pc = 0x37BE2Cu;
    // 0x37be2c: 0x8e225dd0  lw          $v0, 0x5DD0($s1)
    ctx->pc = 0x37be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24016)));
    // 0x37be30: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x37BE30u;
    {
        const bool branch_taken_0x37be30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37be30) {
            ctx->pc = 0x37BFD4u;
            goto label_37bfd4;
        }
    }
    ctx->pc = 0x37BE38u;
    // 0x37be38: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x37be38u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37be3c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x37be3cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37be40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x37BE40u;
    {
        const bool branch_taken_0x37be40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37be40) {
            ctx->pc = 0x37BE68u;
            goto label_37be68;
        }
    }
    ctx->pc = 0x37BE48u;
label_37be48:
    // 0x37be48: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x37be48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x37be4c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37be50: 0x2442b858  addiu       $v0, $v0, -0x47A8
    ctx->pc = 0x37be50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948952));
    // 0x37be54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37be54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37be58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37be58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37be5c: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x37be5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x37be60: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x37be60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x37be64: 0x0  nop
    ctx->pc = 0x37be64u;
    // NOP
label_37be68:
    // 0x37be68: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37be68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37be6c: 0x8c220590  lw          $v0, 0x590($at)
    ctx->pc = 0x37be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0590u));
    // 0x37be70: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x37be70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37be74: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x37BE74u;
    {
        const bool branch_taken_0x37be74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37be74) {
            ctx->pc = 0x37BE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37be48;
        }
    }
    ctx->pc = 0x37BE7Cu;
    // 0x37be7c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37be7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37be80: 0x8c220598  lw          $v0, 0x598($at)
    ctx->pc = 0x37be80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0598u));
    // 0x37be84: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x37be84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x37be88: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x37be88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x37be8c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x37be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x37be90: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x37be90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37be94: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37be94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37be98: 0x2442b930  addiu       $v0, $v0, -0x46D0
    ctx->pc = 0x37be98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949168));
    // 0x37be9c: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x37be9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37bea0: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x37bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x37bea4: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x37bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x37bea8: 0x62b023  subu        $s6, $v1, $v0
    ctx->pc = 0x37bea8u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37beac: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x37beacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x37beb0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x37beb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x37beb4: 0x62b823  subu        $s7, $v1, $v0
    ctx->pc = 0x37beb4u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37beb8: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x37beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x37bebc: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x37bebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x37bec0: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x37bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x37bec4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x37bec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x37bec8: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x37bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x37becc: 0x56f023  subu        $fp, $v0, $s6
    ctx->pc = 0x37beccu;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x37bed0: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x37bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x37bed4: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x37bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x37bed8: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x37bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x37bedc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37bee0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x37bee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x37bee4: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x37bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x37bee8: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x37bee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x37beec: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x37beecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x37bef0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x37bef0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x37bef4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x37bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x37bef8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x37bef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x37befc: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x37befcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x37bf00: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x37bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x37bf04: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x37bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x37bf08: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x37bf08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37bf0c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x37bf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37bf10: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x37bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37bf14: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x37bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x37bf18: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37bf1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37bf1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37bf20: 0x26420018  addiu       $v0, $s2, 0x18
    ctx->pc = 0x37bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x37bf24: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37bf24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37bf28: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x37bf28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x37bf2c: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x37bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x37bf30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37bf30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37bf34: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x37bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x37bf38: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37bf3c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x37bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x37bf40: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x37bf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37bf44: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x37bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x37bf48: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x37bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37bf4c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x37bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x37bf50: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37bf54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37bf54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37bf58: 0x26420024  addiu       $v0, $s2, 0x24
    ctx->pc = 0x37bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x37bf5c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37bf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37bf60: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x37bf60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x37bf64: 0x26420028  addiu       $v0, $s2, 0x28
    ctx->pc = 0x37bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x37bf68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37bf68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37bf6c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x37bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x37bf70: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x37bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37bf74: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x37bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x37bf78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37bf7c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37bf80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37bf80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37bf84: 0x26420014  addiu       $v0, $s2, 0x14
    ctx->pc = 0x37bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x37bf88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37bf88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37bf8c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x37bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x37bf90: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x37bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37bf94: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x37bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x37bf98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37bf9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37bfa0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37bfa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37bfa4: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x37bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x37bfa8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37bfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37bfac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x37bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x37bfb0: 0x2442e7a8  addiu       $v0, $v0, -0x1858
    ctx->pc = 0x37bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961064));
    // 0x37bfb4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x37bfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x37bfb8: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x37bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x37bfbc: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x37bfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x37bfc0: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x37bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37bfc4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37bfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37bfc8: 0x8e225dd0  lw          $v0, 0x5DD0($s1)
    ctx->pc = 0x37bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24016)));
    // 0x37bfcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37bfd0: 0xae225dd0  sw          $v0, 0x5DD0($s1)
    ctx->pc = 0x37bfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24016), GPR_U32(ctx, 2));
label_37bfd4:
    // 0x37bfd4: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37bfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37bfd8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37bfd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37bfdc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37BFDCu;
    SET_GPR_U32(ctx, 31, 0x37BFE4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37BFDCu, 0x37BFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BFE4u;
label_37bfe4:
    // 0x37bfe4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37bfe8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37bfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x37bfec: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37bff0: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x37bff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x37bff4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x37bff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x37bff8: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x37bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x37bffc: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x37bffcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x37c000: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37c000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37c004: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x37c004u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37c008: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37C008u;
    SET_GPR_U32(ctx, 31, 0x37C010u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37C008u, 0x37C010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C010u;
label_37c010:
    // 0x37c010: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x37c010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37c014: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37c014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37c018: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37c018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x37c01c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37c020: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x37c020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x37c024: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x37c024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x37c028: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x37c028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x37c02c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x37c02cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x37c030: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37c030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37c034: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x37c034u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37c038: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37C038u;
    SET_GPR_U32(ctx, 31, 0x37C040u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37C038u, 0x37C040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C040u;
label_37c040:
    // 0x37c040: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x37c040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37c044: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37c044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37c048: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37c048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x37c04c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37c050: 0x3442103f  ori         $v0, $v0, 0x103F
    ctx->pc = 0x37c050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x37c054: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x37c054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x37c058: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x37c058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x37c05c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x37c05cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37c060: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37C060u;
    SET_GPR_U32(ctx, 31, 0x37C068u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37C060u, 0x37C068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C068u;
label_37c068:
    // 0x37c068: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x37c068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_37c06c:
    // 0x37c06c: 0x8e245dcc  lw          $a0, 0x5DCC($s1)
    ctx->pc = 0x37c06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24012)));
    // 0x37c070: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37c070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c074: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x37C074u;
    {
        const bool branch_taken_0x37c074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37c074) {
            ctx->pc = 0x37C08Cu;
            goto label_37c08c;
        }
    }
    ctx->pc = 0x37C07Cu;
    // 0x37c07c: 0x8e245dcc  lw          $a0, 0x5DCC($s1)
    ctx->pc = 0x37c07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24012)));
    // 0x37c080: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37c080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37c084: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x37C084u;
    {
        const bool branch_taken_0x37c084 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x37c084) {
            ctx->pc = 0x37C090u;
            goto label_37c090;
        }
    }
    ctx->pc = 0x37C08Cu;
label_37c08c:
    // 0x37c08c: 0xae205dd0  sw          $zero, 0x5DD0($s1)
    ctx->pc = 0x37c08cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24016), GPR_U32(ctx, 0));
label_37c090:
    // 0x37c090: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x37c090u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x37c094: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x37c094u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37c098: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x37c098u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37c09c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x37c09cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37c0a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x37c0a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37c0a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37c0a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37c0a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37c0a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37c0ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37c0acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37c0b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37c0b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c0b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37c0b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c0b8: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x37c0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x37c0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x37C0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C0C4u;
}
