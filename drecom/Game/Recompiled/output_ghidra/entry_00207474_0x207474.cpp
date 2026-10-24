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

// Function: entry_00207474
// Address: 0x207474 - 0x2075c0
void entry_00207474_0x207474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207474_0x207474");
#endif

    switch (ctx->pc) {
        case 0x207480u: goto label_207480;
        case 0x207490u: goto label_207490;
        case 0x2074a4u: goto label_2074a4;
        case 0x207508u: goto label_207508;
        case 0x20753cu: goto label_20753c;
        case 0x207568u: goto label_207568;
        default: break;
    }

    ctx->pc = 0x207474u;

    // 0x207474: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207478: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x207478u;
    SET_GPR_U32(ctx, 31, 0x207480u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x207478u, 0x207480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207480u;
label_207480:
    // 0x207480: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207484: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x207484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x207488: 0xc080f60  jal         func_203D80
    ctx->pc = 0x207488u;
    SET_GPR_U32(ctx, 31, 0x207490u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x207488u, 0x207490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207490u;
label_207490:
    // 0x207490: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x207490u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x207494: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x207494u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207498: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x207498u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x20749c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20749Cu;
    SET_GPR_U32(ctx, 31, 0x2074A4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20749Cu, 0x2074A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2074A4u;
label_2074a4:
    // 0x2074a4: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2074a4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2074a8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2074a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2074ac: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x2074acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2074b0: 0x3c0345bb  lui         $v1, 0x45BB
    ctx->pc = 0x2074b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17851 << 16));
    // 0x2074b4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2074b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2074b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2074b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2074bc: 0x0  nop
    ctx->pc = 0x2074bcu;
    // NOP
    // 0x2074c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2074c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2074c4: 0x0  nop
    ctx->pc = 0x2074c4u;
    // NOP
    // 0x2074c8: 0x45000151  bc1f        . + 4 + (0x151 << 2)
    ctx->pc = 0x2074C8u;
    {
        const bool branch_taken_0x2074c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2074c8) {
            ctx->pc = 0x207A10u;
            return;
        }
    }
    ctx->pc = 0x2074D0u;
    // 0x2074d0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2074d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2074d4: 0xc4810184  lwc1        $f1, 0x184($a0)
    ctx->pc = 0x2074d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2074d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2074d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2074dc: 0x0  nop
    ctx->pc = 0x2074dcu;
    // NOP
    // 0x2074e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2074e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2074e4: 0x0  nop
    ctx->pc = 0x2074e4u;
    // NOP
    // 0x2074e8: 0x45000149  bc1f        . + 4 + (0x149 << 2)
    ctx->pc = 0x2074E8u;
    {
        const bool branch_taken_0x2074e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2074e8) {
            ctx->pc = 0x207A10u;
            return;
        }
    }
    ctx->pc = 0x2074F0u;
    // 0x2074f0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2074f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2074f4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2074f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2074f8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2074f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2074fc: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2074fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x207500: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x207500u;
    SET_GPR_U32(ctx, 31, 0x207508u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x207500u, 0x207508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207508u;
label_207508:
    // 0x207508: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x207508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x20750c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20750cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x207510: 0x0  nop
    ctx->pc = 0x207510u;
    // NOP
    // 0x207514: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x207514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x207518: 0x0  nop
    ctx->pc = 0x207518u;
    // NOP
    // 0x20751c: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x20751Cu;
    {
        const bool branch_taken_0x20751c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20751c) {
            ctx->pc = 0x2075C0u;
            return;
        }
    }
    ctx->pc = 0x207524u;
    // 0x207524: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207528: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20752c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x20752cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x207530: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x207530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x207534: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x207534u;
    SET_GPR_U32(ctx, 31, 0x20753Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x207534u, 0x20753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20753Cu;
label_20753c:
    // 0x20753c: 0x3c03c248  lui         $v1, 0xC248
    ctx->pc = 0x20753cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49736 << 16));
    // 0x207540: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x207540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x207544: 0x0  nop
    ctx->pc = 0x207544u;
    // NOP
    // 0x207548: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x207548u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20754c: 0x0  nop
    ctx->pc = 0x20754cu;
    // NOP
    // 0x207550: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x207550u;
    {
        const bool branch_taken_0x207550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x207550) {
            ctx->pc = 0x2075C0u;
            return;
        }
    }
    ctx->pc = 0x207558u;
    // 0x207558: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20755c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x20755cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x207560: 0xc067588  jal         func_19D620
    ctx->pc = 0x207560u;
    SET_GPR_U32(ctx, 31, 0x207568u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x207560u, 0x207568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207568u;
label_207568:
    // 0x207568: 0x3c034662  lui         $v1, 0x4662
    ctx->pc = 0x207568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18018 << 16));
    // 0x20756c: 0x34649000  ori         $a0, $v1, 0x9000
    ctx->pc = 0x20756cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x207570: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x207570u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x207574: 0x0  nop
    ctx->pc = 0x207574u;
    // NOP
    // 0x207578: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x207578u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20757c: 0x0  nop
    ctx->pc = 0x20757cu;
    // NOP
    // 0x207580: 0x45000123  bc1f        . + 4 + (0x123 << 2)
    ctx->pc = 0x207580u;
    {
        const bool branch_taken_0x207580 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207580) {
            ctx->pc = 0x207A10u;
            return;
        }
    }
    ctx->pc = 0x207588u;
    // 0x207588: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x207588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20758c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x20758cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207590: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x207590u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x207594: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x207594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x207598: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20759c: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x20759cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2075a0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2075a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2075a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2075a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2075a8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2075a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2075ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2075acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2075b0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2075b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2075b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2075b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2075b8: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x2075B8u;
    {
        const bool branch_taken_0x2075b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2075b8) {
            ctx->pc = 0x207A10u;
            return;
        }
    }
    ctx->pc = 0x2075C0u;
}
