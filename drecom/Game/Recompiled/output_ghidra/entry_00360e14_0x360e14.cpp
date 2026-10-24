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

// Function: entry_00360e14
// Address: 0x360e14 - 0x360ee0
void entry_00360e14_0x360e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00360e14_0x360e14");
#endif

    switch (ctx->pc) {
        case 0x360e5cu: goto label_360e5c;
        case 0x360ed4u: goto label_360ed4;
        default: break;
    }

    ctx->pc = 0x360e14u;

    // 0x360e14: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x360e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360e18: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x360e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x360e1c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x360e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x360e20: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x360e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x360e24: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x360e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x360e28: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x360e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x360e2c: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x360e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x360e30: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x360e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x360e34: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x360e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x360e38: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x360e38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360e3c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x360e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x360e40: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x360e40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x360e44: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x360e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360e48: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x360e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x360e4c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x360e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x360e50: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x360e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x360e54: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x360E54u;
    SET_GPR_U32(ctx, 31, 0x360E5Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x360E5Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x360E5Cu) { return; }
    ctx->pc = 0x360E5Cu;
label_360e5c:
    // 0x360e5c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x360e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360e60: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x360e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360e64: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x360e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360e68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x360e68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x360e6c: 0x0  nop
    ctx->pc = 0x360e6cu;
    // NOP
    // 0x360e70: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x360E70u;
    {
        const bool branch_taken_0x360e70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x360e70) {
            ctx->pc = 0x360EE0u;
            return;
        }
    }
    ctx->pc = 0x360E78u;
    // 0x360e78: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x360e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360e7c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x360e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x360e80: 0x2021806  srlv        $v1, $v0, $s0
    ctx->pc = 0x360e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x360e84: 0x8c82128c  lw          $v0, 0x128C($a0)
    ctx->pc = 0x360e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x360e88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x360e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x360e8c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x360E8Cu;
    {
        const bool branch_taken_0x360e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x360e8c) {
            ctx->pc = 0x360EE0u;
            return;
        }
    }
    ctx->pc = 0x360E94u;
    // 0x360e94: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x360e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360e98: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x360e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x360e9c: 0x2021806  srlv        $v1, $v0, $s0
    ctx->pc = 0x360e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x360ea0: 0x8c82128c  lw          $v0, 0x128C($a0)
    ctx->pc = 0x360ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x360ea4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x360ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x360ea8: 0xac82128c  sw          $v0, 0x128C($a0)
    ctx->pc = 0x360ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4748), GPR_U32(ctx, 2));
    // 0x360eac: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x360eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x360eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x360eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360eb4: 0x0  nop
    ctx->pc = 0x360eb4u;
    // NOP
    // 0x360eb8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x360eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x360ebc: 0x2404042a  addiu       $a0, $zero, 0x42A
    ctx->pc = 0x360ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1066));
    // 0x360ec0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x360ec0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360ec4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x360ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x360ec8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x360ec8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360ecc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x360ECCu;
    SET_GPR_U32(ctx, 31, 0x360ED4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x360ECCu, 0x360ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360ED4u;
label_360ed4:
    // 0x360ed4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x360ed4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x360ed8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x360ED8u;
    SET_GPR_U32(ctx, 31, 0x360EE0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x360ED8u, 0x360EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360EE0u;
}
