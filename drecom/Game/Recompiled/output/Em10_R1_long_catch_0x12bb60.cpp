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

// Function: Em10_R1_long_catch
// Address: 0x12bb60 - 0x12be94
void Em10_R1_long_catch_0x12bb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_long_catch_0x12bb60");
#endif

    switch (ctx->pc) {
        case 0x12bbc8u: goto label_12bbc8;
        case 0x12bc20u: goto label_12bc20;
        case 0x12bc50u: goto label_12bc50;
        case 0x12bc80u: goto label_12bc80;
        case 0x12bca0u: goto label_12bca0;
        case 0x12bcb8u: goto label_12bcb8;
        case 0x12bcf4u: goto label_12bcf4;
        case 0x12bd0cu: goto label_12bd0c;
        case 0x12bd24u: goto label_12bd24;
        case 0x12bd40u: goto label_12bd40;
        case 0x12bd50u: goto label_12bd50;
        case 0x12bd5cu: goto label_12bd5c;
        case 0x12bda4u: goto label_12bda4;
        case 0x12bdf0u: goto label_12bdf0;
        case 0x12be2cu: goto label_12be2c;
        case 0x12be44u: goto label_12be44;
        case 0x12be68u: goto label_12be68;
        case 0x12be78u: goto label_12be78;
        case 0x12be84u: goto label_12be84;
        default: break;
    }

    ctx->pc = 0x12bb60u;

    // 0x12bb60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12bb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12bb64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x12bb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x12bb68: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x12bb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x12bb6c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x12bb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bb70: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x12bb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x12bb74: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x12bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x12bb78: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x12bb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x12bb7c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x12bb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x12bb80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bb84: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x12bb84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12bb88: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12bb88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12bb8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12bb90: 0x1083009d  beq         $a0, $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x12BB90u;
    {
        const bool branch_taken_0x12bb90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12bb90) {
            ctx->pc = 0x12BE08u;
            goto label_12be08;
        }
    }
    ctx->pc = 0x12BB98u;
    // 0x12bb98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12bb9c: 0x10830079  beq         $a0, $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x12BB9Cu;
    {
        const bool branch_taken_0x12bb9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12bb9c) {
            ctx->pc = 0x12BD84u;
            goto label_12bd84;
        }
    }
    ctx->pc = 0x12BBA4u;
    // 0x12bba4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bba8: 0x10830049  beq         $a0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x12BBA8u;
    {
        const bool branch_taken_0x12bba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12bba8) {
            ctx->pc = 0x12BCD0u;
            goto label_12bcd0;
        }
    }
    ctx->pc = 0x12BBB0u;
    // 0x12bbb0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12BBB0u;
    {
        const bool branch_taken_0x12bbb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bbb0) {
            ctx->pc = 0x12BBC0u;
            goto label_12bbc0;
        }
    }
    ctx->pc = 0x12BBB8u;
    // 0x12bbb8: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x12BBB8u;
    {
        const bool branch_taken_0x12bbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bbb8) {
            ctx->pc = 0x12BE84u;
            goto label_12be84;
        }
    }
    ctx->pc = 0x12BBC0u;
label_12bbc0:
    // 0x12bbc0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x12BBC0u;
    SET_GPR_U32(ctx, 31, 0x12BBC8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12BBC0u, 0x12BBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BBC8u;
label_12bbc8:
    // 0x12bbc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12bbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12bbcc: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x12bbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x12bbd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12bbd4: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x12BBD4u;
    {
        const bool branch_taken_0x12bbd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12bbd4) {
            ctx->pc = 0x12BC58u;
            goto label_12bc58;
        }
    }
    ctx->pc = 0x12BBDCu;
    // 0x12bbdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bbe0: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12BBE0u;
    {
        const bool branch_taken_0x12bbe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12bbe0) {
            ctx->pc = 0x12BC28u;
            goto label_12bc28;
        }
    }
    ctx->pc = 0x12BBE8u;
    // 0x12bbe8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12BBE8u;
    {
        const bool branch_taken_0x12bbe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bbe8) {
            ctx->pc = 0x12BBF8u;
            goto label_12bbf8;
        }
    }
    ctx->pc = 0x12BBF0u;
    // 0x12bbf0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12BBF0u;
    {
        const bool branch_taken_0x12bbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bbf0) {
            ctx->pc = 0x12BBF8u;
            goto label_12bbf8;
        }
    }
    ctx->pc = 0x12BBF8u;
