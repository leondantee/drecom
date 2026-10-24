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

// Function: entry_00304bec
// Address: 0x304bec - 0x304cd4
void entry_00304bec_0x304bec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00304bec_0x304bec");
#endif

    switch (ctx->pc) {
        case 0x304c4cu: goto label_304c4c;
        case 0x304cb4u: goto label_304cb4;
        default: break;
    }

    ctx->pc = 0x304becu;

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
            return;
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
            return;
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
            return;
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
}
