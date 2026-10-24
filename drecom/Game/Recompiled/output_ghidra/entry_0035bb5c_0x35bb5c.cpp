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

// Function: entry_0035bb5c
// Address: 0x35bb5c - 0x35bc18
void entry_0035bb5c_0x35bb5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035bb5c_0x35bb5c");
#endif

    switch (ctx->pc) {
        case 0x35bba4u: goto label_35bba4;
        case 0x35bc0cu: goto label_35bc0c;
        default: break;
    }

    ctx->pc = 0x35bb5cu;

    // 0x35bb5c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35bb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bb60: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x35bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35bb64: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x35bb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35bb68: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x35bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35bb6c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35bb70: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x35bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35bb74: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x35bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x35bb78: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x35bb78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35bb7c: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x35bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x35bb80: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x35bb80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35bb84: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x35bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35bb88: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x35bb88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x35bb8c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bb90: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x35bb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35bb94: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x35bb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35bb98: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x35bb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x35bb9c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x35BB9Cu;
    SET_GPR_U32(ctx, 31, 0x35BBA4u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x35BBA4u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35BBA4u) { return; }
    ctx->pc = 0x35BBA4u;
label_35bba4:
    // 0x35bba4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bba8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x35bba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35bbac: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x35bbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35bbb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35bbb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35bbb4: 0x0  nop
    ctx->pc = 0x35bbb4u;
    // NOP
    // 0x35bbb8: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x35BBB8u;
    {
        const bool branch_taken_0x35bbb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35bbb8) {
            ctx->pc = 0x35BC18u;
            return;
        }
    }
    ctx->pc = 0x35BBC0u;
    // 0x35bbc0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35bbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bbc4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35bbc8: 0x2021806  srlv        $v1, $v0, $s0
    ctx->pc = 0x35bbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x35bbcc: 0x8c82128c  lw          $v0, 0x128C($a0)
    ctx->pc = 0x35bbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x35bbd0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x35bbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x35bbd4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x35BBD4u;
    {
        const bool branch_taken_0x35bbd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35bbd4) {
            ctx->pc = 0x35BC18u;
            return;
        }
    }
    ctx->pc = 0x35BBDCu;
    // 0x35bbdc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35bbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bbe0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35bbe4: 0x2021806  srlv        $v1, $v0, $s0
    ctx->pc = 0x35bbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x35bbe8: 0x8c82128c  lw          $v0, 0x128C($a0)
    ctx->pc = 0x35bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x35bbec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x35bbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x35bbf0: 0xac82128c  sw          $v0, 0x128C($a0)
    ctx->pc = 0x35bbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4748), GPR_U32(ctx, 2));
    // 0x35bbf4: 0x2404042a  addiu       $a0, $zero, 0x42A
    ctx->pc = 0x35bbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1066));
    // 0x35bbf8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35bbf8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35bbfc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x35bbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35bc00: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x35bc00u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35bc04: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35BC04u;
    SET_GPR_U32(ctx, 31, 0x35BC0Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35BC04u, 0x35BC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BC0Cu;
label_35bc0c:
    // 0x35bc0c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35bc0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35bc10: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35BC10u;
    SET_GPR_U32(ctx, 31, 0x35BC18u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35BC10u, 0x35BC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BC18u;
}
