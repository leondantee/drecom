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

// Function: caseD_2
// Address: 0x209898 - 0x2099a8
void caseD_2_0x209898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x209898");
#endif

    switch (ctx->pc) {
        case 0x209910u: goto label_209910;
        case 0x20995cu: goto label_20995c;
        default: break;
    }

    ctx->pc = 0x209898u;

    // 0x209898: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x209898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20989c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x20989cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2098a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2098a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2098a4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2098a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2098a8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2098a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2098ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2098acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2098b0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2098b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2098b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2098b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2098b8: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x2098b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x2098bc: 0x142000f8  bnez        $at, . + 4 + (0xF8 << 2)
    ctx->pc = 0x2098BCu;
    {
        const bool branch_taken_0x2098bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2098bc) {
            ctx->pc = 0x209CA0u;
            return;
        }
    }
    ctx->pc = 0x2098C4u;
    // 0x2098c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2098c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2098c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2098c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2098cc: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x2098ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x2098d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2098d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2098d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2098d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2098d8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2098d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2098dc: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x2098dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x2098e0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2098e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2098e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2098e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2098e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2098e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2098ec: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x2098ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x2098f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2098f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2098f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2098f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2098f8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2098f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2098fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2098fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x209900: 0x24459440  addiu       $a1, $v0, -0x6BC0
    ctx->pc = 0x209900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939712));
    // 0x209904: 0x24660120  addiu       $a2, $v1, 0x120
    ctx->pc = 0x209904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x209908: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x209908u;
    SET_GPR_U32(ctx, 31, 0x209910u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x209910u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x209910u) { return; }
    ctx->pc = 0x209910u;
label_209910:
    // 0x209910: 0x3c02c53b  lui         $v0, 0xC53B
    ctx->pc = 0x209910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50491 << 16));
    // 0x209914: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x209914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x209918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20991c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20991cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209920: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x209920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x209924: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x209924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x209928: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x209928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x20992c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20992cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209930: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x209930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209934: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x209934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x209938: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20993c: 0xc4219480  lwc1        $f1, -0x6B80($at)
    ctx->pc = 0x20993cu;
    { uint32_t bits = FAST_READ32(0x619480u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209940: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x209940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x209944: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x209944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x209948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20994c: 0x0  nop
    ctx->pc = 0x20994cu;
    // NOP
    // 0x209950: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x209950u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x209954: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x209954u;
    SET_GPR_U32(ctx, 31, 0x20995Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x209954u, 0x20995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20995Cu;
label_20995c:
    // 0x20995c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20995cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209960: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x209960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x209964: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209968: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20996c: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x20996cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x209970: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209974: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209978: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x209978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x20997c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20997cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209980: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209984: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x209984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x209988: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20998c: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x20998cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x209990: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x209990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209994: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x209994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x209998: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x209998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20999c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x20999cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2099a0: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x2099A0u;
    {
        const bool branch_taken_0x2099a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2099a0) {
            ctx->pc = 0x209CA0u;
            return;
        }
    }
    ctx->pc = 0x2099A8u;
}