label_12bbf8:
    // 0x12bbf8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12bbfc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12bbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12bc00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12bc00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12bc04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bc08: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12bc0c: 0x24040504  addiu       $a0, $zero, 0x504
    ctx->pc = 0x12bc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x12bc10: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12bc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12bc14: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12bc14u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12bc18: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12BC18u;
    SET_GPR_U32(ctx, 31, 0x12BC20u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12BC18u, 0x12BC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BC20u;
label_12bc20:
    // 0x12bc20: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x12BC20u;
    {
        const bool branch_taken_0x12bc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bc20) {
            ctx->pc = 0x12BC80u;
            goto label_12bc80;
        }
    }
    ctx->pc = 0x12BC28u;
label_12bc28:
    // 0x12bc28: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12bc2c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12bc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12bc30: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12bc30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12bc34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bc38: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12bc3c: 0x24040505  addiu       $a0, $zero, 0x505
    ctx->pc = 0x12bc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
    // 0x12bc40: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12bc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12bc44: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12bc44u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12bc48: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12BC48u;
    SET_GPR_U32(ctx, 31, 0x12BC50u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12BC48u, 0x12BC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BC50u;
label_12bc50:
    // 0x12bc50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12BC50u;
    {
        const bool branch_taken_0x12bc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bc50) {
            ctx->pc = 0x12BC80u;
            goto label_12bc80;
        }
    }
    ctx->pc = 0x12BC58u;
