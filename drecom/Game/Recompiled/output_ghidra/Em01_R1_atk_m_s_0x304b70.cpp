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

// Function: Em01_R1_atk_m_s
// Address: 0x304b70 - 0x304de8
void Em01_R1_atk_m_s_0x304b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_atk_m_s_0x304b70");
#endif

    switch (ctx->pc) {
        case 0x304bccu: goto label_304bcc;
        case 0x304c4cu: goto label_304c4c;
        case 0x304cb4u: goto label_304cb4;
        case 0x304cd4u: goto label_304cd4;
        case 0x304d50u: goto label_304d50;
        case 0x304d68u: goto label_304d68;
        case 0x304d74u: goto label_304d74;
        case 0x304d84u: goto label_304d84;
        case 0x304d90u: goto label_304d90;
        default: break;
    }

    ctx->pc = 0x304b70u;

    // 0x304b70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x304b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x304b74: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x304b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x304b78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x304b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x304b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x304b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x304b80: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x304b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x304b84: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304b88: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x304b88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x304b8c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x304b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x304b90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x304b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304b94: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x304B94u;
    {
        const bool branch_taken_0x304b94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x304b94) {
            ctx->pc = 0x304BECu;
            goto label_304bec;
        }
    }
    ctx->pc = 0x304B9Cu;
    // 0x304b9c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x304B9Cu;
    {
        const bool branch_taken_0x304b9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x304b9c) {
            ctx->pc = 0x304BACu;
            goto label_304bac;
        }
    }
    ctx->pc = 0x304BA4u;
    // 0x304ba4: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x304BA4u;
    {
        const bool branch_taken_0x304ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304ba4) {
            ctx->pc = 0x304DD0u;
            goto label_304dd0;
        }
    }
    ctx->pc = 0x304BACu;
label_304bac:
    // 0x304bac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304bb0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304bb4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x304bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x304bb8: 0x2406320f  addiu       $a2, $zero, 0x320F
    ctx->pc = 0x304bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12815));
    // 0x304bbc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x304bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304bc0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x304bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x304bc4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x304BC4u;
    SET_GPR_U32(ctx, 31, 0x304BCCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x304BC4u, 0x304BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304BCCu;
label_304bcc:
    // 0x304bcc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304bd0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x304bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x304bd4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304bd8: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x304bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x304bdc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304be0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x304be0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x304be4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x304be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x304be8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x304be8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_304bec:
    // 0x304bec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304bf0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x304bf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x304bf4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x304bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x304bf8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x304bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x304bfc: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x304BFCu;
    {
        const bool branch_taken_0x304bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304bfc) {
            ctx->pc = 0x304CD4u;
            goto label_304cd4;
        }
    }
    ctx->pc = 0x304C04u;
    // 0x304c04: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304c08: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x304c08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x304c0c: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x304C0Cu;
    {
        const bool branch_taken_0x304c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x304c0c) {
            ctx->pc = 0x304CD4u;
            goto label_304cd4;
        }
    }
    ctx->pc = 0x304C14u;
    // 0x304c14: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x304c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x304c18: 0x24429560  addiu       $v0, $v0, -0x6AA0
    ctx->pc = 0x304c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940000));
    // 0x304c1c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x304c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x304c20: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x304c20u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399560u));
    // 0x304c24: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x304c24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x304c28: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304c2c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x304c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x304c30: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304c34: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x304c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x304c38: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x304c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x304c3c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x304c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x304c40: 0x24478c40  addiu       $a3, $v0, -0x73C0
    ctx->pc = 0x304c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937664));
    // 0x304c44: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x304C44u;
    SET_GPR_U32(ctx, 31, 0x304C4Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x304C44u, 0x304C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304C4Cu;
label_304c4c:
    // 0x304c4c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x304c4cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x304c50: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x304C50u;
    {
        const bool branch_taken_0x304c50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x304c50) {
            ctx->pc = 0x304CD4u;
            goto label_304cd4;
        }
    }
    ctx->pc = 0x304C58u;
    // 0x304c58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x304c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304c5c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304c60: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x304c60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x304c64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x304c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304c68: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304c6c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x304c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x304c70: 0x24020509  addiu       $v0, $zero, 0x509
    ctx->pc = 0x304c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x304c74: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x304c74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x304c78: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304c7c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x304c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x304c80: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x304c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x304c84: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x304c84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x304c88: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x304c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x304c8c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x304c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x304c90: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x304c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x304c94: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x304c94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x304c98: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x304c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x304c9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x304ca0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x304ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x304ca4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x304ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x304ca8: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x304ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x304cac: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x304CACu;
    SET_GPR_U32(ctx, 31, 0x304CB4u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x304CB4u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x304CB4u) { return; }
    ctx->pc = 0x304CB4u;
