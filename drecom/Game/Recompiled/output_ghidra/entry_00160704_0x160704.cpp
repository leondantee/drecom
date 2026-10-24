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

// Function: entry_00160704
// Address: 0x160704 - 0x1607c4
void entry_00160704_0x160704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160704_0x160704");
#endif

    switch (ctx->pc) {
        case 0x160718u: goto label_160718;
        case 0x160728u: goto label_160728;
        case 0x16074cu: goto label_16074c;
        case 0x160760u: goto label_160760;
        case 0x160770u: goto label_160770;
        case 0x160794u: goto label_160794;
        default: break;
    }

    ctx->pc = 0x160704u;

    // 0x160704: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x160704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160708: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x160708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x16070c: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x16070cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x160710: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x160710u;
    SET_GPR_U32(ctx, 31, 0x160718u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x160710u, 0x160718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160718u;
label_160718:
    // 0x160718: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x160718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16071c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x16071cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160720: 0xc040c24  jal         func_103090
    ctx->pc = 0x160720u;
    SET_GPR_U32(ctx, 31, 0x160728u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x160728u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x160728u) { return; }
    ctx->pc = 0x160728u;
label_160728:
    // 0x160728: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x160728u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16072c: 0x0  nop
    ctx->pc = 0x16072cu;
    // NOP
    // 0x160730: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x160730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x160734: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x160734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x160738: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x160738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16073c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16073cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160740: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x160740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160744: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x160744u;
    SET_GPR_U32(ctx, 31, 0x16074Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x16074Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16074Cu) { return; }
    ctx->pc = 0x16074Cu;
label_16074c:
    // 0x16074c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16074cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160750: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x160750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160754: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x160754u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x160758: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x160758u;
    SET_GPR_U32(ctx, 31, 0x160760u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x160758u, 0x160760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160760u;
label_160760:
    // 0x160760: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x160760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x160764: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x160764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x160768: 0xc067844  jal         func_19E110
    ctx->pc = 0x160768u;
    SET_GPR_U32(ctx, 31, 0x160770u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x160768u, 0x160770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160770u;
label_160770:
    // 0x160770: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x160770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160774: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x160774u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160778: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x160778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16077c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x16077cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x160780: 0x3c024375  lui         $v0, 0x4375
    ctx->pc = 0x160780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17269 << 16));
    // 0x160784: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x160784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160788: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x160788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16078c: 0xc057f10  jal         func_15FC40
    ctx->pc = 0x16078Cu;
    SET_GPR_U32(ctx, 31, 0x160794u);
    ctx->pc = 0x15FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC40u, 0x16078Cu, 0x160794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160794u;
label_160794:
    // 0x160794: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x160794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x160798: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x160798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x16079c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x16079cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x1607a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1607a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1607a4: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1607a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1607a8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1607a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1607ac: 0x0  nop
    ctx->pc = 0x1607acu;
    // NOP
    // 0x1607b0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1607B0u;
    {
        const bool branch_taken_0x1607b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1607b0) {
            ctx->pc = 0x1607C4u;
            return;
        }
    }
    ctx->pc = 0x1607B8u;
    // 0x1607b8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1607b8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1607bc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1607BCu;
    {
        const bool branch_taken_0x1607bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1607bc) {
            ctx->pc = 0x1608B0u;
            return;
        }
    }
    ctx->pc = 0x1607C4u;
}