label_12bc58:
    // 0x12bc58: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12bc5c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12bc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12bc60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12bc60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12bc64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bc68: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12bc6c: 0x24040506  addiu       $a0, $zero, 0x506
    ctx->pc = 0x12bc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1286));
    // 0x12bc70: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12bc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12bc74: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12bc74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12bc78: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12BC78u;
    SET_GPR_U32(ctx, 31, 0x12BC80u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12BC78u, 0x12BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BC80u;
label_12bc80:
    // 0x12bc80: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bc84: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12bc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bc88: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12bc88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12bc8c: 0x24063c0a  addiu       $a2, $zero, 0x3C0A
    ctx->pc = 0x12bc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15370));
    // 0x12bc90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12bc90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bc94: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12bc94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12bc98: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12BC98u;
    SET_GPR_U32(ctx, 31, 0x12BCA0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12BC98u, 0x12BCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCA0u;
label_12bca0:
    // 0x12bca0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bca4: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12bca8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x12bcac: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x12bcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x12bcb0: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x12BCB0u;
    SET_GPR_U32(ctx, 31, 0x12BCB8u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x12BCB0u, 0x12BCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCB8u;
label_12bcb8:
    // 0x12bcb8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bcbc: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x12bcbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x12bcc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bcc4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12bcc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12bcc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12bccc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12bcccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_12bcd0:
    // 0x12bcd0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bcd4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bcd8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x12bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x12bcdc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12bcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12bce0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x12bce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12bce4: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x12bce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12bce8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x12bce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12bcec: 0xc058f50  jal         func_163D40
    ctx->pc = 0x12BCECu;
    SET_GPR_U32(ctx, 31, 0x12BCF4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12BCECu, 0x12BCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCF4u;
label_12bcf4:
    // 0x12bcf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bcf8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12bcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x12bcfc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12bcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12bd00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12bd04: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12BD04u;
    SET_GPR_U32(ctx, 31, 0x12BD0Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12BD04u, 0x12BD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD0Cu;
label_12bd0c:
    // 0x12bd0c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd10: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12bd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12bd14: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x12bd18: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x12bd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x12bd1c: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x12BD1Cu;
    SET_GPR_U32(ctx, 31, 0x12BD24u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x12BD1Cu, 0x12BD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD24u;
label_12bd24:
    // 0x12bd24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd28: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x12bd28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x12bd2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd30: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12bd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd34: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x12bd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12bd38: 0xc05cd58  jal         func_173560
    ctx->pc = 0x12BD38u;
    SET_GPR_U32(ctx, 31, 0x12BD40u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12BD38u, 0x12BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD40u;
label_12bd40:
    // 0x12bd40: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12bd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd44: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12bd44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12bd48: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12BD48u;
    SET_GPR_U32(ctx, 31, 0x12BD50u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12BD48u, 0x12BD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD50u;
label_12bd50:
    // 0x12bd50: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12bd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd54: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12BD54u;
    SET_GPR_U32(ctx, 31, 0x12BD5Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12BD54u, 0x12BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD5Cu;
label_12bd5c:
    // 0x12bd5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd60: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12bd60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12bd64: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x12BD64u;
    {
        const bool branch_taken_0x12bd64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bd64) {
            ctx->pc = 0x12BE84u;
            goto label_12be84;
        }
    }
    ctx->pc = 0x12BD6Cu;
    // 0x12bd6c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12bd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd70: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x12bd70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x12bd74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12bd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12bd78: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12bd78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x12bd7c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x12BD7Cu;
    {
        const bool branch_taken_0x12bd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bd7c) {
            ctx->pc = 0x12BE84u;
            goto label_12be84;
        }
    }
    ctx->pc = 0x12BD84u;
label_12bd84:
    // 0x12bd84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd88: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd8c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12bd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12bd90: 0x24063c0b  addiu       $a2, $zero, 0x3C0B
    ctx->pc = 0x12bd90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15371));
    // 0x12bd94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12bd94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bd98: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12bd98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12bd9c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12BD9Cu;
    SET_GPR_U32(ctx, 31, 0x12BDA4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12BD9Cu, 0x12BDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BDA4u;
label_12bda4:
    // 0x12bda4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bda8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x12bda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12bdac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x12bdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x12bdb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12bdb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12bdb4: 0x0  nop
    ctx->pc = 0x12bdb4u;
    // NOP
    // 0x12bdb8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12bdb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12bdbc: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x12bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x12bdc0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x12bdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x12bdc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12bdc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12bdc8: 0x0  nop
    ctx->pc = 0x12bdc8u;
    // NOP
    // 0x12bdcc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12bdccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12bdd0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bdd4: 0xe4401298  swc1        $f0, 0x1298($v0)
    ctx->pc = 0x12bdd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4760), bits); }
    // 0x12bdd8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bddc: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12bddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12bde0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x12bde4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x12bde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x12bde8: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x12BDE8u;
    SET_GPR_U32(ctx, 31, 0x12BDF0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x12BDE8u, 0x12BDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BDF0u;
label_12bdf0:
    // 0x12bdf0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bdf4: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x12bdf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x12bdf8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bdfc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12bdfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12be00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12be00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12be04: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12be04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_12be08:
    // 0x12be08: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12be08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12be0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be10: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x12be10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x12be14: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12be14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12be18: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x12be18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12be1c: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x12be1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12be20: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x12be20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12be24: 0xc058f50  jal         func_163D40
    ctx->pc = 0x12BE24u;
    SET_GPR_U32(ctx, 31, 0x12BE2Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12BE24u, 0x12BE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE2Cu;
label_12be2c:
    // 0x12be2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be30: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12be30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x12be34: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12be34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12be38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12be3c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12BE3Cu;
    SET_GPR_U32(ctx, 31, 0x12BE44u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12BE3Cu, 0x12BE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE44u;
label_12be44:
    // 0x12be44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12be44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be48: 0xc4401298  lwc1        $f0, 0x1298($v0)
    ctx->pc = 0x12be48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12be4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be50: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x12be50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x12be54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12be54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be58: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12be58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be5c: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x12be5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12be60: 0xc05cd58  jal         func_173560
    ctx->pc = 0x12BE60u;
    SET_GPR_U32(ctx, 31, 0x12BE68u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12BE60u, 0x12BE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE68u;
label_12be68:
    // 0x12be68: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12be68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12be6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12be70: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12BE70u;
    SET_GPR_U32(ctx, 31, 0x12BE78u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12BE70u, 0x12BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE78u;
label_12be78:
    // 0x12be78: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12be78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be7c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12BE7Cu;
    SET_GPR_U32(ctx, 31, 0x12BE84u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12BE7Cu, 0x12BE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE84u;
label_12be84:
    // 0x12be84: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x12be84u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12be88: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12be88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12be8c: 0x3e00008  jr          $ra
    ctx->pc = 0x12BE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BE94u;
}
