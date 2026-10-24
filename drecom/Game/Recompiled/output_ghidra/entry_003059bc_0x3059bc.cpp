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

// Function: entry_003059bc
// Address: 0x3059bc - 0x305aa4
void entry_003059bc_0x3059bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003059bc_0x3059bc");
#endif

    switch (ctx->pc) {
        case 0x305a1cu: goto label_305a1c;
        case 0x305a84u: goto label_305a84;
        default: break;
    }

    ctx->pc = 0x3059bcu;

    // 0x3059bc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3059bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3059c0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x3059c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x3059c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3059c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3059c8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3059c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3059cc: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3059CCu;
    {
        const bool branch_taken_0x3059cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3059cc) {
            ctx->pc = 0x305AA4u;
            return;
        }
    }
    ctx->pc = 0x3059D4u;
    // 0x3059d4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3059d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3059d8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x3059d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x3059dc: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3059DCu;
    {
        const bool branch_taken_0x3059dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3059dc) {
            ctx->pc = 0x305AA4u;
            return;
        }
    }
    ctx->pc = 0x3059E4u;
    // 0x3059e4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3059e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3059e8: 0x24429650  addiu       $v0, $v0, -0x69B0
    ctx->pc = 0x3059e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940240));
    // 0x3059ec: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3059ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3059f0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3059f0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399650u));
    // 0x3059f4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3059f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3059f8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3059f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3059fc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3059fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x305a00: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305a04: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x305a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x305a08: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x305a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x305a0c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x305a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x305a10: 0x24478c40  addiu       $a3, $v0, -0x73C0
    ctx->pc = 0x305a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937664));
    // 0x305a14: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x305A14u;
    SET_GPR_U32(ctx, 31, 0x305A1Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x305A14u, 0x305A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A1Cu;
label_305a1c:
    // 0x305a1c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x305a1cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x305a20: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x305A20u;
    {
        const bool branch_taken_0x305a20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x305a20) {
            ctx->pc = 0x305AA4u;
            return;
        }
    }
    ctx->pc = 0x305A28u;
    // 0x305a28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305a2c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305a30: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x305a30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x305a34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305a38: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305a3c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x305a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x305a40: 0x2402050d  addiu       $v0, $zero, 0x50D
    ctx->pc = 0x305a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1293));
    // 0x305a44: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x305a44u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x305a48: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305a4c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x305a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x305a50: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x305a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x305a54: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x305a54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305a58: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x305a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305a5c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x305a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x305a60: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x305a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x305a64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305a68: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x305a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x305a6c: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x305a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x305a70: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x305a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305a74: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x305a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305a78: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x305a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x305a7c: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x305A7Cu;
    SET_GPR_U32(ctx, 31, 0x305A84u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x305A84u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x305A84u) { return; }
    ctx->pc = 0x305A84u;
label_305a84:
    // 0x305a84: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x305a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x305a88: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x305a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x305a8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305a90: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x305a90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x305a94: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x305a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305a98: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x305a98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305a9c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x305A9Cu;
    SET_GPR_U32(ctx, 31, 0x305AA4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x305A9Cu, 0x305AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305AA4u;
}
