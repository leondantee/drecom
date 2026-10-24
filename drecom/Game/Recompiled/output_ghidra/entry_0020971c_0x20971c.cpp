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

// Function: entry_0020971c
// Address: 0x20971c - 0x2097d8
void entry_0020971c_0x20971c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020971c_0x20971c");
#endif

    switch (ctx->pc) {
        case 0x20974cu: goto label_20974c;
        case 0x20977cu: goto label_20977c;
        case 0x2097b8u: goto label_2097b8;
        case 0x2097c8u: goto label_2097c8;
        default: break;
    }

    ctx->pc = 0x20971cu;

    // 0x20971c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20971cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x209720: 0xc4219480  lwc1        $f1, -0x6B80($at)
    ctx->pc = 0x209720u;
    { uint32_t bits = FAST_READ32(0x619480u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209724: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x209724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209728: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x209728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20972c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20972cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x209730: 0xe4209480  swc1        $f0, -0x6B80($at)
    ctx->pc = 0x209730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619480u, _value); } while (0); }
    // 0x209734: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x209734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x209738: 0x24449440  addiu       $a0, $v0, -0x6BC0
    ctx->pc = 0x209738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939712));
    // 0x20973c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20973cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x209740: 0xc42c9480  lwc1        $f12, -0x6B80($at)
    ctx->pc = 0x209740u;
    { uint32_t bits = FAST_READ32(0x619480u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x209744: 0xc067844  jal         func_19E110
    ctx->pc = 0x209744u;
    SET_GPR_U32(ctx, 31, 0x20974Cu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x209744u, 0x20974Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20974Cu;
label_20974c:
    // 0x20974c: 0x3c0245ea  lui         $v0, 0x45EA
    ctx->pc = 0x20974cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17898 << 16));
    // 0x209750: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x209750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x209754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209758: 0x0  nop
    ctx->pc = 0x209758u;
    // NOP
    // 0x20975c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x20975cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x209760: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x209760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x209764: 0x24449420  addiu       $a0, $v0, -0x6BE0
    ctx->pc = 0x209764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939680));
    // 0x209768: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x209768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20976c: 0x24459440  addiu       $a1, $v0, -0x6BC0
    ctx->pc = 0x20976cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939712));
    // 0x209770: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x209770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x209774: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x209774u;
    SET_GPR_U32(ctx, 31, 0x20977Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x20977Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20977Cu) { return; }
    ctx->pc = 0x20977Cu;
label_20977c:
    // 0x20977c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20977cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x209780: 0x24429420  addiu       $v0, $v0, -0x6BE0
    ctx->pc = 0x209780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939680));
    // 0x209784: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x209784u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x619420u));
    // 0x209788: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x209788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x20978c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20978cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x209790: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x209790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x209794: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x209794u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x209798: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x209798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x20979c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x20979cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2097a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2097a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2097a4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x2097a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x2097a8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x2097a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x2097ac: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2097acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x2097b0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2097B0u;
    SET_GPR_U32(ctx, 31, 0x2097B8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2097B0u, 0x2097B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2097B8u;
label_2097b8:
    // 0x2097b8: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x2097b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x2097bc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2097bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x2097c0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2097C0u;
    SET_GPR_U32(ctx, 31, 0x2097C8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2097C0u, 0x2097C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2097C8u;
label_2097c8:
    // 0x2097c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2097c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2097cc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2097ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2097d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2097d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2097d4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2097d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2097d8u;
}
