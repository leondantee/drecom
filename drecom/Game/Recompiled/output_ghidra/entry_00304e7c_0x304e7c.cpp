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

// Function: entry_00304e7c
// Address: 0x304e7c - 0x304f64
void entry_00304e7c_0x304e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00304e7c_0x304e7c");
#endif

    switch (ctx->pc) {
        case 0x304edcu: goto label_304edc;
        case 0x304f44u: goto label_304f44;
        default: break;
    }

    ctx->pc = 0x304e7cu;

    // 0x304e7c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304e80: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x304e80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x304e84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x304e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x304e88: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x304e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x304e8c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x304E8Cu;
    {
        const bool branch_taken_0x304e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304e8c) {
            ctx->pc = 0x304F64u;
            return;
        }
    }
    ctx->pc = 0x304E94u;
    // 0x304e94: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304e98: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x304e98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x304e9c: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x304E9Cu;
    {
        const bool branch_taken_0x304e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x304e9c) {
            ctx->pc = 0x304F64u;
            return;
        }
    }
    ctx->pc = 0x304EA4u;
    // 0x304ea4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x304ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x304ea8: 0x24429590  addiu       $v0, $v0, -0x6A70
    ctx->pc = 0x304ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940048));
    // 0x304eac: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x304eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x304eb0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x304eb0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399590u));
    // 0x304eb4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x304eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x304eb8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304ebc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x304ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x304ec0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304ec4: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x304ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x304ec8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x304ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x304ecc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x304eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x304ed0: 0x24478c40  addiu       $a3, $v0, -0x73C0
    ctx->pc = 0x304ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937664));
    // 0x304ed4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x304ED4u;
    SET_GPR_U32(ctx, 31, 0x304EDCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x304ED4u, 0x304EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304EDCu;
label_304edc:
    // 0x304edc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x304edcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x304ee0: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x304EE0u;
    {
        const bool branch_taken_0x304ee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x304ee0) {
            ctx->pc = 0x304F64u;
            return;
        }
    }
    ctx->pc = 0x304EE8u;
    // 0x304ee8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x304ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304eec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304ef0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x304ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x304ef4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x304ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304ef8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304efc: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x304efcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x304f00: 0x24020509  addiu       $v0, $zero, 0x509
    ctx->pc = 0x304f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x304f04: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x304f04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x304f08: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304f0c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x304f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x304f10: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x304f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x304f14: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x304f14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x304f18: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x304f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x304f1c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x304f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x304f20: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x304f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x304f24: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x304f24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x304f28: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x304f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x304f2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x304f30: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x304f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x304f34: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x304f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x304f38: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x304f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x304f3c: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x304F3Cu;
    SET_GPR_U32(ctx, 31, 0x304F44u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x304F44u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x304F44u) { return; }
    ctx->pc = 0x304F44u;
label_304f44:
    // 0x304f44: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x304f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x304f48: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x304f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x304f4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x304f50: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x304f50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x304f54: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x304f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x304f58: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x304f58u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304f5c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x304F5Cu;
    SET_GPR_U32(ctx, 31, 0x304F64u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x304F5Cu, 0x304F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304F64u;
}