label_304cb4:
    // 0x304cb4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x304cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x304cb8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x304cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x304cbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x304cc0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x304cc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x304cc4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x304cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x304cc8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x304cc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304ccc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x304CCCu;
    SET_GPR_U32(ctx, 31, 0x304CD4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x304CCCu, 0x304CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304CD4u;
label_304cd4:
    // 0x304cd4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304cd8: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x304cd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x304cdc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x304CDCu;
    {
        const bool branch_taken_0x304cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304cdc) {
            ctx->pc = 0x304D58u;
            goto label_304d58;
        }
    }
    ctx->pc = 0x304CE4u;
    // 0x304ce4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x304ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x304ce8: 0x24429570  addiu       $v0, $v0, -0x6A90
    ctx->pc = 0x304ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940016));
    // 0x304cec: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x304cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x304cf0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x304cf0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399570u));
    // 0x304cf4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x304cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x304cf8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x304cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x304cfc: 0x24429580  addiu       $v0, $v0, -0x6A80
    ctx->pc = 0x304cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940032));
    // 0x304d00: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x304d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x304d04: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x304d04u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399580u));
    // 0x304d08: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x304d08u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x304d0c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304d10: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x304d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x304d14: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x304d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x304d18: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x304d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x304d1c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x304d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x304d20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x304d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x304d24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x304d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x304d28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x304d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x304d2c: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x304d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x304d30: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304d34: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x304d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x304d38: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x304d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x304d3c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x304d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x304d40: 0x24470300  addiu       $a3, $v0, 0x300
    ctx->pc = 0x304d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x304d44: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x304d44u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304d48: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x304D48u;
    SET_GPR_U32(ctx, 31, 0x304D50u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x304D48u, 0x304D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304D50u;
label_304d50:
    // 0x304d50: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304d54: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x304d54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_304d58:
    // 0x304d58: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304d5c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x304d5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304d60: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x304D60u;
    SET_GPR_U32(ctx, 31, 0x304D68u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x304D60u, 0x304D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304D68u;
label_304d68:
    // 0x304d68: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304d6c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x304D6Cu;
    SET_GPR_U32(ctx, 31, 0x304D74u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x304D6Cu, 0x304D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304D74u;
label_304d74:
    // 0x304d74: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304d78: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x304d78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304d7c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x304D7Cu;
    SET_GPR_U32(ctx, 31, 0x304D84u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x304D7Cu, 0x304D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304D84u;
label_304d84:
    // 0x304d84: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304d88: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x304D88u;
    SET_GPR_U32(ctx, 31, 0x304D90u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x304D88u, 0x304D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304D90u;
label_304d90:
    // 0x304d90: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304d94: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x304d94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x304d98: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x304D98u;
    {
        const bool branch_taken_0x304d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304d98) {
            ctx->pc = 0x304DD0u;
            goto label_304dd0;
        }
    }
    ctx->pc = 0x304DA0u;
    // 0x304da0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x304da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304da4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304da8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x304da8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x304dac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x304dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304db0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304db4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x304db4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x304db8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304dbc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x304dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x304dc0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304dc4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x304dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x304dc8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304dcc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x304dccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_304dd0:
    // 0x304dd0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x304dd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x304dd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x304dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304dd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x304dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304ddc: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x304ddcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x304de0: 0x3e00008  jr          $ra
    ctx->pc = 0x304DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304DE8u;
}
